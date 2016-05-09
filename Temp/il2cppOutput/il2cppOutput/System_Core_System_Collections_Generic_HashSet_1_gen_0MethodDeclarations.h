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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2641;
// System.Object[]
struct ObjectU5BU5D_t99;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m24523_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m24523(__this, method) (( void (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1__ctor_m24523_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m24525_gshared (HashSet_1_t2988 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m24525(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2988 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))HashSet_1__ctor_m24525_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24527_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24527(__this, method) (( Object_t* (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24529_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24529(__this, method) (( bool (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24529_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24531_gshared (HashSet_1_t2988 * __this, ObjectU5BU5D_t99* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24531(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2988 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24531_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24533_gshared (HashSet_1_t2988 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24533(__this, ___item, method) (( void (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24533_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24535_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24535(__this, method) (( Object_t * (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24535_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m24537_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m24537(__this, method) (( int32_t (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_get_Count_m24537_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m24539_gshared (HashSet_1_t2988 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m24539(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2988 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m24539_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m24541_gshared (HashSet_1_t2988 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m24541(__this, ___size, method) (( void (*) (HashSet_1_t2988 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m24541_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m24543_gshared (HashSet_1_t2988 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m24543(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2988 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m24543_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m24545_gshared (HashSet_1_t2988 * __this, ObjectU5BU5D_t99* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m24545(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2988 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m24545_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m24547_gshared (HashSet_1_t2988 * __this, ObjectU5BU5D_t99* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m24547(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2988 *, ObjectU5BU5D_t99*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m24547_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m24549_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m24549(__this, method) (( void (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_Resize_m24549_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m24551_gshared (HashSet_1_t2988 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m24551(__this, ___index, method) (( int32_t (*) (HashSet_1_t2988 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m24551_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m24553_gshared (HashSet_1_t2988 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m24553(__this, ___item, method) (( int32_t (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m24553_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m24554_gshared (HashSet_1_t2988 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m24554(__this, ___item, method) (( bool (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_Add_m24554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m24556_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m24556(__this, method) (( void (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_Clear_m24556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m24558_gshared (HashSet_1_t2988 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m24558(__this, ___item, method) (( bool (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m24558_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m24560_gshared (HashSet_1_t2988 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m24560(__this, ___item, method) (( bool (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m24560_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m24562_gshared (HashSet_1_t2988 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m24562(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2988 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))HashSet_1_GetObjectData_m24562_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m24564_gshared (HashSet_1_t2988 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m24564(__this, ___sender, method) (( void (*) (HashSet_1_t2988 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m24564_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2992  HashSet_1_GetEnumerator_m24565_gshared (HashSet_1_t2988 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m24565(__this, method) (( Enumerator_t2992  (*) (HashSet_1_t2988 *, const MethodInfo*))HashSet_1_GetEnumerator_m24565_gshared)(__this, method)
