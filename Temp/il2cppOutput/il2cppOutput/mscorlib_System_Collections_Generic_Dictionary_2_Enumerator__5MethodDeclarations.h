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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2363;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15417_gshared (Enumerator_t2369 * __this, Dictionary_2_t2363 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15417(__this, ___dictionary, method) (( void (*) (Enumerator_t2369 *, Dictionary_2_t2363 *, const MethodInfo*))Enumerator__ctor_m15417_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15418_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15418(__this, method) (( Object_t * (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15419_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15419(__this, method) (( void (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15419_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1438  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15420_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15420(__this, method) (( DictionaryEntry_t1438  (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15420_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15421_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15421(__this, method) (( Object_t * (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15421_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15422_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15422(__this, method) (( Object_t * (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15423_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15423(__this, method) (( bool (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_MoveNext_m15423_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2365  Enumerator_get_Current_m15424_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15424(__this, method) (( KeyValuePair_2_t2365  (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_get_Current_m15424_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15425_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15425(__this, method) (( int32_t (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_get_CurrentKey_m15425_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15426_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15426(__this, method) (( Object_t * (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_get_CurrentValue_m15426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m15427_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15427(__this, method) (( void (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_Reset_m15427_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15428_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15428(__this, method) (( void (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_VerifyState_m15428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15429_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15429(__this, method) (( void (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_VerifyCurrent_m15429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15430_gshared (Enumerator_t2369 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15430(__this, method) (( void (*) (Enumerator_t2369 *, const MethodInfo*))Enumerator_Dispose_m15430_gshared)(__this, method)
