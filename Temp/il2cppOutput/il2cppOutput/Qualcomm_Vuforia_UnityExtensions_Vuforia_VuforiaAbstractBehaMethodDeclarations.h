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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t68;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t27;
// UnityEngine.Transform
struct Transform_t3;
// UnityEngine.Camera
struct Camera_t115;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t86;
// System.Action
struct Action_t100;
// System.Action`1<System.Boolean>
struct Action_1_t143;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t956;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t957;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t750;
// UnityEngine.GameObject
struct GameObject_t6;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"

// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SkewFrustum()
extern "C" bool VuforiaAbstractBehaviour_get_SkewFrustum_m5316 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaAbstractBehaviour::get_CameraOffset()
extern "C" float VuforiaAbstractBehaviour_get_CameraOffset_m5317 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_set_CameraOffset_m5318 (VuforiaAbstractBehaviour_t68 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m5319 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t27 * VuforiaAbstractBehaviour_get_WorldCenter_m5320 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_CentralAnchorPoint()
extern "C" Transform_t3 * VuforiaAbstractBehaviour_get_CentralAnchorPoint_m5321 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_ParentAnchorPoint()
extern "C" Transform_t3 * VuforiaAbstractBehaviour_get_ParentAnchorPoint_m5322 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m5323 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m5324 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C" bool VuforiaAbstractBehaviour_get_HasStarted_m5325 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_IsStereoRendering()
extern "C" bool VuforiaAbstractBehaviour_get_IsStereoRendering_m5326 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t115 * VuforiaAbstractBehaviour_get_PrimaryCamera_m5327 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_PrimaryCamera_m5328 (VuforiaAbstractBehaviour_t68 * __this, Camera_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t115 * VuforiaAbstractBehaviour_get_SecondaryCamera_m5329 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_SecondaryCamera_m5330 (VuforiaAbstractBehaviour_t68 * __this, Camera_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m5331 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::get_EyewearUserCalibrationProfileId()
extern "C" int32_t VuforiaAbstractBehaviour_get_EyewearUserCalibrationProfileId_m5332 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void VuforiaAbstractBehaviour_set_EyewearUserCalibrationProfileId_m5333 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SynchronizePoseUpdates()
extern "C" bool VuforiaAbstractBehaviour_get_SynchronizePoseUpdates_m5334 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SynchronizePoseUpdates(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_set_SynchronizePoseUpdates_m5335 (VuforiaAbstractBehaviour_t68 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetSkewFrustum(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_SetSkewFrustum_m5336 (VuforiaAbstractBehaviour_t68 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m168 (VuforiaAbstractBehaviour_t68 * __this, Action_1_t86 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m174 (VuforiaAbstractBehaviour_t68 * __this, Action_1_t86 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m5337 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m5338 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m5339 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m5340 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m5341 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m5342 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m5343 (VuforiaAbstractBehaviour_t68 * __this, Action_1_t143 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m5344 (VuforiaAbstractBehaviour_t68 * __this, Action_1_t143 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m5345 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m5346 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m5347 (VuforiaAbstractBehaviour_t68 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m5348 (VuforiaAbstractBehaviour_t68 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m5349 (VuforiaAbstractBehaviour_t68 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m5350 (VuforiaAbstractBehaviour_t68 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenterMode_m5351 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenter_m5352 (VuforiaAbstractBehaviour_t68 * __this, TrackableBehaviour_t27 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetCentralAnchorPoint_m5353 (VuforiaAbstractBehaviour_t68 * __this, Transform_t3 * ___anchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetParentAnchorPoint_m5354 (VuforiaAbstractBehaviour_t68 * __this, Transform_t3 * ___parentAnchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_SetCameraOffset_m5355 (VuforiaAbstractBehaviour_t68 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void VuforiaAbstractBehaviour_SetAppLicenseKey_m5356 (VuforiaAbstractBehaviour_t68 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetPresent(System.String)
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetPresent_m5357 (VuforiaAbstractBehaviour_t68 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetNotPresent()
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetNotPresent_m5358 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t87  VuforiaAbstractBehaviour_GetViewportRectangle_m5359 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m5360 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState()
extern "C" void VuforiaAbstractBehaviour_UpdateState_m5361 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateState_m5362 (VuforiaAbstractBehaviour_t68 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m5363 (VuforiaAbstractBehaviour_t68 * __this, Matrix4x4_t120  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C" void VuforiaAbstractBehaviour_ConfigureVideoBackground_m5364 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ResetBackgroundPlane_m5365 (VuforiaAbstractBehaviour_t68 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m5366 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m5367 (VuforiaAbstractBehaviour_t68 * __this, Action_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m5368 (Object_t * __this /* static, unused */, Camera_t115 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m5369 (Object_t * __this /* static, unused */, Camera_t115 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C" void VuforiaAbstractBehaviour_Start_m5370 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C" void VuforiaAbstractBehaviour_OnEnable_m5371 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Update()
extern "C" void VuforiaAbstractBehaviour_Update_m5372 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_OnApplicationPause_m5373 (VuforiaAbstractBehaviour_t68 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C" void VuforiaAbstractBehaviour_OnDisable_m5374 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C" void VuforiaAbstractBehaviour_OnDestroy_m5375 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m254 (VuforiaAbstractBehaviour_t68 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateStatePrivate_m5376 (VuforiaAbstractBehaviour_t68 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C" bool VuforiaAbstractBehaviour_StartVuforia_m5377 (VuforiaAbstractBehaviour_t68 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C" bool VuforiaAbstractBehaviour_StopVuforia_m5378 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m5379 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C" void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m5380 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureView()
extern "C" void VuforiaAbstractBehaviour_ConfigureView_m5381 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_EnableObjectRenderer_m5382 (VuforiaAbstractBehaviour_t68 * __this, GameObject_t6 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m5383 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m5384 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m5385 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m5386 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m5387 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m5388 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m5389 (VuforiaAbstractBehaviour_t68 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m5390 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m5391 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m5392 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m5393 (VuforiaAbstractBehaviour_t68 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetUsingHeadset()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetUsingHeadset_m5394 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUsingHeadset(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUsingHeadset_m5395 (VuforiaAbstractBehaviour_t68 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetHeadsetID()
extern "C" String_t* VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetHeadsetID_m5396 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetHeadsetID(System.String)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetHeadsetID_m5397 (VuforiaAbstractBehaviour_t68 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C" void VuforiaAbstractBehaviour__ctor_m249 (VuforiaAbstractBehaviour_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
