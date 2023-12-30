// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"

#include "TestSubject.generated.h"

UCLASS()
class UNREALAI_API ATestSubject : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestSubject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UCameraComponent* Camera;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
