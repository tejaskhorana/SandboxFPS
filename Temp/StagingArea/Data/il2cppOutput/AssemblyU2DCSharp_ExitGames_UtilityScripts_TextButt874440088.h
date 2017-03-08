#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.UtilityScripts.TextButtonTransition
struct  TextButtonTransition_t874440088  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text ExitGames.UtilityScripts.TextButtonTransition::_text
	Text_t9039225 * ____text_2;
	// UnityEngine.Color ExitGames.UtilityScripts.TextButtonTransition::NormalColor
	Color_t4194546905  ___NormalColor_3;
	// UnityEngine.Color ExitGames.UtilityScripts.TextButtonTransition::HoverColor
	Color_t4194546905  ___HoverColor_4;

public:
	inline static int32_t get_offset_of__text_2() { return static_cast<int32_t>(offsetof(TextButtonTransition_t874440088, ____text_2)); }
	inline Text_t9039225 * get__text_2() const { return ____text_2; }
	inline Text_t9039225 ** get_address_of__text_2() { return &____text_2; }
	inline void set__text_2(Text_t9039225 * value)
	{
		____text_2 = value;
		Il2CppCodeGenWriteBarrier(&____text_2, value);
	}

	inline static int32_t get_offset_of_NormalColor_3() { return static_cast<int32_t>(offsetof(TextButtonTransition_t874440088, ___NormalColor_3)); }
	inline Color_t4194546905  get_NormalColor_3() const { return ___NormalColor_3; }
	inline Color_t4194546905 * get_address_of_NormalColor_3() { return &___NormalColor_3; }
	inline void set_NormalColor_3(Color_t4194546905  value)
	{
		___NormalColor_3 = value;
	}

	inline static int32_t get_offset_of_HoverColor_4() { return static_cast<int32_t>(offsetof(TextButtonTransition_t874440088, ___HoverColor_4)); }
	inline Color_t4194546905  get_HoverColor_4() const { return ___HoverColor_4; }
	inline Color_t4194546905 * get_address_of_HoverColor_4() { return &___HoverColor_4; }
	inline void set_HoverColor_4(Color_t4194546905  value)
	{
		___HoverColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
