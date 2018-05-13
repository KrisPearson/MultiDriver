// Fill out your copyright notice in the Description page of Project Settings.

#include "Vehicle.h"



// Sets default values
AVehicle::AVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVehicle::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));
}

// Called every frame
void AVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Translation = CurrentVelocity * 100 * DeltaTime;

	AddActorWorldOffset(Translation);


	UE_LOG(LogTemp, Warning, TEXT("Tick"));
}

// Called to bind functionality to input
void AVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AVehicle::MoveForward);

	UE_LOG(LogTemp, Warning, TEXT("SetupPlayerInputComponent"));

}

void AVehicle::MoveForward(float Val) {
	CurrentVelocity = GetActorForwardVector() * 20 * Val;

	UE_LOG(LogTemp, Warning, TEXT("CurrentVelocity = %f"), Val);

}

