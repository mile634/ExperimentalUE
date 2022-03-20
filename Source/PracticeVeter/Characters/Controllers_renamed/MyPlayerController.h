// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEVETER_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual  void SetPawn(APawn* InPawn) override;
protected:
	virtual void SetupInputComponent() override;

private:
	TSoftObjectPtr<class ABaseCharacter> CachedBaseCharacter;

	void MoveForward(float value);
	void MoveRight(float value);
	void Turn(float value);
	void LookUp(float value);
	void Jump();
	void TurnWalk();
	void ChangeCrouchState();
	
	void StartSprint();
	void StopSprint();

	void SwimForward(float value);
	void SwimRight(float value);
	void SwimUp(float value);
	
	bool bIsWalk = false;
};
