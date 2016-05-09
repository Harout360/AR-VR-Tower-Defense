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

// System.Comparison`1<System.Int32>
struct Comparison_1_t2282;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14331_gshared (Comparison_1_t2282 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14331(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2282 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14331_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14332_gshared (Comparison_1_t2282 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14332(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2282 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m14332_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14333_gshared (Comparison_1_t2282 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14333(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2282 *, int32_t, int32_t, AsyncCallback_t168 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14333_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14334_gshared (Comparison_1_t2282 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14334(__this, ___result, method) (( int32_t (*) (Comparison_1_t2282 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14334_gshared)(__this, ___result, method)
