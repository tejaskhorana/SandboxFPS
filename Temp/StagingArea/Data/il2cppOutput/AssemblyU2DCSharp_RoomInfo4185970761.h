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
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomInfo
struct  RoomInfo_t4185970761  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t284945826 * ___customPropertiesField_0;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField_1;
	// System.String[] RoomInfo::expectedUsersField
	StringU5BU5D_t4054002952* ___expectedUsersField_2;
	// System.Boolean RoomInfo::openField
	bool ___openField_3;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField_4;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField_5;
	// System.String RoomInfo::nameField
	String_t* ___nameField_6;
	// System.Int32 RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_7;
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField_8;
	// System.Boolean RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_9;
	// System.Int32 RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_10;
	// System.Boolean RoomInfo::<IsLocalClientInside>k__BackingField
	bool ___U3CIsLocalClientInsideU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_customPropertiesField_0() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___customPropertiesField_0)); }
	inline Hashtable_t284945826 * get_customPropertiesField_0() const { return ___customPropertiesField_0; }
	inline Hashtable_t284945826 ** get_address_of_customPropertiesField_0() { return &___customPropertiesField_0; }
	inline void set_customPropertiesField_0(Hashtable_t284945826 * value)
	{
		___customPropertiesField_0 = value;
		Il2CppCodeGenWriteBarrier(&___customPropertiesField_0, value);
	}

	inline static int32_t get_offset_of_maxPlayersField_1() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___maxPlayersField_1)); }
	inline uint8_t get_maxPlayersField_1() const { return ___maxPlayersField_1; }
	inline uint8_t* get_address_of_maxPlayersField_1() { return &___maxPlayersField_1; }
	inline void set_maxPlayersField_1(uint8_t value)
	{
		___maxPlayersField_1 = value;
	}

	inline static int32_t get_offset_of_expectedUsersField_2() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___expectedUsersField_2)); }
	inline StringU5BU5D_t4054002952* get_expectedUsersField_2() const { return ___expectedUsersField_2; }
	inline StringU5BU5D_t4054002952** get_address_of_expectedUsersField_2() { return &___expectedUsersField_2; }
	inline void set_expectedUsersField_2(StringU5BU5D_t4054002952* value)
	{
		___expectedUsersField_2 = value;
		Il2CppCodeGenWriteBarrier(&___expectedUsersField_2, value);
	}

	inline static int32_t get_offset_of_openField_3() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___openField_3)); }
	inline bool get_openField_3() const { return ___openField_3; }
	inline bool* get_address_of_openField_3() { return &___openField_3; }
	inline void set_openField_3(bool value)
	{
		___openField_3 = value;
	}

	inline static int32_t get_offset_of_visibleField_4() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___visibleField_4)); }
	inline bool get_visibleField_4() const { return ___visibleField_4; }
	inline bool* get_address_of_visibleField_4() { return &___visibleField_4; }
	inline void set_visibleField_4(bool value)
	{
		___visibleField_4 = value;
	}

	inline static int32_t get_offset_of_autoCleanUpField_5() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___autoCleanUpField_5)); }
	inline bool get_autoCleanUpField_5() const { return ___autoCleanUpField_5; }
	inline bool* get_address_of_autoCleanUpField_5() { return &___autoCleanUpField_5; }
	inline void set_autoCleanUpField_5(bool value)
	{
		___autoCleanUpField_5 = value;
	}

	inline static int32_t get_offset_of_nameField_6() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___nameField_6)); }
	inline String_t* get_nameField_6() const { return ___nameField_6; }
	inline String_t** get_address_of_nameField_6() { return &___nameField_6; }
	inline void set_nameField_6(String_t* value)
	{
		___nameField_6 = value;
		Il2CppCodeGenWriteBarrier(&___nameField_6, value);
	}

	inline static int32_t get_offset_of_masterClientIdField_7() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___masterClientIdField_7)); }
	inline int32_t get_masterClientIdField_7() const { return ___masterClientIdField_7; }
	inline int32_t* get_address_of_masterClientIdField_7() { return &___masterClientIdField_7; }
	inline void set_masterClientIdField_7(int32_t value)
	{
		___masterClientIdField_7 = value;
	}

	inline static int32_t get_offset_of_U3CremovedFromListU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CremovedFromListU3Ek__BackingField_8)); }
	inline bool get_U3CremovedFromListU3Ek__BackingField_8() const { return ___U3CremovedFromListU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CremovedFromListU3Ek__BackingField_8() { return &___U3CremovedFromListU3Ek__BackingField_8; }
	inline void set_U3CremovedFromListU3Ek__BackingField_8(bool value)
	{
		___U3CremovedFromListU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CserverSideMasterClientU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CserverSideMasterClientU3Ek__BackingField_9)); }
	inline bool get_U3CserverSideMasterClientU3Ek__BackingField_9() const { return ___U3CserverSideMasterClientU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CserverSideMasterClientU3Ek__BackingField_9() { return &___U3CserverSideMasterClientU3Ek__BackingField_9; }
	inline void set_U3CserverSideMasterClientU3Ek__BackingField_9(bool value)
	{
		___U3CserverSideMasterClientU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CPlayerCountU3Ek__BackingField_10)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_10() const { return ___U3CPlayerCountU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_10() { return &___U3CPlayerCountU3Ek__BackingField_10; }
	inline void set_U3CPlayerCountU3Ek__BackingField_10(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CIsLocalClientInsideU3Ek__BackingField_11)); }
	inline bool get_U3CIsLocalClientInsideU3Ek__BackingField_11() const { return ___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return &___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline void set_U3CIsLocalClientInsideU3Ek__BackingField_11(bool value)
	{
		___U3CIsLocalClientInsideU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
