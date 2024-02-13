// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimGPT/ReadWriteJson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriteJson() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMGPT_API UClass* Z_Construct_UClass_U_ReadWriteJson();
	SIMGPT_API UClass* Z_Construct_UClass_U_ReadWriteJson_NoRegister();
	SIMGPT_API UScriptStruct* Z_Construct_UScriptStruct_FAqTestStruct();
	UPackage* Z_Construct_UPackage__Script_SimGPT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AqTestStruct;
class UScriptStruct* FAqTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAqTestStruct, (UObject*)Z_Construct_UPackage__Script_SimGPT(), TEXT("AqTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AqTestStruct.OuterSingleton;
}
template<> SIMGPT_API UScriptStruct* StaticStruct<FAqTestStruct>()
{
	return FAqTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAqTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBool_MetaData[];
#endif
		static void NewProp_MyBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MyBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Courtney McCracken|2 -Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAqTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyString_MetaData[] = {
		{ "Category", "CourtneyMcCracken|2 -Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyString_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool_MetaData[] = {
		{ "Category", "CourtneyMcCracken|2 -Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool_SetBit(void* Obj)
	{
		((FAqTestStruct*)Obj)->MyBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool = { "MyBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAqTestStruct), &Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "CourtneyMcCracken|2 -Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyFloat_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyInt_MetaData[] = {
		{ "Category", "CourtneyMcCracken|2 -Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyInt_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyVector_MetaData[] = {
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyVector = { "MyVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyVector_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyRotator_MetaData[] = {
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyRotator = { "MyRotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyRotator_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyRotator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyTransform_MetaData[] = {
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyTransform = { "MyTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAqTestStruct, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyTransform_MetaData), Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewProp_MyTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAqTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimGPT,
		nullptr,
		&NewStructOps,
		"AqTestStruct",
		Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers),
		sizeof(FAqTestStruct),
		alignof(FAqTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAqTestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAqTestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAqTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FAqTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AqTestStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(U_ReadWriteJson::execWriteStructToJsonFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_GET_STRUCT(FAqTestStruct,Z_Param_Struct);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		U_ReadWriteJson::WriteStructToJsonFile(Z_Param_JsonFilePath,Z_Param_Struct,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(U_ReadWriteJson::execReadStructureFromJsonFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAqTestStruct*)Z_Param__Result=U_ReadWriteJson::ReadStructureFromJsonFile(Z_Param_JsonFilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void U_ReadWriteJson::StaticRegisterNativesU_ReadWriteJson()
	{
		UClass* Class = U_ReadWriteJson::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadStructureFromJsonFile", &U_ReadWriteJson::execReadStructureFromJsonFile },
			{ "WriteStructToJsonFile", &U_ReadWriteJson::execWriteStructToJsonFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics
	{
		struct _ReadWriteJson_eventReadStructureFromJsonFile_Parms
		{
			FString JsonFilePath;
			bool bOutSuccess;
			FString OutInfoMessage;
			FAqTestStruct ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventReadStructureFromJsonFile_Parms, JsonFilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((_ReadWriteJson_eventReadStructureFromJsonFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_ReadWriteJson_eventReadStructureFromJsonFile_Parms), &Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventReadStructureFromJsonFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventReadStructureFromJsonFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FAqTestStruct, METADATA_PARAMS(0, nullptr) }; // 2999811527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Courtney McCracken|2 - Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_U_ReadWriteJson, nullptr, "ReadStructureFromJsonFile", nullptr, nullptr, Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::_ReadWriteJson_eventReadStructureFromJsonFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::_ReadWriteJson_eventReadStructureFromJsonFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics
	{
		struct _ReadWriteJson_eventWriteStructToJsonFile_Parms
		{
			FString JsonFilePath;
			FAqTestStruct Struct;
			bool bOutSuccess;
			FString OutInfoMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventWriteStructToJsonFile_Parms, JsonFilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventWriteStructToJsonFile_Parms, Struct), Z_Construct_UScriptStruct_FAqTestStruct, METADATA_PARAMS(0, nullptr) }; // 2999811527
	void Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((_ReadWriteJson_eventWriteStructToJsonFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_ReadWriteJson_eventWriteStructToJsonFile_Parms), &Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteJson_eventWriteStructToJsonFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::NewProp_OutInfoMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Courtney McCracken|2 - Read Write Json" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_U_ReadWriteJson, nullptr, "WriteStructToJsonFile", nullptr, nullptr, Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::_ReadWriteJson_eventWriteStructToJsonFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::_ReadWriteJson_eventWriteStructToJsonFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(U_ReadWriteJson);
	UClass* Z_Construct_UClass_U_ReadWriteJson_NoRegister()
	{
		return U_ReadWriteJson::StaticClass();
	}
	struct Z_Construct_UClass_U_ReadWriteJson_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_U_ReadWriteJson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimGPT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteJson_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_U_ReadWriteJson_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_U_ReadWriteJson_ReadStructureFromJsonFile, "ReadStructureFromJsonFile" }, // 2162746540
		{ &Z_Construct_UFunction_U_ReadWriteJson_WriteStructToJsonFile, "WriteStructToJsonFile" }, // 890534307
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteJson_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_U_ReadWriteJson_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadWriteJson.h" },
		{ "ModuleRelativePath", "ReadWriteJson.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_U_ReadWriteJson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<U_ReadWriteJson>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_U_ReadWriteJson_Statics::ClassParams = {
		&U_ReadWriteJson::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteJson_Statics::Class_MetaDataParams), Z_Construct_UClass_U_ReadWriteJson_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_U_ReadWriteJson()
	{
		if (!Z_Registration_Info_UClass_U_ReadWriteJson.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_U_ReadWriteJson.OuterSingleton, Z_Construct_UClass_U_ReadWriteJson_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_U_ReadWriteJson.OuterSingleton;
	}
	template<> SIMGPT_API UClass* StaticClass<U_ReadWriteJson>()
	{
		return U_ReadWriteJson::StaticClass();
	}
	U_ReadWriteJson::U_ReadWriteJson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(U_ReadWriteJson);
	U_ReadWriteJson::~U_ReadWriteJson() {}
	struct Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ScriptStructInfo[] = {
		{ FAqTestStruct::StaticStruct, Z_Construct_UScriptStruct_FAqTestStruct_Statics::NewStructOps, TEXT("AqTestStruct"), &Z_Registration_Info_UScriptStruct_AqTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAqTestStruct), 2999811527U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_U_ReadWriteJson, U_ReadWriteJson::StaticClass, TEXT("U_ReadWriteJson"), &Z_Registration_Info_UClass_U_ReadWriteJson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(U_ReadWriteJson), 3588479061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_416883945(TEXT("/Script/SimGPT"),
		Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteJson_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
