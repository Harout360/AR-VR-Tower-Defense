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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t2348;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t167;
// System.AsyncCallback
struct AsyncCallback_t168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15187_gshared (Transform_1_t2348 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15187(__this, ___object, ___method, method) (( void (*) (Transform_1_t2348 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15187_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m15188_gshared (Transform_1_t2348 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15188(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2348 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m15188_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15189_gshared (Transform_1_t2348 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t168 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15189(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2348 *, Object_t *, int32_t, AsyncCallback_t168 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15189_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m15190_gshared (Transform_1_t2348 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15190(__this, ___result, method) (( Object_t * (*) (Transform_1_t2348 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15190_gshared)(__this, ___result, method)
