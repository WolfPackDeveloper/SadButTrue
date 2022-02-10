// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SBTCharacterPlayer.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
//#include <GameFramework/Character.h>

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
	FRotator ControlRotation = GetControlRotation();
	ControlRotation.Pitch = 0.0f;
	ControlRotation.Roll = 0.0f;
	
	//FVector Direction = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);
	//AddMovementInput(Direction, AxisValue);

	AddMovementInput(ControlRotation.Vector(), AxisValue);
}

void ASBTCharacterPlayer::MoveRight(float AxisValue)
{
	FRotator ControlRotation = GetControlRotation();
	ControlRotation.Pitch = 0.0f;
	ControlRotation.Roll = 0.0f;

	FVector RightVector = FRotationMatrix(ControlRotation).GetScaledAxis(EAxis::Y);

	AddMovementInput(RightVector, AxisValue);
}

void ASBTCharacterPlayer::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASBTCharacterPlayer::TurnRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASBTCharacterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASBTCharacterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForvard", this, &ASBTCharacterPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASBTCharacterPlayer::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRight", this, &ACharacter::AddControllerYawInput);
	//Gamepad turning
	PlayerInputComponent->BindAxis("LookUpRate", this, &ASBTCharacterPlayer::LookUpRate);
	PlayerInputComponent->BindAxis("TurnRightRate", this, &ASBTCharacterPlayer::TurnRightRate);

}
