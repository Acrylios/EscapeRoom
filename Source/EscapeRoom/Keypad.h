// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Keypad.generated.h"

UCLASS()
class ESCAPEROOM_API AKeypad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeypad();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadBaseMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton1Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton2Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton3Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton4Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton5Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton6Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton7Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton8Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton9Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButton0Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButtonClearMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "StaticMesh")
		class UStaticMeshComponent* KeypadButtonEnterMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
