// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOP_GAME_PROTOTYPE_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOP_GAME_PROTOTYPE_SCharacter_generated_h

#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_RPC_WRAPPERS
#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOP_GAME_PROTOTYPE_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Coop_Game_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOP_GAME_PROTOTYPE_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Coop_Game_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(ASCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ASCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); }


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_13_PROLOG
#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_RPC_WRAPPERS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_INCLASS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Coop_Game_Prototype_Source_Coop_Game_Prototype_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
