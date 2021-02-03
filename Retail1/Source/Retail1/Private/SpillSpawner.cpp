// Fill out your copyright notice in the Description page of Project Settings.


#include "SpillSpawner.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cleanup.h"

// Sets default values
ASpillSpawner::ASpillSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the box component to represent spawn volume
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	// Set spawn Delay range
	SpawnDelayRangeLow = 60.0f;
	SpawnDelayRangeHigh = 300.0f;

}

// Called when the game starts or when spawned
void ASpillSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpillSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ASpillSpawner::GetRandomPointInVolume()
{
	FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
}

void ASpillSpawner::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpillSpawner::SpawnCleanup, SpawnDelay, false);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void ASpillSpawner::SpawnCleanup()
{
	if (WhatToSpawn != NULL)
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			FVector SpawnLocation = GetRandomPointInVolume();

			FRotator SpawnRotation;
			SpawnRotation.Yaw = 0.0f;
			SpawnRotation.Pitch = 0.0f;
			SpawnRotation.Roll = 0.0f;

			ACleanup* const SpawnedCleanup = World->SpawnActor<ACleanup>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParams);

			SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpillSpawner::SpawnCleanup, SpawnDelay, false);
		}
	}
}

