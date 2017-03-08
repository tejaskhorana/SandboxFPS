#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t1785594710;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewRotationControl
struct  PhotonTransformViewRotationControl_t1989154378  : public Il2CppObject
{
public:
	// PhotonTransformViewRotationModel PhotonTransformViewRotationControl::m_Model
	PhotonTransformViewRotationModel_t1785594710 * ___m_Model_0;
	// UnityEngine.Quaternion PhotonTransformViewRotationControl::m_NetworkRotation
	Quaternion_t1553702882  ___m_NetworkRotation_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_t1989154378, ___m_Model_0)); }
	inline PhotonTransformViewRotationModel_t1785594710 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewRotationModel_t1785594710 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewRotationModel_t1785594710 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Model_0, value);
	}

	inline static int32_t get_offset_of_m_NetworkRotation_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_t1989154378, ___m_NetworkRotation_1)); }
	inline Quaternion_t1553702882  get_m_NetworkRotation_1() const { return ___m_NetworkRotation_1; }
	inline Quaternion_t1553702882 * get_address_of_m_NetworkRotation_1() { return &___m_NetworkRotation_1; }
	inline void set_m_NetworkRotation_1(Quaternion_t1553702882  value)
	{
		___m_NetworkRotation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
