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
// RoomOptions
struct RoomOptions_t979675427;
// TypedLobby
struct TypedLobby_t1020404140;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnterRoomParams
struct  EnterRoomParams_t1470694169  : public Il2CppObject
{
public:
	// System.String EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// RoomOptions EnterRoomParams::RoomOptions
	RoomOptions_t979675427 * ___RoomOptions_1;
	// TypedLobby EnterRoomParams::Lobby
	TypedLobby_t1020404140 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable EnterRoomParams::PlayerProperties
	Hashtable_t284945826 * ___PlayerProperties_3;
	// System.Boolean EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// System.Boolean EnterRoomParams::CreateIfNotExists
	bool ___CreateIfNotExists_5;
	// System.Boolean EnterRoomParams::RejoinOnly
	bool ___RejoinOnly_6;
	// System.String[] EnterRoomParams::ExpectedUsers
	StringU5BU5D_t4054002952* ___ExpectedUsers_7;

public:
	inline static int32_t get_offset_of_RoomName_0() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___RoomName_0)); }
	inline String_t* get_RoomName_0() const { return ___RoomName_0; }
	inline String_t** get_address_of_RoomName_0() { return &___RoomName_0; }
	inline void set_RoomName_0(String_t* value)
	{
		___RoomName_0 = value;
		Il2CppCodeGenWriteBarrier(&___RoomName_0, value);
	}

	inline static int32_t get_offset_of_RoomOptions_1() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___RoomOptions_1)); }
	inline RoomOptions_t979675427 * get_RoomOptions_1() const { return ___RoomOptions_1; }
	inline RoomOptions_t979675427 ** get_address_of_RoomOptions_1() { return &___RoomOptions_1; }
	inline void set_RoomOptions_1(RoomOptions_t979675427 * value)
	{
		___RoomOptions_1 = value;
		Il2CppCodeGenWriteBarrier(&___RoomOptions_1, value);
	}

	inline static int32_t get_offset_of_Lobby_2() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___Lobby_2)); }
	inline TypedLobby_t1020404140 * get_Lobby_2() const { return ___Lobby_2; }
	inline TypedLobby_t1020404140 ** get_address_of_Lobby_2() { return &___Lobby_2; }
	inline void set_Lobby_2(TypedLobby_t1020404140 * value)
	{
		___Lobby_2 = value;
		Il2CppCodeGenWriteBarrier(&___Lobby_2, value);
	}

	inline static int32_t get_offset_of_PlayerProperties_3() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___PlayerProperties_3)); }
	inline Hashtable_t284945826 * get_PlayerProperties_3() const { return ___PlayerProperties_3; }
	inline Hashtable_t284945826 ** get_address_of_PlayerProperties_3() { return &___PlayerProperties_3; }
	inline void set_PlayerProperties_3(Hashtable_t284945826 * value)
	{
		___PlayerProperties_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerProperties_3, value);
	}

	inline static int32_t get_offset_of_OnGameServer_4() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___OnGameServer_4)); }
	inline bool get_OnGameServer_4() const { return ___OnGameServer_4; }
	inline bool* get_address_of_OnGameServer_4() { return &___OnGameServer_4; }
	inline void set_OnGameServer_4(bool value)
	{
		___OnGameServer_4 = value;
	}

	inline static int32_t get_offset_of_CreateIfNotExists_5() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___CreateIfNotExists_5)); }
	inline bool get_CreateIfNotExists_5() const { return ___CreateIfNotExists_5; }
	inline bool* get_address_of_CreateIfNotExists_5() { return &___CreateIfNotExists_5; }
	inline void set_CreateIfNotExists_5(bool value)
	{
		___CreateIfNotExists_5 = value;
	}

	inline static int32_t get_offset_of_RejoinOnly_6() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___RejoinOnly_6)); }
	inline bool get_RejoinOnly_6() const { return ___RejoinOnly_6; }
	inline bool* get_address_of_RejoinOnly_6() { return &___RejoinOnly_6; }
	inline void set_RejoinOnly_6(bool value)
	{
		___RejoinOnly_6 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_7() { return static_cast<int32_t>(offsetof(EnterRoomParams_t1470694169, ___ExpectedUsers_7)); }
	inline StringU5BU5D_t4054002952* get_ExpectedUsers_7() const { return ___ExpectedUsers_7; }
	inline StringU5BU5D_t4054002952** get_address_of_ExpectedUsers_7() { return &___ExpectedUsers_7; }
	inline void set_ExpectedUsers_7(StringU5BU5D_t4054002952* value)
	{
		___ExpectedUsers_7 = value;
		Il2CppCodeGenWriteBarrier(&___ExpectedUsers_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
