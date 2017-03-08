#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// DoneEnemySight
struct DoneEnemySight_t1486315575;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// UnityEngine.Transform
struct Transform_t1659122786;
// DonePlayerHealth
struct DonePlayerHealth_t4009928031;
// DoneLastPlayerSighting
struct DoneLastPlayerSighting_t3519912606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneEnemyAI
struct  DoneEnemyAI_t760978350  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneEnemyAI::patrolSpeed
	float ___patrolSpeed_2;
	// System.Single DoneEnemyAI::chaseSpeed
	float ___chaseSpeed_3;
	// System.Single DoneEnemyAI::chaseWaitTime
	float ___chaseWaitTime_4;
	// System.Single DoneEnemyAI::patrolWaitTime
	float ___patrolWaitTime_5;
	// UnityEngine.Transform[] DoneEnemyAI::patrolWayPoints
	TransformU5BU5D_t3792884695* ___patrolWayPoints_6;
	// DoneEnemySight DoneEnemyAI::enemySight
	DoneEnemySight_t1486315575 * ___enemySight_7;
	// UnityEngine.NavMeshAgent DoneEnemyAI::nav
	NavMeshAgent_t588466745 * ___nav_8;
	// UnityEngine.Transform DoneEnemyAI::player
	Transform_t1659122786 * ___player_9;
	// DonePlayerHealth DoneEnemyAI::playerHealth
	DonePlayerHealth_t4009928031 * ___playerHealth_10;
	// DoneLastPlayerSighting DoneEnemyAI::lastPlayerSighting
	DoneLastPlayerSighting_t3519912606 * ___lastPlayerSighting_11;
	// System.Single DoneEnemyAI::chaseTimer
	float ___chaseTimer_12;
	// System.Single DoneEnemyAI::patrolTimer
	float ___patrolTimer_13;
	// System.Int32 DoneEnemyAI::wayPointIndex
	int32_t ___wayPointIndex_14;

public:
	inline static int32_t get_offset_of_patrolSpeed_2() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___patrolSpeed_2)); }
	inline float get_patrolSpeed_2() const { return ___patrolSpeed_2; }
	inline float* get_address_of_patrolSpeed_2() { return &___patrolSpeed_2; }
	inline void set_patrolSpeed_2(float value)
	{
		___patrolSpeed_2 = value;
	}

	inline static int32_t get_offset_of_chaseSpeed_3() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___chaseSpeed_3)); }
	inline float get_chaseSpeed_3() const { return ___chaseSpeed_3; }
	inline float* get_address_of_chaseSpeed_3() { return &___chaseSpeed_3; }
	inline void set_chaseSpeed_3(float value)
	{
		___chaseSpeed_3 = value;
	}

	inline static int32_t get_offset_of_chaseWaitTime_4() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___chaseWaitTime_4)); }
	inline float get_chaseWaitTime_4() const { return ___chaseWaitTime_4; }
	inline float* get_address_of_chaseWaitTime_4() { return &___chaseWaitTime_4; }
	inline void set_chaseWaitTime_4(float value)
	{
		___chaseWaitTime_4 = value;
	}

	inline static int32_t get_offset_of_patrolWaitTime_5() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___patrolWaitTime_5)); }
	inline float get_patrolWaitTime_5() const { return ___patrolWaitTime_5; }
	inline float* get_address_of_patrolWaitTime_5() { return &___patrolWaitTime_5; }
	inline void set_patrolWaitTime_5(float value)
	{
		___patrolWaitTime_5 = value;
	}

	inline static int32_t get_offset_of_patrolWayPoints_6() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___patrolWayPoints_6)); }
	inline TransformU5BU5D_t3792884695* get_patrolWayPoints_6() const { return ___patrolWayPoints_6; }
	inline TransformU5BU5D_t3792884695** get_address_of_patrolWayPoints_6() { return &___patrolWayPoints_6; }
	inline void set_patrolWayPoints_6(TransformU5BU5D_t3792884695* value)
	{
		___patrolWayPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___patrolWayPoints_6, value);
	}

	inline static int32_t get_offset_of_enemySight_7() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___enemySight_7)); }
	inline DoneEnemySight_t1486315575 * get_enemySight_7() const { return ___enemySight_7; }
	inline DoneEnemySight_t1486315575 ** get_address_of_enemySight_7() { return &___enemySight_7; }
	inline void set_enemySight_7(DoneEnemySight_t1486315575 * value)
	{
		___enemySight_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemySight_7, value);
	}

	inline static int32_t get_offset_of_nav_8() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___nav_8)); }
	inline NavMeshAgent_t588466745 * get_nav_8() const { return ___nav_8; }
	inline NavMeshAgent_t588466745 ** get_address_of_nav_8() { return &___nav_8; }
	inline void set_nav_8(NavMeshAgent_t588466745 * value)
	{
		___nav_8 = value;
		Il2CppCodeGenWriteBarrier(&___nav_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___player_9)); }
	inline Transform_t1659122786 * get_player_9() const { return ___player_9; }
	inline Transform_t1659122786 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(Transform_t1659122786 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_playerHealth_10() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___playerHealth_10)); }
	inline DonePlayerHealth_t4009928031 * get_playerHealth_10() const { return ___playerHealth_10; }
	inline DonePlayerHealth_t4009928031 ** get_address_of_playerHealth_10() { return &___playerHealth_10; }
	inline void set_playerHealth_10(DonePlayerHealth_t4009928031 * value)
	{
		___playerHealth_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_10, value);
	}

	inline static int32_t get_offset_of_lastPlayerSighting_11() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___lastPlayerSighting_11)); }
	inline DoneLastPlayerSighting_t3519912606 * get_lastPlayerSighting_11() const { return ___lastPlayerSighting_11; }
	inline DoneLastPlayerSighting_t3519912606 ** get_address_of_lastPlayerSighting_11() { return &___lastPlayerSighting_11; }
	inline void set_lastPlayerSighting_11(DoneLastPlayerSighting_t3519912606 * value)
	{
		___lastPlayerSighting_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayerSighting_11, value);
	}

	inline static int32_t get_offset_of_chaseTimer_12() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___chaseTimer_12)); }
	inline float get_chaseTimer_12() const { return ___chaseTimer_12; }
	inline float* get_address_of_chaseTimer_12() { return &___chaseTimer_12; }
	inline void set_chaseTimer_12(float value)
	{
		___chaseTimer_12 = value;
	}

	inline static int32_t get_offset_of_patrolTimer_13() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___patrolTimer_13)); }
	inline float get_patrolTimer_13() const { return ___patrolTimer_13; }
	inline float* get_address_of_patrolTimer_13() { return &___patrolTimer_13; }
	inline void set_patrolTimer_13(float value)
	{
		___patrolTimer_13 = value;
	}

	inline static int32_t get_offset_of_wayPointIndex_14() { return static_cast<int32_t>(offsetof(DoneEnemyAI_t760978350, ___wayPointIndex_14)); }
	inline int32_t get_wayPointIndex_14() const { return ___wayPointIndex_14; }
	inline int32_t* get_address_of_wayPointIndex_14() { return &___wayPointIndex_14; }
	inline void set_wayPointIndex_14(int32_t value)
	{
		___wayPointIndex_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
