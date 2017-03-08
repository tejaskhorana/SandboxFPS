#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// TypedLobby
struct TypedLobby_t1020404140;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_MatchmakingMode910646995.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpJoinRandomRoomParams
struct  OpJoinRandomRoomParams_t1498792015  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Hashtable OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_t284945826 * ___ExpectedCustomRoomProperties_0;
	// System.Byte OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// MatchmakingMode OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// TypedLobby OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t1020404140 * ___TypedLobby_3;
	// System.String OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t4054002952* ___ExpectedUsers_5;

public:
	inline static int32_t get_offset_of_ExpectedCustomRoomProperties_0() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___ExpectedCustomRoomProperties_0)); }
	inline Hashtable_t284945826 * get_ExpectedCustomRoomProperties_0() const { return ___ExpectedCustomRoomProperties_0; }
	inline Hashtable_t284945826 ** get_address_of_ExpectedCustomRoomProperties_0() { return &___ExpectedCustomRoomProperties_0; }
	inline void set_ExpectedCustomRoomProperties_0(Hashtable_t284945826 * value)
	{
		___ExpectedCustomRoomProperties_0 = value;
		Il2CppCodeGenWriteBarrier(&___ExpectedCustomRoomProperties_0, value);
	}

	inline static int32_t get_offset_of_ExpectedMaxPlayers_1() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___ExpectedMaxPlayers_1)); }
	inline uint8_t get_ExpectedMaxPlayers_1() const { return ___ExpectedMaxPlayers_1; }
	inline uint8_t* get_address_of_ExpectedMaxPlayers_1() { return &___ExpectedMaxPlayers_1; }
	inline void set_ExpectedMaxPlayers_1(uint8_t value)
	{
		___ExpectedMaxPlayers_1 = value;
	}

	inline static int32_t get_offset_of_MatchingType_2() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___MatchingType_2)); }
	inline uint8_t get_MatchingType_2() const { return ___MatchingType_2; }
	inline uint8_t* get_address_of_MatchingType_2() { return &___MatchingType_2; }
	inline void set_MatchingType_2(uint8_t value)
	{
		___MatchingType_2 = value;
	}

	inline static int32_t get_offset_of_TypedLobby_3() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___TypedLobby_3)); }
	inline TypedLobby_t1020404140 * get_TypedLobby_3() const { return ___TypedLobby_3; }
	inline TypedLobby_t1020404140 ** get_address_of_TypedLobby_3() { return &___TypedLobby_3; }
	inline void set_TypedLobby_3(TypedLobby_t1020404140 * value)
	{
		___TypedLobby_3 = value;
		Il2CppCodeGenWriteBarrier(&___TypedLobby_3, value);
	}

	inline static int32_t get_offset_of_SqlLobbyFilter_4() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___SqlLobbyFilter_4)); }
	inline String_t* get_SqlLobbyFilter_4() const { return ___SqlLobbyFilter_4; }
	inline String_t** get_address_of_SqlLobbyFilter_4() { return &___SqlLobbyFilter_4; }
	inline void set_SqlLobbyFilter_4(String_t* value)
	{
		___SqlLobbyFilter_4 = value;
		Il2CppCodeGenWriteBarrier(&___SqlLobbyFilter_4, value);
	}

	inline static int32_t get_offset_of_ExpectedUsers_5() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t1498792015, ___ExpectedUsers_5)); }
	inline StringU5BU5D_t4054002952* get_ExpectedUsers_5() const { return ___ExpectedUsers_5; }
	inline StringU5BU5D_t4054002952** get_address_of_ExpectedUsers_5() { return &___ExpectedUsers_5; }
	inline void set_ExpectedUsers_5(StringU5BU5D_t4054002952* value)
	{
		___ExpectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier(&___ExpectedUsers_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
