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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>
struct Transform_1_t2895;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23287_gshared (Transform_1_t2895 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23287(__this, ___object, ___method, method) (( void (*) (Transform_1_t2895 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23287_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m23288_gshared (Transform_1_t2895 * __this, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23288(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2895 *, int32_t, TrackableResultData_t811 , const MethodInfo*))Transform_1_Invoke_m23288_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23289_gshared (Transform_1_t2895 * __this, int32_t ___key, TrackableResultData_t811  ___value, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23289(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2895 *, int32_t, TrackableResultData_t811 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23289_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m23290_gshared (Transform_1_t2895 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23290(__this, ___result, method) (( int32_t (*) (Transform_1_t2895 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23290_gshared)(__this, ___result, method)
