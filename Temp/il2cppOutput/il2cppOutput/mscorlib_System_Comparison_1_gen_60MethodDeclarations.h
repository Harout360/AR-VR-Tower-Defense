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

// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t2933;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23718_gshared (Comparison_1_t2933 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23718(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2933 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23718_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23719_gshared (Comparison_1_t2933 * __this, TargetSearchResult_t889  ___x, TargetSearchResult_t889  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23719(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2933 *, TargetSearchResult_t889 , TargetSearchResult_t889 , const MethodInfo*))Comparison_1_Invoke_m23719_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23720_gshared (Comparison_1_t2933 * __this, TargetSearchResult_t889  ___x, TargetSearchResult_t889  ___y, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23720(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2933 *, TargetSearchResult_t889 , TargetSearchResult_t889 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23720_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23721_gshared (Comparison_1_t2933 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23721(__this, ___result, method) (( int32_t (*) (Comparison_1_t2933 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23721_gshared)(__this, ___result, method)
