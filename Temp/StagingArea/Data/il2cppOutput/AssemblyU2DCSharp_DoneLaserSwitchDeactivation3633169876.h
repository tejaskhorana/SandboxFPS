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
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneLaserSwitchDeactivation
struct  DoneLaserSwitchDeactivation_t3633169876  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject DoneLaserSwitchDeactivation::laser
	GameObject_t3674682005 * ___laser_2;
	// UnityEngine.Material DoneLaserSwitchDeactivation::unlockedMat
	Material_t3870600107 * ___unlockedMat_3;
	// UnityEngine.GameObject DoneLaserSwitchDeactivation::player
	GameObject_t3674682005 * ___player_4;

public:
	inline static int32_t get_offset_of_laser_2() { return static_cast<int32_t>(offsetof(DoneLaserSwitchDeactivation_t3633169876, ___laser_2)); }
	inline GameObject_t3674682005 * get_laser_2() const { return ___laser_2; }
	inline GameObject_t3674682005 ** get_address_of_laser_2() { return &___laser_2; }
	inline void set_laser_2(GameObject_t3674682005 * value)
	{
		___laser_2 = value;
		Il2CppCodeGenWriteBarrier(&___laser_2, value);
	}

	inline static int32_t get_offset_of_unlockedMat_3() { return static_cast<int32_t>(offsetof(DoneLaserSwitchDeactivation_t3633169876, ___unlockedMat_3)); }
	inline Material_t3870600107 * get_unlockedMat_3() const { return ___unlockedMat_3; }
	inline Material_t3870600107 ** get_address_of_unlockedMat_3() { return &___unlockedMat_3; }
	inline void set_unlockedMat_3(Material_t3870600107 * value)
	{
		___unlockedMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___unlockedMat_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(DoneLaserSwitchDeactivation_t3633169876, ___player_4)); }
	inline GameObject_t3674682005 * get_player_4() const { return ___player_4; }
	inline GameObject_t3674682005 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t3674682005 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
