// Fill out your copyright notice in the Description page of Project Settings.


#include "AI3_Turrel.h"

// Sets default values
AAI3_Turrel::AAI3_Turrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	Turrel_Osn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turrel_Osn"));
	Turrel_Portable = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turrel_Portable"));
	Turrel_Gun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turrel_Gun"));
	Gun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun"));
	
	RootComponent = DefaultSceneRoot;
	Turrel_Osn->SetupAttachment(DefaultSceneRoot);
	Turrel_Portable->SetupAttachment(Turrel_Osn);
	Turrel_Gun->SetupAttachment(Turrel_Portable);
	Gun->SetupAttachment(Turrel_Gun);

}

// Called when the game starts or when spawned
void AAI3_Turrel::BeginPlay()
{
	Super::BeginPlay();
	// ACharacter* Character = Cast<ACharacter>();
	
}

// Called every frame
void AAI3_Turrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//IsValid();

}

