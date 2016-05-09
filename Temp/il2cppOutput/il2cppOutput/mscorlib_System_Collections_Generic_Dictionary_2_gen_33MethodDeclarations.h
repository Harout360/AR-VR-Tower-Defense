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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2716;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2715;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t3205;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t3206;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2721;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2725;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20114_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20114(__this, method) (( void (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2__ctor_m20114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20116_gshared (Dictionary_2_t2716 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20116(__this, ___comparer, method) (( void (*) (Dictionary_2_t2716 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20116_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20118_gshared (Dictionary_2_t2716 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20118(__this, ___capacity, method) (( void (*) (Dictionary_2_t2716 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20120_gshared (Dictionary_2_t2716 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20120(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2716 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m20120_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20122_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20122(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20122_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20124_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20124(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2716 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20124_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20126_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2716 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20126_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20128_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20128(__this, ___key, method) (( bool (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20128_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20130_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20130(__this, ___key, method) (( void (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20130_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20132_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20132(__this, method) (( bool (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20134_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20134(__this, method) (( Object_t * (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20136_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20136(__this, method) (( bool (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20136_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20138_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2_t2718  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20138(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2716 *, KeyValuePair_2_t2718 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20138_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20140_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2_t2718  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20140(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2716 *, KeyValuePair_2_t2718 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20140_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20142_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2U5BU5D_t3205* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20142(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2716 *, KeyValuePair_2U5BU5D_t3205*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20142_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20144_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2_t2718  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20144(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2716 *, KeyValuePair_2_t2718 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20144_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20146_gshared (Dictionary_2_t2716 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20146(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2716 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20146_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20148_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20148(__this, method) (( Object_t * (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20148_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20150_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20150(__this, method) (( Object_t* (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20150_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20152_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20152(__this, method) (( Object_t * (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20154_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20154(__this, method) (( int32_t (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_get_Count_m20154_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20156_gshared (Dictionary_2_t2716 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20156(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2716 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20156_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20158_gshared (Dictionary_2_t2716 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20158(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2716 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20158_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20160_gshared (Dictionary_2_t2716 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20160(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2716 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20160_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20162_gshared (Dictionary_2_t2716 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20162(__this, ___size, method) (( void (*) (Dictionary_2_t2716 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20162_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20164_gshared (Dictionary_2_t2716 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20164(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2716 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20164_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2718  Dictionary_2_make_pair_m20166_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20166(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2718  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20166_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20168_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20168(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20168_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20170_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20170(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20170_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20172_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2U5BU5D_t3205* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2716 *, KeyValuePair_2U5BU5D_t3205*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20172_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20174_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20174(__this, method) (( void (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_Resize_m20174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20176_gshared (Dictionary_2_t2716 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20176(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2716 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20176_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20178_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20178(__this, method) (( void (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_Clear_m20178_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20180_gshared (Dictionary_2_t2716 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20180(__this, ___key, method) (( bool (*) (Dictionary_2_t2716 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20180_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20182_gshared (Dictionary_2_t2716 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20182(__this, ___value, method) (( bool (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20182_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20184_gshared (Dictionary_2_t2716 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20184(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2716 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m20184_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20186_gshared (Dictionary_2_t2716 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20186(__this, ___sender, method) (( void (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20186_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20188_gshared (Dictionary_2_t2716 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20188(__this, ___key, method) (( bool (*) (Dictionary_2_t2716 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20188_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20190_gshared (Dictionary_2_t2716 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20190(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2716 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20190_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2721 * Dictionary_2_get_Keys_m20192_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20192(__this, method) (( KeyCollection_t2721 * (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_get_Keys_m20192_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2725 * Dictionary_2_get_Values_m20193_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20193(__this, method) (( ValueCollection_t2725 * (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_get_Values_m20193_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20195_gshared (Dictionary_2_t2716 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20195(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20195_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20197_gshared (Dictionary_2_t2716 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20197(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2716 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20197_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20199_gshared (Dictionary_2_t2716 * __this, KeyValuePair_2_t2718  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20199(__this, ___pair, method) (( bool (*) (Dictionary_2_t2716 *, KeyValuePair_2_t2718 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20199_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2723  Dictionary_2_GetEnumerator_m20201_gshared (Dictionary_2_t2716 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20201(__this, method) (( Enumerator_t2723  (*) (Dictionary_2_t2716 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20201_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m20203_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20203(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20203_gshared)(__this /* static, unused */, ___key, ___value, method)
