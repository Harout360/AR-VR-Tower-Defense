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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t726;
// UnityEngine.Camera
struct Camera_t115;
// System.Action
struct Action_t100;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t70;
// UnityEngine.Transform
struct Transform_t3;
// UnityEngine.GameObject
struct GameObject_t6;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C" void MonoCameraConfiguration__ctor_m3596 (MonoCameraConfiguration_t726 * __this, Camera_t115 * ___leftCamera, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t100 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::Init()
extern "C" void MonoCameraConfiguration_Init_m3597 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C" void MonoCameraConfiguration_ConfigureVideoBackground_m3598 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void MonoCameraConfiguration_UpdatePlayModeParameters_m3599 (MonoCameraConfiguration_t726 * __this, WebCamAbstractBehaviour_t70 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void MonoCameraConfiguration_UpdateProjection_m3600 (MonoCameraConfiguration_t726 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t MonoCameraConfiguration_CheckForSurfaceChanges_m3601 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void MonoCameraConfiguration_UpdateStereoDepth_m3602 (MonoCameraConfiguration_t726 * __this, Transform_t3 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C" bool MonoCameraConfiguration_IsStereo_m3603 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void MonoCameraConfiguration_ResetBackgroundPlane_m3604 (MonoCameraConfiguration_t726 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t MonoCameraConfiguration_get_VideoBackgroundMirrored_m3605 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m3606 (MonoCameraConfiguration_t726 * __this, Matrix4x4_t120  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void MonoCameraConfiguration_SetSkewFrustum_m3607 (MonoCameraConfiguration_t726 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.MonoCameraConfiguration::get_ViewportRect()
extern "C" Rect_t87  MonoCameraConfiguration_get_ViewportRect_m3608 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void MonoCameraConfiguration_EnableObjectRenderer_m3609 (MonoCameraConfiguration_t726 * __this, GameObject_t6 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void MonoCameraConfiguration_ApplyMatrix_m3610 (MonoCameraConfiguration_t726 * __this, Camera_t115 * ___cam, Matrix4x4_t120  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m3611 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C" bool MonoCameraConfiguration_CameraParameterChanged_m3612 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MonoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t MonoCameraConfiguration_get_EyewearUserCalibrationProfileId_m3613 (MonoCameraConfiguration_t726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void MonoCameraConfiguration_set_EyewearUserCalibrationProfileId_m3614 (MonoCameraConfiguration_t726 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
