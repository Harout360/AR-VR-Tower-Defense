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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2194;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t409;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t99;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2641;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2193;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m13278_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1__ctor_m13278(__this, method) (( void (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1__ctor_m13278_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13279_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13279(__this, method) (( bool (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13279_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13280_gshared (Collection_1_t2194 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m13280(__this, ___array, ___index, method) (( void (*) (Collection_1_t2194 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13280_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13281_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13281(__this, method) (( Object_t * (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13281_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13282_gshared (Collection_1_t2194 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m13282(__this, ___value, method) (( int32_t (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m13282_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m13283_gshared (Collection_1_t2194 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m13283(__this, ___value, method) (( bool (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m13283_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13284_gshared (Collection_1_t2194 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m13284(__this, ___value, method) (( int32_t (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13284_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m13285_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m13285(__this, ___index, ___value, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m13285_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m13286_gshared (Collection_1_t2194 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m13286(__this, ___value, method) (( void (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m13286_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13287_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13287(__this, method) (( bool (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13287_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13288_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13288(__this, method) (( Object_t * (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13288_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13289_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13289(__this, method) (( bool (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13289_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13290_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13290(__this, method) (( bool (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13290_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13291_gshared (Collection_1_t2194 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m13291(__this, ___index, method) (( Object_t * (*) (Collection_1_t2194 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13291_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m13292_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m13292(__this, ___index, ___value, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13292_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m13293_gshared (Collection_1_t2194 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m13293(__this, ___item, method) (( void (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_Add_m13293_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m13294_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_Clear_m13294(__this, method) (( void (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_Clear_m13294_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m13295_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m13295(__this, method) (( void (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_ClearItems_m13295_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m13296_gshared (Collection_1_t2194 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m13296(__this, ___item, method) (( bool (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_Contains_m13296_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m13297_gshared (Collection_1_t2194 * __this, ObjectU5BU5D_t99* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m13297(__this, ___array, ___index, method) (( void (*) (Collection_1_t2194 *, ObjectU5BU5D_t99*, int32_t, const MethodInfo*))Collection_1_CopyTo_m13297_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m13298_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m13298(__this, method) (( Object_t* (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_GetEnumerator_m13298_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13299_gshared (Collection_1_t2194 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m13299(__this, ___item, method) (( int32_t (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m13299_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m13300_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m13300(__this, ___index, ___item, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m13300_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13301_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m13301(__this, ___index, ___item, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m13301_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m13302_gshared (Collection_1_t2194 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m13302(__this, ___item, method) (( bool (*) (Collection_1_t2194 *, Object_t *, const MethodInfo*))Collection_1_Remove_m13302_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m13303_gshared (Collection_1_t2194 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m13303(__this, ___index, method) (( void (*) (Collection_1_t2194 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m13303_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13304_gshared (Collection_1_t2194 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m13304(__this, ___index, method) (( void (*) (Collection_1_t2194 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m13304_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m13305_gshared (Collection_1_t2194 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m13305(__this, method) (( int32_t (*) (Collection_1_t2194 *, const MethodInfo*))Collection_1_get_Count_m13305_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m13306_gshared (Collection_1_t2194 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m13306(__this, ___index, method) (( Object_t * (*) (Collection_1_t2194 *, int32_t, const MethodInfo*))Collection_1_get_Item_m13306_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m13307_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m13307(__this, ___index, ___value, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m13307_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13308_gshared (Collection_1_t2194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m13308(__this, ___index, ___item, method) (( void (*) (Collection_1_t2194 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m13308_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13309_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m13309(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m13309_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m13310_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m13310(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m13310_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13311_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m13311(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m13311_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m13312_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m13312(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m13312_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m13313_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m13313(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m13313_gshared)(__this /* static, unused */, ___list, method)
