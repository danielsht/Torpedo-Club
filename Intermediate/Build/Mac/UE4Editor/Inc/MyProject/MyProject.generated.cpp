// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "MyProject.h"
#include "GeneratedCppIncludes.h"
#include "MyProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MyProject() {}
	void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
	{
	}
	IMPLEMENT_CLASS(AMyProjectGameMode, 379002522);
	void AMyProjectHud::StaticRegisterNativesAMyProjectHud()
	{
	}
	IMPLEMENT_CLASS(AMyProjectHud, 3145720737);
	void AMyProjectPawn::StaticRegisterNativesAMyProjectPawn()
	{
	}
	IMPLEMENT_CLASS(AMyProjectPawn, 786742836);
	void UMyProjectWheelFront::StaticRegisterNativesUMyProjectWheelFront()
	{
	}
	IMPLEMENT_CLASS(UMyProjectWheelFront, 143833477);
	void UMyProjectWheelRear::StaticRegisterNativesUMyProjectWheelRear()
	{
	}
	IMPLEMENT_CLASS(UMyProjectWheelRear, 246850985);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AWheeledVehicle();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API class UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UVehicleWheel();

	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectHud_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectHud();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectPawn();
	MYPROJECT_API class UClass* Z_Construct_UClass_UMyProjectWheelFront_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_UMyProjectWheelFront();
	MYPROJECT_API class UClass* Z_Construct_UClass_UMyProjectWheelRear_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_UMyProjectWheelRear();
	MYPROJECT_API class UPackage* Z_Construct_UPackage__Script_MyProject();
	UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister()
	{
		return AMyProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameMode(Z_Construct_UClass_AMyProjectGameMode, &AMyProjectGameMode::StaticClass, TEXT("AMyProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
	UClass* Z_Construct_UClass_AMyProjectHud_NoRegister()
	{
		return AMyProjectHud::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectHud()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectHud::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_HUDFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDFont"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HUDFont, AMyProjectHud), 0x0010000000000000, Z_Construct_UClass_UFont_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ModuleRelativePath"), TEXT("MyProjectHud.h"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ToolTip"), TEXT("Font used to render the vehicle info"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectHud(Z_Construct_UClass_AMyProjectHud, &AMyProjectHud::StaticClass, TEXT("AMyProjectHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectHud);
	UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister()
	{
		return AMyProjectPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWheeledVehicle();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInReverseGear, AMyProjectPawn, bool);
				UProperty* NewProp_bInReverseGear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInReverseGear"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInReverseGear, AMyProjectPawn), 0x0010000000030015, CPP_BOOL_PROPERTY_BITMASK(bInReverseGear, AMyProjectPawn), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInCarCameraActive, AMyProjectPawn, bool);
				UProperty* NewProp_bInCarCameraActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInCarCameraActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInCarCameraActive, AMyProjectPawn), 0x0010000000030015, CPP_BOOL_PROPERTY_BITMASK(bInCarCameraActive, AMyProjectPawn), sizeof(bool), true);
				UProperty* NewProp_GearDisplayReverseColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayReverseColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GearDisplayReverseColor, AMyProjectPawn), 0x0010000000030015, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_GearDisplayColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GearDisplayColor, AMyProjectPawn), 0x0010000000030015, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_GearDisplayString = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayString"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(GearDisplayString, AMyProjectPawn), 0x0010000000030015);
				UProperty* NewProp_SpeedDisplayString = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedDisplayString"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(SpeedDisplayString, AMyProjectPawn), 0x0010000000030015);
				UProperty* NewProp_EngineSoundComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EngineSoundComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EngineSoundComponent, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_InCarGear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InCarGear"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InCarGear, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_InCarSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InCarSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InCarSpeed, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_InternalCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InternalCamera, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_InternalCameraBase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalCameraBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InternalCameraBase, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_SpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArm, AMyProjectPawn), 0x00400000000b001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("ToolTip"), TEXT("Are we in reverse gear"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("ToolTip"), TEXT("Are we using incar camera"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("ToolTip"), TEXT("The color of the incar gear text when in reverse"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("ToolTip"), TEXT("The color of the incar gear text in forward gears"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("ToolTip"), TEXT("The current gear as a string (R,N, 1,2 etc)"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("ToolTip"), TEXT("The current speed as a string eg 10 km/h"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("ToolTip"), TEXT("Audio component for the engine sound"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("ToolTip"), TEXT("Text component for the In-Car gear"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("ToolTip"), TEXT("Text component for the In-Car speed"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("ToolTip"), TEXT("Camera component for the In-Car view"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("ToolTip"), TEXT("SCene component for the In-Car view origin"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("ToolTip"), TEXT("Camera component that will be our viewpoint"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ModuleRelativePath"), TEXT("MyProjectPawn.h"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ToolTip"), TEXT("Spring arm that will offset the camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectPawn(Z_Construct_UClass_AMyProjectPawn, &AMyProjectPawn::StaticClass, TEXT("AMyProjectPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectPawn);
	UClass* Z_Construct_UClass_UMyProjectWheelFront_NoRegister()
	{
		return UMyProjectWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyProjectWheelFront()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVehicleWheel();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = UMyProjectWheelFront::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectWheelFront.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectWheelFront.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyProjectWheelFront(Z_Construct_UClass_UMyProjectWheelFront, &UMyProjectWheelFront::StaticClass, TEXT("UMyProjectWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProjectWheelFront);
	UClass* Z_Construct_UClass_UMyProjectWheelRear_NoRegister()
	{
		return UMyProjectWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyProjectWheelRear()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVehicleWheel();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = UMyProjectWheelRear::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectWheelRear.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectWheelRear.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyProjectWheelRear(Z_Construct_UClass_UMyProjectWheelRear, &UMyProjectWheelRear::StaticClass, TEXT("UMyProjectWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProjectWheelRear);
	UPackage* Z_Construct_UPackage__Script_MyProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MyProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x2575B4C1;
			Guid.B = 0xBC81D6D1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
