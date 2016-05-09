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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1106;
// Mono.Math.BigInteger
struct BigInteger_t1107;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5959 (ModulusRing_t1106 * __this, BigInteger_t1107 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5960 (ModulusRing_t1106 * __this, BigInteger_t1107 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1107 * ModulusRing_Multiply_m5961 (ModulusRing_t1106 * __this, BigInteger_t1107 * ___a, BigInteger_t1107 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1107 * ModulusRing_Difference_m5962 (ModulusRing_t1106 * __this, BigInteger_t1107 * ___a, BigInteger_t1107 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1107 * ModulusRing_Pow_m5963 (ModulusRing_t1106 * __this, BigInteger_t1107 * ___a, BigInteger_t1107 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1107 * ModulusRing_Pow_m5964 (ModulusRing_t1106 * __this, uint32_t ___b, BigInteger_t1107 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
