#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel1823611521.h"
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_293027789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewPositionModel
struct  PhotonTransformViewPositionModel_t2597244043  : public Il2CppObject
{
public:
	// System.Boolean PhotonTransformViewPositionModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// System.Boolean PhotonTransformViewPositionModel::TeleportEnabled
	bool ___TeleportEnabled_1;
	// System.Single PhotonTransformViewPositionModel::TeleportIfDistanceGreaterThan
	float ___TeleportIfDistanceGreaterThan_2;
	// PhotonTransformViewPositionModel/InterpolateOptions PhotonTransformViewPositionModel::InterpolateOption
	int32_t ___InterpolateOption_3;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_4;
	// System.Single PhotonTransformViewPositionModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_5;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsAcceleration
	float ___InterpolateMoveTowardsAcceleration_6;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsDeceleration
	float ___InterpolateMoveTowardsDeceleration_7;
	// UnityEngine.AnimationCurve PhotonTransformViewPositionModel::InterpolateSpeedCurve
	AnimationCurve_t3667593487 * ___InterpolateSpeedCurve_8;
	// PhotonTransformViewPositionModel/ExtrapolateOptions PhotonTransformViewPositionModel::ExtrapolateOption
	int32_t ___ExtrapolateOption_9;
	// System.Single PhotonTransformViewPositionModel::ExtrapolateSpeed
	float ___ExtrapolateSpeed_10;
	// System.Boolean PhotonTransformViewPositionModel::ExtrapolateIncludingRoundTripTime
	bool ___ExtrapolateIncludingRoundTripTime_11;
	// System.Int32 PhotonTransformViewPositionModel::ExtrapolateNumberOfStoredPositions
	int32_t ___ExtrapolateNumberOfStoredPositions_12;
	// System.Boolean PhotonTransformViewPositionModel::DrawErrorGizmo
	bool ___DrawErrorGizmo_13;

public:
	inline static int32_t get_offset_of_SynchronizeEnabled_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___SynchronizeEnabled_0)); }
	inline bool get_SynchronizeEnabled_0() const { return ___SynchronizeEnabled_0; }
	inline bool* get_address_of_SynchronizeEnabled_0() { return &___SynchronizeEnabled_0; }
	inline void set_SynchronizeEnabled_0(bool value)
	{
		___SynchronizeEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TeleportEnabled_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___TeleportEnabled_1)); }
	inline bool get_TeleportEnabled_1() const { return ___TeleportEnabled_1; }
	inline bool* get_address_of_TeleportEnabled_1() { return &___TeleportEnabled_1; }
	inline void set_TeleportEnabled_1(bool value)
	{
		___TeleportEnabled_1 = value;
	}

	inline static int32_t get_offset_of_TeleportIfDistanceGreaterThan_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___TeleportIfDistanceGreaterThan_2)); }
	inline float get_TeleportIfDistanceGreaterThan_2() const { return ___TeleportIfDistanceGreaterThan_2; }
	inline float* get_address_of_TeleportIfDistanceGreaterThan_2() { return &___TeleportIfDistanceGreaterThan_2; }
	inline void set_TeleportIfDistanceGreaterThan_2(float value)
	{
		___TeleportIfDistanceGreaterThan_2 = value;
	}

	inline static int32_t get_offset_of_InterpolateOption_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateOption_3)); }
	inline int32_t get_InterpolateOption_3() const { return ___InterpolateOption_3; }
	inline int32_t* get_address_of_InterpolateOption_3() { return &___InterpolateOption_3; }
	inline void set_InterpolateOption_3(int32_t value)
	{
		___InterpolateOption_3 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsSpeed_4() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateMoveTowardsSpeed_4)); }
	inline float get_InterpolateMoveTowardsSpeed_4() const { return ___InterpolateMoveTowardsSpeed_4; }
	inline float* get_address_of_InterpolateMoveTowardsSpeed_4() { return &___InterpolateMoveTowardsSpeed_4; }
	inline void set_InterpolateMoveTowardsSpeed_4(float value)
	{
		___InterpolateMoveTowardsSpeed_4 = value;
	}

	inline static int32_t get_offset_of_InterpolateLerpSpeed_5() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateLerpSpeed_5)); }
	inline float get_InterpolateLerpSpeed_5() const { return ___InterpolateLerpSpeed_5; }
	inline float* get_address_of_InterpolateLerpSpeed_5() { return &___InterpolateLerpSpeed_5; }
	inline void set_InterpolateLerpSpeed_5(float value)
	{
		___InterpolateLerpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsAcceleration_6() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateMoveTowardsAcceleration_6)); }
	inline float get_InterpolateMoveTowardsAcceleration_6() const { return ___InterpolateMoveTowardsAcceleration_6; }
	inline float* get_address_of_InterpolateMoveTowardsAcceleration_6() { return &___InterpolateMoveTowardsAcceleration_6; }
	inline void set_InterpolateMoveTowardsAcceleration_6(float value)
	{
		___InterpolateMoveTowardsAcceleration_6 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsDeceleration_7() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateMoveTowardsDeceleration_7)); }
	inline float get_InterpolateMoveTowardsDeceleration_7() const { return ___InterpolateMoveTowardsDeceleration_7; }
	inline float* get_address_of_InterpolateMoveTowardsDeceleration_7() { return &___InterpolateMoveTowardsDeceleration_7; }
	inline void set_InterpolateMoveTowardsDeceleration_7(float value)
	{
		___InterpolateMoveTowardsDeceleration_7 = value;
	}

	inline static int32_t get_offset_of_InterpolateSpeedCurve_8() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___InterpolateSpeedCurve_8)); }
	inline AnimationCurve_t3667593487 * get_InterpolateSpeedCurve_8() const { return ___InterpolateSpeedCurve_8; }
	inline AnimationCurve_t3667593487 ** get_address_of_InterpolateSpeedCurve_8() { return &___InterpolateSpeedCurve_8; }
	inline void set_InterpolateSpeedCurve_8(AnimationCurve_t3667593487 * value)
	{
		___InterpolateSpeedCurve_8 = value;
		Il2CppCodeGenWriteBarrier(&___InterpolateSpeedCurve_8, value);
	}

	inline static int32_t get_offset_of_ExtrapolateOption_9() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___ExtrapolateOption_9)); }
	inline int32_t get_ExtrapolateOption_9() const { return ___ExtrapolateOption_9; }
	inline int32_t* get_address_of_ExtrapolateOption_9() { return &___ExtrapolateOption_9; }
	inline void set_ExtrapolateOption_9(int32_t value)
	{
		___ExtrapolateOption_9 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateSpeed_10() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___ExtrapolateSpeed_10)); }
	inline float get_ExtrapolateSpeed_10() const { return ___ExtrapolateSpeed_10; }
	inline float* get_address_of_ExtrapolateSpeed_10() { return &___ExtrapolateSpeed_10; }
	inline void set_ExtrapolateSpeed_10(float value)
	{
		___ExtrapolateSpeed_10 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateIncludingRoundTripTime_11() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___ExtrapolateIncludingRoundTripTime_11)); }
	inline bool get_ExtrapolateIncludingRoundTripTime_11() const { return ___ExtrapolateIncludingRoundTripTime_11; }
	inline bool* get_address_of_ExtrapolateIncludingRoundTripTime_11() { return &___ExtrapolateIncludingRoundTripTime_11; }
	inline void set_ExtrapolateIncludingRoundTripTime_11(bool value)
	{
		___ExtrapolateIncludingRoundTripTime_11 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateNumberOfStoredPositions_12() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___ExtrapolateNumberOfStoredPositions_12)); }
	inline int32_t get_ExtrapolateNumberOfStoredPositions_12() const { return ___ExtrapolateNumberOfStoredPositions_12; }
	inline int32_t* get_address_of_ExtrapolateNumberOfStoredPositions_12() { return &___ExtrapolateNumberOfStoredPositions_12; }
	inline void set_ExtrapolateNumberOfStoredPositions_12(int32_t value)
	{
		___ExtrapolateNumberOfStoredPositions_12 = value;
	}

	inline static int32_t get_offset_of_DrawErrorGizmo_13() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t2597244043, ___DrawErrorGizmo_13)); }
	inline bool get_DrawErrorGizmo_13() const { return ___DrawErrorGizmo_13; }
	inline bool* get_address_of_DrawErrorGizmo_13() { return &___DrawErrorGizmo_13; }
	inline void set_DrawErrorGizmo_13(bool value)
	{
		___DrawErrorGizmo_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
