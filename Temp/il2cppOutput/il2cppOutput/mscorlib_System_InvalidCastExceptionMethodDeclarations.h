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

// System.InvalidCastException
struct InvalidCastException_t2052;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidCastException::.ctor()
extern "C" void InvalidCastException__ctor_m12673 (InvalidCastException_t2052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" void InvalidCastException__ctor_m12674 (InvalidCastException_t2052 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidCastException__ctor_m12675 (InvalidCastException_t2052 * __this, SerializationInfo_t425 * ___info, StreamingContext_t426  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;