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
// UnityEngine.Animator
struct Animator_t2776330603;
// DoneHashIDs
struct DoneHashIDs_t3064044776;
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

// DoneDoorAnimation
struct  DoneDoorAnimation_t3069569780  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean DoneDoorAnimation::requireKey
	bool ___requireKey_2;
	// UnityEngine.AudioClip DoneDoorAnimation::doorSwishClip
	AudioClip_t794140988 * ___doorSwishClip_3;
	// UnityEngine.AudioClip DoneDoorAnimation::accessDeniedClip
	AudioClip_t794140988 * ___accessDeniedClip_4;
	// UnityEngine.Animator DoneDoorAnimation::anim
	Animator_t2776330603 * ___anim_5;
	// DoneHashIDs DoneDoorAnimation::hash
	DoneHashIDs_t3064044776 * ___hash_6;
	// UnityEngine.GameObject DoneDoorAnimation::player
	GameObject_t3674682005 * ___player_7;
	// DonePlayerInventory DoneDoorAnimation::playerInventory
	DonePlayerInventory_t1790767993 * ___playerInventory_8;
	// System.Int32 DoneDoorAnimation::count
	int32_t ___count_9;

public:
	inline static int32_t get_offset_of_requireKey_2() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___requireKey_2)); }
	inline bool get_requireKey_2() const { return ___requireKey_2; }
	inline bool* get_address_of_requireKey_2() { return &___requireKey_2; }
	inline void set_requireKey_2(bool value)
	{
		___requireKey_2 = value;
	}

	inline static int32_t get_offset_of_doorSwishClip_3() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___doorSwishClip_3)); }
	inline AudioClip_t794140988 * get_doorSwishClip_3() const { return ___doorSwishClip_3; }
	inline AudioClip_t794140988 ** get_address_of_doorSwishClip_3() { return &___doorSwishClip_3; }
	inline void set_doorSwishClip_3(AudioClip_t794140988 * value)
	{
		___doorSwishClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___doorSwishClip_3, value);
	}

	inline static int32_t get_offset_of_accessDeniedClip_4() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___accessDeniedClip_4)); }
	inline AudioClip_t794140988 * get_accessDeniedClip_4() const { return ___accessDeniedClip_4; }
	inline AudioClip_t794140988 ** get_address_of_accessDeniedClip_4() { return &___accessDeniedClip_4; }
	inline void set_accessDeniedClip_4(AudioClip_t794140988 * value)
	{
		___accessDeniedClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___accessDeniedClip_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___anim_5)); }
	inline Animator_t2776330603 * get_anim_5() const { return ___anim_5; }
	inline Animator_t2776330603 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t2776330603 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_hash_6() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___hash_6)); }
	inline DoneHashIDs_t3064044776 * get_hash_6() const { return ___hash_6; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_6() { return &___hash_6; }
	inline void set_hash_6(DoneHashIDs_t3064044776 * value)
	{
		___hash_6 = value;
		Il2CppCodeGenWriteBarrier(&___hash_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___player_7)); }
	inline GameObject_t3674682005 * get_player_7() const { return ___player_7; }
	inline GameObject_t3674682005 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t3674682005 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_playerInventory_8() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___playerInventory_8)); }
	inline DonePlayerInventory_t1790767993 * get_playerInventory_8() const { return ___playerInventory_8; }
	inline DonePlayerInventory_t1790767993 ** get_address_of_playerInventory_8() { return &___playerInventory_8; }
	inline void set_playerInventory_8(DonePlayerInventory_t1790767993 * value)
	{
		___playerInventory_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerInventory_8, value);
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(DoneDoorAnimation_t3069569780, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
