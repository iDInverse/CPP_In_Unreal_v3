// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Engine/TriggerBox.h"
#include "CustomTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CPP_IN_UNREAL_V3_API ACustomTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

public:

	ACustomTriggerBox();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	
	
};
