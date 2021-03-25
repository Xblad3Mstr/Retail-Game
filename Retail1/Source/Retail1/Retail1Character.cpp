// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1Character.h"
#include "Cleanup.h"
#include "Customer.h"
#include "ProduceSpawner.h"
#include "ItemSpawner.h"
#include "Components/SphereComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"



// TODO: ADD INTERACTION FOR CHARACTERS ::::: DAILY POINTS
//////////////////////////////////////////////////////////////////////////
// ARetail1Character

ARetail1Character::ARetail1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	employeeLevel = 10.0f;
	dailyPoints = 0.0f;
	item = -1;

	// Create CollectionSphere
	collectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	collectionSphere->SetupAttachment(RootComponent);
	collectionSphere->SetSphereRadius(200.0f);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ARetail1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ARetail1Character::Interact);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &ARetail1Character::StopInteract);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARetail1Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARetail1Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ARetail1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ARetail1Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ARetail1Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ARetail1Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ARetail1Character::OnResetVR);
}

void ARetail1Character::Interact()
{
	TArray<AActor*> CollectedActors;
	collectionSphere->GetOverlappingActors(CollectedActors);

	int32 iCollected = 0;
	bool foundInteraction = false;
	while ( iCollected < CollectedActors.Num() && !foundInteraction)
	{
		ACleanup* const cleanup = Cast<ACleanup>(CollectedActors[iCollected]);
		ACustomer* const customer = Cast<ACustomer>(CollectedActors[iCollected]);
		AProduceSpawner* const prodSpawn = Cast<AProduceSpawner>(CollectedActors[iCollected]);
		AItemSpawner* const itemSpawn = Cast<AItemSpawner>(CollectedActors[iCollected]);

		if (cleanup && !cleanup->IsPendingKill())
		{
			UE_LOG(LogTemp, Log, TEXT("\t\t\t:::CHARACTER :::    Found Cleanup"));
			foundInteraction = true;
			if (currentCleanup != NULL)
			{
				if (currentCleanup == cleanup)
				{
					currentCleanup->ResumeTimer();
				}
				else
				{
					currentCleanup->ResetTimer();
					currentCleanup = cleanup;
					currentCleanup->StartTimer();
				}
			}
			else
			{
				currentCleanup = cleanup;
				currentCleanup->StartTimer();
			}
		}
		else if (customer && !customer->IsPendingKill())
		{
			UE_LOG(LogTemp, Log, TEXT("\t\t\t:::CHARACTER :::    Found Customer"));
			if (currentCustomer != NULL)
			{
				if (currentCustomer == customer)
				{
					if (item != -1)
					{
						if (item == customer->GetItem())
						{
							customer->FinishCustomer();
						}
						else
						{
							customer->FinishWrongCustomer();
						}
						item = -1;
					}
				}
				else
				{
					currentCustomer->FailCustomer();
					currentCustomer = customer;
					item = customer->GetItem();
					currentCustomer->StartTimer();
				}
			}
			else
			{
				currentCustomer = customer;
				item = customer->GetItem();
				currentCustomer->StartTimer();
			}
		}
		else if (prodSpawn)
		{
			if (prodSpawn->canInteract)
			{
				UE_LOG(LogTemp, Log, TEXT("\t\t\t:::CHARACTER :::    Found Produce"));
				foundInteraction = true;
				if (currentProduce != NULL)
				{
					if (currentProduce == prodSpawn)
					{
						currentProduce-> ResumeTimer();
					}
					else
					{
						currentProduce->ResetTimer();
						currentProduce = prodSpawn;
						currentProduce->StartTimer();
					}
				}
				else
				{
					currentProduce = prodSpawn;
					currentProduce->StartTimer();
				}
			}
		}
		else if (itemSpawn)
		{
			if (itemSpawn->canInteract)
			{
				UE_LOG(LogTemp, Log, TEXT("\t\t\t:::CHARACTER :::    Found Item Spawner"));
				foundInteraction = true;
				if (currentItem != NULL)
				{
					if (currentItem == itemSpawn)
					{
						currentItem->ResumeTimer();
					}
					else
					{
						currentItem->ResetTimer();
						currentItem = itemSpawn;
						currentItem->StartTimer();
					}
				}
				else
				{
					currentItem = itemSpawn;
					currentItem->StartTimer();
				}
			}
		}

		iCollected++;
	}
}

void ARetail1Character::StopInteract()
{
	if (currentCleanup != NULL)
	{
		if (!currentCleanup->IsPendingKill())
		{
			currentCleanup->PauseTimer();
		}
	}

	if (currentProduce != NULL)
	{
		if (!currentProduce->IsPendingKill())
		{
			currentProduce->PauseTimer();
		}
	}

	if (currentItem != NULL)
	{
		if (!currentItem->IsPendingKill())
		{
			currentItem->PauseTimer();
		}
	}
}

void ARetail1Character::adjustEmployeeLevel(float adjustment)
{
	// if you're a higher level, it's harder to get points.

	// int to level off employeeLevel so if you're at 92.1 diff = 9; 89.2 diff = 8
	int diff = employeeLevel / 10;
	// make diff a percentage to take off of adjustment
	float difficulty = diff / 10.0f;
	if (difficulty >= 1.0f) // if your employee status is more than 100.0
	{
		difficulty = 0.90f;
	}
	else if (difficulty < 0.1f) // if your employee status is less than 10.0
	{
		difficulty = 0.10f;
	}

	// summation of adjustment * difficulty
	float sum = adjustment;
	if (adjustment < 0) // easier to lose points when higher vice versa ( level 92.1 with difficulty .9, has .1 difficulty on negative)
	{
		difficulty = 1 - difficulty;
		sum *= difficulty;
	}
	else
	{
		sum *= difficulty;
	}
	
	// if level 92.1 adjustment is 3 sum = 2.7 so adjust level by .3. or if adjustment is -2, sum = -.2 so adjust level by -1.8.
	employeeLevel += adjustment - sum;

	// if employee level is zero or less player loses
	if (employeeLevel <= 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("FIRED!"));
	}
	else if (employeeLevel >= 100.0f)// we could end here or have them play forever( they don't get additional points anymore, they can still lose points tho)
	{
		UE_LOG(LogTemp, Log, TEXT("Employee of the Month!"));
	}
	else if (employeeLevel >= 90.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Irreplacable!"));
	}
	else if (employeeLevel >= 80.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Golden Employee!"));
	}
	else if (employeeLevel >= 70.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Reliable!"));
	}
	else if (employeeLevel >= 60.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Fantastic!"));
	}
	else if (employeeLevel >= 50.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Doing Great!"));
	}
	else if (employeeLevel >= 40.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Pretty Good!"));
	}
	else if (employeeLevel >= 30.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Fairly Good!"));
	}
	else if (employeeLevel >= 20.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Moving Up!"));
	}
	else if (employeeLevel >= 10.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Unsteady!"));
	}
	else if (employeeLevel > 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Probationary!"));
	}
	else // shouldn't be able to get here less than or equal to 0.0 is the first if, and greater than or equal to 100.0 is the second.
	{
		UE_LOG(LogTemp, Log, TEXT("How did you get here??"));
	}
}

void ARetail1Character::adjustDailyPoints(float adjustment)
{
	dailyPoints += adjustment;
}

void ARetail1Character::resetCleanup()
{
	currentCleanup = NULL;
}


void ARetail1Character::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ARetail1Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ARetail1Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ARetail1Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ARetail1Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ARetail1Character::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ARetail1Character::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
