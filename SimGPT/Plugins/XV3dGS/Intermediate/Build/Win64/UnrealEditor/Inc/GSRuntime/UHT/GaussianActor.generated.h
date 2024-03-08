// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef GSRUNTIME_GaussianActor_generated_h
#error "GaussianActor.generated.h already included, missing '#pragma once' in GaussianActor.h"
#endif
#define GSRUNTIME_GaussianActor_generated_h

#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_SPARSE_DATA
#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTestHandler); \
	DECLARE_FUNCTION(execOnCropInfoChangedHandler); \
	DECLARE_FUNCTION(execreset_niagara);


#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ACCESSORS
#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AGaussianActor, NO_API)


#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaussianActor(); \
	friend struct Z_Construct_UClass_AGaussianActor_Statics; \
public: \
	DECLARE_CLASS(AGaussianActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GSRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGaussianActor) \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ARCHIVESERIALIZER


#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaussianActor(AGaussianActor&&); \
	NO_API AGaussianActor(const AGaussianActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaussianActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaussianActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaussianActor)


#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_30_PROLOG
#define FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_SPARSE_DATA \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ACCESSORS \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_INCLASS_NO_PURE_DECLS \
	FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GSRUNTIME_API UClass* StaticClass<class AGaussianActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h


#define FOREACH_ENUM_EGAUSSIANLODTVISTYPE(op) \
	op(EGaussianLodTVisType::LodVisSelected) 

enum class EGaussianLodTVisType : uint8;
template<> struct TIsUEnumClass<EGaussianLodTVisType> { enum { Value = true }; };
template<> GSRUNTIME_API UEnum* StaticEnum<EGaussianLodTVisType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
