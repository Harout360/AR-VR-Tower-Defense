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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2339;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3152;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3153;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2345;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m15045_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15045(__this, method) (( void (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2__ctor_m15045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15047_gshared (Dictionary_2_t2339 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15047(__this, ___comparer, method) (( void (*) (Dictionary_2_t2339 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15047_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15048_gshared (Dictionary_2_t2339 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15048(__this, ___capacity, method) (( void (*) (Dictionary_2_t2339 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15048_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15050_gshared (Dictionary_2_t2339 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15050(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2339 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m15050_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15052_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15052(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15052_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15054_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15054(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15054_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15056_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15056(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15056_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15058_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15058(__this, ___key, method) (( bool (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15058_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15060_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15060(__this, ___key, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15060_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15062_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15062(__this, method) (( bool (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15062_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15064_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15064(__this, method) (( Object_t * (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15066_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15066(__this, method) (( bool (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15068_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2_t2342  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15068(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2339 *, KeyValuePair_2_t2342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15068_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15070_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2_t2342  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15070(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2339 *, KeyValuePair_2_t2342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15070_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15072_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2U5BU5D_t3152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15072(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2339 *, KeyValuePair_2U5BU5D_t3152*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15072_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15074_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2_t2342  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15074(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2339 *, KeyValuePair_2_t2342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15074_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15076_gshared (Dictionary_2_t2339 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15076(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2339 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15076_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15078_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15078(__this, method) (( Object_t * (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15078_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15080_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15080(__this, method) (( Object_t* (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15080_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15082_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15082(__this, method) (( Object_t * (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15082_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15084_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15084(__this, method) (( int32_t (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_get_Count_m15084_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m15086_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15086(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15086_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15088_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15088(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m15088_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15090_gshared (Dictionary_2_t2339 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15090(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2339 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15090_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15092_gshared (Dictionary_2_t2339 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15092(__this, ___size, method) (( void (*) (Dictionary_2_t2339 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15092_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15094_gshared (Dictionary_2_t2339 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15094(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2339 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15094_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2342  Dictionary_2_make_pair_m15096_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15096(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2342  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m15096_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15098_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15098(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m15098_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m15100_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15100(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m15100_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15102_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2U5BU5D_t3152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15102(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2339 *, KeyValuePair_2U5BU5D_t3152*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15102_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m15104_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15104(__this, method) (( void (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_Resize_m15104_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15106_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15106(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m15106_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m15108_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15108(__this, method) (( void (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_Clear_m15108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15110_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15110(__this, ___key, method) (( bool (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15110_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15112_gshared (Dictionary_2_t2339 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15112(__this, ___value, method) (( bool (*) (Dictionary_2_t2339 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m15112_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15114_gshared (Dictionary_2_t2339 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15114(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2339 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m15114_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15116_gshared (Dictionary_2_t2339 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15116(__this, ___sender, method) (( void (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15116_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15118_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15118(__this, ___key, method) (( bool (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15118_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15120_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15120(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2339 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m15120_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2345 * Dictionary_2_get_Keys_m15122_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15122(__this, method) (( KeyCollection_t2345 * (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_get_Keys_m15122_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2349 * Dictionary_2_get_Values_m15124_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15124(__this, method) (( ValueCollection_t2349 * (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_get_Values_m15124_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15126_gshared (Dictionary_2_t2339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15126(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15126_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m15128_gshared (Dictionary_2_t2339 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15128(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2339 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15128_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15130_gshared (Dictionary_2_t2339 * __this, KeyValuePair_2_t2342  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15130(__this, ___pair, method) (( bool (*) (Dictionary_2_t2339 *, KeyValuePair_2_t2342 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15130_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2347  Dictionary_2_GetEnumerator_m15132_gshared (Dictionary_2_t2339 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15132(__this, method) (( Enumerator_t2347  (*) (Dictionary_2_t2339 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15132_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m15134_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15134(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15134_gshared)(__this /* static, unused */, ___key, ___value, method)
