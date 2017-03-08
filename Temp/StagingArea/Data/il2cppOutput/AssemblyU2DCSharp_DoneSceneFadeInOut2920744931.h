#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneSceneFadeInOut
struct  DoneSceneFadeInOut_t2920744931  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneSceneFadeInOut::fadeSpeed
	float ___fadeSpeed_2;
	// System.Boolean DoneSceneFadeInOut::sceneStarting
	bool ___sceneStarting_3;

public:
	inline static int32_t get_offset_of_fadeSpeed_2() { return static_cast<int32_t>(offsetof(DoneSceneFadeInOut_t2920744931, ___fadeSpeed_2)); }
	inline float get_fadeSpeed_2() const { return ___fadeSpeed_2; }
	inline float* get_address_of_fadeSpeed_2() { return &___fadeSpeed_2; }
	inline void set_fadeSpeed_2(float value)
	{
		___fadeSpeed_2 = value;
	}

	inline static int32_t get_offset_of_sceneStarting_3() { return static_cast<int32_t>(offsetof(DoneSceneFadeInOut_t2920744931, ___sceneStarting_3)); }
	inline bool get_sceneStarting_3() const { return ___sceneStarting_3; }
	inline bool* get_address_of_sceneStarting_3() { return &___sceneStarting_3; }
	inline void set_sceneStarting_3(bool value)
	{
		___sceneStarting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
