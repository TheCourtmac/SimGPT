// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadWriteJson.generated.h"

class FJsonObject;

USTRUCT(BlueprintType, Category = "Courtney McCracken|2 -Read Write Json")
struct FAqTestStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CourtneyMcCracken|2 -Read Write Json")
	FString MyString = "Llama";
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CourtneyMcCracken|2 -Read Write Json")
	bool MyBool = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CourtneyMcCracken|2 -Read Write Json")
	float MyFloat = 123.456f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CourtneyMcCracken|2 -Read Write Json")
	int MyInt = 123;

public:
	UPROPERTY()
	FVector MyVector = { 1.0f, 2.0f, 3.0f };
	UPROPERTY()
	FRotator MyRotator = { 90.0f, 180.0f, 270.0f };
	UPROPERTY()
	FTransform MyTransform;

public:
	FString MyOtherString = "This variable will not be in the json because its not flagged as an UPROPERTY()";
};

	UCLASS()
	class U_ReadWriteJson : public UBlueprintFunctionLibrary 
	{
		GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Courtney McCracken|2 - Read Write Json")
	static FAqTestStruct ReadStructureFromJsonFile(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Courtney McCracken|2 - Read Write Json")
	static void WriteStructToJsonFile(FString JsonFilePath, FAqTestStruct Struct, bool& bOutSuccess, FString& OutInfoMessage);



public:
	static TSharedPtr<FJsonObject> ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage);

	static void WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess, FString& OutInfoMessage);


};