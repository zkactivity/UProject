// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMMAIN_MMMainCharacter_generated_h
#error "MMMainCharacter.generated.h already included, missing '#pragma once' in MMMainCharacter.h"
#endif
#define MMMAIN_MMMainCharacter_generated_h

#define MMMain_Source_MMMain_MMMainCharacter_h_14_RPC_WRAPPERS
#define MMMain_Source_MMMain_MMMainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MMMain_Source_MMMain_MMMainCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMMMainCharacter(); \
	friend MMMAIN_API class UClass* Z_Construct_UClass_AMMMainCharacter(); \
public: \
	DECLARE_CLASS(AMMMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMMain"), NO_API) \
	DECLARE_SERIALIZER(AMMMainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMMain_Source_MMMain_MMMainCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMMMainCharacter(); \
	friend MMMAIN_API class UClass* Z_Construct_UClass_AMMMainCharacter(); \
public: \
	DECLARE_CLASS(AMMMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMMain"), NO_API) \
	DECLARE_SERIALIZER(AMMMainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMMain_Source_MMMain_MMMainCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMMMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMMMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMMainCharacter(AMMMainCharacter&&); \
	NO_API AMMMainCharacter(const AMMMainCharacter&); \
public:


#define MMMain_Source_MMMain_MMMainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMMainCharacter(AMMMainCharacter&&); \
	NO_API AMMMainCharacter(const AMMMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMMMainCharacter)


#define MMMain_Source_MMMain_MMMainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMMMainCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMMMainCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMMMainCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMMMainCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMMMainCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMMMainCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMMMainCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMMMainCharacter, L_MotionController); }


#define MMMain_Source_MMMain_MMMainCharacter_h_11_PROLOG
#define MMMain_Source_MMMain_MMMainCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMMain_Source_MMMain_MMMainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MMMain_Source_MMMain_MMMainCharacter_h_14_RPC_WRAPPERS \
	MMMain_Source_MMMain_MMMainCharacter_h_14_INCLASS \
	MMMain_Source_MMMain_MMMainCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMMain_Source_MMMain_MMMainCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMMain_Source_MMMain_MMMainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MMMain_Source_MMMain_MMMainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MMMain_Source_MMMain_MMMainCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MMMain_Source_MMMain_MMMainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMMain_Source_MMMain_MMMainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
