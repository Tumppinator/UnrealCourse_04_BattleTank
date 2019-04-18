// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAiController.h"

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not posessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController posessing %s"), *ControlledTank->GetName());
	}
}

ATank * ATankAiController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());

}


