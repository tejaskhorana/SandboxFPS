#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretController
struct  TurretController_t4257777868  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody TurretController::rocket
	Rigidbody_t3346577219 * ___rocket_2;
	// UnityEngine.Transform[] TurretController::rocketSpawn
	TransformU5BU5D_t3792884695* ___rocketSpawn_3;
	// System.Single TurretController::rocketSpeed
	float ___rocketSpeed_4;
	// System.Single TurretController::delay
	float ___delay_5;
	// System.Single TurretController::nextFire
	float ___nextFire_6;
	// System.Int32 TurretController::rocketIndex
	int32_t ___rocketIndex_7;

public:
	inline static int32_t get_offset_of_rocket_2() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___rocket_2)); }
	inline Rigidbody_t3346577219 * get_rocket_2() const { return ___rocket_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rocket_2() { return &___rocket_2; }
	inline void set_rocket_2(Rigidbody_t3346577219 * value)
	{
		___rocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___rocket_2, value);
	}

	inline static int32_t get_offset_of_rocketSpawn_3() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___rocketSpawn_3)); }
	inline TransformU5BU5D_t3792884695* get_rocketSpawn_3() const { return ___rocketSpawn_3; }
	inline TransformU5BU5D_t3792884695** get_address_of_rocketSpawn_3() { return &___rocketSpawn_3; }
	inline void set_rocketSpawn_3(TransformU5BU5D_t3792884695* value)
	{
		___rocketSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___rocketSpawn_3, value);
	}

	inline static int32_t get_offset_of_rocketSpeed_4() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___rocketSpeed_4)); }
	inline float get_rocketSpeed_4() const { return ___rocketSpeed_4; }
	inline float* get_address_of_rocketSpeed_4() { return &___rocketSpeed_4; }
	inline void set_rocketSpeed_4(float value)
	{
		___rocketSpeed_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_nextFire_6() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___nextFire_6)); }
	inline float get_nextFire_6() const { return ___nextFire_6; }
	inline float* get_address_of_nextFire_6() { return &___nextFire_6; }
	inline void set_nextFire_6(float value)
	{
		___nextFire_6 = value;
	}

	inline static int32_t get_offset_of_rocketIndex_7() { return static_cast<int32_t>(offsetof(TurretController_t4257777868, ___rocketIndex_7)); }
	inline int32_t get_rocketIndex_7() const { return ___rocketIndex_7; }
	inline int32_t* get_address_of_rocketIndex_7() { return &___rocketIndex_7; }
	inline void set_rocketIndex_7(int32_t value)
	{
		___rocketIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
