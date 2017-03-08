#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer1287581460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadBalancingPeer
struct  LoadBalancingPeer_t625641013  : public PhotonPeer_t1287581460
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> LoadBalancingPeer::opParameters
	Dictionary_2_t903024962 * ___opParameters_36;

public:
	inline static int32_t get_offset_of_opParameters_36() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t625641013, ___opParameters_36)); }
	inline Dictionary_2_t903024962 * get_opParameters_36() const { return ___opParameters_36; }
	inline Dictionary_2_t903024962 ** get_address_of_opParameters_36() { return &___opParameters_36; }
	inline void set_opParameters_36(Dictionary_2_t903024962 * value)
	{
		___opParameters_36 = value;
		Il2CppCodeGenWriteBarrier(&___opParameters_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
