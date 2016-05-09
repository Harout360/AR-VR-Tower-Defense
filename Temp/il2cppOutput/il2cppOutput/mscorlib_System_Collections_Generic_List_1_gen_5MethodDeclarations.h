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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t406;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1073;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3142;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3143;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2272;
// System.Int32[]
struct Int32U5BU5D_t118;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2278;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2282;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m5703_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1__ctor_m5703(__this, method) (( void (*) (List_1_t406 *, const MethodInfo*))List_1__ctor_m5703_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m5648_gshared (List_1_t406 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m5648(__this, ___collection, method) (( void (*) (List_1_t406 *, Object_t*, const MethodInfo*))List_1__ctor_m5648_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14192_gshared (List_1_t406 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14192(__this, ___capacity, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1__ctor_m14192_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14193_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14193(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14193_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14194_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14194(__this, method) (( Object_t* (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14194_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14195_gshared (List_1_t406 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14195(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t406 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14196_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14196(__this, method) (( Object_t * (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14196_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14197_gshared (List_1_t406 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14197(__this, ___item, method) (( int32_t (*) (List_1_t406 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14197_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14198_gshared (List_1_t406 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14198(__this, ___item, method) (( bool (*) (List_1_t406 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14198_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14199_gshared (List_1_t406 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14199(__this, ___item, method) (( int32_t (*) (List_1_t406 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14199_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14200_gshared (List_1_t406 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14200(__this, ___index, ___item, method) (( void (*) (List_1_t406 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14200_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14201_gshared (List_1_t406 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14201(__this, ___item, method) (( void (*) (List_1_t406 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14201_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14202_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14202(__this, method) (( bool (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14202_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14203_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14203(__this, method) (( bool (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14203_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14204_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14204(__this, method) (( Object_t * (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14205_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14205(__this, method) (( bool (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14206_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14206(__this, method) (( bool (*) (List_1_t406 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14206_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14207_gshared (List_1_t406 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14207(__this, ___index, method) (( Object_t * (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14207_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14208_gshared (List_1_t406 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14208(__this, ___index, ___value, method) (( void (*) (List_1_t406 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14208_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14209_gshared (List_1_t406 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14209(__this, ___item, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_Add_m14209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14210_gshared (List_1_t406 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14210(__this, ___newCount, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14210_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14211_gshared (List_1_t406 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14211(__this, ___collection, method) (( void (*) (List_1_t406 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14211_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14212_gshared (List_1_t406 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14212(__this, ___enumerable, method) (( void (*) (List_1_t406 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14212_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3547_gshared (List_1_t406 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3547(__this, ___collection, method) (( void (*) (List_1_t406 *, Object_t*, const MethodInfo*))List_1_AddRange_m3547_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2272 * List_1_AsReadOnly_m14213_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14213(__this, method) (( ReadOnlyCollection_1_t2272 * (*) (List_1_t406 *, const MethodInfo*))List_1_AsReadOnly_m14213_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14214_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_Clear_m14214(__this, method) (( void (*) (List_1_t406 *, const MethodInfo*))List_1_Clear_m14214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14215_gshared (List_1_t406 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14215(__this, ___item, method) (( bool (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_Contains_m14215_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14216_gshared (List_1_t406 * __this, Int32U5BU5D_t118* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14216(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t406 *, Int32U5BU5D_t118*, int32_t, const MethodInfo*))List_1_CopyTo_m14216_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14217_gshared (List_1_t406 * __this, Predicate_1_t2278 * ___match, const MethodInfo* method);
#define List_1_Find_m14217(__this, ___match, method) (( int32_t (*) (List_1_t406 *, Predicate_1_t2278 *, const MethodInfo*))List_1_Find_m14217_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14218_gshared (Object_t * __this /* static, unused */, Predicate_1_t2278 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14218(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2278 *, const MethodInfo*))List_1_CheckMatch_m14218_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14219_gshared (List_1_t406 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2278 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14219(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t406 *, int32_t, int32_t, Predicate_1_t2278 *, const MethodInfo*))List_1_GetIndex_m14219_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t989  List_1_GetEnumerator_m5649_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m5649(__this, method) (( Enumerator_t989  (*) (List_1_t406 *, const MethodInfo*))List_1_GetEnumerator_m5649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14220_gshared (List_1_t406 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14220(__this, ___item, method) (( int32_t (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_IndexOf_m14220_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14221_gshared (List_1_t406 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14221(__this, ___start, ___delta, method) (( void (*) (List_1_t406 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14221_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14222_gshared (List_1_t406 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14222(__this, ___index, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14223_gshared (List_1_t406 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14223(__this, ___index, ___item, method) (( void (*) (List_1_t406 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14223_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14224_gshared (List_1_t406 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14224(__this, ___collection, method) (( void (*) (List_1_t406 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14224_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14225_gshared (List_1_t406 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14225(__this, ___item, method) (( bool (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_Remove_m14225_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14226_gshared (List_1_t406 * __this, Predicate_1_t2278 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14226(__this, ___match, method) (( int32_t (*) (List_1_t406 *, Predicate_1_t2278 *, const MethodInfo*))List_1_RemoveAll_m14226_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14227_gshared (List_1_t406 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14227(__this, ___index, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14227_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14228_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_Reverse_m14228(__this, method) (( void (*) (List_1_t406 *, const MethodInfo*))List_1_Reverse_m14228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14229_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_Sort_m14229(__this, method) (( void (*) (List_1_t406 *, const MethodInfo*))List_1_Sort_m14229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14230_gshared (List_1_t406 * __this, Comparison_1_t2282 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14230(__this, ___comparison, method) (( void (*) (List_1_t406 *, Comparison_1_t2282 *, const MethodInfo*))List_1_Sort_m14230_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t118* List_1_ToArray_m14231_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_ToArray_m14231(__this, method) (( Int32U5BU5D_t118* (*) (List_1_t406 *, const MethodInfo*))List_1_ToArray_m14231_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14232_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14232(__this, method) (( void (*) (List_1_t406 *, const MethodInfo*))List_1_TrimExcess_m14232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14233_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14233(__this, method) (( int32_t (*) (List_1_t406 *, const MethodInfo*))List_1_get_Capacity_m14233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14234_gshared (List_1_t406 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14234(__this, ___value, method) (( void (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14234_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14235_gshared (List_1_t406 * __this, const MethodInfo* method);
#define List_1_get_Count_m14235(__this, method) (( int32_t (*) (List_1_t406 *, const MethodInfo*))List_1_get_Count_m14235_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14236_gshared (List_1_t406 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14236(__this, ___index, method) (( int32_t (*) (List_1_t406 *, int32_t, const MethodInfo*))List_1_get_Item_m14236_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14237_gshared (List_1_t406 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14237(__this, ___index, ___value, method) (( void (*) (List_1_t406 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14237_gshared)(__this, ___index, ___value, method)
