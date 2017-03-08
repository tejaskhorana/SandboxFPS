#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RPGCamera
struct RPGCamera_t402829902;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoRPGMovement
struct  DemoRPGMovement_t58001333  : public MonoBehaviour_t667441552
{
public:
	// RPGCamera DemoRPGMovement::Camera
	RPGCamera_t402829902 * ___Camera_2;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(DemoRPGMovement_t58001333, ___Camera_2)); }
	inline RPGCamera_t402829902 * get_Camera_2() const { return ___Camera_2; }
	inline RPGCamera_t402829902 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(RPGCamera_t402829902 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
