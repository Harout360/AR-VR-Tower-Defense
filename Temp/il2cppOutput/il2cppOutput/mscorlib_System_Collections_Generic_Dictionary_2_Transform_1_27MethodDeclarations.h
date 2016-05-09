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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2717;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20284_gshared (Transform_1_t2717 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m20284(__this, ___object, ___method, method) (( void (*) (Transform_1_t2717 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20284_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1438  Transform_1_Invoke_m20285_gshared (Transform_1_t2717 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m20285(__this, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Transform_1_t2717 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m20285_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20286_gshared (Transform_1_t2717 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m20286(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2717 *, int32_t, Object_t *, AsyncCallback_t168 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20286_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1438  Transform_1_EndInvoke_m20287_gshared (Transform_1_t2717 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m20287(__this, ___result, method) (( DictionaryEntry_t1438  (*) (Transform_1_t2717 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20287_gshared)(__this, ___result, method)
