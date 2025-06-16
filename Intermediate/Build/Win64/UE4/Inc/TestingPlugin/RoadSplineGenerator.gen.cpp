// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingPlugin/Public/RoadSplineGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadSplineGenerator() {}
// Cross Module References
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URoadSplineGenerator_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URoadSplineGenerator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_TestingPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URoadSplineGenerator::execGenerateRoadMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateRoadMeshes();
		P_NATIVE_END;
	}
	void URoadSplineGenerator::StaticRegisterNativesURoadSplineGenerator()
	{
		UClass* Class = URoadSplineGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateRoadMeshes", &URoadSplineGenerator::execGenerateRoadMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Road Generator" },
		{ "ModuleRelativePath", "Public/RoadSplineGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoadSplineGenerator, nullptr, "GenerateRoadMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URoadSplineGenerator_NoRegister()
	{
		return URoadSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_URoadSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoadSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoadSplineGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadSplineGenerator_GenerateRoadMeshes, "GenerateRoadMeshes" }, // 2321614680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "RoadSplineGenerator.h" },
		{ "ModuleRelativePath", "Public/RoadSplineGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_SectionLength_MetaData[] = {
		{ "Category", "Road Generator" },
		{ "ModuleRelativePath", "Public/RoadSplineGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_SectionLength = { "SectionLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoadSplineGenerator, SectionLength), METADATA_PARAMS(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_SectionLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_SectionLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_RoadMesh_MetaData[] = {
		{ "Category", "Road Generator" },
		{ "ModuleRelativePath", "Public/RoadSplineGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_RoadMesh = { "RoadMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoadSplineGenerator, RoadMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_RoadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_RoadMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes_Inner = { "GeneratedMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadSplineGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes = { "GeneratedMeshes", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoadSplineGenerator, GeneratedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoadSplineGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_SectionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_RoadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadSplineGenerator_Statics::NewProp_GeneratedMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoadSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadSplineGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoadSplineGenerator_Statics::ClassParams = {
		&URoadSplineGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoadSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineGenerator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoadSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoadSplineGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoadSplineGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoadSplineGenerator, 3736580720);
	template<> TESTINGPLUGIN_API UClass* StaticClass<URoadSplineGenerator>()
	{
		return URoadSplineGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoadSplineGenerator(Z_Construct_UClass_URoadSplineGenerator, &URoadSplineGenerator::StaticClass, TEXT("/Script/TestingPlugin"), TEXT("URoadSplineGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoadSplineGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
