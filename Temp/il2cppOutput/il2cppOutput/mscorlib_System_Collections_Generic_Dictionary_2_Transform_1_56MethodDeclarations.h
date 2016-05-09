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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
struct Transform_1_t2951;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23988_gshared (Transform_1_t2951 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23988(__this, ___object, ___method, method) (( void (*) (Transform_1_t2951 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23988_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
extern "C" ProfileData_t903  Transform_1_Invoke_m23989_gshared (Transform_1_t2951 * __this, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23989(__this, ___key, ___value, method) (( ProfileData_t903  (*) (Transform_1_t2951 *, Object_t *, ProfileData_t903 , const MethodInfo*))Transform_1_Invoke_m23989_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23990_gshared (Transform_1_t2951 * __this, Object_t * ___key, ProfileData_t903  ___value, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23990(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2951 *, Object_t *, ProfileData_t903 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23990_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
extern "C" ProfileData_t903  Transform_1_EndInvoke_m23991_gshared (Transform_1_t2951 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23991(__this, ___result, method) (( ProfileData_t903  (*) (Transform_1_t2951 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23991_gshared)(__this, ___result, method)
