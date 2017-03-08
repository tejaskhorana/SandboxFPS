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
// ThirdPersonController
struct ThirdPersonController_t973398072;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonCamera
struct  ThirdPersonCamera_t2089741761  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform ThirdPersonCamera::cameraTransform
	Transform_t1659122786 * ___cameraTransform_2;
	// UnityEngine.Transform ThirdPersonCamera::_target
	Transform_t1659122786 * ____target_3;
	// System.Single ThirdPersonCamera::distance
	float ___distance_4;
	// System.Single ThirdPersonCamera::height
	float ___height_5;
	// System.Single ThirdPersonCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single ThirdPersonCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single ThirdPersonCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single ThirdPersonCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single ThirdPersonCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single ThirdPersonCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single ThirdPersonCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 ThirdPersonCamera::headOffset
	Vector3_t4282066566  ___headOffset_13;
	// UnityEngine.Vector3 ThirdPersonCamera::centerOffset
	Vector3_t4282066566  ___centerOffset_14;
	// System.Single ThirdPersonCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single ThirdPersonCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean ThirdPersonCamera::snap
	bool ___snap_17;
	// ThirdPersonController ThirdPersonCamera::controller
	ThirdPersonController_t973398072 * ___controller_18;
	// System.Single ThirdPersonCamera::targetHeight
	float ___targetHeight_19;
	// UnityEngine.Camera ThirdPersonCamera::m_CameraTransformCamera
	Camera_t2727095145 * ___m_CameraTransformCamera_20;

