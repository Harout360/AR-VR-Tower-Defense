﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Application/LogCallback
struct LogCallback_t202;

#include "mscorlib_System_Object.h"

// UnityEngine.Application
struct  Application_t203  : public Object_t
{
};
struct Application_t203_StaticFields{
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t202 * ___s_LogCallbackHandler_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t202 * ___s_LogCallbackHandlerThreaded_1;
};