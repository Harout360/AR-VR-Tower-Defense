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

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
struct UserDefinedTargetBuildingAbstractBehaviour_t60;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t959;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::RegisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_RegisterEventHandler_m5451 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::UnregisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" bool UserDefinedTargetBuildingAbstractBehaviour_UnregisterEventHandler_m5452 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StartScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StartScanning_m5453 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::BuildNewTarget(System.String,System.Single)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_BuildNewTarget_m5454 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StopScanning_m5455 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::SetFrameQuality(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_SetFrameQuality_m5456 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, int32_t ___frameQuality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Start()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Start_m5457 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Update()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Update_m5458 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnEnable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnEnable_m5459 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDisable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDisable_m5460 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDestroy()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDestroy_m5461 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnVuforiaStarted()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnVuforiaStarted_m5462 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnPause(System.Boolean)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnPause_m5463 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::.ctor()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour__ctor_m245 (UserDefinedTargetBuildingAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
