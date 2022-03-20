// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneratorActor.generated.h"

//DECLARE_DELEGATE_OneParam(FOnGeneratorSwitchedSignature, bool)
DECLARE_MULTICAST_DELEGATE_OneParam(FOnGeneratorSwitchedSignature, bool)

UCLASS()
class PRACTICEVETER_API AGeneratorActor : public AActor
{
	GENERATED_BODY()
	public:
	FOnGeneratorSwitchedSignature OnGeneratorSwitched;

protected:
	UFUNCTION(BluePrintCallable)
	void SwitchGenerator();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GeneratorMode")
	bool bIsOn = true;
private:
	
};
