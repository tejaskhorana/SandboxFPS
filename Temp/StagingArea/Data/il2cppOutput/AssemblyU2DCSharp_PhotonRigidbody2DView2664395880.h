#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonRigidbody2DView
struct  PhotonRigidbody2DView_t2664395880  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean PhotonRigidbody2DView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity_2;
	// System.Boolean PhotonRigidbody2DView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity_3;
	// UnityEngine.Rigidbody2D PhotonRigidbody2DView::m_Body
	Rigidbody2D_t1743771669 * ___m_Body_4;

public:
	inline static int32_t get_offset_of_m_SynchronizeVelocity_2() { return static_cast<int32_t>(offsetof(PhotonRigidbody2DView_t2664395880, ___m_SynchronizeVelocity_2)); }
	inline bool get_m_SynchronizeVelocity_2() const { return ___m_SynchronizeVelocity_2; }
	inline bool* get_address_of_m_SynchronizeVelocity_2() { return &___m_SynchronizeVelocity_2; }
	inline void set_m_SynchronizeVelocity_2(bool value)
	{
		___m_SynchronizeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeAngularVelocity_3() { return static_cast<int32_t>(offsetof(PhotonRigidbody2DView_t2664395880, ___m_SynchronizeAngularVelocity_3)); }
	inline bool get_m_SynchronizeAngularVelocity_3() const { return ___m_SynchronizeAngularVelocity_3; }
	inline bool* get_address_of_m_SynchronizeAngularVelocity_3() { return &___m_SynchronizeAngularVelocity_3; }
	inline void set_m_SynchronizeAngularVelocity_3(bool value)
	{
		___m_SynchronizeAngularVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_Body_4() { return static_cast<int32_t>(offsetof(PhotonRigidbody2DView_t2664395880, ___m_Body_4)); }
	inline Rigidbody2D_t1743771669 * get_m_Body_4() const { return ___m_Body_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_m_Body_4() { return &___m_Body_4; }
	inline void set_m_Body_4(Rigidbody2D_t1743771669 * value)
	{
		___m_Body_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Body_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
