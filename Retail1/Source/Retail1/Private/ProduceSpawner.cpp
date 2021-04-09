// Fill out your copyright notice in the Description page of Project Settings.


#include "ProduceSpawner.h"
#include "Components/BoxComponent.h"
#include "../Retail1Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AProduceSpawner::AProduceSpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the box component to represent spawn volume
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	// Set spawn Delay range
	SpawnDelayRangeLow = 30.0f;
	SpawnDelayRangeHigh = 120.0f;

	timerStarted = false;
	timerPaused = false;
	progress = 0.0f;
	lastHidden = 0;
	canInteract = false;
}

// Called when the game starts or when spawned
void AProduceSpawner::BeginPlay()
{
	Super::BeginPlay();
	timeToComplete = FMath::RandRange(1.0f, 5.0f);
	
}

void AProduceSpawner::UpdateProgress()
{
	progress += 0.1;

	if (progress >= timeToComplete)
	{
		GetWorldTimerManager().ClearTimer(timer);
		progress = 0.0f;
		FinishProduce();
	}
}

// Called every frame
void AProduceSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProduceSpawner::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &AProduceSpawner::SpawnProduce, SpawnDelay, false);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void AProduceSpawner::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		GetWorldTimerManager().SetTimer(timer, this, &AProduceSpawner::UpdateProgress, 0.1f, true, 0.5f);
		UE_LOG(LogTemp, Log, TEXT("PRODUCE::StartTimer"));
	}
}

void AProduceSpawner::PauseTimer()
{
	if (timerStarted)
	{
		timerPaused = true;
		GetWorldTimerManager().PauseTimer(timer);
		UE_LOG(LogTemp, Log, TEXT("PRODUCE::PauseTimer"));
	}
}

void AProduceSpawner::ResumeTimer()
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

void AProduceSpawner::ResetTimer()
{
	if (timerStarted)
	{
		timerStarted = false;
		GetWorldTimerManager().ClearTimer(timer);
	}
}

void AProduceSpawner::FinishProduce()
{
	UE_LOG(LogTemp, Log, TEXT("Produce::Finish"));
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (player)
	{
		player->adjustDailyPoints(timeToComplete / 10.0f);
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &AProduceSpawner::SpawnProduce, SpawnDelay, false);
	}

	for (AActor* Actor : produceInSpawner)
	{
		Actor->SetActorHiddenInGame(false);
	}
	progress = 0.0f;
	canInteract = false;
	lastHidden = 0;
	timerStarted = false;
}

void AProduceSpawner::SpawnProduce()
{
	if (lastHidden < produceInSpawner.Num())
	{
		produceInSpawner[lastHidden]->SetActorHiddenInGame(true);
		++lastHidden;
		if (lastHidden < produceInSpawner.Num())
		{
			SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &AProduceSpawner::SpawnProduce, SpawnDelay, false);
		}
		else
		{
			canInteract = true;
		}
	}
	else
	{
		canInteract = true;
	}
}

int AProduceSpawner::GetItem()
{
	UE_LOG(LogTemp, Log, TEXT("PRODUCESPAWNER::GetItem"));
	return item;
}