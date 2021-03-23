// Fill out your copyright notice in the Description page of Project Settings.


#include "Coworker.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACoworker::ACoworker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	canBeLooted = true;
}

// Called when the game starts or when spawned
void ACoworker::BeginPlay()
{
	Super::BeginPlay();
	pettyCash = FMath::FRandRange(1.0f, 5.0f);
}

// Called every frame
void ACoworker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ACoworker::GetPettyCash()
{
	return pettyCash;
}

void ACoworker::SetPettyCash(float amount)
{
	if (amount > 1.0f && amount < 5.0f && canBeLooted)
	{
		pettyCash = amount;
	}
}

bool ACoworker::GetCanLoot()
{
	return canBeLooted;
}

void ACoworker::SetCanLoot(bool value)
{
	canBeLooted = value;
}

