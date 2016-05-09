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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23273_gshared (Enumerator_t2894 * __this, Dictionary_2_t1049 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23273(__this, ___dictionary, method) (( void (*) (Enumerator_t2894 *, Dictionary_2_t1049 *, const MethodInfo*))Enumerator__ctor_m23273_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23274_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23274(__this, method) (( Object_t * (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23274_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23275_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23275(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23275_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1438  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23276_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23276(__this, method) (( DictionaryEntry_t1438  (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23276_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23277_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23277(__this, method) (( Object_t * (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23277_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23278_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23278(__this, method) (( Object_t * (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23279_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23279(__this, method) (( bool (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_MoveNext_m23279_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t2890  Enumerator_get_Current_m23280_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23280(__this, method) (( KeyValuePair_2_t2890  (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_get_Current_m23280_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m23281_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23281(__this, method) (( int32_t (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_get_CurrentKey_m23281_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t811  Enumerator_get_CurrentValue_m23282_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23282(__this, method) (( TrackableResultData_t811  (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_get_CurrentValue_m23282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Reset()
extern "C" void Enumerator_Reset_m23283_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23283(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_Reset_m23283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m23284_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23284(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_VerifyState_m23284_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23285_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23285(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_VerifyCurrent_m23285_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m23286_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23286(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_Dispose_m23286_gshared)(__this, method)
