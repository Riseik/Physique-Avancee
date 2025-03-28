// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ParentProjectile.generated.h"

class USceneComponent;
class USpringArmComponent;
class UCameraComponent;
class UArrowComponent;

UCLASS()
class PHYSIQUE_AVANCEE_API AParentProjectile : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AParentProjectile();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Scene")
	USceneComponent* SceneComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Camera")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Orientation")
	UArrowComponent* ArrowComponent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
