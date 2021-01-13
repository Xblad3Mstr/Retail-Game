// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Customer.generated.h"

UCLASS()
class RETAIL1_API ACustomer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomer();

protected:
	/** THe timer handle for Customer time*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		FTimerHandle timer;

	/** How long this Customer will take*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		float timeToComplete;

	/** How much time has passed on this Customer*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		float progress;

	/** What item this Customer wants */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		int item;

	/** If this timer has been activated*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		bool timerStarted;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		bool timerPaused;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Updates the progress bar based on timer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void UpdateProgress();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Starts the Customer timer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void StartTimer();

	/** Pauses the Customer timer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void PauseTimer();

	/** Resumes (if paused) the Customer timer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void ResumeTimer();

	/** Player has completed Customer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void FinishCustomer();

	/** Player has completed Customer with wrong Item*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void FinishWrongCustomer();

	/** Player has failed Customer*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		void FailCustomer();

	/** Return the item this customer wants*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		int GetItem();
};
