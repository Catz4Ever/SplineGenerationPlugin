// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef TESTINGPLUGIN_RandomMeshGenerator_generated_h
#error "RandomMeshGenerator.generated.h already included, missing '#pragma once' in RandomMeshGenerator.h"
#endif
#define TESTINGPLUGIN_RandomMeshGenerator_generated_h

#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_SPARSE_DATA
#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateMeshes); \
	DECLARE_FUNCTION(execSetMeshes);


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateMeshes); \
	DECLARE_FUNCTION(execSetMeshes);


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURandomMeshGenerator(); \
	friend struct Z_Construct_UClass_URandomMeshGenerator_Statics; \
public: \
	DECLARE_CLASS(URandomMeshGenerator, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingPlugin"), NO_API) \
	DECLARE_SERIALIZER(URandomMeshGenerator)


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesURandomMeshGenerator(); \
	friend struct Z_Construct_UClass_URandomMeshGenerator_Statics; \
public: \
	DECLARE_CLASS(URandomMeshGenerator, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingPlugin"), NO_API) \
	DECLARE_SERIALIZER(URandomMeshGenerator)


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomMeshGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomMeshGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomMeshGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomMeshGenerator(URandomMeshGenerator&&); \
	NO_API URandomMeshGenerator(const URandomMeshGenerator&); \
public:


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomMeshGenerator(URandomMeshGenerator&&); \
	NO_API URandomMeshGenerator(const URandomMeshGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomMeshGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URandomMeshGenerator)


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeneratedComponents() { return STRUCT_OFFSET(URandomMeshGenerator, GeneratedComponents); }


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_10_PROLOG
#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_SPARSE_DATA \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_RPC_WRAPPERS \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_INCLASS \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_SPARSE_DATA \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTINGPLUGIN_API UClass* StaticClass<class URandomMeshGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TestingPlugin_Source_TestingPlugin_Public_RandomMeshGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
