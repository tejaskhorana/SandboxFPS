#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DonePlayerInventory
struct DonePlayerInventory_t1790767993;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneKeyPickup
struct  DoneKeyPickup_t121770041  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip DoneKeyPickup::keyGrab
	AudioClip_t794140988 * ___keyGrab_2;
	// UnityEngine.GameObject DoneKeyPickup::player
	GameObject_t3674682005 * ___player_3;
	// DonePlayerInventory DoneKeyPickup::playerInventory
	DonePlayerInventory_t1790767993 * ___playerInventory_4;

public:
	inline static int32_t get_offset_of_keyGrab_2() { return static_cast<int32_t>(offsetof(DoneKeyPickup_t121770041, ___keyGrab_2)); }
	inline AudioClip_t794140988 * get_keyGrab_2() const { return ___keyGrab_2; }
	inline AudioClip_t794140988 ** get_address_of_keyGrab_2() { return &___keyGrab_2; }
	inline void set_keyGrab_2(AudioClip_t794140988 * value)
	{
		___keyGrab_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyGrab_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DoneKeyPickup_t121770041, ___player_3)); }
	inline GameObject_t3674682005 * get_player_3() const { return ___player_3; }
	inline GameObject_t3674682005 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3674682005 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_playerInventory_4() { return static_cast<int32_t>(offsetof(DoneKeyPickup_t121770041, ___playerInventory_4)); }
	inline DonePlayerInventory_t1790767993 * get_playerInventory_4() const { return ___playerInventory_4; }
	inline DonePlayerInventory_t1790767993 ** get_address_of_playerInventory_4() { return &___playerInventory_4; }
	inline void set_playerInventory_4(DonePlayerInventory_t1790767993 * value)
	{
		___playerInventory_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerInventory_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
