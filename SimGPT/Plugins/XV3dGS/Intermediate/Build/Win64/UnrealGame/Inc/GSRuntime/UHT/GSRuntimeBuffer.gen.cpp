// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GSRuntimeBuffer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSRuntimeBuffer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGSRuntimeBuffer();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGSRuntimeBuffer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References
	void UGSRuntimeBuffer::StaticRegisterNativesUGSRuntimeBuffer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSRuntimeBuffer);
	UClass* Z_Construct_UClass_UGSRuntimeBuffer_NoRegister()
	{
		return UGSRuntimeBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UGSRuntimeBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSRuntimeBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBuffer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRuntimeBuffer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GSRuntimeBuffer.h" },
		{ "ModuleRelativePath", "Public/GSRuntimeBuffer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSRuntimeBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRuntimeBuffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSRuntimeBuffer_Statics::ClassParams = {
		&UGSRuntimeBuffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSRuntimeBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSRuntimeBuffer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSRuntimeBuffer()
	{
		if (!Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton, Z_Construct_UClass_UGSRuntimeBuffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSRuntimeBuffer.OuterSingleton;
	}
	template<> GSRUNTIME_API UClass* StaticClass<UGSRuntimeBuffer>()
	{
		return UGSRuntimeBuffer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRuntimeBuffer);
	UGSRuntimeBuffer::~UGSRuntimeBuffer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGSRuntimeBuffer)
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSRuntimeBuffer, UGSRuntimeBuffer::StaticClass, TEXT("UGSRuntimeBuffer"), &Z_Registration_Info_UClass_UGSRuntimeBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSRuntimeBuffer), 3289831812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_411778624(TEXT("/Script/GSRuntime"),
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GSRuntimeBuffer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
