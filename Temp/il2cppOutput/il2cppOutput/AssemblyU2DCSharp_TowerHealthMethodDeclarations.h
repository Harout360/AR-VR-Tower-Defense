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

// TowerHealth
struct TowerHealth_t10;
// UnityEngine.Collider
struct Collider_t78;

#include "codegen/il2cpp-codegen.h"

// System.Void TowerHealth::.ctor()
extern "C" void TowerHealth__ctor_m16 (TowerHealth_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerHealth::Awake()
extern "C" void TowerHealth_Awake_m17 (TowerHealth_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerHealth::OnTriggerEnter(UnityEngine.Collider)
extern "C" void TowerHealth_OnTriggerEnter_m18 (TowerHealth_t10 * __this, Collider_t78 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerHealth::Restart()
extern "C" void TowerHealth_Restart_m19 (TowerHealth_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
