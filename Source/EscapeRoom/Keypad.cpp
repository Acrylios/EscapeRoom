// Fill out your copyright notice in the Description page of Project Settings.


#include "Keypad.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AKeypad::AKeypad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	KeypadBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadBase"));
	KeypadBaseMesh->SetupAttachment(GetRootComponent());

	KeypadButton1Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton1"));
	KeypadButton1Mesh->SetupAttachment(KeypadBaseMesh);

	KeypadButton2Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton2"));
	KeypadButton2Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton3Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton3"));
	KeypadButton3Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton4Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton4"));
	KeypadButton4Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton5Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton5"));
	KeypadButton5Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton6Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton6"));
	KeypadButton6Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton7Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton7"));
	KeypadButton7Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton8Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton8"));
	KeypadButton8Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton9Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton9"));
	KeypadButton9Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButton0Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton0"));
	KeypadButton0Mesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButtonClearMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButtonClear"));
	KeypadButtonClearMesh->SetupAttachment(KeypadBaseMesh);
	
	KeypadButtonEnterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButtonEnter"));
	KeypadButtonEnterMesh->SetupAttachment(KeypadBaseMesh);

}

// Called when the game starts or when spawned
void AKeypad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeypad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

