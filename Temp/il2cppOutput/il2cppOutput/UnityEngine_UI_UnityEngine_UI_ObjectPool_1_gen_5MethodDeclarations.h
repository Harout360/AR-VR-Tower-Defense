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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m19459(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2663 *, UnityAction_1_t2664 *, UnityAction_1_t2664 *, const MethodInfo*))ObjectPool_1__ctor_m16720_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countAll()
#define ObjectPool_1_get_countAll_m19460(__this, method) (( int32_t (*) (ObjectPool_1_t2663 *, const MethodInfo*))ObjectPool_1_get_countAll_m16722_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m19461(__this, ___value, method) (( void (*) (ObjectPool_1_t2663 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16724_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Get()
#define ObjectPool_1_Get_m19462(__this, method) (( List_1_t405 * (*) (ObjectPool_1_t2663 *, const MethodInfo*))ObjectPool_1_Get_m16726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Release(T)
#define ObjectPool_1_Release_m19463(__this, ___element, method) (( void (*) (ObjectPool_1_t2663 *, List_1_t405 *, const MethodInfo*))ObjectPool_1_Release_m16728_gshared)(__this, ___element, method)
