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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2354;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2339;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15229_gshared (ShimEnumerator_t2354 * __this, Dictionary_2_t2339 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15229(__this, ___host, method) (( void (*) (ShimEnumerator_t2354 *, Dictionary_2_t2339 *, const MethodInfo*))ShimEnumerator__ctor_m15229_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15230_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15230(__this, method) (( bool (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_MoveNext_m15230_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1438  ShimEnumerator_get_Entry_m15231_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15231(__this, method) (( DictionaryEntry_t1438  (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_get_Entry_m15231_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15232_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15232(__this, method) (( Object_t * (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_get_Key_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15233_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15233(__this, method) (( Object_t * (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_get_Value_m15233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15234_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15234(__this, method) (( Object_t * (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_get_Current_m15234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m15235_gshared (ShimEnumerator_t2354 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m15235(__this, method) (( void (*) (ShimEnumerator_t2354 *, const MethodInfo*))ShimEnumerator_Reset_m15235_gshared)(__this, method)
