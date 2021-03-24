// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemSpawner.generated.h"

UCLASS()
class RETAIL1_API AItemSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemSpawner();

protected:
	/** THe timer handle for Item time*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FTimerHandle timer;

	/** How long this Item will take*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		float timeToComplete;

	/** How much progress (%) player has made on this Item*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		float progress;

	/** If this timer has been activated*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		bool timerStarted;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		bool timerPaused;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Updates the progress bar based on timer*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void UpdateProgress();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns the whereToSpawn subobject*/
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; };

	/** Toggle spawning on and off*/
	UFUNCTION(BlueprintCallable, Category = "Spawning")
		void SetSpawningActive(bool bShouldSpawn);

	/** If the user can now interact with this spawner*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
		bool canInteract;

	/** Starts the Item timer*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void StartTimer();

	/** Pauses the Item timer*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void PauseTimer();

	/** Resumes (if paused) the Item timer*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void ResumeTimer();

	/** Resets the Item timer*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void ResetTimer();

	/** Player has completed Item*/
	UFUNCTION(BlueprintCallable, Category = "Item")
		void FinishItem();

protected:
	/** All the Item in the spawner*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TArray<AActor*> ItemInSpawner;

	/** Timer for when Item should spawn*/
	FTimerHandle SpawnTimer;

	/** Minimum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeLow;

	/** Maximum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeHigh;

private:
	/** Box component to specify where Items should be spawned*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* WhereToSpawn;

	/** Handle spawning a new Item*/
	void SpawnItem();

	/** The current spawn delay*/
	float SpawnDelay;

	/** Which Item was hidden last*/
	int lastHidden;

};
