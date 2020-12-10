// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Retail1Character.h"
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

	timerStarted = false;
	timerPaused = false;
	progress = 0.0f;
	timeToComplete = 1920.0f; // 32 minutes in seconds      240.0f; // 1 minute for testing
}

// Called when the game starts or when spawned
void ARetail1GameMode::BeginPlay()
{
	Super::BeginPlay();

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

void ARetail1GameMode::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		// Sets + Starts the timer (the timer handle, the object running it, the method to call every update, how often to update (seconds), if you want it to call every update (more than once), delay on start (seconds))
		GetWorldTimerManager().SetTimer(timer, this, &ARetail1GameMode::UpdateProgress, 1.0f, true, 0.5f);
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
	
	//Destroy();
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


