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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2539;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2641;
// System.Object[]
struct ObjectU5BU5D_t99;
// System.Predicate`1<System.Object>
struct Predicate_1_t2198;
// System.Comparison`1<System.Object>
struct Comparison_1_t2204;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m17560_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m17560(__this, method) (( void (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1__ctor_m17560_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17562_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17562(__this, method) (( Object_t * (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17562_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m17564_gshared (IndexedSet_1_t2539 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m17564(__this, ___item, method) (( void (*) (IndexedSet_1_t2539 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m17564_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m17566_gshared (IndexedSet_1_t2539 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m17566(__this, ___item, method) (( bool (*) (IndexedSet_1_t2539 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m17566_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m17568_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m17568(__this, method) (( Object_t* (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m17568_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m17570_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m17570(__this, method) (( void (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1_Clear_m17570_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m17572_gshared (IndexedSet_1_t2539 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m17572(__this, ___item, method) (( bool (*) (IndexedSet_1_t2539 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m17572_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m17574_gshared (IndexedSet_1_t2539 * __this, ObjectU5BU5D_t99* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m17574(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2539 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m17574_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m17576_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m17576(__this, method) (( int32_t (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1_get_Count_m17576_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m17578_gshared (IndexedSet_1_t2539 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m17578(__this, method) (( bool (*) (IndexedSet_1_t2539 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m17578_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m17580_gshared (IndexedSet_1_t2539 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m17580(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2539 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m17580_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m17582_gshared (IndexedSet_1_t2539 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m17582(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2539 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m17582_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m17584_gshared (IndexedSet_1_t2539 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m17584(__this, ___index, method) (( void (*) (IndexedSet_1_t2539 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m17584_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m17586_gshared (IndexedSet_1_t2539 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m17586(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2539 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m17586_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m17588_gshared (IndexedSet_1_t2539 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m17588(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2539 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m17588_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m17589_gshared (IndexedSet_1_t2539 * __this, Predicate_1_t2198 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m17589(__this, ___match, method) (( void (*) (IndexedSet_1_t2539 *, Predicate_1_t2198 *, const MethodInfo*))IndexedSet_1_RemoveAll_m17589_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m17590_gshared (IndexedSet_1_t2539 * __this, Comparison_1_t2204 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m17590(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2539 *, Comparison_1_t2204 *, const MethodInfo*))IndexedSet_1_Sort_m17590_gshared)(__this, ___sortLayoutFunction, method)
