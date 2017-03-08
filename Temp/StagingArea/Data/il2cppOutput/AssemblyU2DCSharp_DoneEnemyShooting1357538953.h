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
// UnityEngine.LineRenderer
struct LineRenderer_t1892709339;
// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.SphereCollider
struct SphereCollider_t111527973;
// UnityEngine.Transform
struct Transform_t1659122786;
// DonePlayerHealth
struct DonePlayerHealth_t4009928031;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneEnemyShooting
struct  DoneEnemyShooting_t1357538953  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneEnemyShooting::maximumDamage
	float ___maximumDamage_2;
	// System.Single DoneEnemyShooting::minimumDamage
	float ___minimumDamage_3;
	// UnityEngine.AudioClip DoneEnemyShooting::shotClip
	AudioClip_t794140988 * ___shotClip_4;
	// System.Single DoneEnemyShooting::flashIntensity
	float ___flashIntensity_5;
	// System.Single DoneEnemyShooting::fadeSpeed
	float ___fadeSpeed_6;
	// UnityEngine.Animator DoneEnemyShooting::anim
	Animator_t2776330603 * ___anim_7;
	// DoneHashIDs DoneEnemyShooting::hash
	DoneHashIDs_t3064044776 * ___hash_8;
	// UnityEngine.LineRenderer DoneEnemyShooting::laserShotLine
	LineRenderer_t1892709339 * ___laserShotLine_9;
	// UnityEngine.Light DoneEnemyShooting::laserShotLight
	Light_t4202674828 * ___laserShotLight_10;
	// UnityEngine.SphereCollider DoneEnemyShooting::col
	SphereCollider_t111527973 * ___col_11;
	// UnityEngine.Transform DoneEnemyShooting::player
	Transform_t1659122786 * ___player_12;
	// DonePlayerHealth DoneEnemyShooting::playerHealth
	DonePlayerHealth_t4009928031 * ___playerHealth_13;
	// System.Boolean DoneEnemyShooting::shooting
	bool ___shooting_14;
	// System.Single DoneEnemyShooting::scaledDamage
	float ___scaledDamage_15;

public:
	inline static int32_t get_offset_of_maximumDamage_2() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___maximumDamage_2)); }
	inline float get_maximumDamage_2() const { return ___maximumDamage_2; }
	inline float* get_address_of_maximumDamage_2() { return &___maximumDamage_2; }
	inline void set_maximumDamage_2(float value)
	{
		___maximumDamage_2 = value;
	}

	inline static int32_t get_offset_of_minimumDamage_3() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___minimumDamage_3)); }
	inline float get_minimumDamage_3() const { return ___minimumDamage_3; }
	inline float* get_address_of_minimumDamage_3() { return &___minimumDamage_3; }
	inline void set_minimumDamage_3(float value)
	{
		___minimumDamage_3 = value;
	}

	inline static int32_t get_offset_of_shotClip_4() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___shotClip_4)); }
	inline AudioClip_t794140988 * get_shotClip_4() const { return ___shotClip_4; }
	inline AudioClip_t794140988 ** get_address_of_shotClip_4() { return &___shotClip_4; }
	inline void set_shotClip_4(AudioClip_t794140988 * value)
	{
		___shotClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___shotClip_4, value);
	}

	inline static int32_t get_offset_of_flashIntensity_5() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___flashIntensity_5)); }
	inline float get_flashIntensity_5() const { return ___flashIntensity_5; }
	inline float* get_address_of_flashIntensity_5() { return &___flashIntensity_5; }
	inline void set_flashIntensity_5(float value)
	{
		___flashIntensity_5 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_6() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___fadeSpeed_6)); }
	inline float get_fadeSpeed_6() const { return ___fadeSpeed_6; }
	inline float* get_address_of_fadeSpeed_6() { return &___fadeSpeed_6; }
	inline void set_fadeSpeed_6(float value)
	{
		___fadeSpeed_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___anim_7)); }
	inline Animator_t2776330603 * get_anim_7() const { return ___anim_7; }
	inline Animator_t2776330603 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t2776330603 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_hash_8() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___hash_8)); }
	inline DoneHashIDs_t3064044776 * get_hash_8() const { return ___hash_8; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_8() { return &___hash_8; }
	inline void set_hash_8(DoneHashIDs_t3064044776 * value)
	{
		___hash_8 = value;
		Il2CppCodeGenWriteBarrier(&___hash_8, value);
	}

	inline static int32_t get_offset_of_laserShotLine_9() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___laserShotLine_9)); }
	inline LineRenderer_t1892709339 * get_laserShotLine_9() const { return ___laserShotLine_9; }
	inline LineRenderer_t1892709339 ** get_address_of_laserShotLine_9() { return &___laserShotLine_9; }
	inline void set_laserShotLine_9(LineRenderer_t1892709339 * value)
	{
		___laserShotLine_9 = value;
		Il2CppCodeGenWriteBarrier(&___laserShotLine_9, value);
	}

	inline static int32_t get_offset_of_laserShotLight_10() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___laserShotLight_10)); }
	inline Light_t4202674828 * get_laserShotLight_10() const { return ___laserShotLight_10; }
	inline Light_t4202674828 ** get_address_of_laserShotLight_10() { return &___laserShotLight_10; }
	inline void set_laserShotLight_10(Light_t4202674828 * value)
	{
		___laserShotLight_10 = value;
		Il2CppCodeGenWriteBarrier(&___laserShotLight_10, value);
	}

	inline static int32_t get_offset_of_col_11() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___col_11)); }
	inline SphereCollider_t111527973 * get_col_11() const { return ___col_11; }
	inline SphereCollider_t111527973 ** get_address_of_col_11() { return &___col_11; }
	inline void set_col_11(SphereCollider_t111527973 * value)
	{
		___col_11 = value;
		Il2CppCodeGenWriteBarrier(&___col_11, value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___player_12)); }
	inline Transform_t1659122786 * get_player_12() const { return ___player_12; }
	inline Transform_t1659122786 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(Transform_t1659122786 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_playerHealth_13() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___playerHealth_13)); }
	inline DonePlayerHealth_t4009928031 * get_playerHealth_13() const { return ___playerHealth_13; }
	inline DonePlayerHealth_t4009928031 ** get_address_of_playerHealth_13() { return &___playerHealth_13; }
	inline void set_playerHealth_13(DonePlayerHealth_t4009928031 * value)
	{
		___playerHealth_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_13, value);
	}

	inline static int32_t get_offset_of_shooting_14() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___shooting_14)); }
	inline bool get_shooting_14() const { return ___shooting_14; }
	inline bool* get_address_of_shooting_14() { return &___shooting_14; }
	inline void set_shooting_14(bool value)
	{
		___shooting_14 = value;
	}

	inline static int32_t get_offset_of_scaledDamage_15() { return static_cast<int32_t>(offsetof(DoneEnemyShooting_t1357538953, ___scaledDamage_15)); }
	inline float get_scaledDamage_15() const { return ___scaledDamage_15; }
	inline float* get_address_of_scaledDamage_15() { return &___scaledDamage_15; }
	inline void set_scaledDamage_15(float value)
	{
		___scaledDamage_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
