﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Word
struct Word_t867;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordResult.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// Vuforia.WordResultImpl
struct  WordResultImpl_t866  : public WordResult_t865
{
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t767  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t77  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t82  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	Object_t * ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;
};
