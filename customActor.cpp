// Fill out your copyright notice in the Description page of Project Settings.


#include "customActor.h"
#include "Classes/Components/StaticMeshComponent.h"

// Sets default values
AcustomActor::AcustomActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
 	StaticMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void AcustomActor::BeginPlay()
{
	Super::BeginPlay();
	StaticMesh->SetWorldScale3D(FMath::VRand());

}

// Called every frame
void AcustomActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

