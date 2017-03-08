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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneLiftDoorsTracking
struct  DoneLiftDoorsTracking_t1153674127  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneLiftDoorsTracking::doorSpeed
	float ___doorSpeed_2;
	// UnityEngine.Transform DoneLiftDoorsTracking::leftOuterDoor
	Transform_t1659122786 * ___leftOuterDoor_3;
	// UnityEngine.Transform DoneLiftDoorsTracking::rightOuterDoor
	Transform_t1659122786 * ___rightOuterDoor_4;
	// UnityEngine.Transform DoneLiftDoorsTracking::leftInnerDoor
	Transform_t1659122786 * ___leftInnerDoor_5;
	// UnityEngine.Transform DoneLiftDoorsTracking::rightInnerDoor
	Transform_t1659122786 * ___rightInnerDoor_6;
	// System.Single DoneLiftDoorsTracking::leftClosedPosX
	float ___leftClosedPosX_7;
	// System.Single DoneLiftDoorsTracking::rightClosedPosX
	float ___rightClosedPosX_8;

public:
	inline static int32_t get_offset_of_doorSpeed_2() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___doorSpeed_2)); }
	inline float get_doorSpeed_2() const { return ___doorSpeed_2; }
	inline float* get_address_of_doorSpeed_2() { return &___doorSpeed_2; }
	inline void set_doorSpeed_2(float value)
	{
		___doorSpeed_2 = value;
	}

	inline static int32_t get_offset_of_leftOuterDoor_3() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___leftOuterDoor_3)); }
	inline Transform_t1659122786 * get_leftOuterDoor_3() const { return ___leftOuterDoor_3; }
	inline Transform_t1659122786 ** get_address_of_leftOuterDoor_3() { return &___leftOuterDoor_3; }
	inline void set_leftOuterDoor_3(Transform_t1659122786 * value)
	{
		___leftOuterDoor_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftOuterDoor_3, value);
	}

	inline static int32_t get_offset_of_rightOuterDoor_4() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___rightOuterDoor_4)); }
	inline Transform_t1659122786 * get_rightOuterDoor_4() const { return ___rightOuterDoor_4; }
	inline Transform_t1659122786 ** get_address_of_rightOuterDoor_4() { return &___rightOuterDoor_4; }
	inline void set_rightOuterDoor_4(Transform_t1659122786 * value)
	{
		___rightOuterDoor_4 = value;
		Il2CppCodeGenWriteBarrier(&___rightOuterDoor_4, value);
	}

	inline static int32_t get_offset_of_leftInnerDoor_5() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___leftInnerDoor_5)); }
	inline Transform_t1659122786 * get_leftInnerDoor_5() const { return ___leftInnerDoor_5; }
	inline Transform_t1659122786 ** get_address_of_leftInnerDoor_5() { return &___leftInnerDoor_5; }
	inline void set_leftInnerDoor_5(Transform_t1659122786 * value)
	{
		___leftInnerDoor_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftInnerDoor_5, value);
	}

	inline static int32_t get_offset_of_rightInnerDoor_6() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___rightInnerDoor_6)); }
	inline Transform_t1659122786 * get_rightInnerDoor_6() const { return ___rightInnerDoor_6; }
	inline Transform_t1659122786 ** get_address_of_rightInnerDoor_6() { return &___rightInnerDoor_6; }
	inline void set_rightInnerDoor_6(Transform_t1659122786 * value)
	{
		___rightInnerDoor_6 = value;
		Il2CppCodeGenWriteBarrier(&___rightInnerDoor_6, value);
	}

	inline static int32_t get_offset_of_leftClosedPosX_7() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___leftClosedPosX_7)); }
	inline float get_leftClosedPosX_7() const { return ___leftClosedPosX_7; }
	inline float* get_address_of_leftClosedPosX_7() { return &___leftClosedPosX_7; }
	inline void set_leftClosedPosX_7(float value)
	{
		___leftClosedPosX_7 = value;
	}

	inline static int32_t get_offset_of_rightClosedPosX_8() { return static_cast<int32_t>(offsetof(DoneLiftDoorsTracking_t1153674127, ___rightClosedPosX_8)); }
	inline float get_rightClosedPosX_8() const { return ___rightClosedPosX_8; }
	inline float* get_address_of_rightClosedPosX_8() { return &___rightClosedPosX_8; }
	inline void set_rightClosedPosX_8(float value)
	{
		___rightClosedPosX_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
