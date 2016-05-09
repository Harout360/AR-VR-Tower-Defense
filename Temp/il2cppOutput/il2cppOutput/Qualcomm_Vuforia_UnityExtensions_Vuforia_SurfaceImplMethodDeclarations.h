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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t841;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t760;
// UnityEngine.Mesh
struct Mesh_t116;
// System.Int32[]
struct Int32U5BU5D_t118;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m4171 (SurfaceImpl_t841 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m4172 (SurfaceImpl_t841 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m4173 (SurfaceImpl_t841 * __this, int32_t ___meshRev, Mesh_t116 * ___mesh, Mesh_t116 * ___navMesh, Int32U5BU5D_t118* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m4174 (SurfaceImpl_t841 * __this, Rect_t87  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t116 * SurfaceImpl_GetNavMesh_m4175 (SurfaceImpl_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t118* SurfaceImpl_GetMeshBoundaries_m4176 (SurfaceImpl_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t87  SurfaceImpl_get_BoundingBox_m4177 (SurfaceImpl_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m4178 (SurfaceImpl_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
