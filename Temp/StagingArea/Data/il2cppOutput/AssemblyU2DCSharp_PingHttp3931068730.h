#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t3134621005;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPing1287585572.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PingHttp
struct  PingHttp_t3931068730  : public PhotonPing_t1287585572
{
public:
	// UnityEngine.WWW PingHttp::webRequest
	WWW_t3134621005 * ___webRequest_6;

public:
	inline static int32_t get_offset_of_webRequest_6() { return static_cast<int32_t>(offsetof(PingHttp_t3931068730, ___webRequest_6)); }
	inline WWW_t3134621005 * get_webRequest_6() const { return ___webRequest_6; }
	inline WWW_t3134621005 ** get_address_of_webRequest_6() { return &___webRequest_6; }
	inline void set_webRequest_6(WWW_t3134621005 * value)
	{
		___webRequest_6 = value;
		Il2CppCodeGenWriteBarrier(&___webRequest_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
