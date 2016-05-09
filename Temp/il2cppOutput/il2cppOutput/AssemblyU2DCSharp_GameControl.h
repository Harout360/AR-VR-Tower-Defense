#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameControl
struct GameControl_t5;
// UnityEngine.GameObject
struct GameObject_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameControl
struct  GameControl_t5  : public MonoBehaviour_t2
{
	// System.Boolean GameControl::pauseInARMode
	bool ___pauseInARMode_3;
	// UnityEngine.GameObject GameControl::tower
	GameObject_t6 * ___tower_4;
	// UnityEngine.GameObject GameControl::builderButtons
	GameObject_t6 * ___builderButtons_5;
	// System.Boolean GameControl::isARMode
	bool ___isARMode_6;
};
struct GameControl_t5_StaticFields{
	// GameControl GameControl::instance
	GameControl_t5 * ___instance_2;
};
