#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DoneAlarmLight
struct DoneAlarmLight_t3003541127;
// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t44861630;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneLastPlayerSighting
struct  DoneLastPlayerSighting_t3519912606  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 DoneLastPlayerSighting::position
	Vector3_t4282066566  ___position_2;
	// UnityEngine.Vector3 DoneLastPlayerSighting::resetPosition
	Vector3_t4282066566  ___resetPosition_3;
	// System.Single DoneLastPlayerSighting::lightHighIntensity
	float ___lightHighIntensity_4;
	// System.Single DoneLastPlayerSighting::lightLowIntensity
	float ___lightLowIntensity_5;
	// System.Single DoneLastPlayerSighting::fadeSpeed
	float ___fadeSpeed_6;
	// System.Single DoneLastPlayerSighting::musicFadeSpeed
	float ___musicFadeSpeed_7;
	// DoneAlarmLight DoneLastPlayerSighting::alarm
	DoneAlarmLight_t3003541127 * ___alarm_8;
	// UnityEngine.Light DoneLastPlayerSighting::mainLight
	Light_t4202674828 * ___mainLight_9;
	// UnityEngine.AudioSource DoneLastPlayerSighting::panicAudio
	AudioSource_t1740077639 * ___panicAudio_10;
	// UnityEngine.AudioSource[] DoneLastPlayerSighting::sirens
	AudioSourceU5BU5D_t44861630* ___sirens_11;

public:
	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___position_2)); }
	inline Vector3_t4282066566  get_position_2() const { return ___position_2; }
	inline Vector3_t4282066566 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t4282066566  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_resetPosition_3() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___resetPosition_3)); }
	inline Vector3_t4282066566  get_resetPosition_3() const { return ___resetPosition_3; }
	inline Vector3_t4282066566 * get_address_of_resetPosition_3() { return &___resetPosition_3; }
	inline void set_resetPosition_3(Vector3_t4282066566  value)
	{
		___resetPosition_3 = value;
	}

	inline static int32_t get_offset_of_lightHighIntensity_4() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___lightHighIntensity_4)); }
	inline float get_lightHighIntensity_4() const { return ___lightHighIntensity_4; }
	inline float* get_address_of_lightHighIntensity_4() { return &___lightHighIntensity_4; }
	inline void set_lightHighIntensity_4(float value)
	{
		___lightHighIntensity_4 = value;
	}

	inline static int32_t get_offset_of_lightLowIntensity_5() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___lightLowIntensity_5)); }
	inline float get_lightLowIntensity_5() const { return ___lightLowIntensity_5; }
	inline float* get_address_of_lightLowIntensity_5() { return &___lightLowIntensity_5; }
	inline void set_lightLowIntensity_5(float value)
	{
		___lightLowIntensity_5 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_6() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___fadeSpeed_6)); }
	inline float get_fadeSpeed_6() const { return ___fadeSpeed_6; }
	inline float* get_address_of_fadeSpeed_6() { return &___fadeSpeed_6; }
	inline void set_fadeSpeed_6(float value)
	{
		___fadeSpeed_6 = value;
	}

	inline static int32_t get_offset_of_musicFadeSpeed_7() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___musicFadeSpeed_7)); }
	inline float get_musicFadeSpeed_7() const { return ___musicFadeSpeed_7; }
	inline float* get_address_of_musicFadeSpeed_7() { return &___musicFadeSpeed_7; }
	inline void set_musicFadeSpeed_7(float value)
	{
		___musicFadeSpeed_7 = value;
	}

	inline static int32_t get_offset_of_alarm_8() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___alarm_8)); }
	inline DoneAlarmLight_t3003541127 * get_alarm_8() const { return ___alarm_8; }
	inline DoneAlarmLight_t3003541127 ** get_address_of_alarm_8() { return &___alarm_8; }
	inline void set_alarm_8(DoneAlarmLight_t3003541127 * value)
	{
		___alarm_8 = value;
		Il2CppCodeGenWriteBarrier(&___alarm_8, value);
	}

	inline static int32_t get_offset_of_mainLight_9() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___mainLight_9)); }
	inline Light_t4202674828 * get_mainLight_9() const { return ___mainLight_9; }
	inline Light_t4202674828 ** get_address_of_mainLight_9() { return &___mainLight_9; }
	inline void set_mainLight_9(Light_t4202674828 * value)
	{
		___mainLight_9 = value;
		Il2CppCodeGenWriteBarrier(&___mainLight_9, value);
	}

	inline static int32_t get_offset_of_panicAudio_10() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___panicAudio_10)); }
	inline AudioSource_t1740077639 * get_panicAudio_10() const { return ___panicAudio_10; }
	inline AudioSource_t1740077639 ** get_address_of_panicAudio_10() { return &___panicAudio_10; }
	inline void set_panicAudio_10(AudioSource_t1740077639 * value)
	{
		___panicAudio_10 = value;
		Il2CppCodeGenWriteBarrier(&___panicAudio_10, value);
	}

	inline static int32_t get_offset_of_sirens_11() { return static_cast<int32_t>(offsetof(DoneLastPlayerSighting_t3519912606, ___sirens_11)); }
	inline AudioSourceU5BU5D_t44861630* get_sirens_11() const { return ___sirens_11; }
	inline AudioSourceU5BU5D_t44861630** get_address_of_sirens_11() { return &___sirens_11; }
	inline void set_sirens_11(AudioSourceU5BU5D_t44861630* value)
	{
		___sirens_11 = value;
		Il2CppCodeGenWriteBarrier(&___sirens_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
