// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpillSpawner.h"
#include "ProduceSpawner.h"
#include "Retail1GameMode.generated.h"

// ENUM to store current state of gameplay
UENUM(BlueprintType)
enum class EStateOfPlay :uint8
{
	EPlaying,
	EPaused,
	EEndOfDay,
	EUnknown
};

UCLASS(minimalapi)
class ARetail1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARetail1GameMode();

protected:
	/** THe timer handle for daily shift*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Daily")
		FTimerHandle timer;

	/** How long the shift is*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Daily")
		float timeToComplete;

	/** How much of the day has passed*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Daily")
		float progress;

	/** If this timer has been activated*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Daily")
		bool timerStarted;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Daily")
		bool timerPaused;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Updates the progress bar based on timer*/
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
		void UpdateProgress();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns current state of play*/
	UFUNCTION(BlueprintPure, Category = "State")
		EStateOfPlay GetCurrentState() const;

	/** Updates the current state of play*/
	void SetCurrentState(EStateOfPlay newState);

protected:
	/** Widget class to use for HUD screen*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widget", meta = (BlueprintProtected = true))
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	/** The instance of the HUD Widget class*/
	UPROPERTY(BlueprintReadOnly, Category = "Widget")
		class UUserWidget* CurrentWidget;

public:
	/** Starts the day timer*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		void StartTimer();

	/** Pauses the day timer*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		void PauseTimer();

	/** Resumes (if paused) the day timer*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		void ResumeTimer();

	/** Resets the day timer*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		void ResetTimer();

	/** Day has ended*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		void FinishDay();

	/** Return the current time of day*/
	UFUNCTION(BlueprintCallable, Category = "Daily")
		float GetProgress();

private:
	/** Keeps track of the current playing state*/
	EStateOfPlay currentState;

	TArray<class ASpillSpawner*> SpillSpawnerActors;

	TArray<class AProduceSpawner*> ProduceSpawnerActors;

	/** Handles any function call that rely upon changing the game state*/
	void HandleNewState(EStateOfPlay newState);
};



