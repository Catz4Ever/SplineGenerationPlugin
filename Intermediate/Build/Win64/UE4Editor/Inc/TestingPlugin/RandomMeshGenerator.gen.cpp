// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingPlugin/Public/RandomMeshGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMeshGenerator() {}
// Cross Module References
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URandomMeshGenerator_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URandomMeshGenerator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_TestingPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URandomMeshGenerator::execGenerateMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomMeshGenerator::execSetMeshes)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_NewMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshes(Z_Param_Out_NewMeshes);
		P_NATIVE_END;
	}
	void URandomMeshGenerator::StaticRegisterNativesURandomMeshGenerator()
	{
		UClass* Class = URandomMeshGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMeshes", &URandomMeshGenerator::execGenerateMeshes },
			{ "SetMeshes", &URandomMeshGenerator::execSetMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Generate instances */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Generate instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomMeshGenerator, nullptr, "GenerateMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics
	{
		struct RandomMeshGenerator_eventSetMeshes_Parms
		{
			TArray<UStaticMesh*> NewMeshes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes_Inner = { "NewMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes = { "NewMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomMeshGenerator_eventSetMeshes_Parms, NewMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::NewProp_NewMeshes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Sets the list of meshes to randomly choose from */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Sets the list of meshes to randomly choose from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomMeshGenerator, nullptr, "SetMeshes", nullptr, nullptr, sizeof(RandomMeshGenerator_eventSetMeshes_Parms), Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomMeshGenerator_SetMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomMeshGenerator_SetMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URandomMeshGenerator_NoRegister()
	{
		return URandomMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_URandomMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshesToRandomize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshesToRandomize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshesToRandomize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeXRotation_MetaData[];
#endif
		static void NewProp_bRandomizeXRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeXRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeYRotation_MetaData[];
#endif
		static void NewProp_bRandomizeYRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeYRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeZRotation_MetaData[];
#endif
		static void NewProp_bRandomizeZRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeZRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URandomMeshGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomMeshGenerator_GenerateMeshes, "GenerateMeshes" }, // 3696921762
		{ &Z_Construct_UFunction_URandomMeshGenerator_SetMeshes, "SetMeshes" }, // 2077717287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "RandomMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize_Inner = { "MeshesToRandomize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** List of meshes to randomly choose from */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "List of meshes to randomly choose from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize = { "MeshesToRandomize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMeshGenerator, MeshesToRandomize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distance between each instance */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Distance between each instance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMeshGenerator, Interval), METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Should X axis be randomly rotated? */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Should X axis be randomly rotated?" },
	};
#endif
	void Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation_SetBit(void* Obj)
	{
		((URandomMeshGenerator*)Obj)->bRandomizeXRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation = { "bRandomizeXRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URandomMeshGenerator), &Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Should Y axis be randomly rotated? */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Should Y axis be randomly rotated?" },
	};
#endif
	void Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation_SetBit(void* Obj)
	{
		((URandomMeshGenerator*)Obj)->bRandomizeYRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation = { "bRandomizeYRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URandomMeshGenerator), &Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Should Z axis be randomly rotated? */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Should Z axis be randomly rotated?" },
	};
#endif
	void Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation_SetBit(void* Obj)
	{
		((URandomMeshGenerator*)Obj)->bRandomizeZRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation = { "bRandomizeZRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URandomMeshGenerator), &Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Min scale */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Min scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMeshGenerator, MinScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Max scale */" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
		{ "ToolTip", "Max scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMeshGenerator, MaxScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MaxScale_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents_Inner = { "GeneratedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RandomMeshGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents = { "GeneratedComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMeshGenerator, GeneratedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomMeshGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MeshesToRandomize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeXRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeYRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_bRandomizeZRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMeshGenerator_Statics::NewProp_GeneratedComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomMeshGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URandomMeshGenerator_Statics::ClassParams = {
		&URandomMeshGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URandomMeshGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URandomMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomMeshGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URandomMeshGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URandomMeshGenerator, 530612073);
	template<> TESTINGPLUGIN_API UClass* StaticClass<URandomMeshGenerator>()
	{
		return URandomMeshGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URandomMeshGenerator(Z_Construct_UClass_URandomMeshGenerator, &URandomMeshGenerator::StaticClass, TEXT("/Script/TestingPlugin"), TEXT("URandomMeshGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomMeshGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
