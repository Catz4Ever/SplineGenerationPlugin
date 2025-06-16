// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingPlugin/Public/RepeatedMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepeatedMeshActor() {}
// Cross Module References
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARepeatedMeshActor_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARepeatedMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestingPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URepeatedMeshGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARepeatedMeshActor::execGenerateRepeatedMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateRepeatedMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARepeatedMeshActor::execSetSplinePath)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePath(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARepeatedMeshActor::execSetMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_InMesh);
		P_NATIVE_END;
	}
	void ARepeatedMeshActor::StaticRegisterNativesARepeatedMeshActor()
	{
		UClass* Class = ARepeatedMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateRepeatedMeshes", &ARepeatedMeshActor::execGenerateRepeatedMeshes },
			{ "SetMesh", &ARepeatedMeshActor::execSetMesh },
			{ "SetSplinePath", &ARepeatedMeshActor::execSetSplinePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Generator" },
		{ "ModuleRelativePath", "Public/RepeatedMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepeatedMeshActor, nullptr, "GenerateRepeatedMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics
	{
		struct RepeatedMeshActor_eventSetMesh_Parms
		{
			UStaticMesh* InMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RepeatedMeshActor_eventSetMesh_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Generator" },
		{ "Comment", "/** Initializes mesh and spline points */" },
		{ "ModuleRelativePath", "Public/RepeatedMeshActor.h" },
		{ "ToolTip", "Initializes mesh and spline points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepeatedMeshActor, nullptr, "SetMesh", nullptr, nullptr, sizeof(RepeatedMeshActor_eventSetMesh_Parms), Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARepeatedMeshActor_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARepeatedMeshActor_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics
	{
		struct RepeatedMeshActor_eventSetSplinePath_Parms
		{
			TArray<FVector> Points;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RepeatedMeshActor_eventSetSplinePath_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Generator" },
		{ "ModuleRelativePath", "Public/RepeatedMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepeatedMeshActor, nullptr, "SetSplinePath", nullptr, nullptr, sizeof(RepeatedMeshActor_eventSetSplinePath_Parms), Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARepeatedMeshActor_NoRegister()
	{
		return ARepeatedMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ARepeatedMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARepeatedMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARepeatedMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARepeatedMeshActor_GenerateRepeatedMeshes, "GenerateRepeatedMeshes" }, // 1276588489
		{ &Z_Construct_UFunction_ARepeatedMeshActor_SetMesh, "SetMesh" }, // 3698498235
		{ &Z_Construct_UFunction_ARepeatedMeshActor_SetSplinePath, "SetSplinePath" }, // 734940472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARepeatedMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RepeatedMeshActor.h" },
		{ "ModuleRelativePath", "Public/RepeatedMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARepeatedMeshActor_Statics::NewProp_MeshGenerator_MetaData[] = {
		{ "Category", "Repeated Mesh Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RepeatedMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepeatedMeshActor_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARepeatedMeshActor, MeshGenerator), Z_Construct_UClass_URepeatedMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARepeatedMeshActor_Statics::NewProp_MeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARepeatedMeshActor_Statics::NewProp_MeshGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepeatedMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepeatedMeshActor_Statics::NewProp_MeshGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARepeatedMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepeatedMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARepeatedMeshActor_Statics::ClassParams = {
		&ARepeatedMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARepeatedMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARepeatedMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARepeatedMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARepeatedMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARepeatedMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARepeatedMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARepeatedMeshActor, 1323353764);
	template<> TESTINGPLUGIN_API UClass* StaticClass<ARepeatedMeshActor>()
	{
		return ARepeatedMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARepeatedMeshActor(Z_Construct_UClass_ARepeatedMeshActor, &ARepeatedMeshActor::StaticClass, TEXT("/Script/TestingPlugin"), TEXT("ARepeatedMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARepeatedMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
