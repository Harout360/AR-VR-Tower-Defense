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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2799;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3219;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2804;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2808;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m21428_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21428(__this, method) (( void (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2__ctor_m21428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21430_gshared (Dictionary_2_t2799 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21430(__this, ___comparer, method) (( void (*) (Dictionary_2_t2799 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21430_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21432_gshared (Dictionary_2_t2799 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21432(__this, ___capacity, method) (( void (*) (Dictionary_2_t2799 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21432_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21434_gshared (Dictionary_2_t2799 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21434(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2799 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m21434_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21436_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21436(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21436_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21438_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21440_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21440(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21440_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21442_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21442(__this, ___key, method) (( bool (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21442_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21444_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21444(__this, ___key, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21444_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21446_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21446(__this, method) (( bool (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21448_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21448(__this, method) (( Object_t * (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21450_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21450(__this, method) (( bool (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21452_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2_t2801  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21452(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2799 *, KeyValuePair_2_t2801 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21452_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21454_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2_t2801  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21454(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2799 *, KeyValuePair_2_t2801 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21454_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21456_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2U5BU5D_t3219* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2799 *, KeyValuePair_2U5BU5D_t3219*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21456_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2_t2801  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2799 *, KeyValuePair_2_t2801 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21460_gshared (Dictionary_2_t2799 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21460(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2799 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21460_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21462_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21462(__this, method) (( Object_t * (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21462_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21464_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21464(__this, method) (( Object_t* (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21464_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21466_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21466(__this, method) (( Object_t * (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21466_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21468_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21468(__this, method) (( int32_t (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_get_Count_m21468_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m21470_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21470(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21470_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21472_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21472(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m21472_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21474_gshared (Dictionary_2_t2799 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21474(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2799 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21474_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21476_gshared (Dictionary_2_t2799 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21476(__this, ___size, method) (( void (*) (Dictionary_2_t2799 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21476_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21478_gshared (Dictionary_2_t2799 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21478(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2799 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21478_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2801  Dictionary_2_make_pair_m21480_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21480(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2801  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m21480_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21482_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21482(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m21482_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m21484_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21484(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m21484_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21486_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2U5BU5D_t3219* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21486(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2799 *, KeyValuePair_2U5BU5D_t3219*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21486_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m21488_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21488(__this, method) (( void (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_Resize_m21488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21490_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m21490_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m21492_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21492(__this, method) (( void (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_Clear_m21492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21494_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21494(__this, ___key, method) (( bool (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21494_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21496_gshared (Dictionary_2_t2799 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21496(__this, ___value, method) (( bool (*) (Dictionary_2_t2799 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m21496_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21498_gshared (Dictionary_2_t2799 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21498(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2799 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m21498_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21500_gshared (Dictionary_2_t2799 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21500(__this, ___sender, method) (( void (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21500_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21502_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21502(__this, ___key, method) (( bool (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21504_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21504(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2799 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21504_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2804 * Dictionary_2_get_Keys_m21506_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21506(__this, method) (( KeyCollection_t2804 * (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_get_Keys_m21506_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2808 * Dictionary_2_get_Values_m21508_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21508(__this, method) (( ValueCollection_t2808 * (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_get_Values_m21508_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21510_gshared (Dictionary_2_t2799 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21510(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21510_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m21512_gshared (Dictionary_2_t2799 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21512(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2799 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21512_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21514_gshared (Dictionary_2_t2799 * __this, KeyValuePair_2_t2801  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21514(__this, ___pair, method) (( bool (*) (Dictionary_2_t2799 *, KeyValuePair_2_t2801 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21514_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2806  Dictionary_2_GetEnumerator_m21516_gshared (Dictionary_2_t2799 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21516(__this, method) (( Enumerator_t2806  (*) (Dictionary_2_t2799 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21516_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m21518_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21518(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21518_gshared)(__this /* static, unused */, ___key, ___value, method)
