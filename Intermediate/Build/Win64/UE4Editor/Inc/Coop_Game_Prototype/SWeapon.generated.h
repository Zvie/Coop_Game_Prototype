// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOP_GAME_PROTOTYPE_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOP_GAME_PROTOTYPE_SWeapon_generated_h

#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOP_GAME_PROTOTYPE_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Coop_Game_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOP_GAME_PROTOTYPE_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Coop_Game_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocket() { return STRUCT_OFFSET(ASWeapon, MuzzleSocket); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ASWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(ASWeapon, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ASWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ASWeapon, FireCamShake); }


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_15_PROLOG
#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_RPC_WRAPPERS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_INCLASS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_INCLASS_NO_PURE_DECLS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
