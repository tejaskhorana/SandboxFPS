#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShooting
struct  PlayerShooting_t3585541508  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.ParticleSystem PlayerShooting::muzzleFlash
	ParticleSystem_t381473177 * ___muzzleFlash_2;
	// UnityEngine.Animator PlayerShooting::anim
	Animator_t2776330603 * ___anim_3;
	// UnityEngine.GameObject PlayerShooting::impactPrefab
	GameObject_t3674682005 * ___impactPrefab_4;
	// UnityEngine.AudioSource PlayerShooting::audioSource
	AudioSource_t1740077639 * ___audioSource_5;
	// UnityEngine.AudioClip PlayerShooting::gunShotClip
	AudioClip_t794140988 * ___gunShotClip_6;
	// UnityEngine.AudioClip PlayerShooting::meleeClip
	AudioClip_t794140988 * ___meleeClip_7;
	// UnityEngine.GameObject[] PlayerShooting::impacts
	GameObjectU5BU5D_t2662109048* ___impacts_8;
	// System.Int32 PlayerShooting::currentImpact
	int32_t ___currentImpact_9;
	// System.Int32 PlayerShooting::maxImpacts
	int32_t ___maxImpacts_10;
	// System.Single PlayerShooting::damage
	float ___damage_11;
	// System.Boolean PlayerShooting::shooting
	bool ___shooting_12;
	// System.Boolean PlayerShooting::meleeing
	bool ___meleeing_13;

public:
	inline static int32_t get_offset_of_muzzleFlash_2() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___muzzleFlash_2)); }
	inline ParticleSystem_t381473177 * get_muzzleFlash_2() const { return ___muzzleFlash_2; }
	inline ParticleSystem_t381473177 ** get_address_of_muzzleFlash_2() { return &___muzzleFlash_2; }
	inline void set_muzzleFlash_2(ParticleSystem_t381473177 * value)
	{
		___muzzleFlash_2 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlash_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___anim_3)); }
	inline Animator_t2776330603 * get_anim_3() const { return ___anim_3; }
	inline Animator_t2776330603 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t2776330603 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_impactPrefab_4() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___impactPrefab_4)); }
	inline GameObject_t3674682005 * get_impactPrefab_4() const { return ___impactPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_impactPrefab_4() { return &___impactPrefab_4; }
	inline void set_impactPrefab_4(GameObject_t3674682005 * value)
	{
		___impactPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___impactPrefab_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___audioSource_5)); }
	inline AudioSource_t1740077639 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1740077639 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_gunShotClip_6() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___gunShotClip_6)); }
	inline AudioClip_t794140988 * get_gunShotClip_6() const { return ___gunShotClip_6; }
	inline AudioClip_t794140988 ** get_address_of_gunShotClip_6() { return &___gunShotClip_6; }
	inline void set_gunShotClip_6(AudioClip_t794140988 * value)
	{
		___gunShotClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___gunShotClip_6, value);
	}

	inline static int32_t get_offset_of_meleeClip_7() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___meleeClip_7)); }
	inline AudioClip_t794140988 * get_meleeClip_7() const { return ___meleeClip_7; }
	inline AudioClip_t794140988 ** get_address_of_meleeClip_7() { return &___meleeClip_7; }
	inline void set_meleeClip_7(AudioClip_t794140988 * value)
	{
		___meleeClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___meleeClip_7, value);
	}

	inline static int32_t get_offset_of_impacts_8() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___impacts_8)); }
	inline GameObjectU5BU5D_t2662109048* get_impacts_8() const { return ___impacts_8; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_impacts_8() { return &___impacts_8; }
	inline void set_impacts_8(GameObjectU5BU5D_t2662109048* value)
	{
		___impacts_8 = value;
		Il2CppCodeGenWriteBarrier(&___impacts_8, value);
	}

	inline static int32_t get_offset_of_currentImpact_9() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___currentImpact_9)); }
	inline int32_t get_currentImpact_9() const { return ___currentImpact_9; }
	inline int32_t* get_address_of_currentImpact_9() { return &___currentImpact_9; }
	inline void set_currentImpact_9(int32_t value)
	{
		___currentImpact_9 = value;
	}

	inline static int32_t get_offset_of_maxImpacts_10() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___maxImpacts_10)); }
	inline int32_t get_maxImpacts_10() const { return ___maxImpacts_10; }
	inline int32_t* get_address_of_maxImpacts_10() { return &___maxImpacts_10; }
	inline void set_maxImpacts_10(int32_t value)
	{
		___maxImpacts_10 = value;
	}

	inline static int32_t get_offset_of_damage_11() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___damage_11)); }
	inline float get_damage_11() const { return ___damage_11; }
	inline float* get_address_of_damage_11() { return &___damage_11; }
	inline void set_damage_11(float value)
	{
		___damage_11 = value;
	}

	inline static int32_t get_offset_of_shooting_12() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___shooting_12)); }
	inline bool get_shooting_12() const { return ___shooting_12; }
	inline bool* get_address_of_shooting_12() { return &___shooting_12; }
	inline void set_shooting_12(bool value)
	{
		___shooting_12 = value;
	}

	inline static int32_t get_offset_of_meleeing_13() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___meleeing_13)); }
	inline bool get_meleeing_13() const { return ___meleeing_13; }
	inline bool* get_address_of_meleeing_13() { return &___meleeing_13; }
	inline void set_meleeing_13(bool value)
	{
		___meleeing_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
