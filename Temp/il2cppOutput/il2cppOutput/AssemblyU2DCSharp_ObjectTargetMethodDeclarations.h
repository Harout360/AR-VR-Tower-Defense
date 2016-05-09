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

// ObjectTarget
struct ObjectTarget_t7;
// UnityEngine.GameObject
struct GameObject_t6;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ObjectTarget::.ctor()
extern "C" void ObjectTarget__ctor_m8 (ObjectTarget_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectTarget::GetObject(UnityEngine.Vector3)
extern "C" GameObject_t6 * ObjectTarget_GetObject_m9 (ObjectTarget_t7 * __this, Vector3_t77  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
