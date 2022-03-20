// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PracticeVeter/Components/MovementComponents/MyBaseCharacterMovementComponent.h"




ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMyBaseCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	BaseCharacterMovementComponent = StaticCast<UMyBaseCharacterMovementComponent*>(GetCharacterMovement());
	GetMesh()->CastShadow = true;
	GetMesh()->bCastDynamicShadow = true;
}

void ABaseCharacter::ChangeCrouchState()
{
	if(GetCharacterMovement()->IsCrouching())
	{
		UnCrouch();
	}
	else Crouch();
          float a = GetCharacterMovement()->GetLastInputVector().X;
	
}

void ABaseCharacter::StartSprint()
{
	bIsSprintRequested = true;
	
	if(bIsCrouched)
	{
		UnCrouch();
	}
}

void ABaseCharacter::StopSprint()
{
	bIsSprintRequested = false;
}

void ABaseCharacter::TryChangeSprintState()
{
	if (bIsSprintRequested && !GetBaseCharacterMovementComponent()->IsSprinting() && CanSprint())
	{
		BaseCharacterMovementComponent->StartSprint();
		OnSprintStart();
	}

	if (!bIsSprintRequested && GetBaseCharacterMovementComponent()->IsSprinting())
	{
		BaseCharacterMovementComponent->StopSprint();
		OnSprintEnd();
	}
}

void ABaseCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	TryChangeSprintState();

	// GEngine->AddOnScreenDebugMessage(0,2.0f,FColor::Green,
	// 	FString::Printf(   
	// 		TEXT("bIsSprinting: %i bIsSprintRequested: %i MaxWalkSpeed: %f"),
	// 		bIsSprinting, bIsSprintRequested, GetCharacterMovement()->MaxWalkSpeed)
	// 		);
}

bool ABaseCharacter::CanSprint()
{
	return false;
}
