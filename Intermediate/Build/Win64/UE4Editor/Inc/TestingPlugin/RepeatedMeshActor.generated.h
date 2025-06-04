// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UStaticMesh;
#ifdef TESTINGPLUGIN_RepeatedMeshActor_generated_h
#error "RepeatedMeshActor.generated.h already included, missing '#pragma once' in RepeatedMeshActor.h"
#endif
#define TESTINGPLUGIN_RepeatedMeshActor_generated_h

#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_SPARSE_DATA
#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateRepeatedMeshes); \
	DECLARE_FUNCTION(execSetSplinePath); \
	DECLARE_FUNCTION(execSetMesh);


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateRepeatedMeshes); \
	DECLARE_FUNCTION(execSetSplinePath); \
	DECLARE_FUNCTION(execSetMesh);


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARepeatedMeshActor(); \
	friend struct Z_Construct_UClass_ARepeatedMeshActor_Statics; \
public: \
	DECLARE_CLASS(ARepeatedMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARepeatedMeshActor)


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesARepeatedMeshActor(); \
	friend struct Z_Construct_UClass_ARepeatedMeshActor_Statics; \
public: \
	DECLARE_CLASS(ARepeatedMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARepeatedMeshActor)


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARepeatedMeshActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARepeatedMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepeatedMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepeatedMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARepeatedMeshActor(ARepeatedMeshActor&&); \
	NO_API ARepeatedMeshActor(const ARepeatedMeshActor&); \
public:


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARepeatedMeshActor(ARepeatedMeshActor&&); \
	NO_API ARepeatedMeshActor(const ARepeatedMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepeatedMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepeatedMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARepeatedMeshActor)


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshGenerator() { return STRUCT_OFFSET(ARepeatedMeshActor, MeshGenerator); }


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_8_PROLOG
#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_PRIVATE_PROPERTY_OFFSET \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_SPARSE_DATA \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_RPC_WRAPPERS \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_INCLASS \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_PRIVATE_PROPERTY_OFFSET \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_SPARSE_DATA \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_INCLASS_NO_PURE_DECLS \
	SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTINGPLUGIN_API UClass* StaticClass<class ARepeatedMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SplineTesting2EB_Plugins_TestingPlugin_Source_TestingPlugin_Public_RepeatedMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
