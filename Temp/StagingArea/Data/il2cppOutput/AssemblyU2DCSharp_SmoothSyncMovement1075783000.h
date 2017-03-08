#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothSyncMovement
struct  SmoothSyncMovement_t1075783000  : public MonoBehaviour_t2824676508
{
public:
	// System.Single SmoothSyncMovement::SmoothingDelay
	float ___SmoothingDelay_3;
	// UnityEngine.Vector3 SmoothSyncMovement::correctPlayerPos
	Vector3_t4282066566  ___correctPlayerPos_4;
	// UnityEngine.Quaternion SmoothSyncMovement::correctPlayerRot
	Quaternion_t1553702882  ___correctPlayerRot_5;

public:
	inline static int32_t get_offset_of_SmoothingDelay_3() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1075783000, ___SmoothingDelay_3)); }
	inline float get_SmoothingDelay_3() const { return ___SmoothingDelay_3; }
	inline float* get_address_of_SmoothingDelay_3() { return &___SmoothingDelay_3; }
	inline void set_SmoothingDelay_3(float value)
	{
		___SmoothingDelay_3 = value;
	}

	inline static int32_t get_offset_of_correctPlayerPos_4() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1075783000, ___correctPlayerPos_4)); }
	inline Vector3_t4282066566  get_correctPlayerPos_4() const { return ___correctPlayerPos_4; }
	inline Vector3_t4282066566 * get_address_of_correctPlayerPos_4() { return &___correctPlayerPos_4; }
	inline void set_correctPlayerPos_4(Vector3_t4282066566  value)
	{
		___correctPlayerPos_4 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_5() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1075783000, ___correctPlayerRot_5)); }
	inline Quaternion_t1553702882  get_correctPlayerRot_5() const { return ___correctPlayerRot_5; }
	inline Quaternion_t1553702882 * get_address_of_correctPlayerRot_5() { return &___correctPlayerRot_5; }
	inline void set_correctPlayerRot_5(Quaternion_t1553702882  value)
	{
		___correctPlayerRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
