﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2395;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2387;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2641;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object[]
struct ObjectU5BU5D_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m15763_gshared (ValueCollection_t2395 * __this, Dictionary_2_t2387 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m15763(__this, ___dictionary, method) (( void (*) (ValueCollection_t2395 *, Dictionary_2_t2387 *, const MethodInfo*))ValueCollection__ctor_m15763_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15764_gshared (ValueCollection_t2395 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15764(__this, ___item, method) (( void (*) (ValueCollection_t2395 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15764_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15765_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15765(__this, method) (( void (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15766_gshared (ValueCollection_t2395 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15766(__this, ___item, method) (( bool (*) (ValueCollection_t2395 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15766_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15767_gshared (ValueCollection_t2395 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15767(__this, ___item, method) (( bool (*) (ValueCollection_t2395 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15767_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15768_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15768(__this, method) (( Object_t* (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m15769_gshared (ValueCollection_t2395 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m15769(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2395 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m15769_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15770_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15770(__this, method) (( Object_t * (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15771_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15771(__this, method) (( bool (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15772_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15772(__this, method) (( bool (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m15773_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m15773(__this, method) (( Object_t * (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m15773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m15774_gshared (ValueCollection_t2395 * __this, ObjectU5BU5D_t99* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m15774(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2395 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m15774_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2396  ValueCollection_GetEnumerator_m15775_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m15775(__this, method) (( Enumerator_t2396  (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_GetEnumerator_m15775_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m15776_gshared (ValueCollection_t2395 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m15776(__this, method) (( int32_t (*) (ValueCollection_t2395 *, const MethodInfo*))ValueCollection_get_Count_m15776_gshared)(__this, method)
