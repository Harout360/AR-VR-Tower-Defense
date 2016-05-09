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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2363;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3157;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3158;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2367;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15294_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15294(__this, method) (( void (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2__ctor_m15294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15296_gshared (Dictionary_2_t2363 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15296(__this, ___comparer, method) (( void (*) (Dictionary_2_t2363 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15296_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15298_gshared (Dictionary_2_t2363 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15298(__this, ___capacity, method) (( void (*) (Dictionary_2_t2363 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15298_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15300_gshared (Dictionary_2_t2363 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2363 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m15300_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15302_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15302(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15302_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15304_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15304(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2363 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15304_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15306_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15306(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2363 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15306_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15308_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15308(__this, ___key, method) (( bool (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15308_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15310_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15310(__this, ___key, method) (( void (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15310_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15312_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15312(__this, method) (( bool (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15314_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15314(__this, method) (( Object_t * (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15316_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15316(__this, method) (( bool (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15318_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2_t2365  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15318(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2363 *, KeyValuePair_2_t2365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15318_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15320_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2_t2365  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15320(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2363 *, KeyValuePair_2_t2365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15320_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15322_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2U5BU5D_t3157* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15322(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2363 *, KeyValuePair_2U5BU5D_t3157*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15322_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15324_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2_t2365  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15324(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2363 *, KeyValuePair_2_t2365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15324_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15326_gshared (Dictionary_2_t2363 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15326(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2363 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15326_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15328_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15328(__this, method) (( Object_t * (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15328_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15330_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15330(__this, method) (( Object_t* (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15330_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15332_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15332(__this, method) (( Object_t * (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15332_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15334_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15334(__this, method) (( int32_t (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_get_Count_m15334_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15336_gshared (Dictionary_2_t2363 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15336(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2363 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15336_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15338_gshared (Dictionary_2_t2363 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15338(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2363 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15338_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15340_gshared (Dictionary_2_t2363 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15340(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2363 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15340_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15342_gshared (Dictionary_2_t2363 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15342(__this, ___size, method) (( void (*) (Dictionary_2_t2363 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15342_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15344_gshared (Dictionary_2_t2363 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15344(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2363 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15344_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2365  Dictionary_2_make_pair_m15346_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15346(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2365  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15346_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15348_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15348(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15348_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15350_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15350(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15350_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15352_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2U5BU5D_t3157* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15352(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2363 *, KeyValuePair_2U5BU5D_t3157*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15352_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15354_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15354(__this, method) (( void (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_Resize_m15354_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15356_gshared (Dictionary_2_t2363 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15356(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2363 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15356_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15358_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15358(__this, method) (( void (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_Clear_m15358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15360_gshared (Dictionary_2_t2363 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15360(__this, ___key, method) (( bool (*) (Dictionary_2_t2363 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15360_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15362_gshared (Dictionary_2_t2363 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15362(__this, ___value, method) (( bool (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15362_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15364_gshared (Dictionary_2_t2363 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15364(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2363 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m15364_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15366_gshared (Dictionary_2_t2363 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15366(__this, ___sender, method) (( void (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15366_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15368_gshared (Dictionary_2_t2363 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15368(__this, ___key, method) (( bool (*) (Dictionary_2_t2363 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15368_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15370_gshared (Dictionary_2_t2363 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15370(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2363 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15370_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2367 * Dictionary_2_get_Keys_m15372_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15372(__this, method) (( KeyCollection_t2367 * (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_get_Keys_m15372_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2371 * Dictionary_2_get_Values_m15374_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15374(__this, method) (( ValueCollection_t2371 * (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_get_Values_m15374_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15376_gshared (Dictionary_2_t2363 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15376(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15376_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15378_gshared (Dictionary_2_t2363 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15378(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2363 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15378_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15380_gshared (Dictionary_2_t2363 * __this, KeyValuePair_2_t2365  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15380(__this, ___pair, method) (( bool (*) (Dictionary_2_t2363 *, KeyValuePair_2_t2365 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15380_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2369  Dictionary_2_GetEnumerator_m15382_gshared (Dictionary_2_t2363 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15382(__this, method) (( Enumerator_t2369  (*) (Dictionary_2_t2363 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15382_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m15384_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15384(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15384_gshared)(__this /* static, unused */, ___key, ___value, method)
