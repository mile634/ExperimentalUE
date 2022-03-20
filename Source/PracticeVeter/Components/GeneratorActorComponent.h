// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//#include "PracticeVeter/MyGameInstance.h"

#include "GeneratorActorComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratorClientOnSwitchedSignature, bool, bIsOn);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRACTICEVETER_API UGeneratorActorComponent : public UActorComponent
{
	GENERATED_BODY()
	

protected:

	UPROPERTY(EditInstanceOnly)
	class AGeneratorActor* GeneratorClient;

	//UMyGameInstance *MyGameInstance;
	//UGameInstance *StandartInst;
	
	UPROPERTY(BlueprintAssignable, Category= "Generator client")
	FGeneratorClientOnSwitchedSignature OnGeneratorClientSwitched;
	
	UFUNCTION()
	void OnGeneratorSwitched(bool bIsOn);
	// Called when the game starts
	virtual void BeginPlay() override;
	
		
};
