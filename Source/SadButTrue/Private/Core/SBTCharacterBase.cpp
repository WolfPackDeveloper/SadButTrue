// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SBTCharacterBase.h"

// Sets default values
ASBTCharacterBase::ASBTCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent* ASBTCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ASBTCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASBTCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASBTCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

