#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPerPlayer
struct  ColorPerPlayer_t2366540379  : public PunBehaviour_t2436907354
{
public:
	// UnityEngine.Color[] ColorPerPlayer::Colors
	ColorU5BU5D_t2441545636* ___Colors_4;
	// System.Boolean ColorPerPlayer::ShowColorLabel
	bool ___ShowColorLabel_5;
	// UnityEngine.Rect ColorPerPlayer::ColorLabelArea
	Rect_t4241904616  ___ColorLabelArea_6;
	// UnityEngine.Texture2D ColorPerPlayer::img
	Texture2D_t3884108195 * ___img_7;
	// UnityEngine.Color ColorPerPlayer::MyColor
	Color_t4194546905  ___MyColor_8;
	// System.Boolean ColorPerPlayer::<ColorPicked>k__BackingField
	bool ___U3CColorPickedU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_Colors_4() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___Colors_4)); }
	inline ColorU5BU5D_t2441545636* get_Colors_4() const { return ___Colors_4; }
	inline ColorU5BU5D_t2441545636** get_address_of_Colors_4() { return &___Colors_4; }
	inline void set_Colors_4(ColorU5BU5D_t2441545636* value)
	{
		___Colors_4 = value;
		Il2CppCodeGenWriteBarrier(&___Colors_4, value);
	}

	inline static int32_t get_offset_of_ShowColorLabel_5() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___ShowColorLabel_5)); }
	inline bool get_ShowColorLabel_5() const { return ___ShowColorLabel_5; }
	inline bool* get_address_of_ShowColorLabel_5() { return &___ShowColorLabel_5; }
	inline void set_ShowColorLabel_5(bool value)
	{
		___ShowColorLabel_5 = value;
	}

	inline static int32_t get_offset_of_ColorLabelArea_6() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___ColorLabelArea_6)); }
	inline Rect_t4241904616  get_ColorLabelArea_6() const { return ___ColorLabelArea_6; }
	inline Rect_t4241904616 * get_address_of_ColorLabelArea_6() { return &___ColorLabelArea_6; }
	inline void set_ColorLabelArea_6(Rect_t4241904616  value)
	{
		___ColorLabelArea_6 = value;
	}

	inline static int32_t get_offset_of_img_7() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___img_7)); }
	inline Texture2D_t3884108195 * get_img_7() const { return ___img_7; }
	inline Texture2D_t3884108195 ** get_address_of_img_7() { return &___img_7; }
	inline void set_img_7(Texture2D_t3884108195 * value)
	{
		___img_7 = value;
		Il2CppCodeGenWriteBarrier(&___img_7, value);
	}

	inline static int32_t get_offset_of_MyColor_8() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___MyColor_8)); }
	inline Color_t4194546905  get_MyColor_8() const { return ___MyColor_8; }
	inline Color_t4194546905 * get_address_of_MyColor_8() { return &___MyColor_8; }
	inline void set_MyColor_8(Color_t4194546905  value)
	{
		___MyColor_8 = value;
	}

	inline static int32_t get_offset_of_U3CColorPickedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___U3CColorPickedU3Ek__BackingField_9)); }
	inline bool get_U3CColorPickedU3Ek__BackingField_9() const { return ___U3CColorPickedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CColorPickedU3Ek__BackingField_9() { return &___U3CColorPickedU3Ek__BackingField_9; }
	inline void set_U3CColorPickedU3Ek__BackingField_9(bool value)
	{
		___U3CColorPickedU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
