#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.NCommand
struct  NCommand_t1640975507  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags_0;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType_6;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID_17;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber_18;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber_19;
	// System.Int32 ExitGames.Client.Photon.NCommand::unsequencedGroupNumber
	int32_t ___unsequencedGroupNumber_20;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte_21;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber_22;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount_23;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber_24;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength_25;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset_26;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining_27;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime_28;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount_29;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout_30;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime_31;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber_32;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime_33;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size_45;
	// System.Byte[] ExitGames.Client.Photon.NCommand::commandHeader
	ByteU5BU5D_t4260760469* ___commandHeader_46;
	// System.Int32 ExitGames.Client.Photon.NCommand::SizeOfHeader
	int32_t ___SizeOfHeader_47;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t4260760469* ___Payload_48;

public:
	inline static int32_t get_offset_of_commandFlags_0() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandFlags_0)); }
	inline uint8_t get_commandFlags_0() const { return ___commandFlags_0; }
	inline uint8_t* get_address_of_commandFlags_0() { return &___commandFlags_0; }
	inline void set_commandFlags_0(uint8_t value)
	{
		___commandFlags_0 = value;
	}

	inline static int32_t get_offset_of_commandType_6() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandType_6)); }
	inline uint8_t get_commandType_6() const { return ___commandType_6; }
	inline uint8_t* get_address_of_commandType_6() { return &___commandType_6; }
	inline void set_commandType_6(uint8_t value)
	{
		___commandType_6 = value;
	}

	inline static int32_t get_offset_of_commandChannelID_17() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandChannelID_17)); }
	inline uint8_t get_commandChannelID_17() const { return ___commandChannelID_17; }
	inline uint8_t* get_address_of_commandChannelID_17() { return &___commandChannelID_17; }
	inline void set_commandChannelID_17(uint8_t value)
	{
		___commandChannelID_17 = value;
	}

	inline static int32_t get_offset_of_reliableSequenceNumber_18() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___reliableSequenceNumber_18)); }
	inline int32_t get_reliableSequenceNumber_18() const { return ___reliableSequenceNumber_18; }
	inline int32_t* get_address_of_reliableSequenceNumber_18() { return &___reliableSequenceNumber_18; }
	inline void set_reliableSequenceNumber_18(int32_t value)
	{
		___reliableSequenceNumber_18 = value;
	}

	inline static int32_t get_offset_of_unreliableSequenceNumber_19() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___unreliableSequenceNumber_19)); }
	inline int32_t get_unreliableSequenceNumber_19() const { return ___unreliableSequenceNumber_19; }
	inline int32_t* get_address_of_unreliableSequenceNumber_19() { return &___unreliableSequenceNumber_19; }
	inline void set_unreliableSequenceNumber_19(int32_t value)
	{
		___unreliableSequenceNumber_19 = value;
	}

	inline static int32_t get_offset_of_unsequencedGroupNumber_20() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___unsequencedGroupNumber_20)); }
	inline int32_t get_unsequencedGroupNumber_20() const { return ___unsequencedGroupNumber_20; }
	inline int32_t* get_address_of_unsequencedGroupNumber_20() { return &___unsequencedGroupNumber_20; }
	inline void set_unsequencedGroupNumber_20(int32_t value)
	{
		___unsequencedGroupNumber_20 = value;
	}

	inline static int32_t get_offset_of_reservedByte_21() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___reservedByte_21)); }
	inline uint8_t get_reservedByte_21() const { return ___reservedByte_21; }
	inline uint8_t* get_address_of_reservedByte_21() { return &___reservedByte_21; }
	inline void set_reservedByte_21(uint8_t value)
	{
		___reservedByte_21 = value;
	}

	inline static int32_t get_offset_of_startSequenceNumber_22() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___startSequenceNumber_22)); }
	inline int32_t get_startSequenceNumber_22() const { return ___startSequenceNumber_22; }
	inline int32_t* get_address_of_startSequenceNumber_22() { return &___startSequenceNumber_22; }
	inline void set_startSequenceNumber_22(int32_t value)
	{
		___startSequenceNumber_22 = value;
	}

	inline static int32_t get_offset_of_fragmentCount_23() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___fragmentCount_23)); }
	inline int32_t get_fragmentCount_23() const { return ___fragmentCount_23; }
	inline int32_t* get_address_of_fragmentCount_23() { return &___fragmentCount_23; }
	inline void set_fragmentCount_23(int32_t value)
	{
		___fragmentCount_23 = value;
	}

	inline static int32_t get_offset_of_fragmentNumber_24() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___fragmentNumber_24)); }
	inline int32_t get_fragmentNumber_24() const { return ___fragmentNumber_24; }
	inline int32_t* get_address_of_fragmentNumber_24() { return &___fragmentNumber_24; }
	inline void set_fragmentNumber_24(int32_t value)
	{
		___fragmentNumber_24 = value;
	}

	inline static int32_t get_offset_of_totalLength_25() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___totalLength_25)); }
	inline int32_t get_totalLength_25() const { return ___totalLength_25; }
	inline int32_t* get_address_of_totalLength_25() { return &___totalLength_25; }
	inline void set_totalLength_25(int32_t value)
	{
		___totalLength_25 = value;
	}

	inline static int32_t get_offset_of_fragmentOffset_26() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___fragmentOffset_26)); }
	inline int32_t get_fragmentOffset_26() const { return ___fragmentOffset_26; }
	inline int32_t* get_address_of_fragmentOffset_26() { return &___fragmentOffset_26; }
	inline void set_fragmentOffset_26(int32_t value)
	{
		___fragmentOffset_26 = value;
	}

	inline static int32_t get_offset_of_fragmentsRemaining_27() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___fragmentsRemaining_27)); }
	inline int32_t get_fragmentsRemaining_27() const { return ___fragmentsRemaining_27; }
	inline int32_t* get_address_of_fragmentsRemaining_27() { return &___fragmentsRemaining_27; }
	inline void set_fragmentsRemaining_27(int32_t value)
	{
		___fragmentsRemaining_27 = value;
	}

	inline static int32_t get_offset_of_commandSentTime_28() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandSentTime_28)); }
	inline int32_t get_commandSentTime_28() const { return ___commandSentTime_28; }
	inline int32_t* get_address_of_commandSentTime_28() { return &___commandSentTime_28; }
	inline void set_commandSentTime_28(int32_t value)
	{
		___commandSentTime_28 = value;
	}

	inline static int32_t get_offset_of_commandSentCount_29() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandSentCount_29)); }
	inline uint8_t get_commandSentCount_29() const { return ___commandSentCount_29; }
	inline uint8_t* get_address_of_commandSentCount_29() { return &___commandSentCount_29; }
	inline void set_commandSentCount_29(uint8_t value)
	{
		___commandSentCount_29 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeout_30() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___roundTripTimeout_30)); }
	inline int32_t get_roundTripTimeout_30() const { return ___roundTripTimeout_30; }
	inline int32_t* get_address_of_roundTripTimeout_30() { return &___roundTripTimeout_30; }
	inline void set_roundTripTimeout_30(int32_t value)
	{
		___roundTripTimeout_30 = value;
	}

	inline static int32_t get_offset_of_timeoutTime_31() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___timeoutTime_31)); }
	inline int32_t get_timeoutTime_31() const { return ___timeoutTime_31; }
	inline int32_t* get_address_of_timeoutTime_31() { return &___timeoutTime_31; }
	inline void set_timeoutTime_31(int32_t value)
	{
		___timeoutTime_31 = value;
	}

	inline static int32_t get_offset_of_ackReceivedReliableSequenceNumber_32() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___ackReceivedReliableSequenceNumber_32)); }
	inline int32_t get_ackReceivedReliableSequenceNumber_32() const { return ___ackReceivedReliableSequenceNumber_32; }
	inline int32_t* get_address_of_ackReceivedReliableSequenceNumber_32() { return &___ackReceivedReliableSequenceNumber_32; }
	inline void set_ackReceivedReliableSequenceNumber_32(int32_t value)
	{
		___ackReceivedReliableSequenceNumber_32 = value;
	}

	inline static int32_t get_offset_of_ackReceivedSentTime_33() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___ackReceivedSentTime_33)); }
	inline int32_t get_ackReceivedSentTime_33() const { return ___ackReceivedSentTime_33; }
	inline int32_t* get_address_of_ackReceivedSentTime_33() { return &___ackReceivedSentTime_33; }
	inline void set_ackReceivedSentTime_33(int32_t value)
	{
		___ackReceivedSentTime_33 = value;
	}

	inline static int32_t get_offset_of_Size_45() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___Size_45)); }
	inline int32_t get_Size_45() const { return ___Size_45; }
	inline int32_t* get_address_of_Size_45() { return &___Size_45; }
	inline void set_Size_45(int32_t value)
	{
		___Size_45 = value;
	}

	inline static int32_t get_offset_of_commandHeader_46() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___commandHeader_46)); }
	inline ByteU5BU5D_t4260760469* get_commandHeader_46() const { return ___commandHeader_46; }
	inline ByteU5BU5D_t4260760469** get_address_of_commandHeader_46() { return &___commandHeader_46; }
	inline void set_commandHeader_46(ByteU5BU5D_t4260760469* value)
	{
		___commandHeader_46 = value;
		Il2CppCodeGenWriteBarrier(&___commandHeader_46, value);
	}

	inline static int32_t get_offset_of_SizeOfHeader_47() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___SizeOfHeader_47)); }
	inline int32_t get_SizeOfHeader_47() const { return ___SizeOfHeader_47; }
	inline int32_t* get_address_of_SizeOfHeader_47() { return &___SizeOfHeader_47; }
	inline void set_SizeOfHeader_47(int32_t value)
	{
		___SizeOfHeader_47 = value;
	}

	inline static int32_t get_offset_of_Payload_48() { return static_cast<int32_t>(offsetof(NCommand_t1640975507, ___Payload_48)); }
	inline ByteU5BU5D_t4260760469* get_Payload_48() const { return ___Payload_48; }
	inline ByteU5BU5D_t4260760469** get_address_of_Payload_48() { return &___Payload_48; }
	inline void set_Payload_48(ByteU5BU5D_t4260760469* value)
	{
		___Payload_48 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
