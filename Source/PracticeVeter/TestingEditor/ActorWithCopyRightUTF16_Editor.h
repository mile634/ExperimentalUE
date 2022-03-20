// I have '©'<- here so the file will be saved in UTF16 CRLF
//Converted To UTF8 LF from Rider from UTF16CRLF
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorWithCopyRightUTF16_Editor.generated.h"

UCLASS()
class PRACTICEVETER_API AActorWithCopyRightUTF16_Editor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorWithCopyRightUTF16_Editor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
