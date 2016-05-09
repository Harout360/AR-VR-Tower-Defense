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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t526;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3379_gshared (Comparison_1_t526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3379(__this, ___object, ___method, method) (( void (*) (Comparison_1_t526 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3379_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17543_gshared (Comparison_1_t526 * __this, RaycastHit_t229  ___x, RaycastHit_t229  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17543(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t526 *, RaycastHit_t229 , RaycastHit_t229 , const MethodInfo*))Comparison_1_Invoke_m17543_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17544_gshared (Comparison_1_t526 * __this, RaycastHit_t229  ___x, RaycastHit_t229  ___y, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17544(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t526 *, RaycastHit_t229 , RaycastHit_t229 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17544_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17545_gshared (Comparison_1_t526 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17545(__this, ___result, method) (( int32_t (*) (Comparison_1_t526 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17545_gshared)(__this, ___result, method)
