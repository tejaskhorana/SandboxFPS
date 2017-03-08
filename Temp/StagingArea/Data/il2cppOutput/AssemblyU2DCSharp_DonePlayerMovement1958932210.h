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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DonePlayerMovement
struct  DonePlayerMovement_t1958932210  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip DonePlayerMovement::shoutingClip
	AudioClip_t794140988 * ___shoutingClip_2;
	// System.Single DonePlayerMovement::turnSmoothing
	float ___turnSmoothing_3;
	// System.Single DonePlayerMovement::speedDampTime
	float ___speedDampTime_4;
	// UnityEngine.Animator DonePlayerMovement::anim
	Animator_t2776330603 * ___anim_5;
	// DoneHashIDs DonePlayerMovement::hash
	DoneHashIDs_t3064044776 * ___hash_6;

public:
	inline static int32_t get_offset_of_shoutingClip_2() { return static_cast<int32_t>(offsetof(DonePlayerMovement_t1958932210, ___shoutingClip_2)); }
	inline AudioClip_t794140988 * get_shoutingClip_2() const { return ___shoutingClip_2; }
	inline AudioClip_t794140988 ** get_address_of_shoutingClip_2() { return &___shoutingClip_2; }
	inline void set_shoutingClip_2(AudioClip_t794140988 * value)
	{
		___shoutingClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___shoutingClip_2, value);
	}

	inline static int32_t get_offset_of_turnSmoothing_3() { return static_cast<int32_t>(offsetof(DonePlayerMovement_t1958932210, ___turnSmoothing_3)); }
	inline float get_turnSmoothing_3() const { return ___turnSmoothing_3; }
	inline float* get_address_of_turnSmoothing_3() { return &___turnSmoothing_3; }
	inline void set_turnSmoothing_3(float value)
	{
		___turnSmoothing_3 = value;
	}

	inline static int32_t get_offset_of_speedDampTime_4() { return static_cast<int32_t>(offsetof(DonePlayerMovement_t1958932210, ___speedDampTime_4)); }
	inline float get_speedDampTime_4() const { return ___speedDampTime_4; }
	inline float* get_address_of_speedDampTime_4() { return &___speedDampTime_4; }
	inline void set_speedDampTime_4(float value)
	{
		___speedDampTime_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(DonePlayerMovement_t1958932210, ___anim_5)); }
	inline Animator_t2776330603 * get_anim_5() const { return ___anim_5; }
	inline Animator_t2776330603 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t2776330603 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_hash_6() { return static_cast<int32_t>(offsetof(DonePlayerMovement_t1958932210, ___hash_6)); }
	inline DoneHashIDs_t3064044776 * get_hash_6() const { return ___hash_6; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_6() { return &___hash_6; }
	inline void set_hash_6(DoneHashIDs_t3064044776 * value)
	{
		___hash_6 = value;
		Il2CppCodeGenWriteBarrier(&___hash_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
