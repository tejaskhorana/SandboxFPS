#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIFriendFinding
struct  GUIFriendFinding_t1593776560  : public MonoBehaviour_t667441552
{
public:
	// System.String[] GUIFriendFinding::friendListOfSomeCommunity
	StringU5BU5D_t4054002952* ___friendListOfSomeCommunity_2;
	// UnityEngine.Rect GUIFriendFinding::GuiRect
	Rect_t4241904616  ___GuiRect_3;
	// System.String GUIFriendFinding::ExpectedUsers
	String_t* ___ExpectedUsers_4;

public:
	inline static int32_t get_offset_of_friendListOfSomeCommunity_2() { return static_cast<int32_t>(offsetof(GUIFriendFinding_t1593776560, ___friendListOfSomeCommunity_2)); }
	inline StringU5BU5D_t4054002952* get_friendListOfSomeCommunity_2() const { return ___friendListOfSomeCommunity_2; }
	inline StringU5BU5D_t4054002952** get_address_of_friendListOfSomeCommunity_2() { return &___friendListOfSomeCommunity_2; }
	inline void set_friendListOfSomeCommunity_2(StringU5BU5D_t4054002952* value)
	{
		___friendListOfSomeCommunity_2 = value;
		Il2CppCodeGenWriteBarrier(&___friendListOfSomeCommunity_2, value);
	}

	inline static int32_t get_offset_of_GuiRect_3() { return static_cast<int32_t>(offsetof(GUIFriendFinding_t1593776560, ___GuiRect_3)); }
	inline Rect_t4241904616  get_GuiRect_3() const { return ___GuiRect_3; }
	inline Rect_t4241904616 * get_address_of_GuiRect_3() { return &___GuiRect_3; }
	inline void set_GuiRect_3(Rect_t4241904616  value)
	{
		___GuiRect_3 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_4() { return static_cast<int32_t>(offsetof(GUIFriendFinding_t1593776560, ___ExpectedUsers_4)); }
	inline String_t* get_ExpectedUsers_4() const { return ___ExpectedUsers_4; }
	inline String_t** get_address_of_ExpectedUsers_4() { return &___ExpectedUsers_4; }
	inline void set_ExpectedUsers_4(String_t* value)
	{
		___ExpectedUsers_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExpectedUsers_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
