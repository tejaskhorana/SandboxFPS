#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t3371348110;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorkerMenu
struct  WorkerMenu_t1608960541  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GUISkin WorkerMenu::Skin
	GUISkin_t3371348110 * ___Skin_2;
	// UnityEngine.Vector2 WorkerMenu::WidthAndHeight
	Vector2_t4282066565  ___WidthAndHeight_3;
	// System.String WorkerMenu::roomName
	String_t* ___roomName_4;
	// UnityEngine.Vector2 WorkerMenu::scrollPos
	Vector2_t4282066565  ___scrollPos_5;
	// System.Boolean WorkerMenu::connectFailed
	bool ___connectFailed_6;
	// System.String WorkerMenu::errorDialog
	String_t* ___errorDialog_9;
	// System.Double WorkerMenu::timeToClearDialog
	double ___timeToClearDialog_10;

public:
	inline static int32_t get_offset_of_Skin_2() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___Skin_2)); }
	inline GUISkin_t3371348110 * get_Skin_2() const { return ___Skin_2; }
	inline GUISkin_t3371348110 ** get_address_of_Skin_2() { return &___Skin_2; }
	inline void set_Skin_2(GUISkin_t3371348110 * value)
	{
		___Skin_2 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_2, value);
	}

	inline static int32_t get_offset_of_WidthAndHeight_3() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___WidthAndHeight_3)); }
	inline Vector2_t4282066565  get_WidthAndHeight_3() const { return ___WidthAndHeight_3; }
	inline Vector2_t4282066565 * get_address_of_WidthAndHeight_3() { return &___WidthAndHeight_3; }
	inline void set_WidthAndHeight_3(Vector2_t4282066565  value)
	{
		___WidthAndHeight_3 = value;
	}

	inline static int32_t get_offset_of_roomName_4() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___roomName_4)); }
	inline String_t* get_roomName_4() const { return ___roomName_4; }
	inline String_t** get_address_of_roomName_4() { return &___roomName_4; }
	inline void set_roomName_4(String_t* value)
	{
		___roomName_4 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_4, value);
	}

	inline static int32_t get_offset_of_scrollPos_5() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___scrollPos_5)); }
	inline Vector2_t4282066565  get_scrollPos_5() const { return ___scrollPos_5; }
	inline Vector2_t4282066565 * get_address_of_scrollPos_5() { return &___scrollPos_5; }
	inline void set_scrollPos_5(Vector2_t4282066565  value)
	{
		___scrollPos_5 = value;
	}

	inline static int32_t get_offset_of_connectFailed_6() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___connectFailed_6)); }
	inline bool get_connectFailed_6() const { return ___connectFailed_6; }
	inline bool* get_address_of_connectFailed_6() { return &___connectFailed_6; }
	inline void set_connectFailed_6(bool value)
	{
		___connectFailed_6 = value;
	}

	inline static int32_t get_offset_of_errorDialog_9() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___errorDialog_9)); }
	inline String_t* get_errorDialog_9() const { return ___errorDialog_9; }
	inline String_t** get_address_of_errorDialog_9() { return &___errorDialog_9; }
	inline void set_errorDialog_9(String_t* value)
	{
		___errorDialog_9 = value;
		Il2CppCodeGenWriteBarrier(&___errorDialog_9, value);
	}

	inline static int32_t get_offset_of_timeToClearDialog_10() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___timeToClearDialog_10)); }
	inline double get_timeToClearDialog_10() const { return ___timeToClearDialog_10; }
	inline double* get_address_of_timeToClearDialog_10() { return &___timeToClearDialog_10; }
	inline void set_timeToClearDialog_10(double value)
	{
		___timeToClearDialog_10 = value;
	}
};

struct WorkerMenu_t1608960541_StaticFields
{
public:
	// System.String WorkerMenu::SceneNameMenu
	String_t* ___SceneNameMenu_7;
	// System.String WorkerMenu::SceneNameGame
	String_t* ___SceneNameGame_8;

public:
	inline static int32_t get_offset_of_SceneNameMenu_7() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541_StaticFields, ___SceneNameMenu_7)); }
	inline String_t* get_SceneNameMenu_7() const { return ___SceneNameMenu_7; }
	inline String_t** get_address_of_SceneNameMenu_7() { return &___SceneNameMenu_7; }
	inline void set_SceneNameMenu_7(String_t* value)
	{
		___SceneNameMenu_7 = value;
		Il2CppCodeGenWriteBarrier(&___SceneNameMenu_7, value);
	}

	inline static int32_t get_offset_of_SceneNameGame_8() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541_StaticFields, ___SceneNameGame_8)); }
	inline String_t* get_SceneNameGame_8() const { return ___SceneNameGame_8; }
	inline String_t** get_address_of_SceneNameGame_8() { return &___SceneNameGame_8; }
	inline void set_SceneNameGame_8(String_t* value)
	{
		___SceneNameGame_8 = value;
		Il2CppCodeGenWriteBarrier(&___SceneNameGame_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
