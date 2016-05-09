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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2419;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16141_gshared (Enumerator_t2426 * __this, Dictionary_2_t2419 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16141(__this, ___dictionary, method) (( void (*) (Enumerator_t2426 *, Dictionary_2_t2419 *, const MethodInfo*))Enumerator__ctor_m16141_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16142_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16142(__this, method) (( Object_t * (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16142_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16143_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16143(__this, method) (( void (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16143_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1438  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16144_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16144(__this, method) (( DictionaryEntry_t1438  (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16145_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16145(__this, method) (( Object_t * (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16145_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16146_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16146(__this, method) (( Object_t * (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16147_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16147(__this, method) (( bool (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_MoveNext_m16147_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2421  Enumerator_get_Current_m16148_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16148(__this, method) (( KeyValuePair_2_t2421  (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_get_Current_m16148_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16149_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16149(__this, method) (( Object_t * (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_get_CurrentKey_m16149_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16150_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16150(__this, method) (( int32_t (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_get_CurrentValue_m16150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m16151_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_Reset_m16151(__this, method) (( void (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_Reset_m16151_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16152_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16152(__this, method) (( void (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_VerifyState_m16152_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16153_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16153(__this, method) (( void (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_VerifyCurrent_m16153_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16154_gshared (Enumerator_t2426 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16154(__this, method) (( void (*) (Enumerator_t2426 *, const MethodInfo*))Enumerator_Dispose_m16154_gshared)(__this, method)
