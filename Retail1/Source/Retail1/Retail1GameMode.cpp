// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Retail1Character.h"
#include "SpillSpawner.h"
#include "ProduceSpawner.h"
#include "ItemSpawner.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"

ARetail1GameMode::ARetail1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;

	timerStarted = false;
	timerPaused = false;
	progress = 0.0f;
	timeToComplete = 1920.0f; // 32 minutes in seconds      240.0f; // 1 minute for testing
}

// Called when the game starts or when spawned
void ARetail1GameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> spillSpawnActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpillSpawner::StaticClass(), spillSpawnActors);

	for (auto Actor : spillSpawnActors)
	{
		ASpillSpawner* sSpawner = Cast<ASpillSpawner>(Actor);
		if (sSpawner)
		{
			SpillSpawnerActors.AddUnique(sSpawner);
		}
	}

	TArray<AActor*> produceSpawnActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AProduceSpawner::StaticClass(), produceSpawnActors);

	for (auto Actor : produceSpawnActors)
	{
		AProduceSpawner* pSpawner = Cast<AProduceSpawner>(Actor);
		if (pSpawner)
		{
			ProduceSpawnerActors.AddUnique(pSpawner);
		}
	}

	TArray<AActor*> itemSpawnActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItemSpawner::StaticClass(), itemSpawnActors);

	for (auto Actor : itemSpawnActors)
	{
		AItemSpawner* iSpawner = Cast<AItemSpawner>(Actor);
		if (iSpawner)
		{
			ItemSpawnerActors.AddUnique(iSpawner);
		}
	}

	SetCurrentState(EStateOfPlay::EPlaying);

	// Set Material UI to viewport
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
	StartTimer();
}

void ARetail1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// check that we are using retail character
	ARetail1Character* MyCharacter = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		// TODO: set state here
	}
}

void ARetail1GameMode::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		// Sets + Starts the timer (the timer handle, the object running it, the method to call every update, how often to update (seconds), if you want it to call every update (more than once), delay on start (seconds))
		GetWorldTimerManager().SetTimer(timer, this, &ARetail1GameMode::UpdateProgress, 0.5f, true, 0.5f);
		UE_LOG(LogTemp, Log, TEXT("GAMEMODE::StartTimer"));
	}
}

void ARetail1GameMode::PauseTimer()
{
	if (timerStarted)
	{
		timerPaused = true;
		GetWorldTimerManager().PauseTimer(timer);
		UE_LOG(LogTemp, Log, TEXT("GAMEMODE::PauseTimer"));
	}
}

void ARetail1GameMode::ResumeTimer()
{
	if (timerStarted && timerPaused)
	{
		timerPaused = false;
		GetWorldTimerManager().UnPauseTimer(timer);
	}
	else
	{
		StartTimer();
	}
}

void ARetail1GameMode::ResetTimer()
{
	if (timerStarted)
	{
		timerStarted = false;
		GetWorldTimerManager().ClearTimer(timer);
	}
}

void ARetail1GameMode::FinishDay()
{
	UE_LOG(LogTemp, Log, TEXT("GAMEMODE::FinishDay"));

}

void ARetail1GameMode::UpdateProgress()
{
	progress += 1.0;

	if (progress >= timeToComplete)
	{
		GetWorldTimerManager().ClearTimer(timer);
		FinishDay();
	}

}

float ARetail1GameMode::GetProgress()
{
	return progress;
}

EStateOfPlay ARetail1GameMode::GetCurrentState() const
{
	return currentState;
}

void ARetail1GameMode::SetCurrentState(EStateOfPlay newState)
{
	currentState = newState;
	HandleNewState(currentState);
}

void ARetail1GameMode::HandleNewState(EStateOfPlay newState)
{
	// TODO: PAUSE/Play Timers of Customers/Cleanups
	switch (newState)
	{
	case EStateOfPlay::EPlaying:
	{
		for (ASpillSpawner* volume : SpillSpawnerActors)
		{
			volume->SetSpawningActive(true);
		}

		for (AProduceSpawner* volume : ProduceSpawnerActors)
		{
			volume->SetSpawningActive(true);
		}

		for (AItemSpawner* volume : ItemSpawnerActors)
		{
			volume->SetSpawningActive(true);
		}
	}
	break;
	case EStateOfPlay::EPaused:
	{
		for (ASpillSpawner* volume : SpillSpawnerActors)
		{
			volume->SetSpawningActive(false);
		}

		for (AProduceSpawner* volume : ProduceSpawnerActors)
		{
			volume->SetSpawningActive(false);
		}

		for (AItemSpawner* volume : ItemSpawnerActors)
		{
			volume->SetSpawningActive(false);
		}
	}
	break;
	case EStateOfPlay::EEndOfDay:
	{
		for (ASpillSpawner* volume : SpillSpawnerActors)
		{
			volume->SetSpawningActive(false);
		}
		for (AProduceSpawner* volume : ProduceSpawnerActors)
		{
			volume->SetSpawningActive(false);
		}
	}
	break;
	default:
	case EStateOfPlay::EUnknown:
	{
		UE_LOG(LogClass, Log, TEXT("Play State Unknown"));
	}
	break;
	}
}