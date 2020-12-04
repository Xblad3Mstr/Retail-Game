// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Retail1Character.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"

ARetail1GameMode::ARetail1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

// Called when the game starts or when spawned
void ARetail1GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Set Material UI to viewport
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}


