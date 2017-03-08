#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t3595356884;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewScaleControl
struct  PhotonTransformViewScaleControl_t1708848712  : public Il2CppObject
{
public:
	// PhotonTransformViewScaleModel PhotonTransformViewScaleControl::m_Model
	PhotonTransformViewScaleModel_t3595356884 * ___m_Model_0;
	// UnityEngine.Vector3 PhotonTransformViewScaleControl::m_NetworkScale
	Vector3_t4282066566  ___m_NetworkScale_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t1708848712, ___m_Model_0)); }
	inline PhotonTransformViewScaleModel_t3595356884 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewScaleModel_t3595356884 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewScaleModel_t3595356884 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Model_0, value);
	}

	inline static int32_t get_offset_of_m_NetworkScale_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t1708848712, ___m_NetworkScale_1)); }
	inline Vector3_t4282066566  get_m_NetworkScale_1() const { return ___m_NetworkScale_1; }
	inline Vector3_t4282066566 * get_address_of_m_NetworkScale_1() { return &___m_NetworkScale_1; }
	inline void set_m_NetworkScale_1(Vector3_t4282066566  value)
	{
		___m_NetworkScale_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
