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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1331;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1140;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1332;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1232;
// System.Security.Cryptography.Oid
struct Oid_t1333;
// System.Byte[]
struct ByteU5BU5D_t787;
// System.Security.Cryptography.DSA
struct DSA_t1141;
// System.Security.Cryptography.RSA
struct RSA_t1134;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m7181 (PublicKey_t1331 * __this, X509Certificate_t1140 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1332 * PublicKey_get_EncodedKeyValue_m7182 (PublicKey_t1331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1332 * PublicKey_get_EncodedParameters_m7183 (PublicKey_t1331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1232 * PublicKey_get_Key_m7184 (PublicKey_t1331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1333 * PublicKey_get_Oid_m7185 (PublicKey_t1331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t787* PublicKey_GetUnsignedBigInteger_m7186 (Object_t * __this /* static, unused */, ByteU5BU5D_t787* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1141 * PublicKey_DecodeDSA_m7187 (Object_t * __this /* static, unused */, ByteU5BU5D_t787* ___rawPublicKey, ByteU5BU5D_t787* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1134 * PublicKey_DecodeRSA_m7188 (Object_t * __this /* static, unused */, ByteU5BU5D_t787* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
