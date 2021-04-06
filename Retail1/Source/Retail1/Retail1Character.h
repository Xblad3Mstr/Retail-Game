// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Cleanup.h"
#include "Customer.h"
#include "ProduceSpawner.h"
#include "ItemSpawner.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Retail1Character.generated.h"

UCLASS(config=Game)
class ARetail1Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ARetail1Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** If this timer is currently paused*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cleanup")
		bool isMopping;

protected:

	/** Current Employment Status*/
	UPROPERTY(BlueprintReadOnly, Category = "Employee")
	float employeeLevel;

	/** Current Points for the day*/
	UPROPERTY(BlueprintReadOnly, Category = "Employee")
	float dailyPoints;

	/** Item player is holding if any*/
	UPROPERTY(BlueprintReadWrite, Category = "Customer")
	int item;

	/** Timer for current task*/
	UPROPERTY(BlueprintReadOnly, Category = "Actions")
	FTimerHandle task1Timer;

	/** Timer for current shift*/
	UPROPERTY(BlueprintReadOnly, Category = "Gameplay")
	FTimerHandle shiftTimer;

	/** If the player is interacting with something they can't move*/
	UPROPERTY(BlueprintReadWrite, Category = "Actions")
	bool canMove;

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	
	/** Current Cleanup*/
	UPROPERTY(BlueprintReadWrite, Category = "Cleanup")
	ACleanup* currentCleanup;

	/** Current Customer*/
	UPROPERTY(BlueprintReadWrite, Category = "Customer")
	ACustomer* currentCustomer;

	/** Current ProduceSpawner*/
	UPROPERTY(BlueprintReadWrite, Category = "Produce")
		AProduceSpawner* currentProduce;

	/** Current ProduceSpawner*/
	UPROPERTY(BlueprintReadWrite, Category = "Items")
		AItemSpawner* currentItem;

	/** Sphere Component for Interaction Collision*/
	UPROPERTY(BlueprintReadWrite, Category = "Cleanup")
	class USphereComponent* collectionSphere;

	/** Starts Interaction w/ Character or Cleanup*/
	UFUNCTION(BlueprintCallable, Category = "Employee")
	void Interact();

	/** Stops Interaction w/ Character or Cleanup*/
	UFUNCTION(BlueprintCallable, Category = "Employee")
	void StopInteract();


	/** Stops Interaction w/ Character or Cleanup*/
	UFUNCTION(BlueprintCallable, Category = "Customer")
		int GetCurrentItem();
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Adjusts the Employee Level of the player by adjustment
	@param adjustment - a float to adjust the employeeLevel (before adjusting for difficulty)*/
	UFUNCTION(BlueprintCallable, Category = "Employee")
	void adjustEmployeeLevel(float adjustment);

	/** Adjusts the number of points for the player for current day by adjustment
	@param adjustment - a float to adjust the daily points*/
	UFUNCTION(BlueprintCallable, Category = "Employee")
	void adjustDailyPoints(float adjustment);

	/** Reset Cleanup Vars*/
	UFUNCTION(BlueprintCallable, Category = "Employee")
		void resetCleanup();
};

