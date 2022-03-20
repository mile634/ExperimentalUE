// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBaseCharacterMovementComponent.h"

void UMyBaseCharacterMovementComponent::StartSprint()
{
	bIsSprinting = true;
	bForceMaxAccel = 1;
}

void UMyBaseCharacterMovementComponent::StopSprint()
{
	bIsSprinting = false;
	bForceMaxAccel = 0;
	
}

float UMyBaseCharacterMovementComponent::GetMaxSpeed() const
{
	float result = Super::GetMaxSpeed();
	if (bIsSprinting)
		result = SprintSpeed;
	return result;
}
