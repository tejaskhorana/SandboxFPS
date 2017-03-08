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

// ExitGames.Client.Photon.CmdLogSentReliable
struct  CmdLogSentReliable_t629949922  : public CmdLogItem_t256807155
{
public:
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::Resend
	int32_t ___Resend_5;
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::RoundtripTimeout
	int32_t ___RoundtripTimeout_6;
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::Timeout
	int32_t ___Timeout_7;
	// System.Boolean ExitGames.Client.Photon.CmdLogSentReliable::TriggeredTimeout
	bool ___TriggeredTimeout_8;

public:
	inline static int32_t get_offset_of_Resend_5() { return static_cast<int32_t>(offsetof(CmdLogSentReliable_t629949922, ___Resend_5)); }
	inline int32_t get_Resend_5() const { return ___Resend_5; }
	inline int32_t* get_address_of_Resend_5() { return &___Resend_5; }
	inline void set_Resend_5(int32_t value)
	{
		___Resend_5 = value;
	}

	inline static int32_t get_offset_of_RoundtripTimeout_6() { return static_cast<int32_t>(offsetof(CmdLogSentReliable_t629949922, ___RoundtripTimeout_6)); }
	inline int32_t get_RoundtripTimeout_6() const { return ___RoundtripTimeout_6; }
	inline int32_t* get_address_of_RoundtripTimeout_6() { return &___RoundtripTimeout_6; }
	inline void set_RoundtripTimeout_6(int32_t value)
	{
		___RoundtripTimeout_6 = value;
	}

	inline static int32_t get_offset_of_Timeout_7() { return static_cast<int32_t>(offsetof(CmdLogSentReliable_t629949922, ___Timeout_7)); }
	inline int32_t get_Timeout_7() const { return ___Timeout_7; }
	inline int32_t* get_address_of_Timeout_7() { return &___Timeout_7; }
	inline void set_Timeout_7(int32_t value)
	{
		___Timeout_7 = value;
	}

	inline static int32_t get_offset_of_TriggeredTimeout_8() { return static_cast<int32_t>(offsetof(CmdLogSentReliable_t629949922, ___TriggeredTimeout_8)); }
	inline bool get_TriggeredTimeout_8() const { return ___TriggeredTimeout_8; }
	inline bool* get_address_of_TriggeredTimeout_8() { return &___TriggeredTimeout_8; }
	inline void set_TriggeredTimeout_8(bool value)
	{
		___TriggeredTimeout_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
