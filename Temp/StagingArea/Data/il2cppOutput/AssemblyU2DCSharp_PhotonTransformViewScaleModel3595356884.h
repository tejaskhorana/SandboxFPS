#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel_In2649587096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewScaleModel
struct  PhotonTransformViewScaleModel_t3595356884  : public Il2CppObject
{
public:
	// System.Boolean PhotonTransformViewScaleModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// PhotonTransformViewScaleModel/InterpolateOptions PhotonTransformViewScaleModel::InterpolateOption
	int32_t ___InterpolateOption_1;
	// System.Single PhotonTransformViewScaleModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_2;
	// System.Single PhotonTransformViewScaleModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_3;

public:
	inline static int32_t get_offset_of_SynchronizeEnabled_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t3595356884, ___SynchronizeEnabled_0)); }
	inline bool get_SynchronizeEnabled_0() const { return ___SynchronizeEnabled_0; }
	inline bool* get_address_of_SynchronizeEnabled_0() { return &___SynchronizeEnabled_0; }
	inline void set_SynchronizeEnabled_0(bool value)
	{
		___SynchronizeEnabled_0 = value;
	}

	inline static int32_t get_offset_of_InterpolateOption_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t3595356884, ___InterpolateOption_1)); }
	inline int32_t get_InterpolateOption_1() const { return ___InterpolateOption_1; }
	inline int32_t* get_address_of_InterpolateOption_1() { return &___InterpolateOption_1; }
	inline void set_InterpolateOption_1(int32_t value)
	{
		___InterpolateOption_1 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsSpeed_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t3595356884, ___InterpolateMoveTowardsSpeed_2)); }
	inline float get_InterpolateMoveTowardsSpeed_2() const { return ___InterpolateMoveTowardsSpeed_2; }
	inline float* get_address_of_InterpolateMoveTowardsSpeed_2() { return &___InterpolateMoveTowardsSpeed_2; }
	inline void set_InterpolateMoveTowardsSpeed_2(float value)
	{
		___InterpolateMoveTowardsSpeed_2 = value;
	}

	inline static int32_t get_offset_of_InterpolateLerpSpeed_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t3595356884, ___InterpolateLerpSpeed_3)); }
	inline float get_InterpolateLerpSpeed_3() const { return ___InterpolateLerpSpeed_3; }
	inline float* get_address_of_InterpolateLerpSpeed_3() { return &___InterpolateLerpSpeed_3; }
	inline void set_InterpolateLerpSpeed_3(float value)
	{
		___InterpolateLerpSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
