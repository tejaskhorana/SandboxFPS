#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t2597244043;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t1785594710;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t3595356884;
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t300115519;
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t1989154378;
// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t1708848712;
// PhotonView
struct PhotonView_t1498838369;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformView
struct  PhotonTransformView_t486317301  : public MonoBehaviour_t667441552
{
public:
	// PhotonTransformViewPositionModel PhotonTransformView::m_PositionModel
	PhotonTransformViewPositionModel_t2597244043 * ___m_PositionModel_2;
	// PhotonTransformViewRotationModel PhotonTransformView::m_RotationModel
	PhotonTransformViewRotationModel_t1785594710 * ___m_RotationModel_3;
	// PhotonTransformViewScaleModel PhotonTransformView::m_ScaleModel
	PhotonTransformViewScaleModel_t3595356884 * ___m_ScaleModel_4;
	// PhotonTransformViewPositionControl PhotonTransformView::m_PositionControl
	PhotonTransformViewPositionControl_t300115519 * ___m_PositionControl_5;
	// PhotonTransformViewRotationControl PhotonTransformView::m_RotationControl
	PhotonTransformViewRotationControl_t1989154378 * ___m_RotationControl_6;
	// PhotonTransformViewScaleControl PhotonTransformView::m_ScaleControl
	PhotonTransformViewScaleControl_t1708848712 * ___m_ScaleControl_7;
	// PhotonView PhotonTransformView::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_8;
	// System.Boolean PhotonTransformView::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate_9;
	// System.Boolean PhotonTransformView::m_firstTake
	bool ___m_firstTake_10;

public:
	inline static int32_t get_offset_of_m_PositionModel_2() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_PositionModel_2)); }
	inline PhotonTransformViewPositionModel_t2597244043 * get_m_PositionModel_2() const { return ___m_PositionModel_2; }
	inline PhotonTransformViewPositionModel_t2597244043 ** get_address_of_m_PositionModel_2() { return &___m_PositionModel_2; }
	inline void set_m_PositionModel_2(PhotonTransformViewPositionModel_t2597244043 * value)
	{
		___m_PositionModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PositionModel_2, value);
	}

	inline static int32_t get_offset_of_m_RotationModel_3() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_RotationModel_3)); }
	inline PhotonTransformViewRotationModel_t1785594710 * get_m_RotationModel_3() const { return ___m_RotationModel_3; }
	inline PhotonTransformViewRotationModel_t1785594710 ** get_address_of_m_RotationModel_3() { return &___m_RotationModel_3; }
	inline void set_m_RotationModel_3(PhotonTransformViewRotationModel_t1785594710 * value)
	{
		___m_RotationModel_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationModel_3, value);
	}

	inline static int32_t get_offset_of_m_ScaleModel_4() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_ScaleModel_4)); }
	inline PhotonTransformViewScaleModel_t3595356884 * get_m_ScaleModel_4() const { return ___m_ScaleModel_4; }
	inline PhotonTransformViewScaleModel_t3595356884 ** get_address_of_m_ScaleModel_4() { return &___m_ScaleModel_4; }
	inline void set_m_ScaleModel_4(PhotonTransformViewScaleModel_t3595356884 * value)
	{
		___m_ScaleModel_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleModel_4, value);
	}

	inline static int32_t get_offset_of_m_PositionControl_5() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_PositionControl_5)); }
	inline PhotonTransformViewPositionControl_t300115519 * get_m_PositionControl_5() const { return ___m_PositionControl_5; }
	inline PhotonTransformViewPositionControl_t300115519 ** get_address_of_m_PositionControl_5() { return &___m_PositionControl_5; }
	inline void set_m_PositionControl_5(PhotonTransformViewPositionControl_t300115519 * value)
	{
		___m_PositionControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PositionControl_5, value);
	}

	inline static int32_t get_offset_of_m_RotationControl_6() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_RotationControl_6)); }
	inline PhotonTransformViewRotationControl_t1989154378 * get_m_RotationControl_6() const { return ___m_RotationControl_6; }
	inline PhotonTransformViewRotationControl_t1989154378 ** get_address_of_m_RotationControl_6() { return &___m_RotationControl_6; }
	inline void set_m_RotationControl_6(PhotonTransformViewRotationControl_t1989154378 * value)
	{
		___m_RotationControl_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationControl_6, value);
	}

	inline static int32_t get_offset_of_m_ScaleControl_7() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_ScaleControl_7)); }
	inline PhotonTransformViewScaleControl_t1708848712 * get_m_ScaleControl_7() const { return ___m_ScaleControl_7; }
	inline PhotonTransformViewScaleControl_t1708848712 ** get_address_of_m_ScaleControl_7() { return &___m_ScaleControl_7; }
	inline void set_m_ScaleControl_7(PhotonTransformViewScaleControl_t1708848712 * value)
	{
		___m_ScaleControl_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleControl_7, value);
	}

	inline static int32_t get_offset_of_m_PhotonView_8() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_PhotonView_8)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_8() const { return ___m_PhotonView_8; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_8() { return &___m_PhotonView_8; }
	inline void set_m_PhotonView_8(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_8, value);
	}

	inline static int32_t get_offset_of_m_ReceivedNetworkUpdate_9() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_ReceivedNetworkUpdate_9)); }
	inline bool get_m_ReceivedNetworkUpdate_9() const { return ___m_ReceivedNetworkUpdate_9; }
	inline bool* get_address_of_m_ReceivedNetworkUpdate_9() { return &___m_ReceivedNetworkUpdate_9; }
	inline void set_m_ReceivedNetworkUpdate_9(bool value)
	{
		___m_ReceivedNetworkUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_firstTake_10() { return static_cast<int32_t>(offsetof(PhotonTransformView_t486317301, ___m_firstTake_10)); }
	inline bool get_m_firstTake_10() const { return ___m_firstTake_10; }
	inline bool* get_address_of_m_firstTake_10() { return &___m_firstTake_10; }
	inline void set_m_firstTake_10(bool value)
	{
		___m_firstTake_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
