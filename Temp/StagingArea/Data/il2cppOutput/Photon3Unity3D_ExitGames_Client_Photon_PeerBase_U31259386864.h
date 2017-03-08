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
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;

#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass147_0
struct  U3CU3Ec__DisplayClass147_0_t1259386864  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase/<>c__DisplayClass147_0::level
	uint8_t ___level_0;
	// System.String ExitGames.Client.Photon.PeerBase/<>c__DisplayClass147_0::debugReturn
	String_t* ___debugReturn_1;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass147_0::<>4__this
	PeerBase_t659028201 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass147_0_t1259386864, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_debugReturn_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass147_0_t1259386864, ___debugReturn_1)); }
	inline String_t* get_debugReturn_1() const { return ___debugReturn_1; }
	inline String_t** get_address_of_debugReturn_1() { return &___debugReturn_1; }
	inline void set_debugReturn_1(String_t* value)
	{
		___debugReturn_1 = value;
		Il2CppCodeGenWriteBarrier(&___debugReturn_1, value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass147_0_t1259386864, ___U3CU3E4__this_2)); }
	inline PeerBase_t659028201 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PeerBase_t659028201 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PeerBase_t659028201 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E4__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
