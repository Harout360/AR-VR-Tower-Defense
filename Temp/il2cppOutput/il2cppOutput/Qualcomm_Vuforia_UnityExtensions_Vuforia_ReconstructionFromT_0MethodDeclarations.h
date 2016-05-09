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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t751;
// Vuforia.CylinderTarget
struct CylinderTarget_t761;
// Vuforia.ImageTarget
struct ImageTarget_t902;
// Vuforia.MultiTarget
struct MultiTarget_t909;
// Vuforia.Trackable
struct Trackable_t733;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m3808 (ReconstructionFromTargetImpl_t751 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3809 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___cylinderTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3810 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___cylinderTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, Vector3_t77  ___offsetToOccluderOrigin, Quaternion_t82  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3811 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___imageTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3812 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___imageTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, Vector3_t77  ___offsetToOccluderOrigin, Quaternion_t82  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3813 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___multiTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3814 (ReconstructionFromTargetImpl_t751 * __this, Object_t * ___multiTarget, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, Vector3_t77  ___offsetToOccluderOrigin, Quaternion_t82  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3815 (ReconstructionFromTargetImpl_t751 * __this, Vector3_t77 * ___occluderMin, Vector3_t77 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3816 (ReconstructionFromTargetImpl_t751 * __this, Vector3_t77 * ___occluderMin, Vector3_t77 * ___occluderMax, Vector3_t77 * ___offsetToOccluderOrigin, Quaternion_t82 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m3817 (ReconstructionFromTargetImpl_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m3818 (ReconstructionFromTargetImpl_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3819 (ReconstructionFromTargetImpl_t751 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t77  ___occluderMin, Vector3_t77  ___occluderMax, Vector3_t77  ___offsetToOccluderOrigin, Quaternion_t82  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m3820 (ReconstructionFromTargetImpl_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m3821 (ReconstructionFromTargetImpl_t751 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
