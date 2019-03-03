// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GemManager.generated.h"

UCLASS()
class KAMIS_DESCENT_API AGemManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGemManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




public:
	UPROPERTY(EditAnywhere)
	FVector PurpleGemSpawnPoint;
	UPROPERTY(EditAnywhere)
	FVector GreenGemSpawnPoint;
	UPROPERTY(EditAnywhere)
	FVector RedGemSpawnPoint;

private:
	


};
