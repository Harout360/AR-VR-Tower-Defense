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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2448;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t676;
// System.Object[]
struct ObjectU5BU5D_t99;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16290_gshared (InvokableCall_1_t2448 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m16290(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2448 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m16290_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16291_gshared (InvokableCall_1_t2448 * __this, UnityAction_1_t676 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m16291(__this, ___action, method) (( void (*) (InvokableCall_1_t2448 *, UnityAction_1_t676 *, const MethodInfo*))InvokableCall_1__ctor_m16291_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16292_gshared (InvokableCall_1_t2448 * __this, ObjectU5BU5D_t99* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m16292(__this, ___args, method) (( void (*) (InvokableCall_1_t2448 *, ObjectU5BU5D_t99*, const MethodInfo*))InvokableCall_1_Invoke_m16292_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16293_gshared (InvokableCall_1_t2448 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m16293(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2448 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m16293_gshared)(__this, ___targetObj, ___method, method)
