// Fill out your copyright notice in the Description page of Project Settings.


#include "Customer.h"
#include "Kismet/GameplayStatics.h"
#include "../Retail1Character.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ACustomer::ACustomer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	correctItem = 0;
	timerStarted = false;
	timerPaused = false;
	progress = 0.0f;
}

// Called when the game starts or when spawned
void ACustomer::BeginPlay()
{
	Super::BeginPlay();
	item = FMath::RandRange(0, 63);
	timeToComplete = FMath::RandRange(30.0f, 60.0f);
	UE_LOG(LogTemp, Log, TEXT("ITEM %d"), item);
}

// Called every frame
void ACustomer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACustomer::StartTimer()
{
	if (!timerStarted)
	{
		progress = 0.0f;
		timerStarted = true;
		GetWorldTimerManager().SetTimer(timer, this, &ACustomer::UpdateProgress, 0.1f, true, 0.5f);
		UE_LOG(LogTemp, Log, TEXT("Customer::StartTimer"));
	}
}

void ACustomer::PauseTimer()
{
	if (timerStarted)
	{
		timerPaused = true;
		GetWorldTimerManager().PauseTimer(timer);
		UE_LOG(LogTemp, Log, TEXT("Customer::PauseTimer"));
	}
}

void ACustomer::ResumeTimer()
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

void ACustomer::FailCustomer()
{
	UE_LOG(LogTemp, Log, TEXT("Customer::FailCustomer"));
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	GetWorldTimerManager().ClearTimer(timer);
	if (player)
	{
		player->adjustDailyPoints(-1.0f);
	}
	Destroy();
}

void ACustomer::FinishCustomer()
{
	UE_LOG(LogTemp, Log, TEXT("Customer::FinishCustomer"));
	GetWorldTimerManager().ClearTimer(timer);
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	correctItem = 1;
	if (player)
	{
		player->adjustDailyPoints((timeToComplete - progress) / 10.0f);
	}
	//Destroy();
	SetLifeSpan(5.0f);
}

void ACustomer::FinishWrongCustomer()
{
	UE_LOG(LogTemp, Log, TEXT("Customer::FinishWrongCustomer"));
	GetWorldTimerManager().ClearTimer(timer);
	ARetail1Character* player = Cast<ARetail1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
	correctItem = -1;
	if (player)
	{
		player->adjustDailyPoints((timeToComplete - progress) / 2.0f);
	}
	//Destroy();
	SetLifeSpan(5.0f);
}

int ACustomer::GetItem()
{
	return item;
}

void ACustomer::UpdateProgress()
{
	progress += 0.1;

	if (progress >= timeToComplete)
	{
		FinishCustomer();
	}

}
