// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

#include "PracticeVeter/Characters/BaseCharacter.h"

void AMyPlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	CachedBaseCharacter = Cast<ABaseCharacter>(InPawn);
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
	InputComponent->BindAxis("Turn", this, &AMyPlayerController::Turn);
	InputComponent->BindAxis("LookUp", this, &AMyPlayerController::LookUp);
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed,this, &AMyPlayerController::Jump);
	InputComponent->BindAction("TurnWalk", IE_Pressed, this, &AMyPlayerController::TurnWalk);
	InputComponent->BindAction("Crouch", IE_Pressed, this, &AMyPlayerController::ChangeCrouchState);
	InputComponent->BindAction("Sprint", IE_Pressed, this, &AMyPlayerController::StartSprint);
	InputComponent->BindAction("Sprint", IE_Released, this, &AMyPlayerController::StopSprint);

	InputComponent->BindAxis("SwimForward", this, &AMyPlayerController::SwimForward);
	InputComponent->BindAxis("SwimRight", this, &AMyPlayerController::SwimRight);
	InputComponent->BindAxis("SwimUP", this, &AMyPlayerController::SwimUp);
}

void AMyPlayerController::TurnWalk()
{
	bIsWalk = !bIsWalk;
}

void AMyPlayerController::ChangeCrouchState() 
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->ChangeCrouchState();
	}
}

void AMyPlayerController::StartSprint()
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->StartSprint();
	}
}

void AMyPlayerController::StopSprint()
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->StopSprint();
	}
}

void AMyPlayerController::SwimForward(float value)
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->SwimForward(value);
	}
}

void AMyPlayerController::SwimRight(float value)
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->SwimRight(value);
	}
}

void AMyPlayerController::SwimUp(float value)
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->SwimUp(value);
	}
}


void AMyPlayerController::MoveForward(float value)
{
	if(bIsWalk) value/=3;
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->MoveForward(value);
	}
}

void AMyPlayerController::MoveRight(float value)
{
	if(bIsWalk) value/=3;
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->MoveRight(value);
	}
}

void AMyPlayerController::Turn(float value)
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->Turn(value);
	}
}

void AMyPlayerController::LookUp(float value)
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->LookUp(value);
	}
}

void AMyPlayerController::Jump()
{
	if(CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->Jump();
	}
}
