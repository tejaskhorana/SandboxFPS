#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InRoomChat
struct  InRoomChat_t1473706808  : public MonoBehaviour_t2824676508
{
public:
	// UnityEngine.Rect InRoomChat::GuiRect
	Rect_t4241904616  ___GuiRect_3;
	// System.Boolean InRoomChat::IsVisible
	bool ___IsVisible_4;
	// System.Boolean InRoomChat::AlignBottom
	bool ___AlignBottom_5;
	// System.Collections.Generic.List`1<System.String> InRoomChat::messages
	List_1_t1375417109 * ___messages_6;
	// System.String InRoomChat::inputLine
	String_t* ___inputLine_7;
	// UnityEngine.Vector2 InRoomChat::scrollPos
	Vector2_t4282066565  ___scrollPos_8;

public:
	inline static int32_t get_offset_of_GuiRect_3() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___GuiRect_3)); }
	inline Rect_t4241904616  get_GuiRect_3() const { return ___GuiRect_3; }
	inline Rect_t4241904616 * get_address_of_GuiRect_3() { return &___GuiRect_3; }
	inline void set_GuiRect_3(Rect_t4241904616  value)
	{
		___GuiRect_3 = value;
	}

	inline static int32_t get_offset_of_IsVisible_4() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___IsVisible_4)); }
	inline bool get_IsVisible_4() const { return ___IsVisible_4; }
	inline bool* get_address_of_IsVisible_4() { return &___IsVisible_4; }
	inline void set_IsVisible_4(bool value)
	{
		___IsVisible_4 = value;
	}

	inline static int32_t get_offset_of_AlignBottom_5() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___AlignBottom_5)); }
	inline bool get_AlignBottom_5() const { return ___AlignBottom_5; }
	inline bool* get_address_of_AlignBottom_5() { return &___AlignBottom_5; }
	inline void set_AlignBottom_5(bool value)
	{
		___AlignBottom_5 = value;
	}

	inline static int32_t get_offset_of_messages_6() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___messages_6)); }
	inline List_1_t1375417109 * get_messages_6() const { return ___messages_6; }
	inline List_1_t1375417109 ** get_address_of_messages_6() { return &___messages_6; }
	inline void set_messages_6(List_1_t1375417109 * value)
	{
		___messages_6 = value;
		Il2CppCodeGenWriteBarrier(&___messages_6, value);
	}

	inline static int32_t get_offset_of_inputLine_7() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___inputLine_7)); }
	inline String_t* get_inputLine_7() const { return ___inputLine_7; }
	inline String_t** get_address_of_inputLine_7() { return &___inputLine_7; }
	inline void set_inputLine_7(String_t* value)
	{
		___inputLine_7 = value;
		Il2CppCodeGenWriteBarrier(&___inputLine_7, value);
	}

	inline static int32_t get_offset_of_scrollPos_8() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808, ___scrollPos_8)); }
	inline Vector2_t4282066565  get_scrollPos_8() const { return ___scrollPos_8; }
	inline Vector2_t4282066565 * get_address_of_scrollPos_8() { return &___scrollPos_8; }
	inline void set_scrollPos_8(Vector2_t4282066565  value)
	{
		___scrollPos_8 = value;
	}
};

struct InRoomChat_t1473706808_StaticFields
{
public:
	// System.String InRoomChat::ChatRPC
	String_t* ___ChatRPC_9;

public:
	inline static int32_t get_offset_of_ChatRPC_9() { return static_cast<int32_t>(offsetof(InRoomChat_t1473706808_StaticFields, ___ChatRPC_9)); }
	inline String_t* get_ChatRPC_9() const { return ___ChatRPC_9; }
	inline String_t** get_address_of_ChatRPC_9() { return &___ChatRPC_9; }
	inline void set_ChatRPC_9(String_t* value)
	{
		___ChatRPC_9 = value;
		Il2CppCodeGenWriteBarrier(&___ChatRPC_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
