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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>
struct DefaultComparer_t3088;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m25537_gshared (DefaultComparer_t3088 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25537(__this, method) (( void (*) (DefaultComparer_t3088 *, const MethodInfo*))DefaultComparer__ctor_m25537_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25538_gshared (DefaultComparer_t3088 * __this, CustomAttributeNamedArgument_t1706  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25538(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3088 *, CustomAttributeNamedArgument_t1706 , const MethodInfo*))DefaultComparer_GetHashCode_m25538_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25539_gshared (DefaultComparer_t3088 * __this, CustomAttributeNamedArgument_t1706  ___x, CustomAttributeNamedArgument_t1706  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25539(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3088 *, CustomAttributeNamedArgument_t1706 , CustomAttributeNamedArgument_t1706 , const MethodInfo*))DefaultComparer_Equals_m25539_gshared)(__this, ___x, ___y, method)
