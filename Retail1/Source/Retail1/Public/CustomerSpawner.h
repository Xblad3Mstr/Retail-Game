// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomerSpawner.generated.h"

UCLASS()
class RETAIL1_API ACustomerSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACustomerSpawner();

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
	/** The Customer to spawn*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class ACustomer> WhatToSpawn;

	/** Timer for when Customer should spawn*/
	FTimerHandle SpawnTimer;

	/** Minimum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeLow;

	/** Maximum Spawn Delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeHigh;

private:
	/** Box component to specify where Customers should be spawned*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* WhereToSpawn;

	/** Handle spawning a new Customer*/
	void SpawnCustomer();

	/** The current spawn delay*/
	float SpawnDelay;

};
