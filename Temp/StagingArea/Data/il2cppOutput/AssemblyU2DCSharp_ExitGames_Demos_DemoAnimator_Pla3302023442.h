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

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.PlayerManager
struct  PlayerManager_t3302023442  : public PunBehaviour_t2436907354
{
public:
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.PlayerManager::PlayerUiPrefab
	GameObject_t3674682005 * ___PlayerUiPrefab_3;
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.PlayerManager::Beams
	GameObject_t3674682005 * ___Beams_4;
	// System.Single ExitGames.Demos.DemoAnimator.PlayerManager::Health
	float ___Health_5;
	// System.Boolean ExitGames.Demos.DemoAnimator.PlayerManager::IsFiring
	bool ___IsFiring_7;

public:
	inline static int32_t get_offset_of_PlayerUiPrefab_3() { return static_cast<int32_t>(offsetof(PlayerManager_t3302023442, ___PlayerUiPrefab_3)); }
	inline GameObject_t3674682005 * get_PlayerUiPrefab_3() const { return ___PlayerUiPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_PlayerUiPrefab_3() { return &___PlayerUiPrefab_3; }
	inline void set_PlayerUiPrefab_3(GameObject_t3674682005 * value)
	{
		___PlayerUiPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerUiPrefab_3, value);
	}

	inline static int32_t get_offset_of_Beams_4() { return static_cast<int32_t>(offsetof(PlayerManager_t3302023442, ___Beams_4)); }
	inline GameObject_t3674682005 * get_Beams_4() const { return ___Beams_4; }
	inline GameObject_t3674682005 ** get_address_of_Beams_4() { return &___Beams_4; }
	inline void set_Beams_4(GameObject_t3674682005 * value)
	{
		___Beams_4 = value;
		Il2CppCodeGenWriteBarrier(&___Beams_4, value);
	}

	inline static int32_t get_offset_of_Health_5() { return static_cast<int32_t>(offsetof(PlayerManager_t3302023442, ___Health_5)); }
	inline float get_Health_5() const { return ___Health_5; }
	inline float* get_address_of_Health_5() { return &___Health_5; }
	inline void set_Health_5(float value)
	{
		___Health_5 = value;
	}

	inline static int32_t get_offset_of_IsFiring_7() { return static_cast<int32_t>(offsetof(PlayerManager_t3302023442, ___IsFiring_7)); }
	inline bool get_IsFiring_7() const { return ___IsFiring_7; }
	inline bool* get_address_of_IsFiring_7() { return &___IsFiring_7; }
	inline void set_IsFiring_7(bool value)
	{
		___IsFiring_7 = value;
	}
};

struct PlayerManager_t3302023442_StaticFields
{
public:
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.PlayerManager::LocalPlayerInstance
	GameObject_t3674682005 * ___LocalPlayerInstance_6;

public:
	inline static int32_t get_offset_of_LocalPlayerInstance_6() { return static_cast<int32_t>(offsetof(PlayerManager_t3302023442_StaticFields, ___LocalPlayerInstance_6)); }
	inline GameObject_t3674682005 * get_LocalPlayerInstance_6() const { return ___LocalPlayerInstance_6; }
	inline GameObject_t3674682005 ** get_address_of_LocalPlayerInstance_6() { return &___LocalPlayerInstance_6; }
	inline void set_LocalPlayerInstance_6(GameObject_t3674682005 * value)
	{
		___LocalPlayerInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___LocalPlayerInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
