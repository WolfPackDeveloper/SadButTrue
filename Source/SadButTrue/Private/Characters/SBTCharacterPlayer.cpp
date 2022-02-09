// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SBTCharacterPlayer.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include <GameFramework/Character.h>

ASBTCharacterPlayer::ASBTCharacterPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	GetMesh()->SetGenerateOverlapEvents(true);
}

void ASBTCharacterPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ASBTCharacterPlayer::MoveForward(float AxisValue)
{

}

void ASBTCharacterPlayer::MoveRight(float AxisValue)
{

}

void ASBTCharacterPlayer::LookUpRate(float AxisValue)
{

}

void ASBTCharacterPlayer::TurnRightRate(float AxisValue)
{

}

void ASBTCharacterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASBTCharacterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}
