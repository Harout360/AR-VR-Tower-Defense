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
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2712;
// Vuforia.Image[]
struct ImageU5BU5D_t2713;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2715;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.DictionaryEntry>
struct Transform_1_t2714;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct  Dictionary_2_t779  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::table
	Int32U5BU5D_t118* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::linkSlots
	LinkU5BU5D_t2336* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::keySlots
	PIXEL_FORMATU5BU5D_t2712* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::valueSlots
	ImageU5BU5D_t2713* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::serialization_info
	SerializationInfo_t425 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t779_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::<>f__am$cacheB
	Transform_1_t2714 * ___U3CU3Ef__amU24cacheB_15;
};
