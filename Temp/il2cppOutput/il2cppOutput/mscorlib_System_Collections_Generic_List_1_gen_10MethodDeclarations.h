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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t273;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3149;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3150;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t703;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2328;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t419;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2332;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2335;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m14900_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1__ctor_m14900(__this, method) (( void (*) (List_1_t273 *, const MethodInfo*))List_1__ctor_m14900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14901_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14901(__this, ___collection, method) (( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))List_1__ctor_m14901_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1910_gshared (List_1_t273 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1910(__this, ___capacity, method) (( void (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1__ctor_m1910_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m14902_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14902(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14902_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14903_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14903(__this, method) (( Object_t* (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14903_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14904_gshared (List_1_t273 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14904(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t273 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14904_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14905_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14905(__this, method) (( Object_t * (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14905_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14906_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14906(__this, ___item, method) (( int32_t (*) (List_1_t273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14906_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14907_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14907(__this, ___item, method) (( bool (*) (List_1_t273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14907_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14908_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14908(__this, ___item, method) (( int32_t (*) (List_1_t273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14908_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14909_gshared (List_1_t273 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14909(__this, ___index, ___item, method) (( void (*) (List_1_t273 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14909_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14910_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14910(__this, ___item, method) (( void (*) (List_1_t273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14910_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14911_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14911(__this, method) (( bool (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14912_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14912(__this, method) (( bool (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14912_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14913_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14913(__this, method) (( Object_t * (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14914_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14914(__this, method) (( bool (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14915_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14915(__this, method) (( bool (*) (List_1_t273 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14915_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14916_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14916(__this, ___index, method) (( Object_t * (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14916_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14917_gshared (List_1_t273 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14917(__this, ___index, ___value, method) (( void (*) (List_1_t273 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14917_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m14918_gshared (List_1_t273 * __this, UILineInfo_t268  ___item, const MethodInfo* method);
#define List_1_Add_m14918(__this, ___item, method) (( void (*) (List_1_t273 *, UILineInfo_t268 , const MethodInfo*))List_1_Add_m14918_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14919_gshared (List_1_t273 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14919(__this, ___newCount, method) (( void (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14919_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14920_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14920(__this, ___collection, method) (( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14920_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14921_gshared (List_1_t273 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14921(__this, ___enumerable, method) (( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14921_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14922_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14922(__this, ___collection, method) (( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))List_1_AddRange_m14922_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2328 * List_1_AsReadOnly_m14923_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14923(__this, method) (( ReadOnlyCollection_1_t2328 * (*) (List_1_t273 *, const MethodInfo*))List_1_AsReadOnly_m14923_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m14924_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_Clear_m14924(__this, method) (( void (*) (List_1_t273 *, const MethodInfo*))List_1_Clear_m14924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m14925_gshared (List_1_t273 * __this, UILineInfo_t268  ___item, const MethodInfo* method);
#define List_1_Contains_m14925(__this, ___item, method) (( bool (*) (List_1_t273 *, UILineInfo_t268 , const MethodInfo*))List_1_Contains_m14925_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14926_gshared (List_1_t273 * __this, UILineInfoU5BU5D_t419* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14926(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t273 *, UILineInfoU5BU5D_t419*, int32_t, const MethodInfo*))List_1_CopyTo_m14926_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t268  List_1_Find_m14927_gshared (List_1_t273 * __this, Predicate_1_t2332 * ___match, const MethodInfo* method);
#define List_1_Find_m14927(__this, ___match, method) (( UILineInfo_t268  (*) (List_1_t273 *, Predicate_1_t2332 *, const MethodInfo*))List_1_Find_m14927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14928_gshared (Object_t * __this /* static, unused */, Predicate_1_t2332 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14928(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2332 *, const MethodInfo*))List_1_CheckMatch_m14928_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14929_gshared (List_1_t273 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2332 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14929(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t273 *, int32_t, int32_t, Predicate_1_t2332 *, const MethodInfo*))List_1_GetIndex_m14929_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2327  List_1_GetEnumerator_m14930_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14930(__this, method) (( Enumerator_t2327  (*) (List_1_t273 *, const MethodInfo*))List_1_GetEnumerator_m14930_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14931_gshared (List_1_t273 * __this, UILineInfo_t268  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14931(__this, ___item, method) (( int32_t (*) (List_1_t273 *, UILineInfo_t268 , const MethodInfo*))List_1_IndexOf_m14931_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14932_gshared (List_1_t273 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14932(__this, ___start, ___delta, method) (( void (*) (List_1_t273 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14932_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14933_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14933(__this, ___index, method) (( void (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14934_gshared (List_1_t273 * __this, int32_t ___index, UILineInfo_t268  ___item, const MethodInfo* method);
#define List_1_Insert_m14934(__this, ___index, ___item, method) (( void (*) (List_1_t273 *, int32_t, UILineInfo_t268 , const MethodInfo*))List_1_Insert_m14934_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14935_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14935(__this, ___collection, method) (( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14935_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m14936_gshared (List_1_t273 * __this, UILineInfo_t268  ___item, const MethodInfo* method);
#define List_1_Remove_m14936(__this, ___item, method) (( bool (*) (List_1_t273 *, UILineInfo_t268 , const MethodInfo*))List_1_Remove_m14936_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14937_gshared (List_1_t273 * __this, Predicate_1_t2332 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14937(__this, ___match, method) (( int32_t (*) (List_1_t273 *, Predicate_1_t2332 *, const MethodInfo*))List_1_RemoveAll_m14937_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14938_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14938(__this, ___index, method) (( void (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14938_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m14939_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_Reverse_m14939(__this, method) (( void (*) (List_1_t273 *, const MethodInfo*))List_1_Reverse_m14939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m14940_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_Sort_m14940(__this, method) (( void (*) (List_1_t273 *, const MethodInfo*))List_1_Sort_m14940_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14941_gshared (List_1_t273 * __this, Comparison_1_t2335 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14941(__this, ___comparison, method) (( void (*) (List_1_t273 *, Comparison_1_t2335 *, const MethodInfo*))List_1_Sort_m14941_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t419* List_1_ToArray_m14942_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_ToArray_m14942(__this, method) (( UILineInfoU5BU5D_t419* (*) (List_1_t273 *, const MethodInfo*))List_1_ToArray_m14942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14943_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14943(__this, method) (( void (*) (List_1_t273 *, const MethodInfo*))List_1_TrimExcess_m14943_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14944_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14944(__this, method) (( int32_t (*) (List_1_t273 *, const MethodInfo*))List_1_get_Capacity_m14944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14945_gshared (List_1_t273 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14945(__this, ___value, method) (( void (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14945_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14946_gshared (List_1_t273 * __this, const MethodInfo* method);
#define List_1_get_Count_m14946(__this, method) (( int32_t (*) (List_1_t273 *, const MethodInfo*))List_1_get_Count_m14946_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t268  List_1_get_Item_m14947_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14947(__this, ___index, method) (( UILineInfo_t268  (*) (List_1_t273 *, int32_t, const MethodInfo*))List_1_get_Item_m14947_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14948_gshared (List_1_t273 * __this, int32_t ___index, UILineInfo_t268  ___value, const MethodInfo* method);
#define List_1_set_Item_m14948(__this, ___index, ___value, method) (( void (*) (List_1_t273 *, int32_t, UILineInfo_t268 , const MethodInfo*))List_1_set_Item_m14948_gshared)(__this, ___index, ___value, method)
