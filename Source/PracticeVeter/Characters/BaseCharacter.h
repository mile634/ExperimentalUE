// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UMyBaseCharacterMovementComponent;

UCLASS(Abstract, NotBlueprintable)
class PRACTICEVETER_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABaseCharacter(const FObjectInitializer &ObjectInitializer);
	virtual void MoveForward(float value) {};
	virtual void MoveRight(float value) {};
	virtual void Turn(float value) {};
	virtual void LookUp(float value) {};
	virtual void ChangeCrouchState();

	virtual void SwimForward(float value) {};
	virtual void SwimRight(float value) {};
	virtual void SwimUp(float value) {};

	virtual void StartSprint();
	virtual void StopSprint();
	

	virtual void Tick(float DeltaSeconds) override;

	inline UMyBaseCharacterMovementComponent* GetBaseCharacterMovementComponent() { return BaseCharacterMovementComponent; }

	protected:

	UFUNCTION(BlueprintImplementableEvent, Category= "Character | Movement")
	void OnSprintStart();
	
	UFUNCTION(BlueprintImplementableEvent, Category= "Character | Movement")	
	void OnSprintEnd();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Movement")
	float SprintSpeed = 800.f;

    virtual bool CanSprint();

	UMyBaseCharacterMovementComponent* BaseCharacterMovementComponent; 

	private:
	bool bIsSprintRequested = false;
	void TryChangeSprintState();
};
