﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t2016;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2022;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m13071 (AssemblyLoadEventHandler_t2016 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m13072 (AssemblyLoadEventHandler_t2016 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2022 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t2016(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t2022 * ___args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m13073 (AssemblyLoadEventHandler_t2016 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2022 * ___args, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m13074 (AssemblyLoadEventHandler_t2016 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
