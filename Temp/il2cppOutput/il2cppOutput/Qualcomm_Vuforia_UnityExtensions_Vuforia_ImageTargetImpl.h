﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>
struct Dictionary_2_t791;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTargetImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"

// Vuforia.ImageTargetImpl
struct  ImageTargetImpl_t790  : public ObjectTargetImpl_t747
{
	// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::mImageTargetType
	int32_t ___mImageTargetType_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton> Vuforia.ImageTargetImpl::mVirtualButtons
	Dictionary_2_t791 * ___mVirtualButtons_5;
};
