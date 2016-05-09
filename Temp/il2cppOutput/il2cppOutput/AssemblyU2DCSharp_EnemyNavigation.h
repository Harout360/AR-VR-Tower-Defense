#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyNavigation
struct  EnemyNavigation_t1  : public MonoBehaviour_t2
{
	// UnityEngine.Transform EnemyNavigation::target
	Transform_t3 * ___target_2;
	// UnityEngine.NavMeshAgent EnemyNavigation::agent
	NavMeshAgent_t4 * ___agent_3;
};
