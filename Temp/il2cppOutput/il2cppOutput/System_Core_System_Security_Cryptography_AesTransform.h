﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t1088;
// System.Byte[]
struct ByteU5BU5D_t787;

#include "System_Core_Mono_Security_Cryptography_SymmetricTransform.h"

// System.Security.Cryptography.AesTransform
struct  AesTransform_t1087  : public SymmetricTransform_t1081
{
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t1088* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;
};
struct AesTransform_t1087_StaticFields{
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t1088* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t787* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t787* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t1088* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t1088* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t1088* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t1088* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t1088* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t1088* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t1088* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t1088* ___iT3_25;
};
