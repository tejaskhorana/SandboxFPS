#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocket
struct WebSocket_t858269639;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSock1216666938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketWebTcp
struct  SocketWebTcp_t662734294  : public IPhotonSocket_t1216666938
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t858269639 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	Il2CppObject * ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_t3674682005 * ___websocketConnectionObject_14;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_t662734294, ___sock_12)); }
	inline WebSocket_t858269639 * get_sock_12() const { return ___sock_12; }
	inline WebSocket_t858269639 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(WebSocket_t858269639 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier(&___sock_12, value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_t662734294, ___syncer_13)); }
	inline Il2CppObject * get_syncer_13() const { return ___syncer_13; }
	inline Il2CppObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(Il2CppObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier(&___syncer_13, value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_14() { return static_cast<int32_t>(offsetof(SocketWebTcp_t662734294, ___websocketConnectionObject_14)); }
	inline GameObject_t3674682005 * get_websocketConnectionObject_14() const { return ___websocketConnectionObject_14; }
	inline GameObject_t3674682005 ** get_address_of_websocketConnectionObject_14() { return &___websocketConnectionObject_14; }
	inline void set_websocketConnectionObject_14(GameObject_t3674682005 * value)
	{
		___websocketConnectionObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___websocketConnectionObject_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
