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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t123;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t124;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2641;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3130;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2185;
// System.Object[]
struct ObjectU5BU5D_t99;
// System.Predicate`1<System.Object>
struct Predicate_1_t2198;
// System.Comparison`1<System.Object>
struct Comparison_1_t2204;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m13144_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1__ctor_m13144(__this, method) (( void (*) (List_1_t123 *, const MethodInfo*))List_1__ctor_m13144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13146_gshared (List_1_t123 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13146(__this, ___collection, method) (( void (*) (List_1_t123 *, Object_t*, const MethodInfo*))List_1__ctor_m13146_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13148_gshared (List_1_t123 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13148(__this, ___capacity, method) (( void (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1__ctor_m13148_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m13150_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13150(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13150_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13152_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13152(__this, method) (( Object_t* (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13154_gshared (List_1_t123 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13154(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t123 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13154_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13156_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13156(__this, method) (( Object_t * (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13156_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13158_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13158(__this, ___item, method) (( int32_t (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13158_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13160_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13160(__this, ___item, method) (( bool (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13160_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13162_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13162(__this, ___item, method) (( int32_t (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13164_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13164(__this, ___index, ___item, method) (( void (*) (List_1_t123 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13164_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13166_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13166(__this, ___item, method) (( void (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13166_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13168_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13168(__this, method) (( bool (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13170_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13170(__this, method) (( bool (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13172_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13172(__this, method) (( Object_t * (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13174_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13174(__this, method) (( bool (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13174_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13176_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13176(__this, method) (( bool (*) (List_1_t123 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13176_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13178_gshared (List_1_t123 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13178(__this, ___index, method) (( Object_t * (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13178_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13180_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13180(__this, ___index, ___value, method) (( void (*) (List_1_t123 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13180_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m13182_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m13182(__this, ___item, method) (( void (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_Add_m13182_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13184_gshared (List_1_t123 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13184(__this, ___newCount, method) (( void (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13184_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13186_gshared (List_1_t123 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13186(__this, ___collection, method) (( void (*) (List_1_t123 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13186_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13188_gshared (List_1_t123 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13188(__this, ___enumerable, method) (( void (*) (List_1_t123 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13188_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13189_gshared (List_1_t123 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13189(__this, ___collection, method) (( void (*) (List_1_t123 *, Object_t*, const MethodInfo*))List_1_AddRange_m13189_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2185 * List_1_AsReadOnly_m13191_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13191(__this, method) (( ReadOnlyCollection_1_t2185 * (*) (List_1_t123 *, const MethodInfo*))List_1_AsReadOnly_m13191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m13193_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_Clear_m13193(__this, method) (( void (*) (List_1_t123 *, const MethodInfo*))List_1_Clear_m13193_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m13195_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m13195(__this, ___item, method) (( bool (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_Contains_m13195_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13197_gshared (List_1_t123 * __this, ObjectU5BU5D_t99* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13197(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t123 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))List_1_CopyTo_m13197_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m13199_gshared (List_1_t123 * __this, Predicate_1_t2198 * ___match, const MethodInfo* method);
#define List_1_Find_m13199(__this, ___match, method) (( Object_t * (*) (List_1_t123 *, Predicate_1_t2198 *, const MethodInfo*))List_1_Find_m13199_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13201_gshared (Object_t * __this /* static, unused */, Predicate_1_t2198 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13201(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2198 *, const MethodInfo*))List_1_CheckMatch_m13201_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13203_gshared (List_1_t123 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2198 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13203(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t123 *, int32_t, int32_t, Predicate_1_t2198 *, const MethodInfo*))List_1_GetIndex_m13203_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2192  List_1_GetEnumerator_m13204_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13204(__this, method) (( Enumerator_t2192  (*) (List_1_t123 *, const MethodInfo*))List_1_GetEnumerator_m13204_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13206_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m13206(__this, ___item, method) (( int32_t (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_IndexOf_m13206_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13208_gshared (List_1_t123 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13208(__this, ___start, ___delta, method) (( void (*) (List_1_t123 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13208_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13210_gshared (List_1_t123 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13210(__this, ___index, method) (( void (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13210_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13212_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m13212(__this, ___index, ___item, method) (( void (*) (List_1_t123 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m13212_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13214_gshared (List_1_t123 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13214(__this, ___collection, method) (( void (*) (List_1_t123 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13214_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m13216_gshared (List_1_t123 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m13216(__this, ___item, method) (( bool (*) (List_1_t123 *, Object_t *, const MethodInfo*))List_1_Remove_m13216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13218_gshared (List_1_t123 * __this, Predicate_1_t2198 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13218(__this, ___match, method) (( int32_t (*) (List_1_t123 *, Predicate_1_t2198 *, const MethodInfo*))List_1_RemoveAll_m13218_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13220_gshared (List_1_t123 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13220(__this, ___index, method) (( void (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13220_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m13222_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_Reverse_m13222(__this, method) (( void (*) (List_1_t123 *, const MethodInfo*))List_1_Reverse_m13222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m13224_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_Sort_m13224(__this, method) (( void (*) (List_1_t123 *, const MethodInfo*))List_1_Sort_m13224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13226_gshared (List_1_t123 * __this, Comparison_1_t2204 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13226(__this, ___comparison, method) (( void (*) (List_1_t123 *, Comparison_1_t2204 *, const MethodInfo*))List_1_Sort_m13226_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t99* List_1_ToArray_m13228_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_ToArray_m13228(__this, method) (( ObjectU5BU5D_t99* (*) (List_1_t123 *, const MethodInfo*))List_1_ToArray_m13228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m13230_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13230(__this, method) (( void (*) (List_1_t123 *, const MethodInfo*))List_1_TrimExcess_m13230_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13232_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13232(__this, method) (( int32_t (*) (List_1_t123 *, const MethodInfo*))List_1_get_Capacity_m13232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13234_gshared (List_1_t123 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13234(__this, ___value, method) (( void (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13234_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m13236_gshared (List_1_t123 * __this, const MethodInfo* method);
#define List_1_get_Count_m13236(__this, method) (( int32_t (*) (List_1_t123 *, const MethodInfo*))List_1_get_Count_m13236_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m13238_gshared (List_1_t123 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13238(__this, ___index, method) (( Object_t * (*) (List_1_t123 *, int32_t, const MethodInfo*))List_1_get_Item_m13238_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13240_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m13240(__this, ___index, ___value, method) (( void (*) (List_1_t123 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m13240_gshared)(__this, ___index, ___value, method)
