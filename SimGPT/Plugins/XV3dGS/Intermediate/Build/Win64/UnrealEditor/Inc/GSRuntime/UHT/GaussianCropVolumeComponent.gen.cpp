// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianCropVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianCropVolumeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianCropVolumeComponent();
	GSRUNTIME_API UClass* Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister();
	GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_ECropTemplate();
	GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_ECropType();
	GSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Crop info changed delegate\n" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
		{ "ToolTip", "Crop info changed delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GSRuntime, nullptr, "GSCropInfoChangedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCropInfoChangedDelegate_DelegateWrapper(const FScriptDelegate& GSCropInfoChangedDelegate)
{
	GSCropInfoChangedDelegate.ProcessDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECropType;
	static UEnum* ECropType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECropType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECropType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_ECropType, (UObject*)Z_Construct_UPackage__Script_GSRuntime(), TEXT("ECropType"));
		}
		return Z_Registration_Info_UEnum_ECropType.OuterSingleton;
	}
	template<> GSRUNTIME_API UEnum* StaticEnum<ECropType>()
	{
		return ECropType_StaticEnum();
	}
	struct Z_Construct_UEnum_GSRuntime_ECropType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators[] = {
		{ "ECropType::CropNothing", (int64)ECropType::CropNothing },
		{ "ECropType::CropInside", (int64)ECropType::CropInside },
		{ "ECropType::CropOutside", (int64)ECropType::CropOutside },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CropInside.DisplayName", "kill inside volume" },
		{ "CropInside.Name", "ECropType::CropInside" },
		{ "CropNothing.DisplayName", "kill nothing" },
		{ "CropNothing.Name", "ECropType::CropNothing" },
		{ "CropOutside.DisplayName", "kill outside volume" },
		{ "CropOutside.Name", "ECropType::CropOutside" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_ECropType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
		nullptr,
		"ECropType",
		"ECropType",
		Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GSRuntime_ECropType()
	{
		if (!Z_Registration_Info_UEnum_ECropType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECropType.InnerSingleton, Z_Construct_UEnum_GSRuntime_ECropType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECropType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECropTemplate;
	static UEnum* ECropTemplate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECropTemplate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECropTemplate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_ECropTemplate, (UObject*)Z_Construct_UPackage__Script_GSRuntime(), TEXT("ECropTemplate"));
		}
		return Z_Registration_Info_UEnum_ECropTemplate.OuterSingleton;
	}
	template<> GSRUNTIME_API UEnum* StaticEnum<ECropTemplate>()
	{
		return ECropTemplate_StaticEnum();
	}
	struct Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enumerators[] = {
		{ "ECropTemplate::CropTemplateDefault", (int64)ECropTemplate::CropTemplateDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CropTemplateDefault.DisplayName", "Default GS Niagara Template" },
		{ "CropTemplateDefault.Name", "ECropTemplate::CropTemplateDefault" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
		nullptr,
		"ECropTemplate",
		"ECropTemplate",
		Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GSRuntime_ECropTemplate()
	{
		if (!Z_Registration_Info_UEnum_ECropTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECropTemplate.InnerSingleton, Z_Construct_UEnum_GSRuntime_ECropTemplate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECropTemplate.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UGaussianCropVolumeComponent::execCropGSPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CropGSPoints();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UGaussianCropVolumeComponent::StaticRegisterNativesUGaussianCropVolumeComponent()
	{
#if WITH_EDITOR
		UClass* Class = UGaussianCropVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CropGSPoints", &UGaussianCropVolumeComponent::execCropGSPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Crop Control" },
		{ "DisplayName", "Crop New Points In this Box" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianCropVolumeComponent, nullptr, "CropGSPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianCropVolumeComponent);
	UClass* Z_Construct_UClass_UGaussianCropVolumeComponent_NoRegister()
	{
		return UGaussianCropVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGaussianCropVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CropType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CropType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CropTemplate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CropTemplate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCropInfoChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCropInfoChangedDelegate;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UGaussianCropVolumeComponent_CropGSPoints, "CropGSPoints" }, // 734270405
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "GaussianCropVolumeComponent.h" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType_MetaData[] = {
		{ "Category", "Crop Control" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType = { "CropType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianCropVolumeComponent, CropType), Z_Construct_UEnum_GSRuntime_ECropType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType_MetaData), Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType_MetaData) }; // 3988819150
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate_MetaData[] = {
		{ "Category", "Crop Control" },
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate = { "CropTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianCropVolumeComponent, CropTemplate), Z_Construct_UEnum_GSRuntime_ECropTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate_MetaData), Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate_MetaData) }; // 3444823458
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_OnCropInfoChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaussianCropVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_OnCropInfoChangedDelegate = { "OnCropInfoChangedDelegate", nullptr, (EPropertyFlags)0x0010000800080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianCropVolumeComponent, OnCropInfoChangedDelegate), Z_Construct_UDelegateFunction_GSRuntime_GSCropInfoChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_OnCropInfoChangedDelegate_MetaData), Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_OnCropInfoChangedDelegate_MetaData) }; // 3046820141
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_CropTemplate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::NewProp_OnCropInfoChangedDelegate,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianCropVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::ClassParams = {
		&UGaussianCropVolumeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGaussianCropVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UGaussianCropVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianCropVolumeComponent.OuterSingleton, Z_Construct_UClass_UGaussianCropVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGaussianCropVolumeComponent.OuterSingleton;
	}
	template<> GSRUNTIME_API UClass* StaticClass<UGaussianCropVolumeComponent>()
	{
		return UGaussianCropVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianCropVolumeComponent);
	UGaussianCropVolumeComponent::~UGaussianCropVolumeComponent() {}
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::EnumInfo[] = {
		{ ECropType_StaticEnum, TEXT("ECropType"), &Z_Registration_Info_UEnum_ECropType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3988819150U) },
		{ ECropTemplate_StaticEnum, TEXT("ECropTemplate"), &Z_Registration_Info_UEnum_ECropTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444823458U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianCropVolumeComponent, UGaussianCropVolumeComponent::StaticClass, TEXT("UGaussianCropVolumeComponent"), &Z_Registration_Info_UClass_UGaussianCropVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianCropVolumeComponent), 3508825002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_2016169336(TEXT("/Script/GSRuntime"),
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianCropVolumeComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
