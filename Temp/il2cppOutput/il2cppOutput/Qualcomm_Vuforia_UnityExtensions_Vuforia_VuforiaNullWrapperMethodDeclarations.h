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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t870;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t454;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m4597 (VuforiaNullWrapper_t870 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m4598 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m4599 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m4600 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m4601 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNullWrapper_CameraDeviceGetVideoMode_m4602 (VuforiaNullWrapper_t870 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m4603 (VuforiaNullWrapper_t870 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m4604 (VuforiaNullWrapper_t870 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m4605 (VuforiaNullWrapper_t870 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m4606 (VuforiaNullWrapper_t870 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m4607 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetFrameFormat_m4608 (VuforiaNullWrapper_t870 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetExists_m4609 (VuforiaNullWrapper_t870 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetLoad_m4610 (VuforiaNullWrapper_t870 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m4611 (VuforiaNullWrapper_t870 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m4612 (VuforiaNullWrapper_t870 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackableName_m4613 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t454 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetCreateTrackable_m4614 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t454 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m4615 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m4616 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNullWrapper_GetCameraThreadID_m4617 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m4618 (VuforiaNullWrapper_t870 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m4619 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStartScan_m4620 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStopScan_m4621 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m4622 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m4623 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m4624 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m4625 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonGetId_m4626 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m4627 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m4628 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m4629 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t454 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m4630 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m4631 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m4632 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m4633 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetSetSize_m4634 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetGetSize_m4635 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerStart_m4636 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ObjectTrackerStop()
extern "C" void VuforiaNullWrapper_ObjectTrackerStop_m4637 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m4638 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m4639 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m4640 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m4641 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m4642 (VuforiaNullWrapper_t870 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m4643 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerStart_m4644 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::MarkerTrackerStop()
extern "C" void VuforiaNullWrapper_MarkerTrackerStop_m4645 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_OnSurfaceChanged_m4646 (VuforiaNullWrapper_t870 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C" void VuforiaNullWrapper_OnPause_m4647 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C" void VuforiaNullWrapper_OnResume_m4648 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m4649 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerSetSize_m4650 (VuforiaNullWrapper_t870 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m4651 (VuforiaNullWrapper_t870 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m4652 (VuforiaNullWrapper_t870 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C" void VuforiaNullWrapper_InitPlatformNative_m4653 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_InitFrameState_m4654 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_DeinitFrameState_m4655 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_UpdateQCAR_m4656 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C" void VuforiaNullWrapper_RendererEnd_m4657 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarGetBufferSize_m4658 (VuforiaNullWrapper_t870 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_QcarAddCameraFrame_m4659 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m4660 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m4661 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m4662 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m4663 (VuforiaNullWrapper_t870 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m4664 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m4665 (VuforiaNullWrapper_t870 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetHint_m4666 (VuforiaNullWrapper_t870 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_GetProjectionGL_m4667 (VuforiaNullWrapper_t870 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_SetApplicationEnvironment_m4668 (VuforiaNullWrapper_t870 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNullWrapper_SetStateBufferSize_m4669 (VuforiaNullWrapper_t870 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNullWrapper_SmartTerrainTrackerStart_m4670 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNullWrapper_SmartTerrainTrackerStop_m4671 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m4672 (VuforiaNullWrapper_t870 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m4673 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m4674 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m4675 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m4676 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m4677 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m4678 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m4679 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStart_m4680 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStop_m4681 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionIsReconstructing_m4682 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionReset_m4683 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m4684 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m4685 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m4686 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4687 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartInit_m4688 (VuforiaNullWrapper_t870 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetInitState_m4689 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNullWrapper_TargetFinderDeinit_m4690 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m4691 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStop_m4692 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m4693 (VuforiaNullWrapper_t870 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIPointColor_m4694 (VuforiaNullWrapper_t870 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderUpdate_m4695 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetResults_m4696 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m4697 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderGetImageTargets_m4698 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNullWrapper_TargetFinderClearTrackables_m4699 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNullWrapper_TextTrackerStart_m4700 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerStop()
extern "C" void VuforiaNullWrapper_TextTrackerStop_m4701 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m4702 (VuforiaNullWrapper_t870 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m4703 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadWordList_m4704 (VuforiaNullWrapper_t870 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m4705 (VuforiaNullWrapper_t870 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordU_m4706 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordU_m4707 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListContainsWordU_m4708 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNullWrapper_WordListUnloadAllLists_m4709 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListSetFilterMode_m4710 (VuforiaNullWrapper_t870 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterMode_m4711 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadFilterList_m4712 (VuforiaNullWrapper_t870 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m4713 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m4714 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNullWrapper_WordListClearFilterList_m4715 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m4716 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m4717 (VuforiaNullWrapper_t870 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterMask_m4718 (VuforiaNullWrapper_t870 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m4719 (VuforiaNullWrapper_t870 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m4720 (VuforiaNullWrapper_t870 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m4721 (VuforiaNullWrapper_t870 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m4722 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m4723 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m4724 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNullWrapper_QcarInit_m4725 (VuforiaNullWrapper_t870 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C" int32_t VuforiaNullWrapper_QcarDeinit_m4726 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StartExtendedTracking_m4727 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StopExtendedTracking_m4728 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNullWrapper_EyewearIsDeviceDetected_m4729 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetPresent_m4730 (VuforiaNullWrapper_t870 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetNotPresent_m4731 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNullWrapper_EyewearIsSeeThru_m4732 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNullWrapper_EyewearGetScreenOrientation_m4733 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoCapable_m4734 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoEnabled_m4735 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoGLOnly_m4736 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetStereo_m4737 (VuforiaNullWrapper_t870 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsPredictiveTrackingEnabled_m4738 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetPredictiveTracking_m4739 (VuforiaNullWrapper_t870 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNullWrapper_EyewearSetProjectionClippingPlanes_m4740 (VuforiaNullWrapper_t870 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_EyewearGetProjectionMatrix_m4741 (VuforiaNullWrapper_t870 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m4742 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m4743 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m4744 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m4745 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m4746 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetProjectionMatrix_m4747 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProjectionMatrix_m4748 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m4749 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProfileName_m4750 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMClearProfile_m4751 (VuforiaNullWrapper_t870 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorInit_m4752 (VuforiaNullWrapper_t870 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m4753 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m4754 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m4755 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m4756 (VuforiaNullWrapper_t870 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C" void VuforiaNullWrapper__ctor_m4757 (VuforiaNullWrapper_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
