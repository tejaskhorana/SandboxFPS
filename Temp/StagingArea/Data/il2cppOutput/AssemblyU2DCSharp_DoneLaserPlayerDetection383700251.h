#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// DoneLastPlayerSighting
struct DoneLastPlayerSighting_t3519912606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneLaserPlayerDetection
struct  DoneLaserPlayerDetection_t383700251  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject DoneLaserPlayerDetection::player
	GameObject_t3674682005 * ___player_2;
	// DoneLastPlayerSighting DoneLaserPlayerDetection::lastPlayerSighting
	DoneLastPlayerSighting_t3519912606 * ___lastPlayerSighting_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(DoneLaserPlayerDetection_t383700251, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_lastPlayerSighting_3() { return static_cast<int32_t>(offsetof(DoneLaserPlayerDetection_t383700251, ___lastPlayerSighting_3)); }
	inline DoneLastPlayerSighting_t3519912606 * get_lastPlayerSighting_3() const { return ___lastPlayerSighting_3; }
	inline DoneLastPlayerSighting_t3519912606 ** get_address_of_lastPlayerSighting_3() { return &___lastPlayerSighting_3; }
	inline void set_lastPlayerSighting_3(DoneLastPlayerSighting_t3519912606 * value)
	{
		___lastPlayerSighting_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayerSighting_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
