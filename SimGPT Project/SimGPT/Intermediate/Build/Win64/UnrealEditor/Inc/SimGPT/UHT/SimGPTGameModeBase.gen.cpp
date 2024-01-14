// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimGPT/SimGPTGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimGPTGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIMGPT_API UClass* Z_Construct_UClass_ASimGPTGameModeBase();
	SIMGPT_API UClass* Z_Construct_UClass_ASimGPTGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimGPT();
// End Cross Module References
	void ASimGPTGameModeBase::StaticRegisterNativesASimGPTGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimGPTGameModeBase);
	UClass* Z_Construct_UClass_ASimGPTGameModeBase_NoRegister()
	{
		return ASimGPTGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASimGPTGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimGPTGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimGPT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimGPTGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimGPTGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SimGPTGameModeBase.h" },
		{ "ModuleRelativePath", "SimGPTGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimGPTGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimGPTGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimGPTGameModeBase_Statics::ClassParams = {
		&ASimGPTGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimGPTGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimGPTGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASimGPTGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASimGPTGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimGPTGameModeBase.OuterSingleton, Z_Construct_UClass_ASimGPTGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimGPTGameModeBase.OuterSingleton;
	}
	template<> SIMGPT_API UClass* StaticClass<ASimGPTGameModeBase>()
	{
		return ASimGPTGameModeBase::StaticClass();
	}
	ASimGPTGameModeBase::ASimGPTGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimGPTGameModeBase);
	ASimGPTGameModeBase::~ASimGPTGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_mckra_Documents_Unreal_Projects_SimGPT_Project_SimGPT_Source_SimGPT_SimGPTGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mckra_Documents_Unreal_Projects_SimGPT_Project_SimGPT_Source_SimGPT_SimGPTGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimGPTGameModeBase, ASimGPTGameModeBase::StaticClass, TEXT("ASimGPTGameModeBase"), &Z_Registration_Info_UClass_ASimGPTGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimGPTGameModeBase), 1233731715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mckra_Documents_Unreal_Projects_SimGPT_Project_SimGPT_Source_SimGPT_SimGPTGameModeBase_h_744058591(TEXT("/Script/SimGPT"),
		Z_CompiledInDeferFile_FID_Users_mckra_Documents_Unreal_Projects_SimGPT_Project_SimGPT_Source_SimGPT_SimGPTGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mckra_Documents_Unreal_Projects_SimGPT_Project_SimGPT_Source_SimGPT_SimGPTGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
