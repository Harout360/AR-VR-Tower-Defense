﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t218;
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
struct UnityAdsDelegate_2_t219;

#include "mscorlib_System_Object.h"

// UnityEngine.Advertisements.UnityAdsInternal
struct  UnityAdsInternal_t217  : public Object_t
{
};
struct UnityAdsInternal_t217_StaticFields{
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onCampaignsAvailable
	UnityAdsDelegate_t218 * ___onCampaignsAvailable_0;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onCampaignsFetchFailed
	UnityAdsDelegate_t218 * ___onCampaignsFetchFailed_1;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onShow
	UnityAdsDelegate_t218 * ___onShow_2;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onHide
	UnityAdsDelegate_t218 * ___onHide_3;
	// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean> UnityEngine.Advertisements.UnityAdsInternal::onVideoCompleted
	UnityAdsDelegate_2_t219 * ___onVideoCompleted_4;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onVideoStarted
	UnityAdsDelegate_t218 * ___onVideoStarted_5;
};
