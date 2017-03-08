#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Light
struct Light_t4202674828;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunController
struct  GunController_t1100771548  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource GunController::audio
	AudioSource_t1740077639 * ___audio_2;
	// UnityEngine.AudioClip GunController::shoot
	AudioClip_t794140988 * ___shoot_3;
	// UnityEngine.GameObject GunController::FireParticle
	GameObject_t3674682005 * ___FireParticle_4;
	// UnityEngine.Light GunController::fireLight
	Light_t4202674828 * ___fireLight_5;
	// System.Single GunController::delay
	float ___delay_6;
	// System.Single GunController::fireTime
	float ___fireTime_7;
	// System.Single GunController::effectsDisplayTime
	float ___effectsDisplayTime_8;

public:
	inline static int32_t get_offset_of_audio_2() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___audio_2)); }
	inline AudioSource_t1740077639 * get_audio_2() const { return ___audio_2; }
	inline AudioSource_t1740077639 ** get_address_of_audio_2() { return &___audio_2; }
	inline void set_audio_2(AudioSource_t1740077639 * value)
	{
		___audio_2 = value;
		Il2CppCodeGenWriteBarrier(&___audio_2, value);
	}

	inline static int32_t get_offset_of_shoot_3() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___shoot_3)); }
	inline AudioClip_t794140988 * get_shoot_3() const { return ___shoot_3; }
	inline AudioClip_t794140988 ** get_address_of_shoot_3() { return &___shoot_3; }
	inline void set_shoot_3(AudioClip_t794140988 * value)
	{
		___shoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___shoot_3, value);
	}

	inline static int32_t get_offset_of_FireParticle_4() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___FireParticle_4)); }
	inline GameObject_t3674682005 * get_FireParticle_4() const { return ___FireParticle_4; }
	inline GameObject_t3674682005 ** get_address_of_FireParticle_4() { return &___FireParticle_4; }
	inline void set_FireParticle_4(GameObject_t3674682005 * value)
	{
		___FireParticle_4 = value;
		Il2CppCodeGenWriteBarrier(&___FireParticle_4, value);
	}

	inline static int32_t get_offset_of_fireLight_5() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___fireLight_5)); }
	inline Light_t4202674828 * get_fireLight_5() const { return ___fireLight_5; }
	inline Light_t4202674828 ** get_address_of_fireLight_5() { return &___fireLight_5; }
	inline void set_fireLight_5(Light_t4202674828 * value)
	{
		___fireLight_5 = value;
		Il2CppCodeGenWriteBarrier(&___fireLight_5, value);
	}

	inline static int32_t get_offset_of_delay_6() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___delay_6)); }
	inline float get_delay_6() const { return ___delay_6; }
	inline float* get_address_of_delay_6() { return &___delay_6; }
	inline void set_delay_6(float value)
	{
		___delay_6 = value;
	}

	inline static int32_t get_offset_of_fireTime_7() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___fireTime_7)); }
	inline float get_fireTime_7() const { return ___fireTime_7; }
	inline float* get_address_of_fireTime_7() { return &___fireTime_7; }
	inline void set_fireTime_7(float value)
	{
		___fireTime_7 = value;
	}

	inline static int32_t get_offset_of_effectsDisplayTime_8() { return static_cast<int32_t>(offsetof(GunController_t1100771548, ___effectsDisplayTime_8)); }
	inline float get_effectsDisplayTime_8() const { return ___effectsDisplayTime_8; }
	inline float* get_address_of_effectsDisplayTime_8() { return &___effectsDisplayTime_8; }
	inline void set_effectsDisplayTime_8(float value)
	{
		___effectsDisplayTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
