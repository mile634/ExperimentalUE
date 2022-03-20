// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyBaseCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEVETER_API UMyBaseCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	
	FORCEINLINE bool IsSprinting() { return bIsSprinting; }
	
	void StartSprint();
	void StopSprint();

	virtual float GetMaxSpeed() const override;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Character | Movement: Sprint", meta = (ClampMin = 0.f, UIMin = 0.f))
	float SprintSpeed = 1200.f;
	
private:
	bool bIsSprinting;


	
};
