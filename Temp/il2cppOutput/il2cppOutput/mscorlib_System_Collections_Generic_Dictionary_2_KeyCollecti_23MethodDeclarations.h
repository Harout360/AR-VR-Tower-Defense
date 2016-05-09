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

// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2721;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2716;
// System.Collections.Generic.IEnumerator`1<Vuforia.Image/PIXEL_FORMAT>
struct IEnumerator_1_t3207;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2712;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m20222_gshared (KeyCollection_t2721 * __this, Dictionary_2_t2716 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m20222(__this, ___dictionary, method) (( void (*) (KeyCollection_t2721 *, Dictionary_2_t2716 *, const MethodInfo*))KeyCollection__ctor_m20222_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20223_gshared (KeyCollection_t2721 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20223(__this, ___item, method) (( void (*) (KeyCollection_t2721 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20224_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20224(__this, method) (( void (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20225_gshared (KeyCollection_t2721 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20225(__this, ___item, method) (( bool (*) (KeyCollection_t2721 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20226_gshared (KeyCollection_t2721 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20226(__this, ___item, method) (( bool (*) (KeyCollection_t2721 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20226_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20227_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20227(__this, method) (( Object_t* (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m20228_gshared (KeyCollection_t2721 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m20228(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2721 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m20228_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20229_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20229(__this, method) (( Object_t * (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20229_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20230_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20230(__this, method) (( bool (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20231_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20231(__this, method) (( bool (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20231_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m20232_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m20232(__this, method) (( Object_t * (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m20232_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m20233_gshared (KeyCollection_t2721 * __this, PIXEL_FORMATU5BU5D_t2712* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m20233(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2721 *, PIXEL_FORMATU5BU5D_t2712*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m20233_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2722  KeyCollection_GetEnumerator_m20234_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m20234(__this, method) (( Enumerator_t2722  (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_GetEnumerator_m20234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m20235_gshared (KeyCollection_t2721 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m20235(__this, method) (( int32_t (*) (KeyCollection_t2721 *, const MethodInfo*))KeyCollection_get_Count_m20235_gshared)(__this, method)
