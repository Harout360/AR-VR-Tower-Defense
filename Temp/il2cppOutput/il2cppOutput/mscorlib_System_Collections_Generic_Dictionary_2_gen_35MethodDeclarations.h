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

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2940;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>[]
struct KeyValuePair_2U5BU5D_t3251;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct IEnumerator_1_t3252;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t2945;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t2949;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void Dictionary_2__ctor_m23821_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23821(__this, method) (( void (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2__ctor_m23821_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23823_gshared (Dictionary_2_t2940 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23823(__this, ___comparer, method) (( void (*) (Dictionary_2_t2940 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23823_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23825_gshared (Dictionary_2_t2940 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23825(__this, ___capacity, method) (( void (*) (Dictionary_2_t2940 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23825_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23827_gshared (Dictionary_2_t2940 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23827(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2940 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m23827_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23829_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23829(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23829_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23831_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23831(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23831_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23833_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23833(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23833_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23835_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23835(__this, ___key, method) (( bool (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23837_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23837(__this, ___key, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23837_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23839_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23839(__this, method) (( bool (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23841_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23841(__this, method) (( Object_t * (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23841_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23843_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23843(__this, method) (( bool (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23845_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2_t2942  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23845(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2940 *, KeyValuePair_2_t2942 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23845_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23847_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2_t2942  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23847(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2940 *, KeyValuePair_2_t2942 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23847_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23849_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2U5BU5D_t3251* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23849(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2940 *, KeyValuePair_2U5BU5D_t3251*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23849_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23851_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2_t2942  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23851(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2940 *, KeyValuePair_2_t2942 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23851_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23853_gshared (Dictionary_2_t2940 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23853(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2940 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23853_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23855_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23855(__this, method) (( Object_t * (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23855_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23857_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23857(__this, method) (( Object_t* (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23857_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23859_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23859(__this, method) (( Object_t * (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23859_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23861_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23861(__this, method) (( int32_t (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_get_Count_m23861_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t903  Dictionary_2_get_Item_m23863_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23863(__this, ___key, method) (( ProfileData_t903  (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23863_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23865_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23865(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_set_Item_m23865_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23867_gshared (Dictionary_2_t2940 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23867(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2940 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23867_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23869_gshared (Dictionary_2_t2940 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23869(__this, ___size, method) (( void (*) (Dictionary_2_t2940 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23869_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23871_gshared (Dictionary_2_t2940 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23871(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2940 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23871_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2942  Dictionary_2_make_pair_m23873_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23873(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2942  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_make_pair_m23873_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23875_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23875(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_pick_key_m23875_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern "C" ProfileData_t903  Dictionary_2_pick_value_m23877_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23877(__this /* static, unused */, ___key, ___value, method) (( ProfileData_t903  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_pick_value_m23877_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23879_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2U5BU5D_t3251* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23879(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2940 *, KeyValuePair_2U5BU5D_t3251*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23879_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern "C" void Dictionary_2_Resize_m23881_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23881(__this, method) (( void (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_Resize_m23881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23883_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23883(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_Add_m23883_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern "C" void Dictionary_2_Clear_m23885_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23885(__this, method) (( void (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_Clear_m23885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23887_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23887(__this, ___key, method) (( bool (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23887_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23889_gshared (Dictionary_2_t2940 * __this, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23889(__this, ___value, method) (( bool (*) (Dictionary_2_t2940 *, ProfileData_t903 , const MethodInfo*))Dictionary_2_ContainsValue_m23889_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23891_gshared (Dictionary_2_t2940 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23891(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2940 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m23891_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23893_gshared (Dictionary_2_t2940 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23893(__this, ___sender, method) (( void (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23893_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23895_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23895(__this, ___key, method) (( bool (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23895_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23897_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, ProfileData_t903 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23897(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2940 *, Object_t *, ProfileData_t903 *, const MethodInfo*))Dictionary_2_TryGetValue_m23897_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern "C" KeyCollection_t2945 * Dictionary_2_get_Keys_m23899_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23899(__this, method) (( KeyCollection_t2945 * (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_get_Keys_m23899_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern "C" ValueCollection_t2949 * Dictionary_2_get_Values_m23901_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23901(__this, method) (( ValueCollection_t2949 * (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_get_Values_m23901_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23903_gshared (Dictionary_2_t2940 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23903(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23903_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t903  Dictionary_2_ToTValue_m23905_gshared (Dictionary_2_t2940 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23905(__this, ___value, method) (( ProfileData_t903  (*) (Dictionary_2_t2940 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23905_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23907_gshared (Dictionary_2_t2940 * __this, KeyValuePair_2_t2942  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23907(__this, ___pair, method) (( bool (*) (Dictionary_2_t2940 *, KeyValuePair_2_t2942 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23907_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t2947  Dictionary_2_GetEnumerator_m23909_gshared (Dictionary_2_t2940 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23909(__this, method) (( Enumerator_t2947  (*) (Dictionary_2_t2940 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23909_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m23911_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t903  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23911(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t903 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23911_gshared)(__this /* static, unused */, ___key, ___value, method)
