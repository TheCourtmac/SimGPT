// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSImporter/Public/GSWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSWindow() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	GSIMPORTER_API UClass* Z_Construct_UClass_UGSWindow();
	GSIMPORTER_API UClass* Z_Construct_UClass_UGSWindow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSImporter();
// End Cross Module References
	DEFINE_FUNCTION(UGSWindow::execImageToMP4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TrainingToolsDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputMP4Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImageToMP4(Z_Param_TrainingToolsDirectory,Z_Param_ImagePath,Z_Param_OutputMP4Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::execGetImageNumFromMP4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TrainingToolsDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_MP4Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetImageNumFromMP4(Z_Param_TrainingToolsDirectory,Z_Param_MP4Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::execstartTraining)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TrainingToolsDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_ResourceFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutPutDirectory);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreImageIteration);
		P_GET_UBOOL(Z_Param_IsTest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startTraining(Z_Param_TrainingToolsDirectory,Z_Param_ResourceFile,Z_Param_OutPutDirectory,Z_Param_PreImageIteration,Z_Param_IsTest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::execSetTrainingResource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_defaultOpenDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SetTrainingResource(Z_Param_defaultOpenDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::execSelectDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultOpenDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SelectDirectory(Z_Param_DefaultOpenDirectory,Z_Param_DialogTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::execlodGSModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->lodGSModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSWindow::exectest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->test();
		P_NATIVE_END;
	}
	void UGSWindow::StaticRegisterNativesUGSWindow()
	{
		UClass* Class = UGSWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetImageNumFromMP4", &UGSWindow::execGetImageNumFromMP4 },
			{ "ImageToMP4", &UGSWindow::execImageToMP4 },
			{ "lodGSModel", &UGSWindow::execlodGSModel },
			{ "SelectDirectory", &UGSWindow::execSelectDirectory },
			{ "SetTrainingResource", &UGSWindow::execSetTrainingResource },
			{ "startTraining", &UGSWindow::execstartTraining },
			{ "test", &UGSWindow::exectest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics
	{
		struct GSWindow_eventGetImageNumFromMP4_Parms
		{
			FString TrainingToolsDirectory;
			FString MP4Path;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrainingToolsDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MP4Path;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_TrainingToolsDirectory = { "TrainingToolsDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventGetImageNumFromMP4_Parms, TrainingToolsDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_MP4Path = { "MP4Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventGetImageNumFromMP4_Parms, MP4Path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventGetImageNumFromMP4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_TrainingToolsDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_MP4Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "//\xe4\xbb\x8eMP4\xe6\x96\x87\xe4\xbb\xb6\xe8\x8e\xb7\xe5\x8f\x96\xe5\x9b\xbe\xe5\x83\x8f\xe5\xb8\xa7\xe6\x95\xb0\xef\xbc\x88\xe9\x99\x84\xe5\xb8\xa6\xe6\xa3\x80\xe6\x9f\xa5\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x89\n" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe4\xbb\x8eMP4\xe6\x96\x87\xe4\xbb\xb6\xe8\x8e\xb7\xe5\x8f\x96\xe5\x9b\xbe\xe5\x83\x8f\xe5\xb8\xa7\xe6\x95\xb0\xef\xbc\x88\xe9\x99\x84\xe5\xb8\xa6\xe6\xa3\x80\xe6\x9f\xa5\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x89" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "GetImageNumFromMP4", nullptr, nullptr, Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::GSWindow_eventGetImageNumFromMP4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::GSWindow_eventGetImageNumFromMP4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics
	{
		struct GSWindow_eventImageToMP4_Parms
		{
			FString TrainingToolsDirectory;
			FString ImagePath;
			FString OutputMP4Path;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrainingToolsDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputMP4Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_TrainingToolsDirectory = { "TrainingToolsDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventImageToMP4_Parms, TrainingToolsDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventImageToMP4_Parms, ImagePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_OutputMP4Path = { "OutputMP4Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventImageToMP4_Parms, OutputMP4Path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_TrainingToolsDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::NewProp_OutputMP4Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "//\xe5\xb0\x86\xe5\x9b\xbe\xe7\x89\x87\xe5\xba\x8f\xe5\x88\x97\xe8\xbd\xac\xe4\xb8\xbaMP4\xe6\x96\x87\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe5\x9b\xbe\xe7\x89\x87\xe5\xba\x8f\xe5\x88\x97\xe8\xbd\xac\xe4\xb8\xbaMP4\xe6\x96\x87\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "ImageToMP4", nullptr, nullptr, Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::GSWindow_eventImageToMP4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::GSWindow_eventImageToMP4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSWindow_ImageToMP4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_ImageToMP4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_lodGSModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_lodGSModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbdPLY\xe6\xa8\xa1\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbdPLY\xe6\xa8\xa1\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_lodGSModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "lodGSModel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_lodGSModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_lodGSModel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSWindow_lodGSModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_lodGSModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics
	{
		struct GSWindow_eventSelectDirectory_Parms
		{
			FString DefaultOpenDirectory;
			FString DialogTitle;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOpenDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_DefaultOpenDirectory = { "DefaultOpenDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventSelectDirectory_Parms, DefaultOpenDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventSelectDirectory_Parms, DialogTitle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventSelectDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_DefaultOpenDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "/*\n\x09\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x9a\xe6\x89\x93\xe5\xbc\x80windows\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe7\x9b\xae\xe5\xbd\x95\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e\n\x09\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x9a\n\x09\x09""DefaultOpenDirectory\xef\xbc\x9a\xe9\x80\x89\xe6\x8b\xa9\xe6\x96\x87\xe4\xbb\xb6\xe7\xaa\x97\xe5\x8f\xa3\xe9\xbb\x98\xe8\xae\xa4\xe7\x9a\x84\xe6\x89\x93\xe5\xbc\x80\xe7\x9b\xae\xe5\xbd\x95\n\x09\x09""DialogTitle\xef\xbc\x9a\xe9\x80\x89\xe6\x8b\xa9\xe6\x96\x87\xe4\xbb\xb6\xe7\xaa\x97\xe5\x8f\xa3\xe7\x9a\x84\xe4\xbc\x9a\xe8\xaf\x9d\xe6\xa0\x87\xe9\xa2\x98\n\x09*/" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x9a\xe6\x89\x93\xe5\xbc\x80windows\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe7\x9b\xae\xe5\xbd\x95\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e\n\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x9a\n        DefaultOpenDirectory\xef\xbc\x9a\xe9\x80\x89\xe6\x8b\xa9\xe6\x96\x87\xe4\xbb\xb6\xe7\xaa\x97\xe5\x8f\xa3\xe9\xbb\x98\xe8\xae\xa4\xe7\x9a\x84\xe6\x89\x93\xe5\xbc\x80\xe7\x9b\xae\xe5\xbd\x95\n        DialogTitle\xef\xbc\x9a\xe9\x80\x89\xe6\x8b\xa9\xe6\x96\x87\xe4\xbb\xb6\xe7\xaa\x97\xe5\x8f\xa3\xe7\x9a\x84\xe4\xbc\x9a\xe8\xaf\x9d\xe6\xa0\x87\xe9\xa2\x98" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "SelectDirectory", nullptr, nullptr, Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::GSWindow_eventSelectDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::GSWindow_eventSelectDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSWindow_SelectDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_SelectDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics
	{
		struct GSWindow_eventSetTrainingResource_Parms
		{
			FString defaultOpenDirectory;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_defaultOpenDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::NewProp_defaultOpenDirectory = { "defaultOpenDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventSetTrainingResource_Parms, defaultOpenDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventSetTrainingResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::NewProp_defaultOpenDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "//\xe6\x89\x93\xe5\xbc\x80windows\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x88.mp4\xef\xbc\x89\n" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80windows\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x88.mp4\xef\xbc\x89" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "SetTrainingResource", nullptr, nullptr, Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::GSWindow_eventSetTrainingResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::GSWindow_eventSetTrainingResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSWindow_SetTrainingResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_SetTrainingResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_startTraining_Statics
	{
		struct GSWindow_eventstartTraining_Parms
		{
			FString TrainingToolsDirectory;
			FString ResourceFile;
			FString OutPutDirectory;
			int32 PreImageIteration;
			bool IsTest;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrainingToolsDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResourceFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPutDirectory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreImageIteration;
		static void NewProp_IsTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_TrainingToolsDirectory = { "TrainingToolsDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventstartTraining_Parms, TrainingToolsDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_ResourceFile = { "ResourceFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventstartTraining_Parms, ResourceFile), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_OutPutDirectory = { "OutPutDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventstartTraining_Parms, OutPutDirectory), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_PreImageIteration = { "PreImageIteration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSWindow_eventstartTraining_Parms, PreImageIteration), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_IsTest_SetBit(void* Obj)
	{
		((GSWindow_eventstartTraining_Parms*)Obj)->IsTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_IsTest = { "IsTest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSWindow_eventstartTraining_Parms), &Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_IsTest_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSWindow_startTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_TrainingToolsDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_ResourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_OutPutDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_PreImageIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSWindow_startTraining_Statics::NewProp_IsTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_startTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "Comment", "/*\n\x09\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x9a\xe8\xb0\x83\xe7\x94\xa8\xe8\xae\xad\xe7\xbb\x83\xe5\xb7\xa5\xe5\x85\xb7\xef\xbc\x8c\xe5\xbc\x80\xe5\xa7\x8b\xe8\xae\xad\xe7\xbb\x83\n\x09\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x9a\n\x09\x09TrainingToolsDirectory\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe5\xb7\xa5\xe5\x85\xb7\xe7\x9a\x84\xe5\x82\xa8\xe5\xad\x98\xe7\x9b\xae\xe5\xbd\x95\n\x09\x09ResourceFile\xef\xbc\x9a\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xad\xe7\xbb\x83\xe7\x9a\x84MP4\xe8\xb5\x84\xe6\xba\x90\n\x09\x09OutPutDirectory\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88.ply\xef\xbc\x89\xe5\x82\xa8\xe5\xad\x98\xe8\xb7\xaf\xe5\xbe\x84\n\x09\x09PreImageIteration\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\x80\xe5\xbc\xa0\xe5\x9b\xbe\xe7\x89\x87\xe7\x9a\x84\xe8\xbf\xad\xe4\xbb\xa3\xe6\xac\xa1\xe6\x95\xb0\n\x09*/" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
		{ "ToolTip", "\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x9a\xe8\xb0\x83\xe7\x94\xa8\xe8\xae\xad\xe7\xbb\x83\xe5\xb7\xa5\xe5\x85\xb7\xef\xbc\x8c\xe5\xbc\x80\xe5\xa7\x8b\xe8\xae\xad\xe7\xbb\x83\n\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x9a\n        TrainingToolsDirectory\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe5\xb7\xa5\xe5\x85\xb7\xe7\x9a\x84\xe5\x82\xa8\xe5\xad\x98\xe7\x9b\xae\xe5\xbd\x95\n        ResourceFile\xef\xbc\x9a\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xad\xe7\xbb\x83\xe7\x9a\x84MP4\xe8\xb5\x84\xe6\xba\x90\n        OutPutDirectory\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88.ply\xef\xbc\x89\xe5\x82\xa8\xe5\xad\x98\xe8\xb7\xaf\xe5\xbe\x84\n        PreImageIteration\xef\xbc\x9a\xe8\xae\xad\xe7\xbb\x83\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\x80\xe5\xbc\xa0\xe5\x9b\xbe\xe7\x89\x87\xe7\x9a\x84\xe8\xbf\xad\xe4\xbb\xa3\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_startTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "startTraining", nullptr, nullptr, Z_Construct_UFunction_UGSWindow_startTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_startTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSWindow_startTraining_Statics::GSWindow_eventstartTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_startTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_startTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_startTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSWindow_startTraining_Statics::GSWindow_eventstartTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSWindow_startTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_startTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSWindow_test_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSWindow_test_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSWindowInterface" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSWindow_test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSWindow, nullptr, "test", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSWindow_test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSWindow_test_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSWindow_test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSWindow_test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSWindow);
	UClass* Z_Construct_UClass_UGSWindow_NoRegister()
	{
		return UGSWindow::StaticClass();
	}
	struct Z_Construct_UClass_UGSWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GSImporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSWindow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSWindow_GetImageNumFromMP4, "GetImageNumFromMP4" }, // 3346242009
		{ &Z_Construct_UFunction_UGSWindow_ImageToMP4, "ImageToMP4" }, // 1427910693
		{ &Z_Construct_UFunction_UGSWindow_lodGSModel, "lodGSModel" }, // 3457193435
		{ &Z_Construct_UFunction_UGSWindow_SelectDirectory, "SelectDirectory" }, // 3712466350
		{ &Z_Construct_UFunction_UGSWindow_SetTrainingResource, "SetTrainingResource" }, // 2972741735
		{ &Z_Construct_UFunction_UGSWindow_startTraining, "startTraining" }, // 1031634990
		{ &Z_Construct_UFunction_UGSWindow_test, "test" }, // 1857313264
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSWindow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GSWindow.h" },
		{ "ModuleRelativePath", "Public/GSWindow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSWindow_Statics::ClassParams = {
		&UGSWindow::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSWindow_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSWindow()
	{
		if (!Z_Registration_Info_UClass_UGSWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSWindow.OuterSingleton, Z_Construct_UClass_UGSWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSWindow.OuterSingleton;
	}
	template<> GSIMPORTER_API UClass* StaticClass<UGSWindow>()
	{
		return UGSWindow::StaticClass();
	}
	UGSWindow::UGSWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSWindow);
	UGSWindow::~UGSWindow() {}
	struct Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSWindow, UGSWindow::StaticClass, TEXT("UGSWindow"), &Z_Registration_Info_UClass_UGSWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSWindow), 2924775861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSWindow_h_959414713(TEXT("/Script/GSImporter"),
		Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_zyl_object_project_nerf_output_pluginPack_5_3_V15_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSImporter_Public_GSWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
