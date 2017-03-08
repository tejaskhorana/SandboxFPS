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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeExtra
struct  CubeExtra_t944986299  : public MonoBehaviour_t2824676508
{
public:
	// System.Single CubeExtra::Factor
	float ___Factor_3;
	// UnityEngine.Vector3 CubeExtra::latestCorrectPos
	Vector3_t4282066566  ___latestCorrectPos_4;
	// UnityEngine.Vector3 CubeExtra::movementVector
	Vector3_t4282066566  ___movementVector_5;
	// UnityEngine.Vector3 CubeExtra::errorVector
	Vector3_t4282066566  ___errorVector_6;
	// System.Double CubeExtra::lastTime
	double ___lastTime_7;

public:
	inline static int32_t get_offset_of_Factor_3() { return static_cast<int32_t>(offsetof(CubeExtra_t944986299, ___Factor_3)); }
	inline float get_Factor_3() const { return ___Factor_3; }
	inline float* get_address_of_Factor_3() { return &___Factor_3; }
	inline void set_Factor_3(float value)
	{
		___Factor_3 = value;
	}

	inline static int32_t get_offset_of_latestCorrectPos_4() { return static_cast<int32_t>(offsetof(CubeExtra_t944986299, ___latestCorrectPos_4)); }
	inline Vector3_t4282066566  get_latestCorrectPos_4() const { return ___latestCorrectPos_4; }
	inline Vector3_t4282066566 * get_address_of_latestCorrectPos_4() { return &___latestCorrectPos_4; }
	inline void set_latestCorrectPos_4(Vector3_t4282066566  value)
	{
		___latestCorrectPos_4 = value;
	}

	inline static int32_t get_offset_of_movementVector_5() { return static_cast<int32_t>(offsetof(CubeExtra_t944986299, ___movementVector_5)); }
	inline Vector3_t4282066566  get_movementVector_5() const { return ___movementVector_5; }
	inline Vector3_t4282066566 * get_address_of_movementVector_5() { return &___movementVector_5; }
	inline void set_movementVector_5(Vector3_t4282066566  value)
	{
		___movementVector_5 = value;
	}

	inline static int32_t get_offset_of_errorVector_6() { return static_cast<int32_t>(offsetof(CubeExtra_t944986299, ___errorVector_6)); }
	inline Vector3_t4282066566  get_errorVector_6() const { return ___errorVector_6; }
	inline Vector3_t4282066566 * get_address_of_errorVector_6() { return &___errorVector_6; }
	inline void set_errorVector_6(Vector3_t4282066566  value)
	{
		___errorVector_6 = value;
	}

	inline static int32_t get_offset_of_lastTime_7() { return static_cast<int32_t>(offsetof(CubeExtra_t944986299, ___lastTime_7)); }
	inline double get_lastTime_7() const { return ___lastTime_7; }
	inline double* get_address_of_lastTime_7() { return &___lastTime_7; }
	inline void set_lastTime_7(double value)
	{
		___lastTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
