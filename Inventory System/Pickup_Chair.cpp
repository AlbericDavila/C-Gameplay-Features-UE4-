// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanitysFall_Debug.h"
#include "Pickup_Chair.h"

APickup_Chair::APickup_Chair()
{

}

void APickup_Chair::Use_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("You used up the chair!"));
}
