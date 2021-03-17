// Fill out your copyright notice in the Description page of Project Settings.


#include "Cleanup.h"
#include "Kismet/GameplayStatics.h"
#include "../Retail1Character.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ACleanup::ACleanup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	timerStarted = false;
	timerPaused = false;
	progress = 0.0f;
	UE_LOG(LogTemp, Log, TEXT("TIME TO COMPLETE %d"), timeToComplete);
}

// Called when the game starts or when spawned
void ACleanup::BeginPlay()
{
	Super::BeginPlay();
	timeToComplete = FMath::RandRange(1.0f, 5.0f);
}

// Called every frame
void ACleanup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACleanup::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		GetWorldTimerManager().SetTimer(timer, this, &ACleanup::UpdateProgress, 0.1f, true, 0.5f);
		UE_LOG(LogTemp, Log, TEXT("CLEANUP::StartTimer"));
	}
}

void ACleanup::PauseTimer()
{
	if (timerStarted)
	{
		timerPaused = true;
		GetWorldTimerManager().PauseTimer(timer);
		UE_LOG(LogTemp, Log, TEXT("CLEANUP::PauseTimer"));
	}
}

void ACleanup::ResumeTimer()
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

void ACleanup::ResetTimer()
{
	if (timerStarted)
	{
		timerStarted = false;
		GetWorldTimerManager().ClearTimer(timer);
	}
}

void ACleanup::FinishCleanup()
{
	UE_LOG(LogTemp, Log, TEXT("CLEANUP::FinishCleanup"));
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (player)
	{
		player->adjustDailyPoints(timeToComplete);
	}
	Destroy();
}

void ACleanup::UpdateProgress()
{
	progress += 0.1;

	if (progress >= timeToComplete)
	{
		GetWorldTimerManager().ClearTimer(timer);
		FinishCleanup();
	}

}