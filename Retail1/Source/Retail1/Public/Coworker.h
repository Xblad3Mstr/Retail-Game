// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coworker.generated.h"

UCLASS()
class RETAIL1_API ACoworker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoworker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coworker")
		bool canBeLooted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coworker")
		float pettyCash;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Get the amount of petty cash this coworker has*/
	UFUNCTION(BlueprintCallable, Category = "Coworker")
		float GetPettyCash();
	
	/** Set the amount of petty cash this coworker has*/
	UFUNCTION(BlueprintCallable, Category = "Coworker")
		void SetPettyCash(float amount);

	/** Get if this coworker can be looted*/
	UFUNCTION(BlueprintCallable, Category = "Coworker")
		bool GetCanLoot();

	/** Set the amount of petty cash this coworker has*/
	UFUNCTION(BlueprintCallable, Category = "Coworker")
		void SetCanLoot(bool value);
};
