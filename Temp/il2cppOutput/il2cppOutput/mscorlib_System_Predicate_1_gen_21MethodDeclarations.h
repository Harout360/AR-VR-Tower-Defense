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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2502;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16916_gshared (Predicate_1_t2502 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16916(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2502 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16916_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16917_gshared (Predicate_1_t2502 * __this, RaycastResult_t507  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16917(__this, ___obj, method) (( bool (*) (Predicate_1_t2502 *, RaycastResult_t507 , const MethodInfo*))Predicate_1_Invoke_m16917_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16918_gshared (Predicate_1_t2502 * __this, RaycastResult_t507  ___obj, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16918(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2502 *, RaycastResult_t507 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16918_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16919_gshared (Predicate_1_t2502 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16919(__this, ___result, method) (( bool (*) (Predicate_1_t2502 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16919_gshared)(__this, ___result, method)
