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

// DoneLaserBlinking
struct  DoneLaserBlinking_t3391558255  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneLaserBlinking::onTime
	float ___onTime_2;
	// System.Single DoneLaserBlinking::offTime
	float ___offTime_3;
	// System.Single DoneLaserBlinking::timer
	float ___timer_4;

public:
	inline static int32_t get_offset_of_onTime_2() { return static_cast<int32_t>(offsetof(DoneLaserBlinking_t3391558255, ___onTime_2)); }
	inline float get_onTime_2() const { return ___onTime_2; }
	inline float* get_address_of_onTime_2() { return &___onTime_2; }
	inline void set_onTime_2(float value)
	{
		___onTime_2 = value;
	}

	inline static int32_t get_offset_of_offTime_3() { return static_cast<int32_t>(offsetof(DoneLaserBlinking_t3391558255, ___offTime_3)); }
	inline float get_offTime_3() const { return ___offTime_3; }
	inline float* get_address_of_offTime_3() { return &___offTime_3; }
	inline void set_offTime_3(float value)
	{
		___offTime_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(DoneLaserBlinking_t3391558255, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
