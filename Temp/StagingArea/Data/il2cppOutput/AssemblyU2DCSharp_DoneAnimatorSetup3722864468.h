#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// DoneHashIDs
struct DoneHashIDs_t3064044776;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneAnimatorSetup
struct  DoneAnimatorSetup_t3722864468  : public Il2CppObject
{
public:
	// System.Single DoneAnimatorSetup::speedDampTime
	float ___speedDampTime_0;
	// System.Single DoneAnimatorSetup::angularSpeedDampTime
	float ___angularSpeedDampTime_1;
	// System.Single DoneAnimatorSetup::angleResponseTime
	float ___angleResponseTime_2;
	// UnityEngine.Animator DoneAnimatorSetup::anim
	Animator_t2776330603 * ___anim_3;
	// DoneHashIDs DoneAnimatorSetup::hash
	DoneHashIDs_t3064044776 * ___hash_4;

public:
	inline static int32_t get_offset_of_speedDampTime_0() { return static_cast<int32_t>(offsetof(DoneAnimatorSetup_t3722864468, ___speedDampTime_0)); }
	inline float get_speedDampTime_0() const { return ___speedDampTime_0; }
	inline float* get_address_of_speedDampTime_0() { return &___speedDampTime_0; }
	inline void set_speedDampTime_0(float value)
	{
		___speedDampTime_0 = value;
	}

	inline static int32_t get_offset_of_angularSpeedDampTime_1() { return static_cast<int32_t>(offsetof(DoneAnimatorSetup_t3722864468, ___angularSpeedDampTime_1)); }
	inline float get_angularSpeedDampTime_1() const { return ___angularSpeedDampTime_1; }
	inline float* get_address_of_angularSpeedDampTime_1() { return &___angularSpeedDampTime_1; }
	inline void set_angularSpeedDampTime_1(float value)
	{
		___angularSpeedDampTime_1 = value;
	}

	inline static int32_t get_offset_of_angleResponseTime_2() { return static_cast<int32_t>(offsetof(DoneAnimatorSetup_t3722864468, ___angleResponseTime_2)); }
	inline float get_angleResponseTime_2() const { return ___angleResponseTime_2; }
	inline float* get_address_of_angleResponseTime_2() { return &___angleResponseTime_2; }
	inline void set_angleResponseTime_2(float value)
	{
		___angleResponseTime_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(DoneAnimatorSetup_t3722864468, ___anim_3)); }
	inline Animator_t2776330603 * get_anim_3() const { return ___anim_3; }
	inline Animator_t2776330603 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t2776330603 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_hash_4() { return static_cast<int32_t>(offsetof(DoneAnimatorSetup_t3722864468, ___hash_4)); }
	inline DoneHashIDs_t3064044776 * get_hash_4() const { return ___hash_4; }
	inline DoneHashIDs_t3064044776 ** get_address_of_hash_4() { return &___hash_4; }
	inline void set_hash_4(DoneHashIDs_t3064044776 * value)
	{
		___hash_4 = value;
		Il2CppCodeGenWriteBarrier(&___hash_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
