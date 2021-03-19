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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns the whereToSpawn subobject*/
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; };

	/** Toggle spawning on and off*/
	UFUNCTION(BlueprintCallable, Category = "Spawning")
		void SetSpawningActive(bool bShouldSpawn);

protected:
	/** The Produce to spawn*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		AActor WhatToSpawn;

	/** All the Produce in the spawner*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TArray<AActor> produceInSpawner;

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

};
