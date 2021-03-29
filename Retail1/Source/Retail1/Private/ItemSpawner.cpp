// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSpawner.h"
#include "Components/BoxComponent.h"
#include "../Retail1Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AItemSpawner::AItemSpawner()
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
void AItemSpawner::BeginPlay()
{
	Super::BeginPlay();
	timeToComplete = FMath::RandRange(1.0f, 5.0f);

}

void AItemSpawner::UpdateProgress()
{
	progress += 0.1;

	if (progress >= timeToComplete)
	{
		GetWorldTimerManager().ClearTimer(timer);
		FinishItem();
	}
}

// Called every frame
void AItemSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemSpawner::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		UE_LOG(LogTemp, Log, TEXT("ItemSPAWNER"));
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &AItemSpawner::SpawnItem, SpawnDelay, false);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void AItemSpawner::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		GetWorldTimerManager().SetTimer(timer, this, &AItemSpawner::UpdateProgress, 0.1f, true, 0.5f);
		UE_LOG(LogTemp, Log, TEXT("Item::StartTimer"));
	}
}

void AItemSpawner::PauseTimer()
{
	if (timerStarted)
	{
		timerPaused = true;
		GetWorldTimerManager().PauseTimer(timer);
		UE_LOG(LogTemp, Log, TEXT("Item::PauseTimer"));
	}
}

void AItemSpawner::ResumeTimer()
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

void AItemSpawner::ResetTimer()
{
	if (timerStarted)
	{
		timerStarted = false;
		GetWorldTimerManager().ClearTimer(timer);
	}
}

void AItemSpawner::FinishItem()
{
	UE_LOG(LogTemp, Log, TEXT("Item::FinishItem"));
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (player)
	{
		player->adjustDailyPoints(timeToComplete / 10.0f);
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &AItemSpawner::SpawnItem, SpawnDelay, false);
	}

	for (AActor* Actor : ItemInSpawner)
	{
		Actor->SetActorHiddenInGame(false);
	}
	progress = 0.0f;
	canInteract = false;
	lastHidden = 0;
	timerStarted = false;
}

void AItemSpawner::SpawnItem()
{
	if (lastHidden < ItemInSpawner.Num())
	{
		ItemInSpawner[lastHidden]->SetActorHiddenInGame(true);
		++lastHidden;
		if (lastHidden < ItemInSpawner.Num())
		{
			SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &AItemSpawner::SpawnItem, SpawnDelay, false);
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

int AItemSpawner::GetItem()
{
	UE_LOG(LogTemp, Log, TEXT("ITEMSPAWNER::GetItem"));
	return item;
}