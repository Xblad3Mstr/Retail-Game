// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

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

void ARetail1Character::adjustEmployeeLevel(float adjustment)
{
	float difficulty = employeeLevel / 100.0f;
	if (difficulty >= 1.0f)
	{
		difficulty = 0.99f;
	}
	else if (difficulty < 0.1f)
	{
		difficulty = 0.10f;
	}
	employeeLevel += (adjustment - difficulty);
	if (employeeLevel <= 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("FIRED!"));
	}
	else if (employeeLevel >= 100.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Employee of the Month!"))
	}
	else if (employeeLevel >= 90.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Irreplacable!"))
	}
	else if (employeeLevel >= 80.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Golden Employee!"))
	}
	else if (employeeLevel >= 70.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Reliable!"))
	}
	else if (employeeLevel >= 60.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Fantastic!"))
	}
	else if (employeeLevel >= 50.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Doing Great!"))
	}
	else if (employeeLevel >= 40.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Pretty Good!"))
	}
	else if (employeeLevel >= 30.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Fairly Good!"))
	}
	else if (employeeLevel >= 20.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Moving Up!"))
	}
	else if (employeeLevel >= 10.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Unsteady!"))
	}
	else if (employeeLevel > 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Probationary!"))
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("How did you get here??"))
	}
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
