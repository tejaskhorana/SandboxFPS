#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;
// DoneHashIDs
struct DoneHashIDs_t3064044776;
// DoneCameraMovement
struct DoneCameraMovement_t109286198;
// DoneSceneFadeInOut
struct DoneSceneFadeInOut_t2920744931;
// DoneLiftDoorsTracking
struct DoneLiftDoorsTracking_t1153674127;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneLiftTrigger
struct  DoneLiftTrigger_t36873003  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneLiftTrigger::timeToDoorsClose
	float ___timeToDoorsClose_2;
	// System.Single DoneLiftTrigger::timeToLiftStart
	float ___timeToLiftStart_3;
	// System.Single DoneLiftTrigger::timeToEndLevel
	float ___timeToEndLevel_4;
	// System.Single DoneLiftTrigger::liftSpeed
	float ___liftSpeed_5;
	// UnityEngine.GameObject DoneLiftTrigger::player
	GameObject_t3674682005 * ___player_6;
	// UnityEngine.Animator DoneLiftTrigger::playerAnim
	Animator_t2776330603 * ___playerAnim_7;
	// DoneHashIDs DoneLiftTrigger::hash
	DoneHashIDs_t3064044776 * ___hash_8;
	// DoneCameraMovement DoneLiftTrigger::camMovement
	DoneCameraMovement_t109286198 * ___camMovement_9;
	// DoneSceneFadeInOut DoneLiftTrigger::sceneFadeInOut
	DoneSceneFadeInOut_t2920744931 * ___sceneFadeInOut_10;
	// DoneLiftDoorsTracking DoneLiftTrigger::liftDoorsTracking
	DoneLiftDoorsTracking_t1153674127 * ___liftDoorsTracking_11;
	// System.Boolean DoneLiftTrigger::playerInLift
	bool ___playerInLift_12;
	// System.Single DoneLiftTrigger::timer
	float ___timer_13;

public:
	inline static int32_t get_offset_of_timeToDoorsClose_2() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___timeToDoorsClose_2)); }
	inline float get_timeToDoorsClose_2() const { return ___timeToDoorsClose_2; }
	inline float* get_address_of_timeToDoorsClose_2() { return &___timeToDoorsClose_2; }
	inline void set_timeToDoorsClose_2(float value)
	{
		___timeToDoorsClose_2 = value;
	}

	inline static int32_t get_offset_of_timeToLiftStart_3() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___timeToLiftStart_3)); }
	inline float get_timeToLiftStart_3() const { return ___timeToLiftStart_3; }
	inline float* get_address_of_timeToLiftStart_3() { return &___timeToLiftStart_3; }
	inline void set_timeToLiftStart_3(float value)
	{
		___timeToLiftStart_3 = value;
	}

	inline static int32_t get_offset_of_timeToEndLevel_4() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___timeToEndLevel_4)); }
	inline float get_timeToEndLevel_4() const { return ___timeToEndLevel_4; }
	inline float* get_address_of_timeToEndLevel_4() { return &___timeToEndLevel_4; }
	inline void set_timeToEndLevel_4(float value)
	{
		___timeToEndLevel_4 = value;
	}

	inline static int32_t get_offset_of_liftSpeed_5() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___liftSpeed_5)); }
	inline float get_liftSpeed_5() const { return ___liftSpeed_5; }
	inline float* get_address_of_liftSpeed_5() { return &___liftSpeed_5; }
	inline void set_liftSpeed_5(float value)
	{
		___liftSpeed_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___player_6)); }
	inline GameObject_t3674682005 * get_player_6() const { return ___player_6; }
	inline GameObject_t3674682005 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t3674682005 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_playerAnim_7() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___playerAnim_7)); }
	inline Animator_t2776330603 * get_playerAnim_7() const { return ___playerAnim_7; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_7() { return &___playerAnim_7; }
	inline void set_playerAnim_7(Animator_t2776330603 * value)
	{
		___playerAnim_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_7, value);
	}

	inline static int32_t get_offset_of_hash_8() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___hash_8)); }
	inline DoneHashIDs_t3064044776 * get_hash_8() const { return ___hash_8; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_8() { return &___hash_8; }
	inline void set_hash_8(DoneHashIDs_t3064044776 * value)
	{
		___hash_8 = value;
		Il2CppCodeGenWriteBarrier(&___hash_8, value);
	}

	inline static int32_t get_offset_of_camMovement_9() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___camMovement_9)); }
	inline DoneCameraMovement_t109286198 * get_camMovement_9() const { return ___camMovement_9; }
	inline DoneCameraMovement_t109286198 ** get_address_of_camMovement_9() { return &___camMovement_9; }
	inline void set_camMovement_9(DoneCameraMovement_t109286198 * value)
	{
		___camMovement_9 = value;
		Il2CppCodeGenWriteBarrier(&___camMovement_9, value);
	}

	inline static int32_t get_offset_of_sceneFadeInOut_10() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___sceneFadeInOut_10)); }
	inline DoneSceneFadeInOut_t2920744931 * get_sceneFadeInOut_10() const { return ___sceneFadeInOut_10; }
	inline DoneSceneFadeInOut_t2920744931 ** get_address_of_sceneFadeInOut_10() { return &___sceneFadeInOut_10; }
	inline void set_sceneFadeInOut_10(DoneSceneFadeInOut_t2920744931 * value)
	{
		___sceneFadeInOut_10 = value;
		Il2CppCodeGenWriteBarrier(&___sceneFadeInOut_10, value);
	}

	inline static int32_t get_offset_of_liftDoorsTracking_11() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___liftDoorsTracking_11)); }
	inline DoneLiftDoorsTracking_t1153674127 * get_liftDoorsTracking_11() const { return ___liftDoorsTracking_11; }
	inline DoneLiftDoorsTracking_t1153674127 ** get_address_of_liftDoorsTracking_11() { return &___liftDoorsTracking_11; }
	inline void set_liftDoorsTracking_11(DoneLiftDoorsTracking_t1153674127 * value)
	{
		___liftDoorsTracking_11 = value;
		Il2CppCodeGenWriteBarrier(&___liftDoorsTracking_11, value);
	}

	inline static int32_t get_offset_of_playerInLift_12() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___playerInLift_12)); }
	inline bool get_playerInLift_12() const { return ___playerInLift_12; }
	inline bool* get_address_of_playerInLift_12() { return &___playerInLift_12; }
	inline void set_playerInLift_12(bool value)
	{
		___playerInLift_12 = value;
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(DoneLiftTrigger_t36873003, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
