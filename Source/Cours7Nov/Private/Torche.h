// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"


#include "Torche.generated.h"


UCLASS()
class ATorche : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATorche();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TorcheBody;
	UPROPERTY(VisibleAnywhere)
	class UPointLightComponent* Light;
	UPROPERTY(VisibleAnywhere)
	class UNiagaraComponent* Fire;

};
