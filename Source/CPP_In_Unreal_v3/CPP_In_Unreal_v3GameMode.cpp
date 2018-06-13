// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CPP_In_Unreal_v3GameMode.h"
#include "CPP_In_Unreal_v3Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

ACPP_In_Unreal_v3GameMode::ACPP_In_Unreal_v3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACPP_In_Unreal_v3GameMode::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}

}

