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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t272;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3146;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3147;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3148;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2318;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t418;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2322;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2325;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m14750_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1__ctor_m14750(__this, method) (( void (*) (List_1_t272 *, const MethodInfo*))List_1__ctor_m14750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14751_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14751(__this, ___collection, method) (( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))List_1__ctor_m14751_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1909_gshared (List_1_t272 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1909(__this, ___capacity, method) (( void (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1__ctor_m1909_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m14752_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14752(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14752_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14753_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14753(__this, method) (( Object_t* (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14753_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14754_gshared (List_1_t272 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14754(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t272 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14754_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14755_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14755(__this, method) (( Object_t * (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14755_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14756_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14756(__this, ___item, method) (( int32_t (*) (List_1_t272 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14756_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14757_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14757(__this, ___item, method) (( bool (*) (List_1_t272 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14757_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14758_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14758(__this, ___item, method) (( int32_t (*) (List_1_t272 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14758_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14759_gshared (List_1_t272 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14759(__this, ___index, ___item, method) (( void (*) (List_1_t272 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14759_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14760_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14760(__this, ___item, method) (( void (*) (List_1_t272 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14760_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14761_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14761(__this, method) (( bool (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14761_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14762_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14762(__this, method) (( bool (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14762_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14763_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14763(__this, method) (( Object_t * (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14764_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14764(__this, method) (( bool (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14765_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14765(__this, method) (( bool (*) (List_1_t272 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14765_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14766_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14766(__this, ___index, method) (( Object_t * (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14767_gshared (List_1_t272 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14767(__this, ___index, ___value, method) (( void (*) (List_1_t272 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14767_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m14768_gshared (List_1_t272 * __this, UICharInfo_t267  ___item, const MethodInfo* method);
#define List_1_Add_m14768(__this, ___item, method) (( void (*) (List_1_t272 *, UICharInfo_t267 , const MethodInfo*))List_1_Add_m14768_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14769_gshared (List_1_t272 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14769(__this, ___newCount, method) (( void (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14769_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14770_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14770(__this, ___collection, method) (( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14771_gshared (List_1_t272 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14771(__this, ___enumerable, method) (( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14771_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14772_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14772(__this, ___collection, method) (( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))List_1_AddRange_m14772_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2318 * List_1_AsReadOnly_m14773_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14773(__this, method) (( ReadOnlyCollection_1_t2318 * (*) (List_1_t272 *, const MethodInfo*))List_1_AsReadOnly_m14773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m14774_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_Clear_m14774(__this, method) (( void (*) (List_1_t272 *, const MethodInfo*))List_1_Clear_m14774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m14775_gshared (List_1_t272 * __this, UICharInfo_t267  ___item, const MethodInfo* method);
#define List_1_Contains_m14775(__this, ___item, method) (( bool (*) (List_1_t272 *, UICharInfo_t267 , const MethodInfo*))List_1_Contains_m14775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14776_gshared (List_1_t272 * __this, UICharInfoU5BU5D_t418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14776(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t272 *, UICharInfoU5BU5D_t418*, int32_t, const MethodInfo*))List_1_CopyTo_m14776_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t267  List_1_Find_m14777_gshared (List_1_t272 * __this, Predicate_1_t2322 * ___match, const MethodInfo* method);
#define List_1_Find_m14777(__this, ___match, method) (( UICharInfo_t267  (*) (List_1_t272 *, Predicate_1_t2322 *, const MethodInfo*))List_1_Find_m14777_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14778_gshared (Object_t * __this /* static, unused */, Predicate_1_t2322 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14778(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2322 *, const MethodInfo*))List_1_CheckMatch_m14778_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14779_gshared (List_1_t272 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2322 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14779(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t272 *, int32_t, int32_t, Predicate_1_t2322 *, const MethodInfo*))List_1_GetIndex_m14779_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2317  List_1_GetEnumerator_m14780_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14780(__this, method) (( Enumerator_t2317  (*) (List_1_t272 *, const MethodInfo*))List_1_GetEnumerator_m14780_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14781_gshared (List_1_t272 * __this, UICharInfo_t267  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14781(__this, ___item, method) (( int32_t (*) (List_1_t272 *, UICharInfo_t267 , const MethodInfo*))List_1_IndexOf_m14781_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14782_gshared (List_1_t272 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14782(__this, ___start, ___delta, method) (( void (*) (List_1_t272 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14782_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14783_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14783(__this, ___index, method) (( void (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14783_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14784_gshared (List_1_t272 * __this, int32_t ___index, UICharInfo_t267  ___item, const MethodInfo* method);
#define List_1_Insert_m14784(__this, ___index, ___item, method) (( void (*) (List_1_t272 *, int32_t, UICharInfo_t267 , const MethodInfo*))List_1_Insert_m14784_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14785_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14785(__this, ___collection, method) (( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14785_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m14786_gshared (List_1_t272 * __this, UICharInfo_t267  ___item, const MethodInfo* method);
#define List_1_Remove_m14786(__this, ___item, method) (( bool (*) (List_1_t272 *, UICharInfo_t267 , const MethodInfo*))List_1_Remove_m14786_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14787_gshared (List_1_t272 * __this, Predicate_1_t2322 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14787(__this, ___match, method) (( int32_t (*) (List_1_t272 *, Predicate_1_t2322 *, const MethodInfo*))List_1_RemoveAll_m14787_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14788_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14788(__this, ___index, method) (( void (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14788_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m14789_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_Reverse_m14789(__this, method) (( void (*) (List_1_t272 *, const MethodInfo*))List_1_Reverse_m14789_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m14790_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_Sort_m14790(__this, method) (( void (*) (List_1_t272 *, const MethodInfo*))List_1_Sort_m14790_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14791_gshared (List_1_t272 * __this, Comparison_1_t2325 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14791(__this, ___comparison, method) (( void (*) (List_1_t272 *, Comparison_1_t2325 *, const MethodInfo*))List_1_Sort_m14791_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t418* List_1_ToArray_m14792_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_ToArray_m14792(__this, method) (( UICharInfoU5BU5D_t418* (*) (List_1_t272 *, const MethodInfo*))List_1_ToArray_m14792_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14793_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14793(__this, method) (( void (*) (List_1_t272 *, const MethodInfo*))List_1_TrimExcess_m14793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14794_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14794(__this, method) (( int32_t (*) (List_1_t272 *, const MethodInfo*))List_1_get_Capacity_m14794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14795_gshared (List_1_t272 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14795(__this, ___value, method) (( void (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14795_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14796_gshared (List_1_t272 * __this, const MethodInfo* method);
#define List_1_get_Count_m14796(__this, method) (( int32_t (*) (List_1_t272 *, const MethodInfo*))List_1_get_Count_m14796_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t267  List_1_get_Item_m14797_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14797(__this, ___index, method) (( UICharInfo_t267  (*) (List_1_t272 *, int32_t, const MethodInfo*))List_1_get_Item_m14797_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14798_gshared (List_1_t272 * __this, int32_t ___index, UICharInfo_t267  ___value, const MethodInfo* method);
#define List_1_set_Item_m14798(__this, ___index, ___value, method) (( void (*) (List_1_t272 *, int32_t, UICharInfo_t267 , const MethodInfo*))List_1_set_Item_m14798_gshared)(__this, ___index, ___value, method)
