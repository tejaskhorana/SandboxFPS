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
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomOptions
struct  RoomOptions_t979675427  : public Il2CppObject
{
public:
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField_0;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField_1;
	// System.Byte RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField_5;
	// ExitGames.Client.Photon.Hashtable RoomOptions::CustomRoomProperties
	Hashtable_t284945826 * ___CustomRoomProperties_6;
	// System.String[] RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t4054002952* ___CustomRoomPropertiesForLobby_7;
	// System.String[] RoomOptions::Plugins
	StringU5BU5D_t4054002952* ___Plugins_8;
	// System.Boolean RoomOptions::suppressRoomEventsField
	bool ___suppressRoomEventsField_9;
	// System.Boolean RoomOptions::publishUserIdField
	bool ___publishUserIdField_10;

public:
	inline static int32_t get_offset_of_isVisibleField_0() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___isVisibleField_0)); }
	inline bool get_isVisibleField_0() const { return ___isVisibleField_0; }
	inline bool* get_address_of_isVisibleField_0() { return &___isVisibleField_0; }
	inline void set_isVisibleField_0(bool value)
	{
		___isVisibleField_0 = value;
	}

	inline static int32_t get_offset_of_isOpenField_1() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___isOpenField_1)); }
	inline bool get_isOpenField_1() const { return ___isOpenField_1; }
	inline bool* get_address_of_isOpenField_1() { return &___isOpenField_1; }
	inline void set_isOpenField_1(bool value)
	{
		___isOpenField_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeaveField_5() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___cleanupCacheOnLeaveField_5)); }
	inline bool get_cleanupCacheOnLeaveField_5() const { return ___cleanupCacheOnLeaveField_5; }
	inline bool* get_address_of_cleanupCacheOnLeaveField_5() { return &___cleanupCacheOnLeaveField_5; }
	inline void set_cleanupCacheOnLeaveField_5(bool value)
	{
		___cleanupCacheOnLeaveField_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___CustomRoomProperties_6)); }
	inline Hashtable_t284945826 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t284945826 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t284945826 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier(&___CustomRoomProperties_6, value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t4054002952* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t4054002952** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t4054002952* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier(&___CustomRoomPropertiesForLobby_7, value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___Plugins_8)); }
	inline StringU5BU5D_t4054002952* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t4054002952** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t4054002952* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier(&___Plugins_8, value);
	}

	inline static int32_t get_offset_of_suppressRoomEventsField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___suppressRoomEventsField_9)); }
	inline bool get_suppressRoomEventsField_9() const { return ___suppressRoomEventsField_9; }
	inline bool* get_address_of_suppressRoomEventsField_9() { return &___suppressRoomEventsField_9; }
	inline void set_suppressRoomEventsField_9(bool value)
	{
		___suppressRoomEventsField_9 = value;
	}

	inline static int32_t get_offset_of_publishUserIdField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___publishUserIdField_10)); }
	inline bool get_publishUserIdField_10() const { return ___publishUserIdField_10; }
	inline bool* get_address_of_publishUserIdField_10() { return &___publishUserIdField_10; }
	inline void set_publishUserIdField_10(bool value)
	{
		___publishUserIdField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
