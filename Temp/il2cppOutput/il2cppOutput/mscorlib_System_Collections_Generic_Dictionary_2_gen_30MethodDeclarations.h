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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2387;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3162;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3163;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2391;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2395;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15624_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15624(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2__ctor_m15624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15625_gshared (Dictionary_2_t2387 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15625(__this, ___comparer, method) (( void (*) (Dictionary_2_t2387 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15627_gshared (Dictionary_2_t2387 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15627(__this, ___capacity, method) (( void (*) (Dictionary_2_t2387 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15627_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15629_gshared (Dictionary_2_t2387 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15629(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2387 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m15629_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15631_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15631(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15631_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15633_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15633(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15633_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15635_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15635(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15635_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15637_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15637(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15637_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15639_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15639(__this, ___key, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15639_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15641_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15641(__this, method) (( bool (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15641_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15643_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15643(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15645_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15645(__this, method) (( bool (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15647_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15647(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15647_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15649_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15649(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15649_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15651_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2U5BU5D_t3162* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15651(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2U5BU5D_t3162*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15651_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15653_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15653(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15653_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15655_gshared (Dictionary_2_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15655_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15657_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15657(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15657_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15659_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15659(__this, method) (( Object_t* (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15659_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15661_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15661(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15661_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15663_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15663(__this, method) (( int32_t (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Count_m15663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15665_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15665(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15667_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15667_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15669_gshared (Dictionary_2_t2387 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15669(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2387 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15669_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15671_gshared (Dictionary_2_t2387 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15671(__this, ___size, method) (( void (*) (Dictionary_2_t2387 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15671_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15673_gshared (Dictionary_2_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15673_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2389  Dictionary_2_make_pair_m15675_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15675(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2389  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15675_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15677_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15677(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15677_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15679_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15679(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15679_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15681_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2U5BU5D_t3162* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2U5BU5D_t3162*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15681_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15683_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15683(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_Resize_m15683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15685_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m15685_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15687_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15687(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_Clear_m15687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15689_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15689(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15691_gshared (Dictionary_2_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15691(__this, ___value, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15691_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15693_gshared (Dictionary_2_t2387 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15693(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2387 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m15693_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15695_gshared (Dictionary_2_t2387 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15695(__this, ___sender, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15695_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15697_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15697(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15699_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15699(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15699_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2391 * Dictionary_2_get_Keys_m15701_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15701(__this, method) (( KeyCollection_t2391 * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Keys_m15701_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2395 * Dictionary_2_get_Values_m15702_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15702(__this, method) (( ValueCollection_t2395 * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Values_m15702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15704_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15704(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15704_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15706_gshared (Dictionary_2_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15706(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15706_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15708_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15708(__this, ___pair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15708_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2393  Dictionary_2_GetEnumerator_m15710_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15710(__this, method) (( Enumerator_t2393  (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m15712_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15712(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15712_gshared)(__this /* static, unused */, ___key, ___value, method)
