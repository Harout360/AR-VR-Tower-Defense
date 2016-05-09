#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpawnScript
struct  SpawnScript_t9  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject SpawnScript::enemy
	GameObject_t6 * ___enemy_2;
	// System.Single SpawnScript::spawnInterval
	float ___spawnInterval_3;
	// System.Single SpawnScript::spawnVariance
	float ___spawnVariance_4;
};
