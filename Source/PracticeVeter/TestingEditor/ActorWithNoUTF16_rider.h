// ThereIsNoUTF16_Editor

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorWithNoUTF16_rider.generated.h"

UCLASS()
class PRACTICEVETER_API AActorWithNoUTF16_rider : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActorWithNoUTF16_rider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