public:
	inline static int32_t get_offset_of_cameraTransform_2() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___cameraTransform_2)); }
	inline Transform_t1659122786 * get_cameraTransform_2() const { return ___cameraTransform_2; }
	inline Transform_t1659122786 ** get_address_of_cameraTransform_2() { return &___cameraTransform_2; }
	inline void set_cameraTransform_2(Transform_t1659122786 * value)
	{
		___cameraTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_2, value);
	}

	inline static int32_t get_offset_of__target_3() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ____target_3)); }
	inline Transform_t1659122786 * get__target_3() const { return ____target_3; }
	inline Transform_t1659122786 ** get_address_of__target_3() { return &____target_3; }
	inline void set__target_3(Transform_t1659122786 * value)
	{
		____target_3 = value;
		Il2CppCodeGenWriteBarrier(&____target_3, value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_angularSmoothLag_6() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___angularSmoothLag_6)); }
	inline float get_angularSmoothLag_6() const { return ___angularSmoothLag_6; }
	inline float* get_address_of_angularSmoothLag_6() { return &___angularSmoothLag_6; }
	inline void set_angularSmoothLag_6(float value)
	{
		___angularSmoothLag_6 = value;
	}

	inline static int32_t get_offset_of_angularMaxSpeed_7() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___angularMaxSpeed_7)); }
	inline float get_angularMaxSpeed_7() const { return ___angularMaxSpeed_7; }
	inline float* get_address_of_angularMaxSpeed_7() { return &___angularMaxSpeed_7; }
	inline void set_angularMaxSpeed_7(float value)
	{
		___angularMaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_heightSmoothLag_8() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___heightSmoothLag_8)); }
	inline float get_heightSmoothLag_8() const { return ___heightSmoothLag_8; }
	inline float* get_address_of_heightSmoothLag_8() { return &___heightSmoothLag_8; }
	inline void set_heightSmoothLag_8(float value)
	{
		___heightSmoothLag_8 = value;
	}

	inline static int32_t get_offset_of_snapSmoothLag_9() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___snapSmoothLag_9)); }
	inline float get_snapSmoothLag_9() const { return ___snapSmoothLag_9; }
	inline float* get_address_of_snapSmoothLag_9() { return &___snapSmoothLag_9; }
	inline void set_snapSmoothLag_9(float value)
	{
		___snapSmoothLag_9 = value;
	}

	inline static int32_t get_offset_of_snapMaxSpeed_10() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___snapMaxSpeed_10)); }
	inline float get_snapMaxSpeed_10() const { return ___snapMaxSpeed_10; }
	inline float* get_address_of_snapMaxSpeed_10() { return &___snapMaxSpeed_10; }
	inline void set_snapMaxSpeed_10(float value)
	{
		___snapMaxSpeed_10 = value;
	}

	inline static int32_t get_offset_of_clampHeadPositionScreenSpace_11() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___clampHeadPositionScreenSpace_11)); }
	inline float get_clampHeadPositionScreenSpace_11() const { return ___clampHeadPositionScreenSpace_11; }
	inline float* get_address_of_clampHeadPositionScreenSpace_11() { return &___clampHeadPositionScreenSpace_11; }
	inline void set_clampHeadPositionScreenSpace_11(float value)
	{
		___clampHeadPositionScreenSpace_11 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimeout_12() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___lockCameraTimeout_12)); }
	inline float get_lockCameraTimeout_12() const { return ___lockCameraTimeout_12; }
	inline float* get_address_of_lockCameraTimeout_12() { return &___lockCameraTimeout_12; }
	inline void set_lockCameraTimeout_12(float value)
	{
		___lockCameraTimeout_12 = value;
	}

	inline static int32_t get_offset_of_headOffset_13() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___headOffset_13)); }
	inline Vector3_t4282066566  get_headOffset_13() const { return ___headOffset_13; }
	inline Vector3_t4282066566 * get_address_of_headOffset_13() { return &___headOffset_13; }
	inline void set_headOffset_13(Vector3_t4282066566  value)
	{
		___headOffset_13 = value;
	}

	inline static int32_t get_offset_of_centerOffset_14() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___centerOffset_14)); }
	inline Vector3_t4282066566  get_centerOffset_14() const { return ___centerOffset_14; }
	inline Vector3_t4282066566 * get_address_of_centerOffset_14() { return &___centerOffset_14; }
	inline void set_centerOffset_14(Vector3_t4282066566  value)
	{
		___centerOffset_14 = value;
	}

	inline static int32_t get_offset_of_heightVelocity_15() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___heightVelocity_15)); }
	inline float get_heightVelocity_15() const { return ___heightVelocity_15; }
	inline float* get_address_of_heightVelocity_15() { return &___heightVelocity_15; }
	inline void set_heightVelocity_15(float value)
	{
		___heightVelocity_15 = value;
	}

	inline static int32_t get_offset_of_angleVelocity_16() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___angleVelocity_16)); }
	inline float get_angleVelocity_16() const { return ___angleVelocity_16; }
	inline float* get_address_of_angleVelocity_16() { return &___angleVelocity_16; }
	inline void set_angleVelocity_16(float value)
	{
		___angleVelocity_16 = value;
	}

	inline static int32_t get_offset_of_snap_17() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___snap_17)); }
	inline bool get_snap_17() const { return ___snap_17; }
	inline bool* get_address_of_snap_17() { return &___snap_17; }
	inline void set_snap_17(bool value)
	{
		___snap_17 = value;
	}

	inline static int32_t get_offset_of_controller_18() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___controller_18)); }
	inline ThirdPersonController_t973398072 * get_controller_18() const { return ___controller_18; }
	inline ThirdPersonController_t973398072 ** get_address_of_controller_18() { return &___controller_18; }
	inline void set_controller_18(ThirdPersonController_t973398072 * value)
	{
		___controller_18 = value;
		Il2CppCodeGenWriteBarrier(&___controller_18, value);
	}

	inline static int32_t get_offset_of_targetHeight_19() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___targetHeight_19)); }
	inline float get_targetHeight_19() const { return ___targetHeight_19; }
	inline float* get_address_of_targetHeight_19() { return &___targetHeight_19; }
	inline void set_targetHeight_19(float value)
	{
		___targetHeight_19 = value;
	}

	inline static int32_t get_offset_of_m_CameraTransformCamera_20() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2089741761, ___m_CameraTransformCamera_20)); }
	inline Camera_t2727095145 * get_m_CameraTransformCamera_20() const { return ___m_CameraTransformCamera_20; }
	inline Camera_t2727095145 ** get_address_of_m_CameraTransformCamera_20() { return &___m_CameraTransformCamera_20; }
	inline void set_m_CameraTransformCamera_20(Camera_t2727095145 * value)
	{
		___m_CameraTransformCamera_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraTransformCamera_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
