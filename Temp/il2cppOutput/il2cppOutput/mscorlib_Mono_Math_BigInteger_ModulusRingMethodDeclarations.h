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
struct ModulusRing_t1521;
// Mono.Math.BigInteger
struct BigInteger_t1522;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8939 (ModulusRing_t1521 * __this, BigInteger_t1522 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8940 (ModulusRing_t1521 * __this, BigInteger_t1522 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1522 * ModulusRing_Multiply_m8941 (ModulusRing_t1521 * __this, BigInteger_t1522 * ___a, BigInteger_t1522 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1522 * ModulusRing_Difference_m8942 (ModulusRing_t1521 * __this, BigInteger_t1522 * ___a, BigInteger_t1522 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1522 * ModulusRing_Pow_m8943 (ModulusRing_t1521 * __this, BigInteger_t1522 * ___a, BigInteger_t1522 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1522 * ModulusRing_Pow_m8944 (ModulusRing_t1521 * __this, uint32_t ___b, BigInteger_t1522 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
