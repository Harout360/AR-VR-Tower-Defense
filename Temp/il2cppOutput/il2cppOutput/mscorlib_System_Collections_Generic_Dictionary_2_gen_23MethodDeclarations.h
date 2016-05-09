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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Dictionary_2_t1050;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>[]
struct KeyValuePair_2U5BU5D_t3244;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct IEnumerator_1_t3245;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1253;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct KeyCollection_t2908;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct ValueCollection_t2912;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor()
extern "C" void Dictionary_2__ctor_m5803_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5803(__this, method) (( void (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2__ctor_m5803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23338_gshared (Dictionary_2_t1050 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23338(__this, ___comparer, method) (( void (*) (Dictionary_2_t1050 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23338_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23339_gshared (Dictionary_2_t1050 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23339(__this, ___capacity, method) (( void (*) (Dictionary_2_t1050 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23339_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23340_gshared (Dictionary_2_t1050 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23340(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1050 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2__ctor_m23340_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23341_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23341(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23341_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23342_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23342(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1050 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23342_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23343_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23343(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1050 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23343_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23344_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23344(__this, ___key, method) (( bool (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23345_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23345(__this, ___key, method) (( void (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23345_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23346_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23346(__this, method) (( bool (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23346_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23347_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23347(__this, method) (( Object_t * (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23348_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23348(__this, method) (( bool (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23349_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2_t2905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23349(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1050 *, KeyValuePair_2_t2905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23349_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23350_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2_t2905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23350(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1050 *, KeyValuePair_2_t2905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23350_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23351_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2U5BU5D_t3244* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23351(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1050 *, KeyValuePair_2U5BU5D_t3244*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23351_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23352_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2_t2905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23352(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1050 *, KeyValuePair_2_t2905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23352_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23353_gshared (Dictionary_2_t1050 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1050 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23353_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23354_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23354(__this, method) (( Object_t * (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23354_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23355_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23355(__this, method) (( Object_t* (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23355_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23356_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23356(__this, method) (( Object_t * (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23356_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23357_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23357(__this, method) (( int32_t (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_get_Count_m23357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Item(TKey)
extern "C" VirtualButtonData_t812  Dictionary_2_get_Item_m23358_gshared (Dictionary_2_t1050 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23358(__this, ___key, method) (( VirtualButtonData_t812  (*) (Dictionary_2_t1050 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m23358_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23359_gshared (Dictionary_2_t1050 * __this, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23359(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1050 *, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_set_Item_m23359_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23360_gshared (Dictionary_2_t1050 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23360(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1050 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23360_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23361_gshared (Dictionary_2_t1050 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23361(__this, ___size, method) (( void (*) (Dictionary_2_t1050 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23361_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23362_gshared (Dictionary_2_t1050 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1050 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23362_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2905  Dictionary_2_make_pair_m23363_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23363(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2905  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_make_pair_m23363_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m23364_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23364(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_pick_key_m23364_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_value(TKey,TValue)
extern "C" VirtualButtonData_t812  Dictionary_2_pick_value_m23365_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23365(__this /* static, unused */, ___key, ___value, method) (( VirtualButtonData_t812  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_pick_value_m23365_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23366_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2U5BU5D_t3244* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23366(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1050 *, KeyValuePair_2U5BU5D_t3244*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23366_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Resize()
extern "C" void Dictionary_2_Resize_m23367_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23367(__this, method) (( void (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_Resize_m23367_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23368_gshared (Dictionary_2_t1050 * __this, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23368(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1050 *, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_Add_m23368_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Clear()
extern "C" void Dictionary_2_Clear_m23369_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23369(__this, method) (( void (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_Clear_m23369_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23370_gshared (Dictionary_2_t1050 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23370(__this, ___key, method) (( bool (*) (Dictionary_2_t1050 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m23370_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23371_gshared (Dictionary_2_t1050 * __this, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23371(__this, ___value, method) (( bool (*) (Dictionary_2_t1050 *, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_ContainsValue_m23371_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23372_gshared (Dictionary_2_t1050 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23372(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1050 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))Dictionary_2_GetObjectData_m23372_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23373_gshared (Dictionary_2_t1050 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23373(__this, ___sender, method) (( void (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23373_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23374_gshared (Dictionary_2_t1050 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23374(__this, ___key, method) (( bool (*) (Dictionary_2_t1050 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m23374_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23375_gshared (Dictionary_2_t1050 * __this, int32_t ___key, VirtualButtonData_t812 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23375(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1050 *, int32_t, VirtualButtonData_t812 *, const MethodInfo*))Dictionary_2_TryGetValue_m23375_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Keys()
extern "C" KeyCollection_t2908 * Dictionary_2_get_Keys_m23376_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23376(__this, method) (( KeyCollection_t2908 * (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_get_Keys_m23376_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Values()
extern "C" ValueCollection_t2912 * Dictionary_2_get_Values_m23377_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23377(__this, method) (( ValueCollection_t2912 * (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_get_Values_m23377_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m23378_gshared (Dictionary_2_t1050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23378(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23378_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTValue(System.Object)
extern "C" VirtualButtonData_t812  Dictionary_2_ToTValue_m23379_gshared (Dictionary_2_t1050 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23379(__this, ___value, method) (( VirtualButtonData_t812  (*) (Dictionary_2_t1050 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23379_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23380_gshared (Dictionary_2_t1050 * __this, KeyValuePair_2_t2905  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23380(__this, ___pair, method) (( bool (*) (Dictionary_2_t1050 *, KeyValuePair_2_t2905 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23380_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetEnumerator()
extern "C" Enumerator_t2910  Dictionary_2_GetEnumerator_m23381_gshared (Dictionary_2_t1050 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23381(__this, method) (( Enumerator_t2910  (*) (Dictionary_2_t1050 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23381_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1438  Dictionary_2_U3CCopyToU3Em__0_m23382_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t812  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23382(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1438  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t812 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23382_gshared)(__this /* static, unused */, ___key, ___value, method)
