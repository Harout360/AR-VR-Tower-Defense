﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera[]
struct CameraU5BU5D_t114;
// System.Int32[]
struct Int32U5BU5D_t118;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t802;
// Vuforia.TextureRenderer
struct TextureRenderer_t896;
// UnityEngine.Texture2D
struct Texture2D_t161;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// Vuforia.WebCamImpl
struct  WebCamImpl_t781  : public Object_t
{
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t114* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t118* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t802 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t739  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t722  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t896 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t161 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t87  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t903  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;
};
