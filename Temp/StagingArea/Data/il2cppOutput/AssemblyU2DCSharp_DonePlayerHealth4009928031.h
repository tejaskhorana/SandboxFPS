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
// DonePlayerMovement
struct DonePlayerMovement_t1958932210;
// DoneHashIDs
struct DoneHashIDs_t3064044776;
// DoneSceneFadeInOut
struct DoneSceneFadeInOut_t2920744931;
// DoneLastPlayerSighting
struct DoneLastPlayerSighting_t3519912606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DonePlayerHealth
struct  DonePlayerHealth_t4009928031  : public MonoBehaviour_t667441552
{
public:
	// System.Single DonePlayerHealth::health
	float ___health_2;
	// System.Single DonePlayerHealth::resetAfterDeathTime
	float ___resetAfterDeathTime_3;
	// UnityEngine.AudioClip DonePlayerHealth::deathClip
	AudioClip_t794140988 * ___deathClip_4;
	// UnityEngine.Animator DonePlayerHealth::anim
	Animator_t2776330603 * ___anim_5;
	// DonePlayerMovement DonePlayerHealth::playerMovement
	DonePlayerMovement_t1958932210 * ___playerMovement_6;
	// DoneHashIDs DonePlayerHealth::hash
	DoneHashIDs_t3064044776 * ___hash_7;
	// DoneSceneFadeInOut DonePlayerHealth::sceneFadeInOut
	DoneSceneFadeInOut_t2920744931 * ___sceneFadeInOut_8;
	// DoneLastPlayerSighting DonePlayerHealth::lastPlayerSighting
	DoneLastPlayerSighting_t3519912606 * ___lastPlayerSighting_9;
	// System.Single DonePlayerHealth::timer
	float ___timer_10;
	// System.Boolean DonePlayerHealth::playerDead
	bool ___playerDead_11;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_resetAfterDeathTime_3() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___resetAfterDeathTime_3)); }
	inline float get_resetAfterDeathTime_3() const { return ___resetAfterDeathTime_3; }
	inline float* get_address_of_resetAfterDeathTime_3() { return &___resetAfterDeathTime_3; }
	inline void set_resetAfterDeathTime_3(float value)
	{
		___resetAfterDeathTime_3 = value;
	}

	inline static int32_t get_offset_of_deathClip_4() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___deathClip_4)); }
	inline AudioClip_t794140988 * get_deathClip_4() const { return ___deathClip_4; }
	inline AudioClip_t794140988 ** get_address_of_deathClip_4() { return &___deathClip_4; }
	inline void set_deathClip_4(AudioClip_t794140988 * value)
	{
		___deathClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___deathClip_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___anim_5)); }
	inline Animator_t2776330603 * get_anim_5() const { return ___anim_5; }
	inline Animator_t2776330603 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t2776330603 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_playerMovement_6() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___playerMovement_6)); }
	inline DonePlayerMovement_t1958932210 * get_playerMovement_6() const { return ___playerMovement_6; }
	inline DonePlayerMovement_t1958932210 ** get_address_of_playerMovement_6() { return &___playerMovement_6; }
	inline void set_playerMovement_6(DonePlayerMovement_t1958932210 * value)
	{
		___playerMovement_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_6, value);
	}

	inline static int32_t get_offset_of_hash_7() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___hash_7)); }
	inline DoneHashIDs_t3064044776 * get_hash_7() const { return ___hash_7; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_7() { return &___hash_7; }
	inline void set_hash_7(DoneHashIDs_t3064044776 * value)
	{
		___hash_7 = value;
		Il2CppCodeGenWriteBarrier(&___hash_7, value);
	}

	inline static int32_t get_offset_of_sceneFadeInOut_8() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___sceneFadeInOut_8)); }
	inline DoneSceneFadeInOut_t2920744931 * get_sceneFadeInOut_8() const { return ___sceneFadeInOut_8; }
	inline DoneSceneFadeInOut_t2920744931 ** get_address_of_sceneFadeInOut_8() { return &___sceneFadeInOut_8; }
	inline void set_sceneFadeInOut_8(DoneSceneFadeInOut_t2920744931 * value)
	{
		___sceneFadeInOut_8 = value;
		Il2CppCodeGenWriteBarrier(&___sceneFadeInOut_8, value);
	}

	inline static int32_t get_offset_of_lastPlayerSighting_9() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___lastPlayerSighting_9)); }
	inline DoneLastPlayerSighting_t3519912606 * get_lastPlayerSighting_9() const { return ___lastPlayerSighting_9; }
	inline DoneLastPlayerSighting_t3519912606 ** get_address_of_lastPlayerSighting_9() { return &___lastPlayerSighting_9; }
	inline void set_lastPlayerSighting_9(DoneLastPlayerSighting_t3519912606 * value)
	{
		___lastPlayerSighting_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayerSighting_9, value);
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}

	inline static int32_t get_offset_of_playerDead_11() { return static_cast<int32_t>(offsetof(DonePlayerHealth_t4009928031, ___playerDead_11)); }
	inline bool get_playerDead_11() const { return ___playerDead_11; }
	inline bool* get_address_of_playerDead_11() { return &___playerDead_11; }
	inline void set_playerDead_11(bool value)
	{
		___playerDead_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
