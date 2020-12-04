// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Retail1GameMode.generated.h"

UCLASS(minimalapi)
class ARetail1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARetail1GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	/** Widget class to use for HUD screen*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widget", meta = (BlueprintProtected = true))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	/** The instance of the HUD Widget class*/
	UPROPERTY(BlueprintReadOnly, Category = "Widget")
	class UUserWidget* CurrentWidget;

};



