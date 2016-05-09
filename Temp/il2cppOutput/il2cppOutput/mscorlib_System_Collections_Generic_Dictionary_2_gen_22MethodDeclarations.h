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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1049;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>[]
struct KeyValuePair_2U5BU5D_t3241;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct IEnumerator_1_t3242;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct KeyCollection_t2892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct ValueCollection_t2896;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor()
extern "C" void Dictionary_2__ctor_m5801_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5801(__this, method) (( void (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2__ctor_m5801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23196_gshared (Dictionary_2_t1049 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23196(__this, ___comparer, method) (( void (*) (Dictionary_2_t1049 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23196_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23197_gshared (Dictionary_2_t1049 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23197(__this, ___capacity, method) (( void (*) (Dictionary_2_t1049 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23197_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23198_gshared (Dictionary_2_t1049 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23198(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1049 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m23198_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23199_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23199(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23199_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23200_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23200(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1049 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23200_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23201_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23201(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1049 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23201_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23202_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23202(__this, ___key, method) (( bool (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23203_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23203(__this, ___key, method) (( void (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23203_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23204_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23204(__this, method) (( bool (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23204_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23205_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23205(__this, method) (( Object_t * (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23206_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23206(__this, method) (( bool (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23206_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23207_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2_t2890  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23207(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1049 *, KeyValuePair_2_t2890 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23207_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23208_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2_t2890  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23208(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1049 *, KeyValuePair_2_t2890 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23208_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23209_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2U5BU5D_t3241* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23209(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1049 *, KeyValuePair_2U5BU5D_t3241*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23209_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23210_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2_t2890  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23210(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1049 *, KeyValuePair_2_t2890 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23210_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23211_gshared (Dictionary_2_t1049 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23211(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1049 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23211_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23212_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23212(__this, method) (( Object_t * (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23212_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23213_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23213(__this, method) (( Object_t* (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23213_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23214_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23214(__this, method) (( Object_t * (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23214_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23215_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23215(__this, method) (( int32_t (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_get_Count_m23215_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Item(TKey)
extern "C" TrackableResultData_t811  Dictionary_2_get_Item_m23216_gshared (Dictionary_2_t1049 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23216(__this, ___key, method) (( TrackableResultData_t811  (*) (Dictionary_2_t1049 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m23216_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23217_gshared (Dictionary_2_t1049 * __this, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23217(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1049 *, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_set_Item_m23217_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23218_gshared (Dictionary_2_t1049 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23218(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1049 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23218_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23219_gshared (Dictionary_2_t1049 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23219(__this, ___size, method) (( void (*) (Dictionary_2_t1049 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23219_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23220_gshared (Dictionary_2_t1049 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23220(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1049 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23220_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2890  Dictionary_2_make_pair_m23221_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23221(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2890  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_make_pair_m23221_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m23222_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23222(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_pick_key_m23222_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_value(TKey,TValue)
extern "C" TrackableResultData_t811  Dictionary_2_pick_value_m23223_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23223(__this /* static, unused */, ___key, ___value, method) (( TrackableResultData_t811  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_pick_value_m23223_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23224_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2U5BU5D_t3241* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23224(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1049 *, KeyValuePair_2U5BU5D_t3241*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23224_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Resize()
extern "C" void Dictionary_2_Resize_m23225_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23225(__this, method) (( void (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_Resize_m23225_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23226_gshared (Dictionary_2_t1049 * __this, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23226(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1049 *, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_Add_m23226_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Clear()
extern "C" void Dictionary_2_Clear_m23227_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23227(__this, method) (( void (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_Clear_m23227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23228_gshared (Dictionary_2_t1049 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23228(__this, ___key, method) (( bool (*) (Dictionary_2_t1049 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m23228_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23229_gshared (Dictionary_2_t1049 * __this, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23229(__this, ___value, method) (( bool (*) (Dictionary_2_t1049 *, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_ContainsValue_m23229_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23230_gshared (Dictionary_2_t1049 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23230(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1049 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m23230_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23231_gshared (Dictionary_2_t1049 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23231(__this, ___sender, method) (( void (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23231_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23232_gshared (Dictionary_2_t1049 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23232(__this, ___key, method) (( bool (*) (Dictionary_2_t1049 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m23232_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23233_gshared (Dictionary_2_t1049 * __this, int32_t ___key, TrackableResultData_t811 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23233(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1049 *, int32_t, TrackableResultData_t811 *, const MethodInfo*))Dictionary_2_TryGetValue_m23233_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Keys()
extern "C" KeyCollection_t2892 * Dictionary_2_get_Keys_m23234_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23234(__this, method) (( KeyCollection_t2892 * (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_get_Keys_m23234_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Values()
extern "C" ValueCollection_t2896 * Dictionary_2_get_Values_m23235_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23235(__this, method) (( ValueCollection_t2896 * (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_get_Values_m23235_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m23236_gshared (Dictionary_2_t1049 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23236(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23236_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTValue(System.Object)
extern "C" TrackableResultData_t811  Dictionary_2_ToTValue_m23237_gshared (Dictionary_2_t1049 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23237(__this, ___value, method) (( TrackableResultData_t811  (*) (Dictionary_2_t1049 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23237_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23238_gshared (Dictionary_2_t1049 * __this, KeyValuePair_2_t2890  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23238(__this, ___pair, method) (( bool (*) (Dictionary_2_t1049 *, KeyValuePair_2_t2890 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23238_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t2894  Dictionary_2_GetEnumerator_m23239_gshared (Dictionary_2_t1049 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23239(__this, method) (( Enumerator_t2894  (*) (Dictionary_2_t1049 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23239_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m23240_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t811  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23240(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t811 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23240_gshared)(__this /* static, unused */, ___key, ___value, method)
