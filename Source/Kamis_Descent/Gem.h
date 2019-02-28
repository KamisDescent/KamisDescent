// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"

#include "Gem.generated.h"

UCLASS()
class KAMIS_DESCENT_API AGem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Access the static mesh component
	FORCEINLINE UStaticMeshComponent* GetMesh() const { return GemMesh; }

	// Is the pickup active?
	UFUNCTION(BlueprintPure, Category = "Gem")
	bool IsActive() const;

	// Change the state of the pickup (Active/Inactive)
	UFUNCTION(BlueprintCallable, Category = "Gem")
	void SetActive(bool State);


protected:
	// Static mesh to represent the gem in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gem", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* GemMesh;

	// True when the gem can be picked up, false when unavailable
	bool bIsActive;

};
