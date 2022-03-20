// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PRACTICEVETER_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter(const FObjectInitializer& ObjectInitializer);
	
	virtual void MoveForward(float value) override;
	virtual void MoveRight(float value) override;
	virtual void LookUp(float value) override;
	virtual void Turn(float value) override;

	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

	virtual bool CanJumpInternal_Implementation() const override;
	virtual void OnJumped_Implementation() override;

	virtual void SwimForward(float value) override;
	virtual void SwimRight(float value) override;
	virtual void SwimUp(float value) override;
	
	//virtual void Jump() override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	class USpringArmComponent* SpringArmComponent;

	FORCEINLINE bool canIDebugForceInline()
	{
		int a = (CameraComponent == nullptr) ? 1 : 2;
		return (a ==2)?true:false;
	}

	int32 names;
	
	void SwitchLevel (const FString& FURL);

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	// class UPathFollowingComponent* PathFollowingComponent;

};
