// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteJson.h"
#include "ReadWriteFile.h"

#include "Serialization/JsonSerializer.h"
#include <JsonObjectConverter.h>

FAqTestStruct U_ReadWriteJson::ReadStructureFromJsonFile(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	TSharedPtr<FJsonObject> JsonObject = ReadJson(JsonFilePath, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess) {
		return FAqTestStruct();
	}
	FAqTestStruct RetAqTestStruct;

	if (!FJsonObjectConverter::JsonObjectToUStruct<FAqTestStruct>(JsonObject.ToSharedRef(), &RetAqTestStruct))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read Struct Json failed -  Was not able to convert json object to desired structure- '%s'"), *JsonFilePath);
		return FAqTestStruct();
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read Struct Json Succeeded -  '%s'"), *JsonFilePath);
	return FAqTestStruct();

}

void U_ReadWriteJson::WriteStructToJsonFile(FString JsonFilePath, FAqTestStruct Struct, bool& bOutSuccess, FString& OutInfoMessage)
{
	TSharedPtr<FJsonObject> JsonObject = FJsonObjectConverter::UStructToJsonObject(Struct);
	if (JsonObject == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write Struct to Json failed - Was not able to convert from struct to json object"));
		return;
	}
	WriteJson(JsonFilePath, JsonObject, bOutSuccess, OutInfoMessage);
}

TSharedPtr<FJsonObject> U_ReadWriteJson::ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	FString JsonString = U_ReadWriteFile::ReadStringFromFile(JsonFilePath, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess) {
		return nullptr;
	}
	TSharedPtr<FJsonObject> RetJsonObject;
		if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(JsonString), RetJsonObject))
		{
			bOutSuccess = false;
			OutInfoMessage = FString::Printf(TEXT("Read Json Failed - Was not able to deserialize the json string. Is it the right format? - '%s'"), *JsonString);
			return nullptr;
		}
		bOutSuccess = true;
		OutInfoMessage = FString::Printf(TEXT("Read Json Succeeded - '%s'"), *JsonFilePath);
		return RetJsonObject;
}
 void U_ReadWriteJson::WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess, FString& OutInfoMessage) 
{
	FString JsonString;
	if (!FJsonSerializer::Serialize(JsonObject.ToSharedRef(), TJsonWriterFactory<>::Create(&JsonString, 0))) 
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write Json Failed - Was not able to deserialize the json string. Is the JsonObject valid? "));
		return;
	}
	U_ReadWriteFile::WriteStringToFile(JsonFilePath, JsonString, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess) {
		return;
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read Json Succeeded - '%s'"), *JsonFilePath);
}


