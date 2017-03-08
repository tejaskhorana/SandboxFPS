#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Photon3Unity3D_ExitGames_Client_Photon_CmdLogItem256807155.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.CmdLogReceivedAck
struct  CmdLogReceivedAck_t3879478528  : public CmdLogItem_t256807155
{
public:
	// System.Int32 ExitGames.Client.Photon.CmdLogReceivedAck::ReceivedSentTime
	int32_t ___ReceivedSentTime_5;

public:
	inline static int32_t get_offset_of_ReceivedSentTime_5() { return static_cast<int32_t>(offsetof(CmdLogReceivedAck_t3879478528, ___ReceivedSentTime_5)); }
	inline int32_t get_ReceivedSentTime_5() const { return ___ReceivedSentTime_5; }
	inline int32_t* get_address_of_ReceivedSentTime_5() { return &___ReceivedSentTime_5; }
	inline void set_ReceivedSentTime_5(int32_t value)
	{
		___ReceivedSentTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
