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

// System.Reflection.Binder
struct Binder_t448;
// System.Object[]
struct ObjectU5BU5D_t99;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t458;
// System.Globalization.CultureInfo
struct CultureInfo_t450;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t457;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t2124;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m10509 (Binder_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m10510 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t448 * Binder_get_DefaultBinder_m10511 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m10512 (Object_t * __this /* static, unused */, Binder_t448 * ___binder, ObjectU5BU5D_t99* ___args, ParameterInfoU5BU5D_t458* ___pinfo, CultureInfo_t450 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m10513 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t457 * Binder_FindMostDerivedMatch_m10514 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t2124* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
