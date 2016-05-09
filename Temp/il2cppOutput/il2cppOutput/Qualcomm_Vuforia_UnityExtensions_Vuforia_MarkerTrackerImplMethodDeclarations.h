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

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t799;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t40;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t908;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t934;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C" bool MarkerTrackerImpl_Start_m4066 (MarkerTrackerImpl_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C" void MarkerTrackerImpl_Stop_m4067 (MarkerTrackerImpl_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C" MarkerAbstractBehaviour_t40 * MarkerTrackerImpl_CreateMarker_m4068 (MarkerTrackerImpl_t799 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C" bool MarkerTrackerImpl_DestroyMarker_m4069 (MarkerTrackerImpl_t799 * __this, Object_t * ___marker, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C" Object_t* MarkerTrackerImpl_GetMarkers_m4070 (MarkerTrackerImpl_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C" Object_t * MarkerTrackerImpl_GetMarkerByMarkerID_m4071 (MarkerTrackerImpl_t799 * __this, int32_t ___markerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C" Object_t * MarkerTrackerImpl_InternalCreateMarker_m4072 (MarkerTrackerImpl_t799 * __this, int32_t ___markerID, String_t* ___name, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C" void MarkerTrackerImpl_DestroyAllMarkers_m4073 (MarkerTrackerImpl_t799 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C" int32_t MarkerTrackerImpl_RegisterMarker_m4074 (MarkerTrackerImpl_t799 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C" void MarkerTrackerImpl__ctor_m4075 (MarkerTrackerImpl_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
