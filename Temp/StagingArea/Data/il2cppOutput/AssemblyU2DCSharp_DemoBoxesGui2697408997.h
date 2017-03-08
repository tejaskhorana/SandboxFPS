#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t3371372606;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoBoxesGui
struct  DemoBoxesGui_t2697408997  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean DemoBoxesGui::HideUI
	bool ___HideUI_4;
	// UnityEngine.GUIText DemoBoxesGui::GuiTextForTips
	GUIText_t3371372606 * ___GuiTextForTips_5;
	// System.Int32 DemoBoxesGui::tipsIndex
	int32_t ___tipsIndex_6;
	// System.String[] DemoBoxesGui::tips
	StringU5BU5D_t4054002952* ___tips_7;
	// System.Single DemoBoxesGui::timeSinceLastTip
	float ___timeSinceLastTip_8;

public:
	inline static int32_t get_offset_of_HideUI_4() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___HideUI_4)); }
	inline bool get_HideUI_4() const { return ___HideUI_4; }
	inline bool* get_address_of_HideUI_4() { return &___HideUI_4; }
	inline void set_HideUI_4(bool value)
	{
		___HideUI_4 = value;
	}

	inline static int32_t get_offset_of_GuiTextForTips_5() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___GuiTextForTips_5)); }
	inline GUIText_t3371372606 * get_GuiTextForTips_5() const { return ___GuiTextForTips_5; }
	inline GUIText_t3371372606 ** get_address_of_GuiTextForTips_5() { return &___GuiTextForTips_5; }
	inline void set_GuiTextForTips_5(GUIText_t3371372606 * value)
	{
		___GuiTextForTips_5 = value;
		Il2CppCodeGenWriteBarrier(&___GuiTextForTips_5, value);
	}

	inline static int32_t get_offset_of_tipsIndex_6() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___tipsIndex_6)); }
	inline int32_t get_tipsIndex_6() const { return ___tipsIndex_6; }
	inline int32_t* get_address_of_tipsIndex_6() { return &___tipsIndex_6; }
	inline void set_tipsIndex_6(int32_t value)
	{
		___tipsIndex_6 = value;
	}

	inline static int32_t get_offset_of_tips_7() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___tips_7)); }
	inline StringU5BU5D_t4054002952* get_tips_7() const { return ___tips_7; }
	inline StringU5BU5D_t4054002952** get_address_of_tips_7() { return &___tips_7; }
	inline void set_tips_7(StringU5BU5D_t4054002952* value)
	{
		___tips_7 = value;
		Il2CppCodeGenWriteBarrier(&___tips_7, value);
	}

	inline static int32_t get_offset_of_timeSinceLastTip_8() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___timeSinceLastTip_8)); }
	inline float get_timeSinceLastTip_8() const { return ___timeSinceLastTip_8; }
	inline float* get_address_of_timeSinceLastTip_8() { return &___timeSinceLastTip_8; }
	inline void set_timeSinceLastTip_8(float value)
	{
		___timeSinceLastTip_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
