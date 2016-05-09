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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2257;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14031_gshared (DefaultComparer_t2257 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14031(__this, method) (( void (*) (DefaultComparer_t2257 *, const MethodInfo*))DefaultComparer__ctor_m14031_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14032_gshared (DefaultComparer_t2257 * __this, Vector2_t178  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14032(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2257 *, Vector2_t178 , const MethodInfo*))DefaultComparer_GetHashCode_m14032_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14033_gshared (DefaultComparer_t2257 * __this, Vector2_t178  ___x, Vector2_t178  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14033(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2257 *, Vector2_t178 , Vector2_t178 , const MethodInfo*))DefaultComparer_Equals_m14033_gshared)(__this, ___x, ___y, method)
