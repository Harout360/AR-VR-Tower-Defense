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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3120;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m25775_gshared (DefaultComparer_t3120 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25775(__this, method) (( void (*) (DefaultComparer_t3120 *, const MethodInfo*))DefaultComparer__ctor_m25775_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25776_gshared (DefaultComparer_t3120 * __this, DateTimeOffset_t2029  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25776(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3120 *, DateTimeOffset_t2029 , const MethodInfo*))DefaultComparer_GetHashCode_m25776_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25777_gshared (DefaultComparer_t3120 * __this, DateTimeOffset_t2029  ___x, DateTimeOffset_t2029  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25777(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3120 *, DateTimeOffset_t2029 , DateTimeOffset_t2029 , const MethodInfo*))DefaultComparer_Equals_m25777_gshared)(__this, ___x, ___y, method)
