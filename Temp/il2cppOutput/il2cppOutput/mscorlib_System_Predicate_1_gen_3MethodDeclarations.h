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

// System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Predicate_1_t988;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m5651_gshared (Predicate_1_t988 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m5651(__this, ___object, ___method, method) (( void (*) (Predicate_1_t988 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m5651_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21209_gshared (Predicate_1_t988 * __this, TrackableResultData_t811  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21209(__this, ___obj, method) (( bool (*) (Predicate_1_t988 *, TrackableResultData_t811 , const MethodInfo*))Predicate_1_Invoke_m21209_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21210_gshared (Predicate_1_t988 * __this, TrackableResultData_t811  ___obj, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21210(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t988 *, TrackableResultData_t811 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21210_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21211_gshared (Predicate_1_t988 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21211(__this, ___result, method) (( bool (*) (Predicate_1_t988 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21211_gshared)(__this, ___result, method)
