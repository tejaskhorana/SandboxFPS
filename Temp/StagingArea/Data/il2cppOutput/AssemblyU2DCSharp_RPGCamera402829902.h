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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RPGCamera
struct  RPGCamera_t402829902  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform RPGCamera::Target
	Transform_t1659122786 * ___Target_2;
	// System.Single RPGCamera::MaximumDistance
	float ___MaximumDistance_3;
	// System.Single RPGCamera::MinimumDistance
	float ___MinimumDistance_4;
	// System.Single RPGCamera::ScrollModifier
	float ___ScrollModifier_5;
	// System.Single RPGCamera::TurnModifier
	float ___TurnModifier_6;
	// UnityEngine.Transform RPGCamera::m_CameraTransform
	Transform_t1659122786 * ___m_CameraTransform_7;
	// UnityEngine.Vector3 RPGCamera::m_LookAtPoint
	Vector3_t4282066566  ___m_LookAtPoint_8;
	// UnityEngine.Vector3 RPGCamera::m_LocalForwardVector
	Vector3_t4282066566  ___m_LocalForwardVector_9;
	// System.Single RPGCamera::m_Distance
	float ___m_Distance_10;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___Target_2)); }
	inline Transform_t1659122786 * get_Target_2() const { return ___Target_2; }
	inline Transform_t1659122786 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(Transform_t1659122786 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_MaximumDistance_3() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___MaximumDistance_3)); }
	inline float get_MaximumDistance_3() const { return ___MaximumDistance_3; }
	inline float* get_address_of_MaximumDistance_3() { return &___MaximumDistance_3; }
	inline void set_MaximumDistance_3(float value)
	{
		___MaximumDistance_3 = value;
	}

	inline static int32_t get_offset_of_MinimumDistance_4() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___MinimumDistance_4)); }
	inline float get_MinimumDistance_4() const { return ___MinimumDistance_4; }
	inline float* get_address_of_MinimumDistance_4() { return &___MinimumDistance_4; }
	inline void set_MinimumDistance_4(float value)
	{
		___MinimumDistance_4 = value;
	}

	inline static int32_t get_offset_of_ScrollModifier_5() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___ScrollModifier_5)); }
	inline float get_ScrollModifier_5() const { return ___ScrollModifier_5; }
	inline float* get_address_of_ScrollModifier_5() { return &___ScrollModifier_5; }
	inline void set_ScrollModifier_5(float value)
	{
		___ScrollModifier_5 = value;
	}

	inline static int32_t get_offset_of_TurnModifier_6() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___TurnModifier_6)); }
	inline float get_TurnModifier_6() const { return ___TurnModifier_6; }
	inline float* get_address_of_TurnModifier_6() { return &___TurnModifier_6; }
	inline void set_TurnModifier_6(float value)
	{
		___TurnModifier_6 = value;
	}

	inline static int32_t get_offset_of_m_CameraTransform_7() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___m_CameraTransform_7)); }
	inline Transform_t1659122786 * get_m_CameraTransform_7() const { return ___m_CameraTransform_7; }
	inline Transform_t1659122786 ** get_address_of_m_CameraTransform_7() { return &___m_CameraTransform_7; }
	inline void set_m_CameraTransform_7(Transform_t1659122786 * value)
	{
		___m_CameraTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraTransform_7, value);
	}

	inline static int32_t get_offset_of_m_LookAtPoint_8() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___m_LookAtPoint_8)); }
	inline Vector3_t4282066566  get_m_LookAtPoint_8() const { return ___m_LookAtPoint_8; }
	inline Vector3_t4282066566 * get_address_of_m_LookAtPoint_8() { return &___m_LookAtPoint_8; }
	inline void set_m_LookAtPoint_8(Vector3_t4282066566  value)
	{
		___m_LookAtPoint_8 = value;
	}

	inline static int32_t get_offset_of_m_LocalForwardVector_9() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___m_LocalForwardVector_9)); }
	inline Vector3_t4282066566  get_m_LocalForwardVector_9() const { return ___m_LocalForwardVector_9; }
	inline Vector3_t4282066566 * get_address_of_m_LocalForwardVector_9() { return &___m_LocalForwardVector_9; }
	inline void set_m_LocalForwardVector_9(Vector3_t4282066566  value)
	{
		___m_LocalForwardVector_9 = value;
	}

	inline static int32_t get_offset_of_m_Distance_10() { return static_cast<int32_t>(offsetof(RPGCamera_t402829902, ___m_Distance_10)); }
	inline float get_m_Distance_10() const { return ___m_Distance_10; }
	inline float* get_address_of_m_Distance_10() { return &___m_Distance_10; }
	inline void set_m_Distance_10(float value)
	{
		___m_Distance_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
