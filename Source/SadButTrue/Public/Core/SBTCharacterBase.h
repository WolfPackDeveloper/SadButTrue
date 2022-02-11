// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SBTCharacterBase.generated.h"

//class UAbilitySystemComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class SADBUTTRUE_API ASBTCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASBTCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
