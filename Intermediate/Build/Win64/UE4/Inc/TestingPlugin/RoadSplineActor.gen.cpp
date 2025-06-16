// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingPlugin/Public/RoadSplineActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadSplineActor() {}
// Cross Module References
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARoadSplineActor_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARoadSplineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestingPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URoadSplineGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARoadSplineActor::execInitializeRoad)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeRoad(Z_Param_Out_InPoints,Z_Param_InMesh);
		P_NATIVE_END;
	}
	void ARoadSplineActor::StaticRegisterNativesARoadSplineActor()
	{
		UClass* Class = ARoadSplineActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeRoad", &ARoadSplineActor::execInitializeRoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics
	{
		struct RoadSplineActor_eventInitializeRoad_Parms
		{
			TArray<FVector> InPoints;
			UStaticMesh* InMesh;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoadSplineActor_eventInitializeRoad_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoadSplineActor_eventInitializeRoad_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Road" },
		{ "Comment", "/**\n     * Sets up spline points and assigns the mesh, then auto-generates the road\n     */" },
		{ "ModuleRelativePath", "Public/RoadSplineActor.h" },
		{ "ToolTip", "Sets up spline points and assigns the mesh, then auto-generates the road" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoadSplineActor, nullptr, "InitializeRoad", nullptr, nullptr, sizeof(RoadSplineActor_eventInitializeRoad_Parms), Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoadSplineActor_InitializeRoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoadSplineActor_InitializeRoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoadSplineActor_NoRegister()
	{
		return ARoadSplineActor::StaticClass();
	}
	struct Z_Construct_UClass_ARoadSplineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadSplineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoadSplineActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadSplineActor_InitializeRoad, "InitializeRoad" }, // 157790513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSplineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoadSplineActor.h" },
		{ "ModuleRelativePath", "Public/RoadSplineActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadGenerator_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "/** The spline-generator component that builds the meshes */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadSplineActor.h" },
		{ "ToolTip", "The spline-generator component that builds the meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadGenerator = { "RoadGenerator", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadSplineActor, RoadGenerator), Z_Construct_UClass_URoadSplineGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadMesh_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "/** Mesh to use for each spline segment */" },
		{ "ModuleRelativePath", "Public/RoadSplineActor.h" },
		{ "ToolTip", "Mesh to use for each spline segment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadMesh = { "RoadMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadSplineActor, RoadMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_SectionLength_MetaData[] = {
		{ "Category", "Road" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Length (in world units) of each segment */" },
		{ "ModuleRelativePath", "Public/RoadSplineActor.h" },
		{ "ToolTip", "Length (in world units) of each segment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_SectionLength = { "SectionLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadSplineActor, SectionLength), METADATA_PARAMS(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_SectionLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_SectionLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadSplineActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_RoadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadSplineActor_Statics::NewProp_SectionLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadSplineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadSplineActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoadSplineActor_Statics::ClassParams = {
		&ARoadSplineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoadSplineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSplineActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoadSplineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSplineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadSplineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoadSplineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoadSplineActor, 698401766);
	template<> TESTINGPLUGIN_API UClass* StaticClass<ARoadSplineActor>()
	{
		return ARoadSplineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoadSplineActor(Z_Construct_UClass_ARoadSplineActor, &ARoadSplineActor::StaticClass, TEXT("/Script/TestingPlugin"), TEXT("ARoadSplineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadSplineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
