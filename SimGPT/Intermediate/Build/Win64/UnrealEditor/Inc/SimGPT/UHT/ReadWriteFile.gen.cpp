// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimGPT/ReadWriteFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriteFile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMGPT_API UClass* Z_Construct_UClass_U_ReadWriteFile();
	SIMGPT_API UClass* Z_Construct_UClass_U_ReadWriteFile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimGPT();
// End Cross Module References
	DEFINE_FUNCTION(U_ReadWriteFile::execWriteStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		U_ReadWriteFile::WriteStringToFile(Z_Param_FilePath,Z_Param_String,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(U_ReadWriteFile::execReadStringFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=U_ReadWriteFile::ReadStringFromFile(Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void U_ReadWriteFile::StaticRegisterNativesU_ReadWriteFile()
	{
		UClass* Class = U_ReadWriteFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadStringFromFile", &U_ReadWriteFile::execReadStringFromFile },
			{ "WriteStringToFile", &U_ReadWriteFile::execWriteStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics
	{
		struct _ReadWriteFile_eventReadStringFromFile_Parms
		{
			FString FilePath;
			bool bOutSuccess;
			FString OutInfoMessage;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventReadStringFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((_ReadWriteFile_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_ReadWriteFile_eventReadStringFromFile_Parms), &Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventReadStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Courtney McCracken|1 - Read Write File" },
		{ "ModuleRelativePath", "ReadWriteFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_U_ReadWriteFile, nullptr, "ReadStringFromFile", nullptr, nullptr, Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::_ReadWriteFile_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::_ReadWriteFile_eventReadStringFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics
	{
		struct _ReadWriteFile_eventWriteStringToFile_Parms
		{
			FString FilePath;
			FString String;
			bool bOutSuccess;
			FString OutInfoMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventWriteStringToFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventWriteStringToFile_Parms, String), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((_ReadWriteFile_eventWriteStringToFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_ReadWriteFile_eventWriteStringToFile_Parms), &Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_ReadWriteFile_eventWriteStringToFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::NewProp_OutInfoMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Courtney McCracken|1 - Read Write File" },
		{ "ModuleRelativePath", "ReadWriteFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_U_ReadWriteFile, nullptr, "WriteStringToFile", nullptr, nullptr, Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::_ReadWriteFile_eventWriteStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::_ReadWriteFile_eventWriteStringToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(U_ReadWriteFile);
	UClass* Z_Construct_UClass_U_ReadWriteFile_NoRegister()
	{
		return U_ReadWriteFile::StaticClass();
	}
	struct Z_Construct_UClass_U_ReadWriteFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_U_ReadWriteFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimGPT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_U_ReadWriteFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_U_ReadWriteFile_ReadStringFromFile, "ReadStringFromFile" }, // 2876516871
		{ &Z_Construct_UFunction_U_ReadWriteFile_WriteStringToFile, "WriteStringToFile" }, // 2927870276
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_U_ReadWriteFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadWriteFile.h" },
		{ "ModuleRelativePath", "ReadWriteFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_U_ReadWriteFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<U_ReadWriteFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_U_ReadWriteFile_Statics::ClassParams = {
		&U_ReadWriteFile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_U_ReadWriteFile_Statics::Class_MetaDataParams), Z_Construct_UClass_U_ReadWriteFile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_U_ReadWriteFile()
	{
		if (!Z_Registration_Info_UClass_U_ReadWriteFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_U_ReadWriteFile.OuterSingleton, Z_Construct_UClass_U_ReadWriteFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_U_ReadWriteFile.OuterSingleton;
	}
	template<> SIMGPT_API UClass* StaticClass<U_ReadWriteFile>()
	{
		return U_ReadWriteFile::StaticClass();
	}
	U_ReadWriteFile::U_ReadWriteFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(U_ReadWriteFile);
	U_ReadWriteFile::~U_ReadWriteFile() {}
	struct Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_U_ReadWriteFile, U_ReadWriteFile::StaticClass, TEXT("U_ReadWriteFile"), &Z_Registration_Info_UClass_U_ReadWriteFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(U_ReadWriteFile), 2641286340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteFile_h_1130408881(TEXT("/Script/SimGPT"),
		Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AFAMS17_Documents_GitHub_SimGPT_SimGPT_Source_SimGPT_ReadWriteFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
