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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23421_gshared (Enumerator_t2910 * __this, Dictionary_2_t1050 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23421(__this, ___dictionary, method) (( void (*) (Enumerator_t2910 *, Dictionary_2_t1050 *, const MethodInfo*))Enumerator__ctor_m23421_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23422_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23422(__this, method) (( Object_t * (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23423_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23423(__this, method) (( void (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23423_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1438  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23424_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23424(__this, method) (( DictionaryEntry_t1438  (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23424_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23425_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23425(__this, method) (( Object_t * (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23426_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23426(__this, method) (( Object_t * (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23426_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23427_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23427(__this, method) (( bool (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_MoveNext_m23427_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t2905  Enumerator_get_Current_m23428_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23428(__this, method) (( KeyValuePair_2_t2905  (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_get_Current_m23428_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m23429_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23429(__this, method) (( int32_t (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_get_CurrentKey_m23429_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t812  Enumerator_get_CurrentValue_m23430_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23430(__this, method) (( VirtualButtonData_t812  (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_get_CurrentValue_m23430_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Reset()
extern "C" void Enumerator_Reset_m23431_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23431(__this, method) (( void (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_Reset_m23431_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m23432_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23432(__this, method) (( void (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_VerifyState_m23432_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23433_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23433(__this, method) (( void (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_VerifyCurrent_m23433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m23434_gshared (Enumerator_t2910 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23434(__this, method) (( void (*) (Enumerator_t2910 *, const MethodInfo*))Enumerator_Dispose_m23434_gshared)(__this, method)
