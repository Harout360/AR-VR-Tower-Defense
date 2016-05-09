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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3010;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3260;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3261;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t3015;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t3019;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m24753_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24753(__this, method) (( void (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2__ctor_m24753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24754_gshared (Dictionary_2_t3010 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24754(__this, ___comparer, method) (( void (*) (Dictionary_2_t3010 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24754_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24756_gshared (Dictionary_2_t3010 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24756(__this, ___capacity, method) (( void (*) (Dictionary_2_t3010 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24756_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24758_gshared (Dictionary_2_t3010 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24758(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3010 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m24758_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24760_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24760(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24760_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24762_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24764_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24764(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24764_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24766_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24766(__this, ___key, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24766_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24768_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24768(__this, ___key, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24768_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24770_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24770(__this, method) (( bool (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24772_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24772(__this, method) (( Object_t * (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24774_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24774(__this, method) (( bool (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24776_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2_t3012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24776(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3010 *, KeyValuePair_2_t3012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24776_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24778_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2_t3012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24778(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3010 *, KeyValuePair_2_t3012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24778_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24780_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2U5BU5D_t3260* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24780(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3010 *, KeyValuePair_2U5BU5D_t3260*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24780_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24782_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2_t3012  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24782(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3010 *, KeyValuePair_2_t3012 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24784_gshared (Dictionary_2_t3010 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24784(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3010 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24784_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786(__this, method) (( Object_t * (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24788_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24788(__this, method) (( Object_t* (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24788_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24790_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24790(__this, method) (( Object_t * (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24790_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24792_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24792(__this, method) (( int32_t (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_get_Count_m24792_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m24794_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24794(__this, ___key, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m24794_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24796_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24796(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m24796_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24798_gshared (Dictionary_2_t3010 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24798(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3010 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24798_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24800_gshared (Dictionary_2_t3010 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24800(__this, ___size, method) (( void (*) (Dictionary_2_t3010 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24800_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24802_gshared (Dictionary_2_t3010 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3010 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24802_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3012  Dictionary_2_make_pair_m24804_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24804(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3012  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m24804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m24806_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24806(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m24806_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m24808_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24808(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m24808_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24810_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2U5BU5D_t3260* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3010 *, KeyValuePair_2U5BU5D_t3260*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24810_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m24812_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24812(__this, method) (( void (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_Resize_m24812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24814_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m24814_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m24816_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24816(__this, method) (( void (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_Clear_m24816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24818_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24818(__this, ___key, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m24818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24820_gshared (Dictionary_2_t3010 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24820(__this, ___value, method) (( bool (*) (Dictionary_2_t3010 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m24820_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24822_gshared (Dictionary_2_t3010 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24822(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3010 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m24822_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24824_gshared (Dictionary_2_t3010 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24824(__this, ___sender, method) (( void (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24824_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24826_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24826(__this, ___key, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m24826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24828_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24828(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m24828_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t3015 * Dictionary_2_get_Keys_m24830_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24830(__this, method) (( KeyCollection_t3015 * (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_get_Keys_m24830_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t3019 * Dictionary_2_get_Values_m24832_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24832(__this, method) (( ValueCollection_t3019 * (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_get_Values_m24832_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m24834_gshared (Dictionary_2_t3010 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24834(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24834_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m24836_gshared (Dictionary_2_t3010 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24836(__this, ___value, method) (( bool (*) (Dictionary_2_t3010 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24836_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24838_gshared (Dictionary_2_t3010 * __this, KeyValuePair_2_t3012  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24838(__this, ___pair, method) (( bool (*) (Dictionary_2_t3010 *, KeyValuePair_2_t3012 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24838_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t3017  Dictionary_2_GetEnumerator_m24840_gshared (Dictionary_2_t3010 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24840(__this, method) (( Enumerator_t3017  (*) (Dictionary_2_t3010 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24840_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m24842_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24842(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24842_gshared)(__this /* static, unused */, ___key, ___value, method)
