﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t118;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2336;
// System.Object[]
struct ObjectU5BU5D_t99;
// Vuforia.WebCamProfile/ProfileData[]
struct ProfileDataU5BU5D_t2938;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t2941;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t2940  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::table
	Int32U5BU5D_t118* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::linkSlots
	LinkU5BU5D_t2336* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::keySlots
	ObjectU5BU5D_t99* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::valueSlots
	ProfileDataU5BU5D_t2938* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::serialization_info
	SerializationInfo_t425 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2940_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<>f__am$cacheB
	Transform_1_t2941 * ___U3CU3Ef__amU24cacheB_15;
};
