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
// PickupController
struct PickupController_t2804654936;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupCamera
struct  PickupCamera_t13910241  : public MonoBehaviour_t2824676508
{
public:
	// UnityEngine.Transform PickupCamera::cameraTransform
	Transform_t1659122786 * ___cameraTransform_3;
	// UnityEngine.Transform PickupCamera::_target
	Transform_t1659122786 * ____target_4;
	// System.Single PickupCamera::distance
	float ___distance_5;
	// System.Single PickupCamera::height
	float ___height_6;
	// System.Single PickupCamera::angularSmoothLag
	float ___angularSmoothLag_7;
	// System.Single PickupCamera::angularMaxSpeed
	float ___angularMaxSpeed_8;
	// System.Single PickupCamera::heightSmoothLag
	float ___heightSmoothLag_9;
	// System.Single PickupCamera::snapSmoothLag
	float ___snapSmoothLag_10;
	// System.Single PickupCamera::snapMaxSpeed
	float ___snapMaxSpeed_11;
	// System.Single PickupCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_12;
	// System.Single PickupCamera::lockCameraTimeout
	float ___lockCameraTimeout_13;
	// UnityEngine.Vector3 PickupCamera::headOffset
	Vector3_t4282066566  ___headOffset_14;
	// UnityEngine.Vector3 PickupCamera::centerOffset
	Vector3_t4282066566  ___centerOffset_15;
	// System.Single PickupCamera::heightVelocity
	float ___heightVelocity_16;
	// System.Single PickupCamera::angleVelocity
	float ___angleVelocity_17;
	// System.Boolean PickupCamera::snap
	bool ___snap_18;
	// PickupController PickupCamera::controller
	PickupController_t2804654936 * ___controller_19;
	// System.Single PickupCamera::targetHeight
	float ___targetHeight_20;
	// UnityEngine.Camera PickupCamera::m_CameraTransformCamera
	Camera_t2727095145 * ___m_CameraTransformCamera_21;

public:
	inline static int32_t get_offset_of_cameraTransform_3() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___cameraTransform_3)); }
	inline Transform_t1659122786 * get_cameraTransform_3() const { return ___cameraTransform_3; }
	inline Transform_t1659122786 ** get_address_of_cameraTransform_3() { return &___cameraTransform_3; }
	inline void set_cameraTransform_3(Transform_t1659122786 * value)
	{
		___cameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_3, value);
	}

	inline static int32_t get_offset_of__target_4() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ____target_4)); }
	inline Transform_t1659122786 * get__target_4() const { return ____target_4; }
	inline Transform_t1659122786 ** get_address_of__target_4() { return &____target_4; }
	inline void set__target_4(Transform_t1659122786 * value)
	{
		____target_4 = value;
		Il2CppCodeGenWriteBarrier(&____target_4, value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___height_6)); }
	inline float get_height_6() const { return ___height_6; }
	inline float* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(float value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_angularSmoothLag_7() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___angularSmoothLag_7)); }
	inline float get_angularSmoothLag_7() const { return ___angularSmoothLag_7; }
	inline float* get_address_of_angularSmoothLag_7() { return &___angularSmoothLag_7; }
	inline void set_angularSmoothLag_7(float value)
	{
		___angularSmoothLag_7 = value;
	}

	inline static int32_t get_offset_of_angularMaxSpeed_8() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___angularMaxSpeed_8)); }
	inline float get_angularMaxSpeed_8() const { return ___angularMaxSpeed_8; }
	inline float* get_address_of_angularMaxSpeed_8() { return &___angularMaxSpeed_8; }
	inline void set_angularMaxSpeed_8(float value)
	{
		___angularMaxSpeed_8 = value;
	}

	inline static int32_t get_offset_of_heightSmoothLag_9() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___heightSmoothLag_9)); }
	inline float get_heightSmoothLag_9() const { return ___heightSmoothLag_9; }
	inline float* get_address_of_heightSmoothLag_9() { return &___heightSmoothLag_9; }
	inline void set_heightSmoothLag_9(float value)
	{
		___heightSmoothLag_9 = value;
	}

	inline static int32_t get_offset_of_snapSmoothLag_10() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___snapSmoothLag_10)); }
	inline float get_snapSmoothLag_10() const { return ___snapSmoothLag_10; }
	inline float* get_address_of_snapSmoothLag_10() { return &___snapSmoothLag_10; }
	inline void set_snapSmoothLag_10(float value)
	{
		___snapSmoothLag_10 = value;
	}

	inline static int32_t get_offset_of_snapMaxSpeed_11() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___snapMaxSpeed_11)); }
	inline float get_snapMaxSpeed_11() const { return ___snapMaxSpeed_11; }
	inline float* get_address_of_snapMaxSpeed_11() { return &___snapMaxSpeed_11; }
	inline void set_snapMaxSpeed_11(float value)
	{
		___snapMaxSpeed_11 = value;
	}

	inline static int32_t get_offset_of_clampHeadPositionScreenSpace_12() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___clampHeadPositionScreenSpace_12)); }
	inline float get_clampHeadPositionScreenSpace_12() const { return ___clampHeadPositionScreenSpace_12; }
	inline float* get_address_of_clampHeadPositionScreenSpace_12() { return &___clampHeadPositionScreenSpace_12; }
	inline void set_clampHeadPositionScreenSpace_12(float value)
	{
		___clampHeadPositionScreenSpace_12 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimeout_13() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___lockCameraTimeout_13)); }
	inline float get_lockCameraTimeout_13() const { return ___lockCameraTimeout_13; }
	inline float* get_address_of_lockCameraTimeout_13() { return &___lockCameraTimeout_13; }
	inline void set_lockCameraTimeout_13(float value)
	{
		___lockCameraTimeout_13 = value;
	}

	inline static int32_t get_offset_of_headOffset_14() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___headOffset_14)); }
	inline Vector3_t4282066566  get_headOffset_14() const { return ___headOffset_14; }
	inline Vector3_t4282066566 * get_address_of_headOffset_14() { return &___headOffset_14; }
	inline void set_headOffset_14(Vector3_t4282066566  value)
	{
		___headOffset_14 = value;
	}

	inline static int32_t get_offset_of_centerOffset_15() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___centerOffset_15)); }
	inline Vector3_t4282066566  get_centerOffset_15() const { return ___centerOffset_15; }
	inline Vector3_t4282066566 * get_address_of_centerOffset_15() { return &___centerOffset_15; }
	inline void set_centerOffset_15(Vector3_t4282066566  value)
	{
		___centerOffset_15 = value;
	}

	inline static int32_t get_offset_of_heightVelocity_16() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___heightVelocity_16)); }
	inline float get_heightVelocity_16() const { return ___heightVelocity_16; }
	inline float* get_address_of_heightVelocity_16() { return &___heightVelocity_16; }
	inline void set_heightVelocity_16(float value)
	{
		___heightVelocity_16 = value;
	}

	inline static int32_t get_offset_of_angleVelocity_17() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___angleVelocity_17)); }
	inline float get_angleVelocity_17() const { return ___angleVelocity_17; }
	inline float* get_address_of_angleVelocity_17() { return &___angleVelocity_17; }
	inline void set_angleVelocity_17(float value)
	{
		___angleVelocity_17 = value;
	}

	inline static int32_t get_offset_of_snap_18() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___snap_18)); }
	inline bool get_snap_18() const { return ___snap_18; }
	inline bool* get_address_of_snap_18() { return &___snap_18; }
	inline void set_snap_18(bool value)
	{
		___snap_18 = value;
	}

	inline static int32_t get_offset_of_controller_19() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___controller_19)); }
	inline PickupController_t2804654936 * get_controller_19() const { return ___controller_19; }
	inline PickupController_t2804654936 ** get_address_of_controller_19() { return &___controller_19; }
	inline void set_controller_19(PickupController_t2804654936 * value)
	{
		___controller_19 = value;
		Il2CppCodeGenWriteBarrier(&___controller_19, value);
	}

	inline static int32_t get_offset_of_targetHeight_20() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___targetHeight_20)); }
	inline float get_targetHeight_20() const { return ___targetHeight_20; }
	inline float* get_address_of_targetHeight_20() { return &___targetHeight_20; }
	inline void set_targetHeight_20(float value)
	{
		___targetHeight_20 = value;
	}

	inline static int32_t get_offset_of_m_CameraTransformCamera_21() { return static_cast<int32_t>(offsetof(PickupCamera_t13910241, ___m_CameraTransformCamera_21)); }
	inline Camera_t2727095145 * get_m_CameraTransformCamera_21() const { return ___m_CameraTransformCamera_21; }
	inline Camera_t2727095145 ** get_address_of_m_CameraTransformCamera_21() { return &___m_CameraTransformCamera_21; }
	inline void set_m_CameraTransformCamera_21(Camera_t2727095145 * value)
	{
		___m_CameraTransformCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraTransformCamera_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
