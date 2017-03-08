#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// UnityEngine.SphereCollider
struct SphereCollider_t111527973;
// UnityEngine.Animator
struct Animator_t2776330603;
// DoneLastPlayerSighting
struct DoneLastPlayerSighting_t3519912606;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DonePlayerHealth
struct DonePlayerHealth_t4009928031;
// DoneHashIDs
struct DoneHashIDs_t3064044776;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneEnemySight
struct  DoneEnemySight_t1486315575  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneEnemySight::fieldOfViewAngle
	float ___fieldOfViewAngle_2;
	// System.Boolean DoneEnemySight::playerInSight
	bool ___playerInSight_3;
	// UnityEngine.Vector3 DoneEnemySight::personalLastSighting
	Vector3_t4282066566  ___personalLastSighting_4;
	// UnityEngine.NavMeshAgent DoneEnemySight::nav
	NavMeshAgent_t588466745 * ___nav_5;
	// UnityEngine.SphereCollider DoneEnemySight::col
	SphereCollider_t111527973 * ___col_6;
	// UnityEngine.Animator DoneEnemySight::anim
	Animator_t2776330603 * ___anim_7;
	// DoneLastPlayerSighting DoneEnemySight::lastPlayerSighting
	DoneLastPlayerSighting_t3519912606 * ___lastPlayerSighting_8;
	// UnityEngine.GameObject DoneEnemySight::player
	GameObject_t3674682005 * ___player_9;
	// UnityEngine.Animator DoneEnemySight::playerAnim
	Animator_t2776330603 * ___playerAnim_10;
	// DonePlayerHealth DoneEnemySight::playerHealth
	DonePlayerHealth_t4009928031 * ___playerHealth_11;
	// DoneHashIDs DoneEnemySight::hash
	DoneHashIDs_t3064044776 * ___hash_12;
	// UnityEngine.Vector3 DoneEnemySight::previousSighting
	Vector3_t4282066566  ___previousSighting_13;

public:
	inline static int32_t get_offset_of_fieldOfViewAngle_2() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___fieldOfViewAngle_2)); }
	inline float get_fieldOfViewAngle_2() const { return ___fieldOfViewAngle_2; }
	inline float* get_address_of_fieldOfViewAngle_2() { return &___fieldOfViewAngle_2; }
	inline void set_fieldOfViewAngle_2(float value)
	{
		___fieldOfViewAngle_2 = value;
	}

	inline static int32_t get_offset_of_playerInSight_3() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___playerInSight_3)); }
	inline bool get_playerInSight_3() const { return ___playerInSight_3; }
	inline bool* get_address_of_playerInSight_3() { return &___playerInSight_3; }
	inline void set_playerInSight_3(bool value)
	{
		___playerInSight_3 = value;
	}

	inline static int32_t get_offset_of_personalLastSighting_4() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___personalLastSighting_4)); }
	inline Vector3_t4282066566  get_personalLastSighting_4() const { return ___personalLastSighting_4; }
	inline Vector3_t4282066566 * get_address_of_personalLastSighting_4() { return &___personalLastSighting_4; }
	inline void set_personalLastSighting_4(Vector3_t4282066566  value)
	{
		___personalLastSighting_4 = value;
	}

	inline static int32_t get_offset_of_nav_5() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___nav_5)); }
	inline NavMeshAgent_t588466745 * get_nav_5() const { return ___nav_5; }
	inline NavMeshAgent_t588466745 ** get_address_of_nav_5() { return &___nav_5; }
	inline void set_nav_5(NavMeshAgent_t588466745 * value)
	{
		___nav_5 = value;
		Il2CppCodeGenWriteBarrier(&___nav_5, value);
	}

	inline static int32_t get_offset_of_col_6() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___col_6)); }
	inline SphereCollider_t111527973 * get_col_6() const { return ___col_6; }
	inline SphereCollider_t111527973 ** get_address_of_col_6() { return &___col_6; }
	inline void set_col_6(SphereCollider_t111527973 * value)
	{
		___col_6 = value;
		Il2CppCodeGenWriteBarrier(&___col_6, value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___anim_7)); }
	inline Animator_t2776330603 * get_anim_7() const { return ___anim_7; }
	inline Animator_t2776330603 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t2776330603 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_lastPlayerSighting_8() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___lastPlayerSighting_8)); }
	inline DoneLastPlayerSighting_t3519912606 * get_lastPlayerSighting_8() const { return ___lastPlayerSighting_8; }
	inline DoneLastPlayerSighting_t3519912606 ** get_address_of_lastPlayerSighting_8() { return &___lastPlayerSighting_8; }
	inline void set_lastPlayerSighting_8(DoneLastPlayerSighting_t3519912606 * value)
	{
		___lastPlayerSighting_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayerSighting_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___player_9)); }
	inline GameObject_t3674682005 * get_player_9() const { return ___player_9; }
	inline GameObject_t3674682005 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t3674682005 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_playerAnim_10() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___playerAnim_10)); }
	inline Animator_t2776330603 * get_playerAnim_10() const { return ___playerAnim_10; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_10() { return &___playerAnim_10; }
	inline void set_playerAnim_10(Animator_t2776330603 * value)
	{
		___playerAnim_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_10, value);
	}

	inline static int32_t get_offset_of_playerHealth_11() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___playerHealth_11)); }
	inline DonePlayerHealth_t4009928031 * get_playerHealth_11() const { return ___playerHealth_11; }
	inline DonePlayerHealth_t4009928031 ** get_address_of_playerHealth_11() { return &___playerHealth_11; }
	inline void set_playerHealth_11(DonePlayerHealth_t4009928031 * value)
	{
		___playerHealth_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_11, value);
	}

	inline static int32_t get_offset_of_hash_12() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___hash_12)); }
	inline DoneHashIDs_t3064044776 * get_hash_12() const { return ___hash_12; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_12() { return &___hash_12; }
	inline void set_hash_12(DoneHashIDs_t3064044776 * value)
	{
		___hash_12 = value;
		Il2CppCodeGenWriteBarrier(&___hash_12, value);
	}

	inline static int32_t get_offset_of_previousSighting_13() { return static_cast<int32_t>(offsetof(DoneEnemySight_t1486315575, ___previousSighting_13)); }
	inline Vector3_t4282066566  get_previousSighting_13() const { return ___previousSighting_13; }
	inline Vector3_t4282066566 * get_address_of_previousSighting_13() { return &___previousSighting_13; }
	inline void set_previousSighting_13(Vector3_t4282066566  value)
	{
		___previousSighting_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
