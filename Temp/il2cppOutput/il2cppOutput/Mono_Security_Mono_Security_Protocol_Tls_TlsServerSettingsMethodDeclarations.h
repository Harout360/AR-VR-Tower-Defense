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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1181;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1138;
// System.Security.Cryptography.RSA
struct RSA_t1134;
// System.Byte[]
struct ByteU5BU5D_t787;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1217;
// System.String[]
struct StringU5BU5D_t348;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C" void TlsServerSettings__ctor_m6716 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C" bool TlsServerSettings_get_ServerKeyExchange_m6717 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C" void TlsServerSettings_set_ServerKeyExchange_m6718 (TlsServerSettings_t1181 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C" X509CertificateCollection_t1138 * TlsServerSettings_get_Certificates_m6719 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerSettings_set_Certificates_m6720 (TlsServerSettings_t1181 * __this, X509CertificateCollection_t1138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C" RSA_t1134 * TlsServerSettings_get_CertificateRSA_m6721 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C" RSAParameters_t1216  TlsServerSettings_get_RsaParameters_m6722 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C" void TlsServerSettings_set_RsaParameters_m6723 (TlsServerSettings_t1181 * __this, RSAParameters_t1216  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C" void TlsServerSettings_set_SignedParams_m6724 (TlsServerSettings_t1181 * __this, ByteU5BU5D_t787* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C" bool TlsServerSettings_get_CertificateRequest_m6725 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C" void TlsServerSettings_set_CertificateRequest_m6726 (TlsServerSettings_t1181 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C" void TlsServerSettings_set_CertificateTypes_m6727 (TlsServerSettings_t1181 * __this, ClientCertificateTypeU5BU5D_t1217* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C" void TlsServerSettings_set_DistinguisedNames_m6728 (TlsServerSettings_t1181 * __this, StringU5BU5D_t348* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C" void TlsServerSettings_UpdateCertificateRSA_m6729 (TlsServerSettings_t1181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
