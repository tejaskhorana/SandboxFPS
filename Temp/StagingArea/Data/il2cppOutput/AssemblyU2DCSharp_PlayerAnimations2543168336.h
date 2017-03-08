#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerAnimations
struct  PlayerAnimations_t2543168336  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator PlayerAnimations::anim
	Animator_t2776330603 * ___anim_2;
	// System.Boolean PlayerAnimations::crouchStatus
	bool ___crouchStatus_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(PlayerAnimations_t2543168336, ___anim_2)); }
	inline Animator_t2776330603 * get_anim_2() const { return ___anim_2; }
	inline Animator_t2776330603 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t2776330603 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_crouchStatus_3() { return static_cast<int32_t>(offsetof(PlayerAnimations_t2543168336, ___crouchStatus_3)); }
	inline bool get_crouchStatus_3() const { return ___crouchStatus_3; }
	inline bool* get_address_of_crouchStatus_3() { return &___crouchStatus_3; }
	inline void set_crouchStatus_3(bool value)
	{
		___crouchStatus_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
