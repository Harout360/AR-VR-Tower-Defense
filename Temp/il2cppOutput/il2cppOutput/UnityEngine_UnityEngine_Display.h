﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t208;
// UnityEngine.Display
struct Display_t207;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t206;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// UnityEngine.Display
struct  Display_t207  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t207_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t208* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t207 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t206 * ___onDisplaysUpdated_3;
};
