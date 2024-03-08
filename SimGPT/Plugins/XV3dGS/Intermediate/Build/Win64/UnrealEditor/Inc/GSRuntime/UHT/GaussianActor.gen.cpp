// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor();
	GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor_NoRegister();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent_NoRegister();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister();
	GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianLodTVisType;
	static UEnum* EGaussianLodTVisType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType, (UObject*)Z_Construct_UPackage__Script_GSRuntime(), TEXT("EGaussianLodTVisType"));
		}
		return Z_Registration_Info_UEnum_EGaussianLodTVisType.OuterSingleton;
	}
	template<> GSRUNTIME_API UEnum* StaticEnum<EGaussianLodTVisType>()
	{
		return EGaussianLodTVisType_StaticEnum();
	}
	struct Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enumerators[] = {
		{ "EGaussianLodTVisType::LodVisSelected", (int64)EGaussianLodTVisType::LodVisSelected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// for 1000k test now\n//#define MAX_NIAGARA_TEXTURE_WH 1400\n" },
		{ "LodVisSelected.DisplayName", "visit selected LodLevel" },
		{ "LodVisSelected.Name", "EGaussianLodTVisType::LodVisSelected" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "for 1000k test now\n#define MAX_NIAGARA_TEXTURE_WH 1400" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
		nullptr,
		"EGaussianLodTVisType",
		"EGaussianLodTVisType",
		Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType()
	{
		if (!Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton, Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGaussianLodTVisType.InnerSingleton;
	}
	DEFINE_FUNCTION(AGaussianActor::execOnTestHandler)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTestHandler(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaussianActor::execOnCropInfoChangedHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCropInfoChangedHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaussianActor::execreset_niagara)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_inNiagaraComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->reset_niagara(Z_Param_inNiagaraComp);
		P_NATIVE_END;
	}
	void AGaussianActor::StaticRegisterNativesAGaussianActor()
	{
		UClass* Class = AGaussianActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCropInfoChangedHandler", &AGaussianActor::execOnCropInfoChangedHandler },
			{ "OnTestHandler", &AGaussianActor::execOnTestHandler },
			{ "reset_niagara", &AGaussianActor::execreset_niagara },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UNiagaraComponent* NaiveNiagaraComp;\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "UNiagaraComponent* NaiveNiagaraComp;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "OnCropInfoChangedHandler", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics
	{
		struct GaussianActor_eventOnTestHandler_Parms
		{
			FString Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianActor_eventOnTestHandler_Parms, Result), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "OnTestHandler", nullptr, nullptr, Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::GaussianActor_eventOnTestHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::GaussianActor_eventOnTestHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGaussianActor_OnTestHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_OnTestHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics
	{
		struct GaussianActor_eventreset_niagara_Parms
		{
			UNiagaraComponent* inNiagaraComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inNiagaraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inNiagaraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp = { "inNiagaraComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianActor_eventreset_niagara_Parms, inNiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData), Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "reset_niagara", nullptr, nullptr, Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::GaussianActor_eventreset_niagara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::GaussianActor_eventreset_niagara_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGaussianActor_reset_niagara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGaussianActor);
	UClass* Z_Construct_UClass_AGaussianActor_NoRegister()
	{
		return AGaussianActor::StaticClass();
	}
	struct Z_Construct_UClass_AGaussianActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithRelighting_MetaData[];
#endif
		static void NewProp_WithRelighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithRelighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlbedoTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlbedoTint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LodVisType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodVisType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LodVisType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodVisLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodVisLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BufferPackagePath;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipVolumeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClipVolumeComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaussianComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GaussianComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaussianActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaussianActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaussianActor_OnCropInfoChangedHandler, "OnCropInfoChangedHandler" }, // 3790833841
		{ &Z_Construct_UFunction_AGaussianActor_OnTestHandler, "OnTestHandler" }, // 1534191791
		{ &Z_Construct_UFunction_AGaussianActor_reset_niagara, "reset_niagara" }, // 3167244228
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaussianActor.h" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit(void* Obj)
	{
		((AGaussianActor*)Obj)->WithRelighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting = { "WithRelighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGaussianActor), &Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint = { "AlbedoTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, AlbedoTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType = { "LodVisType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, LodVisType), Z_Construct_UEnum_GSRuntime_EGaussianLodTVisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_MetaData) }; // 754776789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel_MetaData[] = {
		{ "Category", "User Control" },
		{ "Comment", "//-1:dynamic lod\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "-1:dynamic lod" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel = { "LodVisLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, LodVisLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "Comment", "//-1:dynamic lod\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "-1:dynamic lod" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath = { "BufferPackagePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, BufferPackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent = { "ClipVolumeComponent", nullptr, (EPropertyFlags)0x00140008000a200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, ClipVolumeComponent), Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent = { "GaussianComponent", nullptr, (EPropertyFlags)0x00100000000a200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, GaussianComponent), Z_Construct_UClass_UGaussianComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x00100000000a200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianActor, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraComp_MetaData), Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaussianActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_LodVisLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_BufferPackagePath,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_ClipVolumeComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_GaussianComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_NiagaraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaussianActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaussianActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGaussianActor_Statics::ClassParams = {
		&AGaussianActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaussianActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGaussianActor()
	{
		if (!Z_Registration_Info_UClass_AGaussianActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGaussianActor.OuterSingleton, Z_Construct_UClass_AGaussianActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGaussianActor.OuterSingleton;
	}
	template<> GSRUNTIME_API UClass* StaticClass<AGaussianActor>()
	{
		return AGaussianActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaussianActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AGaussianActor)
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo[] = {
		{ EGaussianLodTVisType_StaticEnum, TEXT("EGaussianLodTVisType"), &Z_Registration_Info_UEnum_EGaussianLodTVisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 754776789U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGaussianActor, AGaussianActor::StaticClass, TEXT("AGaussianActor"), &Z_Registration_Info_UClass_AGaussianActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGaussianActor), 3399424548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_3007451808(TEXT("/Script/GSRuntime"),
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
