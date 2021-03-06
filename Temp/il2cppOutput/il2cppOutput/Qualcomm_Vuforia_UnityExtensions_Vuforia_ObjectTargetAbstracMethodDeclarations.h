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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t46;
// Vuforia.ObjectTarget
struct ObjectTarget_t735;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t752;
// UnityEngine.Texture2D
struct Texture2D_t161;
// UnityEngine.Transform
struct Transform_t3;
// UnityEngine.GameObject
struct GameObject_t6;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C" void ObjectTargetAbstractBehaviour__ctor_m234 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C" Object_t * ObjectTargetAbstractBehaviour_get_ObjectTarget_m3709 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C" void ObjectTargetAbstractBehaviour_OnDrawGizmos_m3710 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m3711 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m3712 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3713 (ObjectTargetAbstractBehaviour_t46 * __this, Vector3_t77 * ___boundsMin, Vector3_t77 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3714 (ObjectTargetAbstractBehaviour_t46 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void ObjectTargetAbstractBehaviour_SetBoundingBox_m3715 (ObjectTargetAbstractBehaviour_t46 * __this, Vector3_t77  ___minBBox, Vector3_t77  ___maxBBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C" Vector3_t77  ObjectTargetAbstractBehaviour_GetSize_m3716 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetLength_m3717 (ObjectTargetAbstractBehaviour_t46 * __this, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetWidth_m3718 (ObjectTargetAbstractBehaviour_t46 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetHeight_m3719 (ObjectTargetAbstractBehaviour_t46 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m3720 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m3721 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m3722 (ObjectTargetAbstractBehaviour_t46 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m3723 (ObjectTargetAbstractBehaviour_t46 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m3724 (ObjectTargetAbstractBehaviour_t46 * __this, bool ___showBoundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m3725 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C" Texture2D_t161 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m3726 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m3727 (ObjectTargetAbstractBehaviour_t46 * __this, Texture2D_t161 * ___previewImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3728 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3729 (ObjectTargetAbstractBehaviour_t46 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t3 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3730 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t6 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3731 (ObjectTargetAbstractBehaviour_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
