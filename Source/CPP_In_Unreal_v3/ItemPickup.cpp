// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemPickup.h"

AItemPickup::AItemPickup() {

	PickupPower = 150.f;
	PickupType = TEXT("");
}

float AItemPickup::GetPower() {
	return PickupPower;
}

FString AItemPickup::GetType() {
	return PickupType;
}




