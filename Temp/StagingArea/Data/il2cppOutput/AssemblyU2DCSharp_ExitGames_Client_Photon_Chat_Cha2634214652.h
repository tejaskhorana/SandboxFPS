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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1482115843;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer1287581460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatPeer
struct  ChatPeer_t2634214652  : public PhotonPeer_t1287581460
{
public:

public:
};

struct ChatPeer_t2634214652_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t1482115843 * ___ProtocolToNameServerPort_38;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_38() { return static_cast<int32_t>(offsetof(ChatPeer_t2634214652_StaticFields, ___ProtocolToNameServerPort_38)); }
	inline Dictionary_2_t1482115843 * get_ProtocolToNameServerPort_38() const { return ___ProtocolToNameServerPort_38; }
	inline Dictionary_2_t1482115843 ** get_address_of_ProtocolToNameServerPort_38() { return &___ProtocolToNameServerPort_38; }
	inline void set_ProtocolToNameServerPort_38(Dictionary_2_t1482115843 * value)
	{
		___ProtocolToNameServerPort_38 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
