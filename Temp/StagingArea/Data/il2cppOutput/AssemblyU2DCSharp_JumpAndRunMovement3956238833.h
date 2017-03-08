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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// PhotonView
struct PhotonView_t1498838369;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JumpAndRunMovement
struct  JumpAndRunMovement_t3956238833  : public MonoBehaviour_t667441552
{
public:
	// System.Single JumpAndRunMovement::Speed
	float ___Speed_2;
	// System.Single JumpAndRunMovement::JumpForce
	float ___JumpForce_3;
	// UnityEngine.Animator JumpAndRunMovement::m_Animator
	Animator_t2776330603 * ___m_Animator_4;
	// UnityEngine.Rigidbody2D JumpAndRunMovement::m_Body
	Rigidbody2D_t1743771669 * ___m_Body_5;
	// PhotonView JumpAndRunMovement::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_6;
	// System.Boolean JumpAndRunMovement::m_IsGrounded
	bool ___m_IsGrounded_7;

public:
	inline static int32_t get_offset_of_Speed_2() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___Speed_2)); }
	inline float get_Speed_2() const { return ___Speed_2; }
	inline float* get_address_of_Speed_2() { return &___Speed_2; }
	inline void set_Speed_2(float value)
	{
		___Speed_2 = value;
	}

	inline static int32_t get_offset_of_JumpForce_3() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___JumpForce_3)); }
	inline float get_JumpForce_3() const { return ___JumpForce_3; }
	inline float* get_address_of_JumpForce_3() { return &___JumpForce_3; }
	inline void set_JumpForce_3(float value)
	{
		___JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_Animator_4() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_Animator_4)); }
	inline Animator_t2776330603 * get_m_Animator_4() const { return ___m_Animator_4; }
	inline Animator_t2776330603 ** get_address_of_m_Animator_4() { return &___m_Animator_4; }
	inline void set_m_Animator_4(Animator_t2776330603 * value)
	{
		___m_Animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_4, value);
	}

	inline static int32_t get_offset_of_m_Body_5() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_Body_5)); }
	inline Rigidbody2D_t1743771669 * get_m_Body_5() const { return ___m_Body_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_m_Body_5() { return &___m_Body_5; }
	inline void set_m_Body_5(Rigidbody2D_t1743771669 * value)
	{
		___m_Body_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Body_5, value);
	}

	inline static int32_t get_offset_of_m_PhotonView_6() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_PhotonView_6)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_6() const { return ___m_PhotonView_6; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_6() { return &___m_PhotonView_6; }
	inline void set_m_PhotonView_6(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_6, value);
	}

	inline static int32_t get_offset_of_m_IsGrounded_7() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_IsGrounded_7)); }
	inline bool get_m_IsGrounded_7() const { return ___m_IsGrounded_7; }
	inline bool* get_address_of_m_IsGrounded_7() { return &___m_IsGrounded_7; }
	inline void set_m_IsGrounded_7(bool value)
	{
		___m_IsGrounded_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
