#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_CustomYieldInstruction2666549910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.WaitForRealSeconds
struct  WaitForRealSeconds_t2231328867  : public CustomYieldInstruction_t2666549910
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t2231328867, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
