// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Prison_Door.generated.h"

UCLASS()
class APrison_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrison_Door();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Door;
	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* Hinge1;
	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* Hinge2;
	

};