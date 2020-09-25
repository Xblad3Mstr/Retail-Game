// Copyright Epic Games, Inc. All Rights Reserved.

#include "Retail1GameMode.h"
#include "Retail1Character.h"
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
