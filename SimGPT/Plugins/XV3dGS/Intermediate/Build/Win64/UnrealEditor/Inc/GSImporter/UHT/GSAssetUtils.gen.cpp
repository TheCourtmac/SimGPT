// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSImporter/Public/GSAssetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSAssetUtils() {}
// Cross Module References
	GSIMPORTER_API UEnum* Z_Construct_UEnum_GSImporter_EPlyFormat();
	UPackage* Z_Construct_UPackage__Script_GSImporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlyFormat;
	static UEnum* EPlyFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSImporter_EPlyFormat, (UObject*)Z_Construct_UPackage__Script_GSImporter(), TEXT("EPlyFormat"));
		}
		return Z_Registration_Info_UEnum_EPlyFormat.OuterSingleton;
	}
	template<> GSIMPORTER_API UEnum* StaticEnum<EPlyFormat>()
	{
		return EPlyFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_GSImporter_EPlyFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enumerators[] = {
		{ "PF_Sh3", (int64)PF_Sh3 },
		{ "PF_Sh0", (int64)PF_Sh0 },
		{ "PF_SH3_RGB", (int64)PF_SH3_RGB },
		{ "PF_INVALID", (int64)PF_INVALID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GSAssetUtils.h" },
		{ "PF_INVALID.Name", "PF_INVALID" },
		{ "PF_Sh0.Name", "PF_Sh0" },
		{ "PF_Sh3.Name", "PF_Sh3" },
		{ "PF_SH3_RGB.Name", "PF_SH3_RGB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GSImporter,
		nullptr,
		"EPlyFormat",
		"EPlyFormat",
		Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GSImporter_EPlyFormat()
	{
		if (!Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton, Z_Construct_UEnum_GSImporter_EPlyFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlyFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics::EnumInfo[] = {
		{ EPlyFormat_StaticEnum, TEXT("EPlyFormat"), &Z_Registration_Info_UEnum_EPlyFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1923771810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_1091627287(TEXT("/Script/GSImporter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSAssetUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
