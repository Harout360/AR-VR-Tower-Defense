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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2501;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m16913_gshared (DefaultComparer_t2501 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16913(__this, method) (( void (*) (DefaultComparer_t2501 *, const MethodInfo*))DefaultComparer__ctor_m16913_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16914_gshared (DefaultComparer_t2501 * __this, RaycastResult_t507  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16914(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2501 *, RaycastResult_t507 , const MethodInfo*))DefaultComparer_GetHashCode_m16914_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16915_gshared (DefaultComparer_t2501 * __this, RaycastResult_t507  ___x, RaycastResult_t507  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16915(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2501 *, RaycastResult_t507 , RaycastResult_t507 , const MethodInfo*))DefaultComparer_Equals_m16915_gshared)(__this, ___x, ___y, method)
