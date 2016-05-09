#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t11;
// UnityEngine.UI.Image
struct Image_t12;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TowerHealth
struct  TowerHealth_t10  : public MonoBehaviour_t2
{
	// System.Int32 TowerHealth::numberOfLives
	int32_t ___numberOfLives_2;
	// System.Int32 TowerHealth::currentLives
	int32_t ___currentLives_3;
	// UnityEngine.AudioSource TowerHealth::damageAudio
	AudioSource_t11 * ___damageAudio_4;
	// UnityEngine.UI.Image TowerHealth::damageImage
	Image_t12 * ___damageImage_5;
	// System.Boolean TowerHealth::alive
	bool ___alive_6;
};
