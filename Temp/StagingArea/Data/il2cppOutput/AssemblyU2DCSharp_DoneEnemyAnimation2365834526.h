#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// DoneEnemySight
struct DoneEnemySight_t1486315575;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// UnityEngine.Animator
struct Animator_t2776330603;
// DoneHashIDs
struct DoneHashIDs_t3064044776;
// DoneAnimatorSetup
struct DoneAnimatorSetup_t3722864468;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneEnemyAnimation
struct  DoneEnemyAnimation_t2365834526  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneEnemyAnimation::deadZone
	float ___deadZone_2;
	// UnityEngine.Transform DoneEnemyAnimation::player
	Transform_t1659122786 * ___player_3;
	// DoneEnemySight DoneEnemyAnimation::enemySight
	DoneEnemySight_t1486315575 * ___enemySight_4;
	// UnityEngine.NavMeshAgent DoneEnemyAnimation::nav
	NavMeshAgent_t588466745 * ___nav_5;
	// UnityEngine.Animator DoneEnemyAnimation::anim
	Animator_t2776330603 * ___anim_6;
	// DoneHashIDs DoneEnemyAnimation::hash
	DoneHashIDs_t3064044776 * ___hash_7;
	// DoneAnimatorSetup DoneEnemyAnimation::animSetup
	DoneAnimatorSetup_t3722864468 * ___animSetup_8;

public:
	inline static int32_t get_offset_of_deadZone_2() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___deadZone_2)); }
	inline float get_deadZone_2() const { return ___deadZone_2; }
	inline float* get_address_of_deadZone_2() { return &___deadZone_2; }
	inline void set_deadZone_2(float value)
	{
		___deadZone_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___player_3)); }
	inline Transform_t1659122786 * get_player_3() const { return ___player_3; }
	inline Transform_t1659122786 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t1659122786 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_enemySight_4() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___enemySight_4)); }
	inline DoneEnemySight_t1486315575 * get_enemySight_4() const { return ___enemySight_4; }
	inline DoneEnemySight_t1486315575 ** get_address_of_enemySight_4() { return &___enemySight_4; }
	inline void set_enemySight_4(DoneEnemySight_t1486315575 * value)
	{
		___enemySight_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemySight_4, value);
	}

	inline static int32_t get_offset_of_nav_5() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___nav_5)); }
	inline NavMeshAgent_t588466745 * get_nav_5() const { return ___nav_5; }
	inline NavMeshAgent_t588466745 ** get_address_of_nav_5() { return &___nav_5; }
	inline void set_nav_5(NavMeshAgent_t588466745 * value)
	{
		___nav_5 = value;
		Il2CppCodeGenWriteBarrier(&___nav_5, value);
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___anim_6)); }
	inline Animator_t2776330603 * get_anim_6() const { return ___anim_6; }
	inline Animator_t2776330603 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t2776330603 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier(&___anim_6, value);
	}

	inline static int32_t get_offset_of_hash_7() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___hash_7)); }
	inline DoneHashIDs_t3064044776 * get_hash_7() const { return ___hash_7; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_7() { return &___hash_7; }
	inline void set_hash_7(DoneHashIDs_t3064044776 * value)
	{
		___hash_7 = value;
		Il2CppCodeGenWriteBarrier(&___hash_7, value);
	}

	inline static int32_t get_offset_of_animSetup_8() { return static_cast<int32_t>(offsetof(DoneEnemyAnimation_t2365834526, ___animSetup_8)); }
	inline DoneAnimatorSetup_t3722864468 * get_animSetup_8() const { return ___animSetup_8; }
	inline DoneAnimatorSetup_t3722864468 ** get_address_of_animSetup_8() { return &___animSetup_8; }
	inline void set_animSetup_8(DoneAnimatorSetup_t3722864468 * value)
	{
		___animSetup_8 = value;
		Il2CppCodeGenWriteBarrier(&___animSetup_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
