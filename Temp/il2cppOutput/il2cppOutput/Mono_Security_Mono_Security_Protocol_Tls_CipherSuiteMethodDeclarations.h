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

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1169;
// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1094;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1163;
// Mono.Security.Protocol.Tls.Context
struct Context_t1170;
// System.Byte[]
struct ByteU5BU5D_t787;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "mscorlib_System_Security_Cryptography_CipherMode.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void CipherSuite__ctor_m6358 (CipherSuite_t1169 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C" void CipherSuite__cctor_m6359 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C" Object_t * CipherSuite_get_EncryptionCipher_m6360 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C" Object_t * CipherSuite_get_DecryptionCipher_m6361 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C" KeyedHashAlgorithm_t1163 * CipherSuite_get_ClientHMAC_m6362 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C" KeyedHashAlgorithm_t1163 * CipherSuite_get_ServerHMAC_m6363 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C" int32_t CipherSuite_get_CipherAlgorithmType_m6364 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C" String_t* CipherSuite_get_HashAlgorithmName_m6365 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C" int32_t CipherSuite_get_HashAlgorithmType_m6366 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C" int32_t CipherSuite_get_HashSize_m6367 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C" int32_t CipherSuite_get_ExchangeAlgorithmType_m6368 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C" int32_t CipherSuite_get_CipherMode_m6369 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C" int16_t CipherSuite_get_Code_m6370 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C" String_t* CipherSuite_get_Name_m6371 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C" bool CipherSuite_get_IsExportable_m6372 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C" uint8_t CipherSuite_get_KeyMaterialSize_m6373 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C" int32_t CipherSuite_get_KeyBlockSize_m6374 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C" uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m6375 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C" int16_t CipherSuite_get_EffectiveKeyBits_m6376 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C" uint8_t CipherSuite_get_IvSize_m6377 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C" Context_t1170 * CipherSuite_get_Context_m6378 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C" void CipherSuite_set_Context_m6379 (CipherSuite_t1169 * __this, Context_t1170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C" void CipherSuite_Write_m6380 (CipherSuite_t1169 * __this, ByteU5BU5D_t787* ___array, int32_t ___offset, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C" void CipherSuite_Write_m6381 (CipherSuite_t1169 * __this, ByteU5BU5D_t787* ___array, int32_t ___offset, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C" void CipherSuite_InitializeCipher_m6382 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C" ByteU5BU5D_t787* CipherSuite_EncryptRecord_m6383 (CipherSuite_t1169 * __this, ByteU5BU5D_t787* ___fragment, ByteU5BU5D_t787* ___mac, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C" void CipherSuite_DecryptRecord_m6384 (CipherSuite_t1169 * __this, ByteU5BU5D_t787* ___fragment, ByteU5BU5D_t787** ___dcrFragment, ByteU5BU5D_t787** ___dcrMAC, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C" ByteU5BU5D_t787* CipherSuite_CreatePremasterSecret_m6385 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t787* CipherSuite_PRF_m6386 (CipherSuite_t1169 * __this, ByteU5BU5D_t787* ___secret, String_t* ___label, ByteU5BU5D_t787* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t787* CipherSuite_Expand_m6387 (CipherSuite_t1169 * __this, String_t* ___hashName, ByteU5BU5D_t787* ___secret, ByteU5BU5D_t787* ___seed, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C" void CipherSuite_createEncryptionCipher_m6388 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C" void CipherSuite_createDecryptionCipher_m6389 (CipherSuite_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
