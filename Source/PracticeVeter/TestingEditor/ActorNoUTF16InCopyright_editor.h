// ThereIsNoUTF16_Editor
//Converted To UTF8 LF from Rider from UTF8CRLF

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorNoUTF16InCopyright_editor.generated.h"

UCLASS()
class PRACTICEVETER_API AActorNoUTF16InCopyright_editor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorNoUTF16InCopyright_editor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
