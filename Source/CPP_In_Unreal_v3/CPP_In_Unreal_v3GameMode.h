// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_In_Unreal_v3GameMode.generated.h"

UCLASS(minimalapi)
class ACPP_In_Unreal_v3GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_In_Unreal_v3GameMode();

	virtual void BeginPlay() override;


protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CustomWidget", meta = (BlueprintProected = "true"))
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY()
		class UUserWidget* CurrentWidget;

};




