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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m16749(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2488 *, UnityAction_1_t2489 *, UnityAction_1_t2489 *, const MethodInfo*))ObjectPool_1__ctor_m16720_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countAll()
#define ObjectPool_1_get_countAll_m16750(__this, method) (( int32_t (*) (ObjectPool_1_t2488 *, const MethodInfo*))ObjectPool_1_get_countAll_m16722_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16751(__this, ___value, method) (( void (*) (ObjectPool_1_t2488 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16724_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Get()
#define ObjectPool_1_Get_m16752(__this, method) (( List_1_t123 * (*) (ObjectPool_1_t2488 *, const MethodInfo*))ObjectPool_1_Get_m16726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Release(T)
#define ObjectPool_1_Release_m16753(__this, ___element, method) (( void (*) (ObjectPool_1_t2488 *, List_1_t123 *, const MethodInfo*))ObjectPool_1_Release_m16728_gshared)(__this, ___element, method)
