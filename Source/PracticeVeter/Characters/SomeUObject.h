// © is here

#pragma once

#include "CoreMinimal.h"

#include "SomeUObject.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEVETER_API ASomeUObject : public AActor
{
	GENERATED_BODY()
public:
	ASomeUObject();
	
	class UPathFollowingComponent *PathFollowingComponent;
};
