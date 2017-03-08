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

// ExitGames.Client.Photon.CmdLogReceivedReliable
struct  CmdLogReceivedReliable_t3079247147  : public CmdLogItem_t256807155
{
public:
	// System.Int32 ExitGames.Client.Photon.CmdLogReceivedReliable::TimeSinceLastSend
	int32_t ___TimeSinceLastSend_5;
	// System.Int32 ExitGames.Client.Photon.CmdLogReceivedReliable::TimeSinceLastSendAck
	int32_t ___TimeSinceLastSendAck_6;

public:
	inline static int32_t get_offset_of_TimeSinceLastSend_5() { return static_cast<int32_t>(offsetof(CmdLogReceivedReliable_t3079247147, ___TimeSinceLastSend_5)); }
	inline int32_t get_TimeSinceLastSend_5() const { return ___TimeSinceLastSend_5; }
	inline int32_t* get_address_of_TimeSinceLastSend_5() { return &___TimeSinceLastSend_5; }
	inline void set_TimeSinceLastSend_5(int32_t value)
	{
		___TimeSinceLastSend_5 = value;
	}

	inline static int32_t get_offset_of_TimeSinceLastSendAck_6() { return static_cast<int32_t>(offsetof(CmdLogReceivedReliable_t3079247147, ___TimeSinceLastSendAck_6)); }
	inline int32_t get_TimeSinceLastSendAck_6() const { return ___TimeSinceLastSendAck_6; }
	inline int32_t* get_address_of_TimeSinceLastSendAck_6() { return &___TimeSinceLastSendAck_6; }
	inline void set_TimeSinceLastSendAck_6(int32_t value)
	{
		___TimeSinceLastSendAck_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
