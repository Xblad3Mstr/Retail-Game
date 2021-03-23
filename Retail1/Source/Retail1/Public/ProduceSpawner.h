// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProduceSpawner.generated.h"

UCLASS()
class RETAIL1_API AProduceSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProduceSpawner();

protected:
	/** THe timer handle for Produce time*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Produce")
		FTimerHandle timer;

	/** How long this Produce will take*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Produce")
		float timeToComplete;

	/** How much progress (%) player has made on this Produce*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Produce")
		float progress;

	/** If this timer has been activated*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Produce")
		bool timerStarted;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Produce")
		bool timerPaused;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Updates the progress bar based on timer*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
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

	/** Starts the Produce timer*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
		void StartTimer();

	/** Pauses the Produce timer*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
		void PauseTimer();

	/** Resumes (if paused) the Produce timer*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
		void ResumeTimer();

	/** Resets the Produce timer*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
		void ResetTimer();

	/** Player has completed Produce*/
	UFUNCTION(BlueprintCallable, Category = "Produce")
		void FinishProduce();

protected:
	/** All the Produce in the spawner*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TArray<AActor*> produceInSpawner;

	/** Timer for when Produce should spawn*/
	FTimerHandle SpawnTimer;

	/** Minimum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeLow;

	/** Maximum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeHigh;

private:
	/** Box component to specify where Produces should be spawned*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* WhereToSpawn;

	/** Handle spawning a new Produce*/
	void SpawnProduce();

	/** The current spawn delay*/
	float SpawnDelay;

	/** Which produce was hidden last*/
	int lastHidden;

};
