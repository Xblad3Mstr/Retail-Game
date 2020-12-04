// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "Cleanup.generated.h"

UCLASS()
class RETAIL1_API ACleanup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACleanup();

protected:

	/** THe timer handle for cleanup time*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
	FTimerHandle timer;

	/** How long this cleanup will take*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
	float timeToComplete;

	/** How much progress (%) player has made on this cleanup*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
	float progress;

	/** If this timer has been activated*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
	bool timerStarted;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
	bool timerPaused;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Updates the progress bar based on timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void UpdateProgress();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Starts the cleanup timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void StartTimer();

	/** Pauses the cleanup timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void PauseTimer();

	/** Resumes (if paused) the cleanup timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void ResumeTimer();

	/** Resets the cleanup timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void ResetTimer();

	/** Player ahs completed cleanup*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void FinishCleanup();

};
