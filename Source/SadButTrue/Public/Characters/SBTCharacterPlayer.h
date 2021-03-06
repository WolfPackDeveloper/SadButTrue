// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/SBTCharacterBase.h"
#include "SBTCharacterPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SADBUTTRUE_API ASBTCharacterPlayer : public ASBTCharacterBase
{
	GENERATED_BODY()
	

public:

	ASBTCharacterPlayer();

protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUpRate(float AxisValue);
	void TurnRightRate(float AxisValue);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
