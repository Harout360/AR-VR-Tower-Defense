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

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t1111;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1231;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C" void PrimeGeneratorBase__ctor_m6026 (PrimeGeneratorBase_t1111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C" int32_t PrimeGeneratorBase_get_Confidence_m6027 (PrimeGeneratorBase_t1111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C" PrimalityTest_t1231 * PrimeGeneratorBase_get_PrimalityTest_m6028 (PrimeGeneratorBase_t1111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C" int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m6029 (PrimeGeneratorBase_t1111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
