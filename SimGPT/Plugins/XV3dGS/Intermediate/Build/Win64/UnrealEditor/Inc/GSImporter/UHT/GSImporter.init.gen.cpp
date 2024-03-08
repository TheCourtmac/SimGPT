// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSImporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GSImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GSImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_GSImporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GSImporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8A378B21,
				0x753DF3E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GSImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GSImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GSImporter(Z_Construct_UPackage__Script_GSImporter, TEXT("/Script/GSImporter"), Z_Registration_Info_UPackage__Script_GSImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8A378B21, 0x753DF3E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
