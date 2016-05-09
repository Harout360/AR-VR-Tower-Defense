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

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t2930;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23708_gshared (Predicate_1_t2930 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23708(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2930 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23708_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23709_gshared (Predicate_1_t2930 * __this, TargetSearchResult_t889  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23709(__this, ___obj, method) (( bool (*) (Predicate_1_t2930 *, TargetSearchResult_t889 , const MethodInfo*))Predicate_1_Invoke_m23709_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23710_gshared (Predicate_1_t2930 * __this, TargetSearchResult_t889  ___obj, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23710(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2930 *, TargetSearchResult_t889 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23710_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23711_gshared (Predicate_1_t2930 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23711(__this, ___result, method) (( bool (*) (Predicate_1_t2930 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23711_gshared)(__this, ___result, method)
