// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAiController.generated.h"

/**
 *
 */
UCLASS()
class BATTLETANK_API ATankAiController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:
	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;


};
