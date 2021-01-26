// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpillSpawner.generated.h"

UCLASS()
class RETAIL1_API ASpillSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpillSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns the whereToSpawn subobject*/
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; };

	/** Find a random point within the BoxComponent*/
	UFUNCTION(BlueprintPure, Category = "Spawning")
		FVector GetRandomPointInVolume();

	/** Toggle spawning on and off*/
	UFUNCTION(BlueprintCallable, Category = "Spawning")
		void SetSpawningActive(bool bShouldSpawn);

protected:
	/** The Cleanup to spawn*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class ACleanup> WhatToSpawn;

	/** Timer for when Cleanup should spawn*/
	FTimerHandle SpawnTimer;

	/** Minimum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeLow;

	/** Maximum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeHigh;

private:
	/** Box component to specify where Cleanups should be spawned*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* WhereToSpawn;

	/** Handle spawning a new Cleanup*/
	void SpawnCleanup();

	/** The current spawn delay*/
	float SpawnDelay;

};
