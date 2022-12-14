// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryBatteryState_generated_h
#error "ELowEntryBatteryState.generated.h already included, missing '#pragma once' in ELowEntryBatteryState.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryBatteryState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h


#define FOREACH_ENUM_ELOWENTRYBATTERYSTATE(op) \
	op(ELowEntryBatteryState::Charging) \
	op(ELowEntryBatteryState::Discharging) \
	op(ELowEntryBatteryState::Full) \
	op(ELowEntryBatteryState::NotCharging) \
	op(ELowEntryBatteryState::Unknown) 

enum class ELowEntryBatteryState : uint8;
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryBatteryState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
