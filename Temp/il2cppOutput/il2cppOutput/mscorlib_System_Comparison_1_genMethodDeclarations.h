#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t476;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3304_gshared (Comparison_1_t476 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3304(__this, ___object, ___method, method) (( void (*) (Comparison_1_t476 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3304_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16615_gshared (Comparison_1_t476 * __this, RaycastResult_t507  ___x, RaycastResult_t507  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16615(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t476 *, RaycastResult_t507 , RaycastResult_t507 , const MethodInfo*))Comparison_1_Invoke_m16615_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16616_gshared (Comparison_1_t476 * __this, RaycastResult_t507  ___x, RaycastResult_t507  ___y, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16616(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t476 *, RaycastResult_t507 , RaycastResult_t507 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16616_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16617_gshared (Comparison_1_t476 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16617(__this, ___result, method) (( int32_t (*) (Comparison_1_t476 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16617_gshared)(__this, ___result, method)
