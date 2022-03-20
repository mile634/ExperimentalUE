// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorActorComponent.h"
#include "GameFramework/GameModeBase.h"
//#include "GameFramework/GameSession.h"
#include "Kismet/GameplayStatics.h"
#include "PracticeVeter/PracticeVeterGameMode.h"
#include "PracticeVeter/Actors/GeneratorActor.h"


void UGeneratorActorComponent::OnGeneratorSwitched(bool bIsOn)
{
	FString OnOffString = bIsOn ? TEXT("ON") : TEXT("OFF");
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,
	                                 FString::Printf(
		                                 TEXT("UGeneratorActorComponent::OnGeneratorSwitched for %s generator is %s"),
		                                 *GetOwner()->GetName(), *OnOffString));
	if (OnGeneratorClientSwitched.IsBound())
		OnGeneratorClientSwitched.Broadcast(bIsOn);
}

// Called when the game starts
void UGeneratorActorComponent::BeginPlay()
{
	FString a = TEXT("HELLO");
	Super::BeginPlay();
	if (IsValid(GeneratorClient))
		GeneratorClient->OnGeneratorSwitched.AddUObject(this, &UGeneratorActorComponent::OnGeneratorSwitched);

	//StandartInst = nullptr;
	//MyGameInstance->GetWorld()->GetAuthGameMode<APracticeVeterGameMode>()->InitGame();
	//StandartInst->GetWorld()->GetAuthGameMode<APracticeVeterGameMode>()->InitGame();

	//UGameInstance *GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	//FTransform Transform;
	//GameInstance->GetWorld()->GetAuthGameMode<APracticeVeterGameMode>()->OnConstruction(Transform);
	// TODO subscribe generator event
}
