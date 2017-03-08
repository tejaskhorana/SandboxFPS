#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct Dictionary_2_t1638238746;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t3877217936;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EnetChannel
struct  EnetChannel_t1847717741  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.EnetChannel::ChannelNumber
	uint8_t ___ChannelNumber_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingReliableCommandsList
	Dictionary_2_t1638238746 * ___incomingReliableCommandsList_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingUnreliableCommandsList
	Dictionary_2_t1638238746 * ___incomingUnreliableCommandsList_2;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingReliableCommandsList
	Queue_1_t3877217936 * ___outgoingReliableCommandsList_3;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingUnreliableCommandsList
	Queue_1_t3877217936 * ___outgoingUnreliableCommandsList_4;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingReliableSequenceNumber
	int32_t ___incomingReliableSequenceNumber_5;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingUnreliableSequenceNumber
	int32_t ___incomingUnreliableSequenceNumber_6;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingReliableSequenceNumber
	int32_t ___outgoingReliableSequenceNumber_7;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingUnreliableSequenceNumber
	int32_t ___outgoingUnreliableSequenceNumber_8;

public:
	inline static int32_t get_offset_of_ChannelNumber_0() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___ChannelNumber_0)); }
	inline uint8_t get_ChannelNumber_0() const { return ___ChannelNumber_0; }
	inline uint8_t* get_address_of_ChannelNumber_0() { return &___ChannelNumber_0; }
	inline void set_ChannelNumber_0(uint8_t value)
	{
		___ChannelNumber_0 = value;
	}

	inline static int32_t get_offset_of_incomingReliableCommandsList_1() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___incomingReliableCommandsList_1)); }
	inline Dictionary_2_t1638238746 * get_incomingReliableCommandsList_1() const { return ___incomingReliableCommandsList_1; }
	inline Dictionary_2_t1638238746 ** get_address_of_incomingReliableCommandsList_1() { return &___incomingReliableCommandsList_1; }
	inline void set_incomingReliableCommandsList_1(Dictionary_2_t1638238746 * value)
	{
		___incomingReliableCommandsList_1 = value;
		Il2CppCodeGenWriteBarrier(&___incomingReliableCommandsList_1, value);
	}

	inline static int32_t get_offset_of_incomingUnreliableCommandsList_2() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___incomingUnreliableCommandsList_2)); }
	inline Dictionary_2_t1638238746 * get_incomingUnreliableCommandsList_2() const { return ___incomingUnreliableCommandsList_2; }
	inline Dictionary_2_t1638238746 ** get_address_of_incomingUnreliableCommandsList_2() { return &___incomingUnreliableCommandsList_2; }
	inline void set_incomingUnreliableCommandsList_2(Dictionary_2_t1638238746 * value)
	{
		___incomingUnreliableCommandsList_2 = value;
		Il2CppCodeGenWriteBarrier(&___incomingUnreliableCommandsList_2, value);
	}

	inline static int32_t get_offset_of_outgoingReliableCommandsList_3() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___outgoingReliableCommandsList_3)); }
	inline Queue_1_t3877217936 * get_outgoingReliableCommandsList_3() const { return ___outgoingReliableCommandsList_3; }
	inline Queue_1_t3877217936 ** get_address_of_outgoingReliableCommandsList_3() { return &___outgoingReliableCommandsList_3; }
	inline void set_outgoingReliableCommandsList_3(Queue_1_t3877217936 * value)
	{
		___outgoingReliableCommandsList_3 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingReliableCommandsList_3, value);
	}

	inline static int32_t get_offset_of_outgoingUnreliableCommandsList_4() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___outgoingUnreliableCommandsList_4)); }
	inline Queue_1_t3877217936 * get_outgoingUnreliableCommandsList_4() const { return ___outgoingUnreliableCommandsList_4; }
	inline Queue_1_t3877217936 ** get_address_of_outgoingUnreliableCommandsList_4() { return &___outgoingUnreliableCommandsList_4; }
	inline void set_outgoingUnreliableCommandsList_4(Queue_1_t3877217936 * value)
	{
		___outgoingUnreliableCommandsList_4 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingUnreliableCommandsList_4, value);
	}

	inline static int32_t get_offset_of_incomingReliableSequenceNumber_5() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___incomingReliableSequenceNumber_5)); }
	inline int32_t get_incomingReliableSequenceNumber_5() const { return ___incomingReliableSequenceNumber_5; }
	inline int32_t* get_address_of_incomingReliableSequenceNumber_5() { return &___incomingReliableSequenceNumber_5; }
	inline void set_incomingReliableSequenceNumber_5(int32_t value)
	{
		___incomingReliableSequenceNumber_5 = value;
	}

	inline static int32_t get_offset_of_incomingUnreliableSequenceNumber_6() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___incomingUnreliableSequenceNumber_6)); }
	inline int32_t get_incomingUnreliableSequenceNumber_6() const { return ___incomingUnreliableSequenceNumber_6; }
	inline int32_t* get_address_of_incomingUnreliableSequenceNumber_6() { return &___incomingUnreliableSequenceNumber_6; }
	inline void set_incomingUnreliableSequenceNumber_6(int32_t value)
	{
		___incomingUnreliableSequenceNumber_6 = value;
	}

	inline static int32_t get_offset_of_outgoingReliableSequenceNumber_7() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___outgoingReliableSequenceNumber_7)); }
	inline int32_t get_outgoingReliableSequenceNumber_7() const { return ___outgoingReliableSequenceNumber_7; }
	inline int32_t* get_address_of_outgoingReliableSequenceNumber_7() { return &___outgoingReliableSequenceNumber_7; }
	inline void set_outgoingReliableSequenceNumber_7(int32_t value)
	{
		___outgoingReliableSequenceNumber_7 = value;
	}

	inline static int32_t get_offset_of_outgoingUnreliableSequenceNumber_8() { return static_cast<int32_t>(offsetof(EnetChannel_t1847717741, ___outgoingUnreliableSequenceNumber_8)); }
	inline int32_t get_outgoingUnreliableSequenceNumber_8() const { return ___outgoingUnreliableSequenceNumber_8; }
	inline int32_t* get_address_of_outgoingUnreliableSequenceNumber_8() { return &___outgoingUnreliableSequenceNumber_8; }
	inline void set_outgoingUnreliableSequenceNumber_8(int32_t value)
	{
		___outgoingUnreliableSequenceNumber_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
