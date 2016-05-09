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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t876;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m22509_gshared (Action_1_t876 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m22509(__this, ___object, ___method, method) (( void (*) (Action_1_t876 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22509_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m5738_gshared (Action_1_t876 * __this, SmartTerrainInitializationInfo_t758  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m5738(__this, ___obj, method) (( void (*) (Action_1_t876 *, SmartTerrainInitializationInfo_t758 , const MethodInfo*))Action_1_Invoke_m5738_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m22510_gshared (Action_1_t876 * __this, SmartTerrainInitializationInfo_t758  ___obj, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m22510(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t876 *, SmartTerrainInitializationInfo_t758 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22510_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m22511_gshared (Action_1_t876 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m22511(__this, ___result, method) (( void (*) (Action_1_t876 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22511_gshared)(__this, ___result, method)
