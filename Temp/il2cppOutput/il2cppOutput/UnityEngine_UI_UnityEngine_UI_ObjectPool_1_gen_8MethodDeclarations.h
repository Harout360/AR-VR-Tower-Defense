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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m19525(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2675 *, UnityAction_1_t2676 *, UnityAction_1_t2676 *, const MethodInfo*))ObjectPool_1__ctor_m16720_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::get_countAll()
#define ObjectPool_1_get_countAll_m19526(__this, method) (( int32_t (*) (ObjectPool_1_t2675 *, const MethodInfo*))ObjectPool_1_get_countAll_m16722_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m19527(__this, ___value, method) (( void (*) (ObjectPool_1_t2675 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16724_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::Get()
#define ObjectPool_1_Get_m19528(__this, method) (( List_1_t406 * (*) (ObjectPool_1_t2675 *, const MethodInfo*))ObjectPool_1_Get_m16726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::Release(T)
#define ObjectPool_1_Release_m19529(__this, ___element, method) (( void (*) (ObjectPool_1_t2675 *, List_1_t406 *, const MethodInfo*))ObjectPool_1_Release_m16728_gshared)(__this, ___element, method)
