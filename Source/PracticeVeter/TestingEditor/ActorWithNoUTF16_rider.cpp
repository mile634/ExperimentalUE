// ThereIsNoUTF16_Editor


#include "ActorWithNoUTF16_rider.h"


// Sets default values
AActorWithNoUTF16_rider::AActorWithNoUTF16_rider()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AActorWithNoUTF16_rider::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorWithNoUTF16_rider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

