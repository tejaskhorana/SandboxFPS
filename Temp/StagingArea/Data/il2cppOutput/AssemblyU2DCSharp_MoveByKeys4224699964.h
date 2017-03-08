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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveByKeys
struct  MoveByKeys_t4224699964  : public MonoBehaviour_t2824676508
{
public:
	// System.Single MoveByKeys::Speed
	float ___Speed_3;
	// System.Single MoveByKeys::JumpForce
	float ___JumpForce_4;
	// System.Single MoveByKeys::JumpTimeout
	float ___JumpTimeout_5;
	// System.Boolean MoveByKeys::isSprite
	bool ___isSprite_6;
	// System.Single MoveByKeys::jumpingTime
	float ___jumpingTime_7;
	// UnityEngine.Rigidbody MoveByKeys::body
	Rigidbody_t3346577219 * ___body_8;
	// UnityEngine.Rigidbody2D MoveByKeys::body2d
	Rigidbody2D_t1743771669 * ___body2d_9;

public:
	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}

	inline static int32_t get_offset_of_JumpForce_4() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___JumpForce_4)); }
	inline float get_JumpForce_4() const { return ___JumpForce_4; }
	inline float* get_address_of_JumpForce_4() { return &___JumpForce_4; }
	inline void set_JumpForce_4(float value)
	{
		___JumpForce_4 = value;
	}

	inline static int32_t get_offset_of_JumpTimeout_5() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___JumpTimeout_5)); }
	inline float get_JumpTimeout_5() const { return ___JumpTimeout_5; }
	inline float* get_address_of_JumpTimeout_5() { return &___JumpTimeout_5; }
	inline void set_JumpTimeout_5(float value)
	{
		___JumpTimeout_5 = value;
	}

	inline static int32_t get_offset_of_isSprite_6() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___isSprite_6)); }
	inline bool get_isSprite_6() const { return ___isSprite_6; }
	inline bool* get_address_of_isSprite_6() { return &___isSprite_6; }
	inline void set_isSprite_6(bool value)
	{
		___isSprite_6 = value;
	}

	inline static int32_t get_offset_of_jumpingTime_7() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___jumpingTime_7)); }
	inline float get_jumpingTime_7() const { return ___jumpingTime_7; }
	inline float* get_address_of_jumpingTime_7() { return &___jumpingTime_7; }
	inline void set_jumpingTime_7(float value)
	{
		___jumpingTime_7 = value;
	}

	inline static int32_t get_offset_of_body_8() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___body_8)); }
	inline Rigidbody_t3346577219 * get_body_8() const { return ___body_8; }
	inline Rigidbody_t3346577219 ** get_address_of_body_8() { return &___body_8; }
	inline void set_body_8(Rigidbody_t3346577219 * value)
	{
		___body_8 = value;
		Il2CppCodeGenWriteBarrier(&___body_8, value);
	}

	inline static int32_t get_offset_of_body2d_9() { return static_cast<int32_t>(offsetof(MoveByKeys_t4224699964, ___body2d_9)); }
	inline Rigidbody2D_t1743771669 * get_body2d_9() const { return ___body2d_9; }
	inline Rigidbody2D_t1743771669 ** get_address_of_body2d_9() { return &___body2d_9; }
	inline void set_body2d_9(Rigidbody2D_t1743771669 * value)
	{
		___body2d_9 = value;
		Il2CppCodeGenWriteBarrier(&___body2d_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
