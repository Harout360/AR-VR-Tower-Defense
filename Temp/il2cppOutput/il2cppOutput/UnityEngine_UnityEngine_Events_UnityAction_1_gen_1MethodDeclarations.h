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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t676;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m3421_gshared (UnityAction_1_t676 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m3421(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t676 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3421_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16294_gshared (UnityAction_1_t676 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m16294(__this, ___arg0, method) (( void (*) (UnityAction_1_t676 *, float, const MethodInfo*))UnityAction_1_Invoke_m16294_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16295_gshared (UnityAction_1_t676 * __this, float ___arg0, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16295(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t676 *, float, AsyncCallback_t168 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m16295_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16296_gshared (UnityAction_1_t676 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m16296(__this, ___result, method) (( void (*) (UnityAction_1_t676 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m16296_gshared)(__this, ___result, method)
