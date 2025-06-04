// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingPlugin/Public/RandomMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMeshActor() {}
// Cross Module References
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARandomMeshActor_NoRegister();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_ARandomMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestingPlugin();
	TESTINGPLUGIN_API UClass* Z_Construct_UClass_URandomMeshGenerator_NoRegister();
// End Cross Module References
	void ARandomMeshActor::StaticRegisterNativesARandomMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ARandomMeshActor_NoRegister()
	{
		return ARandomMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ARandomMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomMeshGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandomMeshGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RandomMeshActor.h" },
		{ "ModuleRelativePath", "Public/RandomMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMeshActor_Statics::NewProp_RandomMeshGenerator_MetaData[] = {
		{ "Category", "Random Mesh" },
		{ "Comment", "/** The spline + random instance generator component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RandomMeshActor.h" },
		{ "ToolTip", "The spline + random instance generator component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomMeshActor_Statics::NewProp_RandomMeshGenerator = { "RandomMeshGenerator", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMeshActor, RandomMeshGenerator), Z_Construct_UClass_URandomMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARandomMeshActor_Statics::NewProp_RandomMeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMeshActor_Statics::NewProp_RandomMeshGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMeshActor_Statics::NewProp_RandomMeshGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomMeshActor_Statics::ClassParams = {
		&ARandomMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomMeshActor, 4141933102);
	template<> TESTINGPLUGIN_API UClass* StaticClass<ARandomMeshActor>()
	{
		return ARandomMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomMeshActor(Z_Construct_UClass_ARandomMeshActor, &ARandomMeshActor::StaticClass, TEXT("/Script/TestingPlugin"), TEXT("ARandomMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
