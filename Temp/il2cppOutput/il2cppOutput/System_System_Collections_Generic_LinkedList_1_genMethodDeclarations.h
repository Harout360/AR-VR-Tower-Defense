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

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t829;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3142;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t990;
// System.Int32[]
struct Int32U5BU5D_t118;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
extern "C" void LinkedList_1__ctor_m5646_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m5646(__this, method) (( void (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1__ctor_m5646_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m21180_gshared (LinkedList_1_t829 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m21180(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t829 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))LinkedList_1__ctor_m21180_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21181_gshared (LinkedList_1_t829 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21181(__this, ___value, method) (( void (*) (LinkedList_1_t829 *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21181_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m21182_gshared (LinkedList_1_t829 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m21182(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t829 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m21182_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21183_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21183(__this, method) (( Object_t* (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21183_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21184_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21184(__this, method) (( Object_t * (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21185_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21185(__this, method) (( bool (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21185_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21186_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21186(__this, method) (( bool (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21186_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21187_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21187(__this, method) (( Object_t * (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21187_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m21188_gshared (LinkedList_1_t829 * __this, LinkedListNode_1_t990 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m21188(__this, ___node, method) (( void (*) (LinkedList_1_t829 *, LinkedListNode_1_t990 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m21188_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(T)
extern "C" LinkedListNode_1_t990 * LinkedList_1_AddLast_m5647_gshared (LinkedList_1_t829 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m5647(__this, ___value, method) (( LinkedListNode_1_t990 * (*) (LinkedList_1_t829 *, int32_t, const MethodInfo*))LinkedList_1_AddLast_m5647_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Clear()
extern "C" void LinkedList_1_Clear_m21189_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m21189(__this, method) (( void (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_Clear_m21189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Contains(T)
extern "C" bool LinkedList_1_Contains_m21190_gshared (LinkedList_1_t829 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m21190(__this, ___value, method) (( bool (*) (LinkedList_1_t829 *, int32_t, const MethodInfo*))LinkedList_1_Contains_m21190_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m21191_gshared (LinkedList_1_t829 * __this, Int32U5BU5D_t118* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m21191(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t829 *, Int32U5BU5D_t118*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m21191_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::Find(T)
extern "C" LinkedListNode_1_t990 * LinkedList_1_Find_m21192_gshared (LinkedList_1_t829 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Find_m21192(__this, ___value, method) (( LinkedListNode_1_t990 * (*) (LinkedList_1_t829 *, int32_t, const MethodInfo*))LinkedList_1_Find_m21192_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2781  LinkedList_1_GetEnumerator_m21193_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m21193(__this, method) (( Enumerator_t2781  (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_GetEnumerator_m21193_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m21194_gshared (LinkedList_1_t829 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m21194(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t829 *, SerializationInfo_t425 *, StreamingContext_t426 , const MethodInfo*))LinkedList_1_GetObjectData_m21194_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m21195_gshared (LinkedList_1_t829 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m21195(__this, ___sender, method) (( void (*) (LinkedList_1_t829 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m21195_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Remove(T)
extern "C" bool LinkedList_1_Remove_m21196_gshared (LinkedList_1_t829 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m21196(__this, ___value, method) (( bool (*) (LinkedList_1_t829 *, int32_t, const MethodInfo*))LinkedList_1_Remove_m21196_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m5800_gshared (LinkedList_1_t829 * __this, LinkedListNode_1_t990 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m5800(__this, ___node, method) (( void (*) (LinkedList_1_t829 *, LinkedListNode_1_t990 *, const MethodInfo*))LinkedList_1_Remove_m5800_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m21197_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m21197(__this, method) (( void (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_RemoveLast_m21197_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m21198_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m21198(__this, method) (( int32_t (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_get_Count_m21198_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
extern "C" LinkedListNode_1_t990 * LinkedList_1_get_First_m5655_gshared (LinkedList_1_t829 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m5655(__this, method) (( LinkedListNode_1_t990 * (*) (LinkedList_1_t829 *, const MethodInfo*))LinkedList_1_get_First_m5655_gshared)(__this, method)
