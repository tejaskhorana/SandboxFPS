#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke2886030052.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t1216666938  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t659028201 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::<Protocol>k__BackingField
	uint8_t ___U3CProtocolU3Ek__BackingField_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_5;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_6;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_7;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___peerBase_0)); }
	inline PeerBase_t659028201 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t659028201 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t659028201 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier(&___peerBase_0, value);
	}

	inline static int32_t get_offset_of_U3CProtocolU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CProtocolU3Ek__BackingField_1)); }
	inline uint8_t get_U3CProtocolU3Ek__BackingField_1() const { return ___U3CProtocolU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CProtocolU3Ek__BackingField_1() { return &___U3CProtocolU3Ek__BackingField_1; }
	inline void set_U3CProtocolU3Ek__BackingField_1(uint8_t value)
	{
		___U3CProtocolU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CServerAddressU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CServerPortU3Ek__BackingField_5)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_5() const { return ___U3CServerPortU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_5() { return &___U3CServerPortU3Ek__BackingField_5; }
	inline void set_U3CServerPortU3Ek__BackingField_5(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_6)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_6() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_6; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_6() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_6; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_6(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CUrlProtocolU3Ek__BackingField_7)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_7() const { return ___U3CUrlProtocolU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_7() { return &___U3CUrlProtocolU3Ek__BackingField_7; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_7(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUrlProtocolU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1216666938, ___U3CUrlPathU3Ek__BackingField_8)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_8() const { return ___U3CUrlPathU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_8() { return &___U3CUrlPathU3Ek__BackingField_8; }
	inline void set_U3CUrlPathU3Ek__BackingField_8(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUrlPathU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
