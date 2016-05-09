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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t2904;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23463_gshared (Transform_1_t2904 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23463(__this, ___object, ___method, method) (( void (*) (Transform_1_t2904 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23463_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1438  Transform_1_Invoke_m23464_gshared (Transform_1_t2904 * __this, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23464(__this, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Transform_1_t2904 *, int32_t, VirtualButtonData_t812 , const MethodInfo*))Transform_1_Invoke_m23464_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23465_gshared (Transform_1_t2904 * __this, int32_t ___key, VirtualButtonData_t812  ___value, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23465(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2904 *, int32_t, VirtualButtonData_t812 , AsyncCallback_t168 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23465_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1438  Transform_1_EndInvoke_m23466_gshared (Transform_1_t2904 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23466(__this, ___result, method) (( DictionaryEntry_t1438  (*) (Transform_1_t2904 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23466_gshared)(__this, ___result, method)
