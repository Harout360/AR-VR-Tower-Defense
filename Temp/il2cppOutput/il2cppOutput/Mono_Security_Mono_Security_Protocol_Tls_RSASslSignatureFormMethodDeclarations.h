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

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1199;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1232;
// System.Byte[]
struct ByteU5BU5D_t787;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m6570 (RSASslSignatureFormatter_t1199 * __this, AsymmetricAlgorithm_t1232 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t787* RSASslSignatureFormatter_CreateSignature_m6571 (RSASslSignatureFormatter_t1199 * __this, ByteU5BU5D_t787* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m6572 (RSASslSignatureFormatter_t1199 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m6573 (RSASslSignatureFormatter_t1199 * __this, AsymmetricAlgorithm_t1232 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
