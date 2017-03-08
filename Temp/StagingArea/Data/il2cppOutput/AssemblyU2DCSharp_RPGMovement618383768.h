#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t1618060635;
// UnityEngine.Animator
struct Animator_t2776330603;
// PhotonView
struct PhotonView_t1498838369;
// PhotonTransformView
struct PhotonTransformView_t486317301;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RPGMovement
struct  RPGMovement_t618383768  : public MonoBehaviour_t667441552
{
public:
	// System.Single RPGMovement::ForwardSpeed
	float ___ForwardSpeed_2;
	// System.Single RPGMovement::BackwardSpeed
	float ___BackwardSpeed_3;
	// System.Single RPGMovement::StrafeSpeed
	float ___StrafeSpeed_4;
	// System.Single RPGMovement::RotateSpeed
	float ___RotateSpeed_5;
	// UnityEngine.CharacterController RPGMovement::m_CharacterController
	CharacterController_t1618060635 * ___m_CharacterController_6;
	// UnityEngine.Vector3 RPGMovement::m_LastPosition
	Vector3_t4282066566  ___m_LastPosition_7;
	// UnityEngine.Animator RPGMovement::m_Animator
	Animator_t2776330603 * ___m_Animator_8;
	// PhotonView RPGMovement::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_9;
	// PhotonTransformView RPGMovement::m_TransformView
	PhotonTransformView_t486317301 * ___m_TransformView_10;
	// System.Single RPGMovement::m_AnimatorSpeed
	float ___m_AnimatorSpeed_11;
	// UnityEngine.Vector3 RPGMovement::m_CurrentMovement
	Vector3_t4282066566  ___m_CurrentMovement_12;
	// System.Single RPGMovement::m_CurrentTurnSpeed
	float ___m_CurrentTurnSpeed_13;

public:
	inline static int32_t get_offset_of_ForwardSpeed_2() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___ForwardSpeed_2)); }
	inline float get_ForwardSpeed_2() const { return ___ForwardSpeed_2; }
	inline float* get_address_of_ForwardSpeed_2() { return &___ForwardSpeed_2; }
	inline void set_ForwardSpeed_2(float value)
	{
		___ForwardSpeed_2 = value;
	}

	inline static int32_t get_offset_of_BackwardSpeed_3() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___BackwardSpeed_3)); }
	inline float get_BackwardSpeed_3() const { return ___BackwardSpeed_3; }
	inline float* get_address_of_BackwardSpeed_3() { return &___BackwardSpeed_3; }
	inline void set_BackwardSpeed_3(float value)
	{
		___BackwardSpeed_3 = value;
	}

	inline static int32_t get_offset_of_StrafeSpeed_4() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___StrafeSpeed_4)); }
	inline float get_StrafeSpeed_4() const { return ___StrafeSpeed_4; }
	inline float* get_address_of_StrafeSpeed_4() { return &___StrafeSpeed_4; }
	inline void set_StrafeSpeed_4(float value)
	{
		___StrafeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_RotateSpeed_5() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___RotateSpeed_5)); }
	inline float get_RotateSpeed_5() const { return ___RotateSpeed_5; }
	inline float* get_address_of_RotateSpeed_5() { return &___RotateSpeed_5; }
	inline void set_RotateSpeed_5(float value)
	{
		___RotateSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_CharacterController_6() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CharacterController_6)); }
	inline CharacterController_t1618060635 * get_m_CharacterController_6() const { return ___m_CharacterController_6; }
	inline CharacterController_t1618060635 ** get_address_of_m_CharacterController_6() { return &___m_CharacterController_6; }
	inline void set_m_CharacterController_6(CharacterController_t1618060635 * value)
	{
		___m_CharacterController_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_CharacterController_6, value);
	}

	inline static int32_t get_offset_of_m_LastPosition_7() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_LastPosition_7)); }
	inline Vector3_t4282066566  get_m_LastPosition_7() const { return ___m_LastPosition_7; }
	inline Vector3_t4282066566 * get_address_of_m_LastPosition_7() { return &___m_LastPosition_7; }
	inline void set_m_LastPosition_7(Vector3_t4282066566  value)
	{
		___m_LastPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_Animator_8() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_Animator_8)); }
	inline Animator_t2776330603 * get_m_Animator_8() const { return ___m_Animator_8; }
	inline Animator_t2776330603 ** get_address_of_m_Animator_8() { return &___m_Animator_8; }
	inline void set_m_Animator_8(Animator_t2776330603 * value)
	{
		___m_Animator_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_8, value);
	}

	inline static int32_t get_offset_of_m_PhotonView_9() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_PhotonView_9)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_9() const { return ___m_PhotonView_9; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_9() { return &___m_PhotonView_9; }
	inline void set_m_PhotonView_9(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_9, value);
	}

	inline static int32_t get_offset_of_m_TransformView_10() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_TransformView_10)); }
	inline PhotonTransformView_t486317301 * get_m_TransformView_10() const { return ___m_TransformView_10; }
	inline PhotonTransformView_t486317301 ** get_address_of_m_TransformView_10() { return &___m_TransformView_10; }
	inline void set_m_TransformView_10(PhotonTransformView_t486317301 * value)
	{
		___m_TransformView_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransformView_10, value);
	}

	inline static int32_t get_offset_of_m_AnimatorSpeed_11() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_AnimatorSpeed_11)); }
	inline float get_m_AnimatorSpeed_11() const { return ___m_AnimatorSpeed_11; }
	inline float* get_address_of_m_AnimatorSpeed_11() { return &___m_AnimatorSpeed_11; }
	inline void set_m_AnimatorSpeed_11(float value)
	{
		___m_AnimatorSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentMovement_12() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CurrentMovement_12)); }
	inline Vector3_t4282066566  get_m_CurrentMovement_12() const { return ___m_CurrentMovement_12; }
	inline Vector3_t4282066566 * get_address_of_m_CurrentMovement_12() { return &___m_CurrentMovement_12; }
	inline void set_m_CurrentMovement_12(Vector3_t4282066566  value)
	{
		___m_CurrentMovement_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTurnSpeed_13() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CurrentTurnSpeed_13)); }
	inline float get_m_CurrentTurnSpeed_13() const { return ___m_CurrentTurnSpeed_13; }
	inline float* get_address_of_m_CurrentTurnSpeed_13() { return &___m_CurrentTurnSpeed_13; }
	inline void set_m_CurrentTurnSpeed_13(float value)
	{
		___m_CurrentTurnSpeed_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
