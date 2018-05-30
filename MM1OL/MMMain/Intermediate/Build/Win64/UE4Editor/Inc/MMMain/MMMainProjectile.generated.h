// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MMMAIN_MMMainProjectile_generated_h
#error "MMMainProjectile.generated.h already included, missing '#pragma once' in MMMainProjectile.h"
#endif
#define MMMAIN_MMMainProjectile_generated_h

#define MMMain_Source_MMMain_MMMainProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MMMain_Source_MMMain_MMMainProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MMMain_Source_MMMain_MMMainProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMMMainProjectile(); \
	friend MMMAIN_API class UClass* Z_Construct_UClass_AMMMainProjectile(); \
public: \
	DECLARE_CLASS(AMMMainProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMMain"), NO_API) \
	DECLARE_SERIALIZER(AMMMainProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MMMain_Source_MMMain_MMMainProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMMMainProjectile(); \
	friend MMMAIN_API class UClass* Z_Construct_UClass_AMMMainProjectile(); \
public: \
	DECLARE_CLASS(AMMMainProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMMain"), NO_API) \
	DECLARE_SERIALIZER(AMMMainProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MMMain_Source_MMMain_MMMainProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMMMainProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMMMainProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMMainProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMMainProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMMainProjectile(AMMMainProjectile&&); \
	NO_API AMMMainProjectile(const AMMMainProjectile&); \
public:


#define MMMain_Source_MMMain_MMMainProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMMainProjectile(AMMMainProjectile&&); \
	NO_API AMMMainProjectile(const AMMMainProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMMainProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMMainProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMMMainProjectile)


#define MMMain_Source_MMMain_MMMainProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMMMainProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMMMainProjectile, ProjectileMovement); }


#define MMMain_Source_MMMain_MMMainProjectile_h_9_PROLOG
#define MMMain_Source_MMMain_MMMainProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMMain_Source_MMMain_MMMainProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MMMain_Source_MMMain_MMMainProjectile_h_12_RPC_WRAPPERS \
	MMMain_Source_MMMain_MMMainProjectile_h_12_INCLASS \
	MMMain_Source_MMMain_MMMainProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMMain_Source_MMMain_MMMainProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMMain_Source_MMMain_MMMainProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MMMain_Source_MMMain_MMMainProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MMMain_Source_MMMain_MMMainProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MMMain_Source_MMMain_MMMainProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMMain_Source_MMMain_MMMainProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
