// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References
	void UGaussianComponent::StaticRegisterNativesUGaussianComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianComponent);
	UClass* Z_Construct_UClass_UGaussianComponent_NoRegister()
	{
		return UGaussianComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGaussianComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGaussianComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaussianComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaussianComponent.h" },
		{ "ModuleRelativePath", "Public/GaussianComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGaussianComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianComponent_Statics::ClassParams = {
		&UGaussianComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGaussianComponent()
	{
		if (!Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton, Z_Construct_UClass_UGaussianComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGaussianComponent.OuterSingleton;
	}
	template<> GSRUNTIME_API UClass* StaticClass<UGaussianComponent>()
	{
		return UGaussianComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianComponent);
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianComponent, UGaussianComponent::StaticClass, TEXT("UGaussianComponent"), &Z_Registration_Info_UClass_UGaussianComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianComponent), 2843540761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_3363165358(TEXT("/Script/GSRuntime"),
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
