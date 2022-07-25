// Fill out your copyright notice in the Description page of Project Settings.
// #include  "ThirdPersonCharacter.h"

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI3_Turrel.generated.h"

UCLASS()
class JOE_WAY_GREK_API AAI3_Turrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAI3_Turrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Main Components");
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Main Components");
	UStaticMeshComponent* Turrel_Osn;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Main Components");
	UStaticMeshComponent* Turrel_Portable;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Main Components");
	UStaticMeshComponent* Turrel_Gun;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Main Components");
	UStaticMeshComponent* Gun;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
		FVector ActorLoc;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
		FVector TurrelLoc;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
		float ReturnValueZ;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
		float Distance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
		ACharacter* ThirdPersonCharacter;
};
