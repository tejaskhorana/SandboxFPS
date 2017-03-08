#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// UnityEngine.Font
struct Font_t4241557075;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowInfoOfPlayer
struct  ShowInfoOfPlayer_t3979915811  : public MonoBehaviour_t2824676508
{
public:
	// UnityEngine.GameObject ShowInfoOfPlayer::textGo
	GameObject_t3674682005 * ___textGo_3;
	// UnityEngine.TextMesh ShowInfoOfPlayer::tm
	TextMesh_t2567681854 * ___tm_4;
	// System.Single ShowInfoOfPlayer::CharacterSize
	float ___CharacterSize_5;
	// UnityEngine.Font ShowInfoOfPlayer::font
	Font_t4241557075 * ___font_6;
	// System.Boolean ShowInfoOfPlayer::DisableOnOwnObjects
	bool ___DisableOnOwnObjects_7;

public:
	inline static int32_t get_offset_of_textGo_3() { return static_cast<int32_t>(offsetof(ShowInfoOfPlayer_t3979915811, ___textGo_3)); }
	inline GameObject_t3674682005 * get_textGo_3() const { return ___textGo_3; }
	inline GameObject_t3674682005 ** get_address_of_textGo_3() { return &___textGo_3; }
	inline void set_textGo_3(GameObject_t3674682005 * value)
	{
		___textGo_3 = value;
		Il2CppCodeGenWriteBarrier(&___textGo_3, value);
	}

	inline static int32_t get_offset_of_tm_4() { return static_cast<int32_t>(offsetof(ShowInfoOfPlayer_t3979915811, ___tm_4)); }
	inline TextMesh_t2567681854 * get_tm_4() const { return ___tm_4; }
	inline TextMesh_t2567681854 ** get_address_of_tm_4() { return &___tm_4; }
	inline void set_tm_4(TextMesh_t2567681854 * value)
	{
		___tm_4 = value;
		Il2CppCodeGenWriteBarrier(&___tm_4, value);
	}

	inline static int32_t get_offset_of_CharacterSize_5() { return static_cast<int32_t>(offsetof(ShowInfoOfPlayer_t3979915811, ___CharacterSize_5)); }
	inline float get_CharacterSize_5() const { return ___CharacterSize_5; }
	inline float* get_address_of_CharacterSize_5() { return &___CharacterSize_5; }
	inline void set_CharacterSize_5(float value)
	{
		___CharacterSize_5 = value;
	}

	inline static int32_t get_offset_of_font_6() { return static_cast<int32_t>(offsetof(ShowInfoOfPlayer_t3979915811, ___font_6)); }
	inline Font_t4241557075 * get_font_6() const { return ___font_6; }
	inline Font_t4241557075 ** get_address_of_font_6() { return &___font_6; }
	inline void set_font_6(Font_t4241557075 * value)
	{
		___font_6 = value;
		Il2CppCodeGenWriteBarrier(&___font_6, value);
	}

	inline static int32_t get_offset_of_DisableOnOwnObjects_7() { return static_cast<int32_t>(offsetof(ShowInfoOfPlayer_t3979915811, ___DisableOnOwnObjects_7)); }
	inline bool get_DisableOnOwnObjects_7() const { return ___DisableOnOwnObjects_7; }
	inline bool* get_address_of_DisableOnOwnObjects_7() { return &___DisableOnOwnObjects_7; }
	inline void set_DisableOnOwnObjects_7(bool value)
	{
		___DisableOnOwnObjects_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
