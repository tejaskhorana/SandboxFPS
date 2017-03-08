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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t3191423117;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1433975096;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t132490578;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t2421928662;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t1428991998;

#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t1287581460  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_3;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_5;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t3191423117 * ___SocketImplementationConfig_6;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_7;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_8;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	Il2CppObject * ___U3CListenerU3Ek__BackingField_9;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t1433975096 * ___U3CTrafficStatsIncomingU3Ek__BackingField_10;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t1433975096 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_11;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t132490578 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_12;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t3420517611 * ___trafficStatsStopwatch_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_14;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::commandLogSize
	int32_t ___commandLogSize_15;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_17;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_18;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_20;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_22;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_23;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_24;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_27;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_28;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t659028201 * ___peerBase_29;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Il2CppObject * ___SendOutgoingLockObject_30;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Il2CppObject * ___DispatchLockObject_31;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Il2CppObject * ___EnqueueLock_32;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_t4260760469* ___PayloadEncryptionSecret_33;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::encryptor
	Encryptor_t2421928662 * ___encryptor_34;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::decryptor
	Decryptor_t1428991998 * ___decryptor_35;

public:
	inline static int32_t get_offset_of_ClientSdkId_3() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___ClientSdkId_3)); }
	inline uint8_t get_ClientSdkId_3() const { return ___ClientSdkId_3; }
	inline uint8_t* get_address_of_ClientSdkId_3() { return &___ClientSdkId_3; }
	inline void set_ClientSdkId_3(uint8_t value)
	{
		___ClientSdkId_3 = value;
	}

	inline static int32_t get_offset_of_clientVersion_5() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___clientVersion_5)); }
	inline String_t* get_clientVersion_5() const { return ___clientVersion_5; }
	inline String_t** get_address_of_clientVersion_5() { return &___clientVersion_5; }
	inline void set_clientVersion_5(String_t* value)
	{
		___clientVersion_5 = value;
		Il2CppCodeGenWriteBarrier(&___clientVersion_5, value);
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SocketImplementationConfig_6)); }
	inline Dictionary_2_t3191423117 * get_SocketImplementationConfig_6() const { return ___SocketImplementationConfig_6; }
	inline Dictionary_2_t3191423117 ** get_address_of_SocketImplementationConfig_6() { return &___SocketImplementationConfig_6; }
	inline void set_SocketImplementationConfig_6(Dictionary_2_t3191423117 * value)
	{
		___SocketImplementationConfig_6 = value;
		Il2CppCodeGenWriteBarrier(&___SocketImplementationConfig_6, value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CSocketImplementationU3Ek__BackingField_7)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_7() const { return ___U3CSocketImplementationU3Ek__BackingField_7; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_7() { return &___U3CSocketImplementationU3Ek__BackingField_7; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_7(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSocketImplementationU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_DebugOut_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DebugOut_8)); }
	inline uint8_t get_DebugOut_8() const { return ___DebugOut_8; }
	inline uint8_t* get_address_of_DebugOut_8() { return &___DebugOut_8; }
	inline void set_DebugOut_8(uint8_t value)
	{
		___DebugOut_8 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CListenerU3Ek__BackingField_9)); }
	inline Il2CppObject * get_U3CListenerU3Ek__BackingField_9() const { return ___U3CListenerU3Ek__BackingField_9; }
	inline Il2CppObject ** get_address_of_U3CListenerU3Ek__BackingField_9() { return &___U3CListenerU3Ek__BackingField_9; }
	inline void set_U3CListenerU3Ek__BackingField_9(Il2CppObject * value)
	{
		___U3CListenerU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CListenerU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsIncomingU3Ek__BackingField_10)); }
	inline TrafficStats_t1433975096 * get_U3CTrafficStatsIncomingU3Ek__BackingField_10() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_10; }
	inline TrafficStats_t1433975096 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_10() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_10; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_10(TrafficStats_t1433975096 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsIncomingU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsOutgoingU3Ek__BackingField_11)); }
	inline TrafficStats_t1433975096 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_11() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_11; }
	inline TrafficStats_t1433975096 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_11() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_11; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_11(TrafficStats_t1433975096 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsOutgoingU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsGameLevelU3Ek__BackingField_12)); }
	inline TrafficStatsGameLevel_t132490578 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_12() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_12; }
	inline TrafficStatsGameLevel_t132490578 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_12() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_12; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_12(TrafficStatsGameLevel_t132490578 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsGameLevelU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___trafficStatsStopwatch_13)); }
	inline Stopwatch_t3420517611 * get_trafficStatsStopwatch_13() const { return ___trafficStatsStopwatch_13; }
	inline Stopwatch_t3420517611 ** get_address_of_trafficStatsStopwatch_13() { return &___trafficStatsStopwatch_13; }
	inline void set_trafficStatsStopwatch_13(Stopwatch_t3420517611 * value)
	{
		___trafficStatsStopwatch_13 = value;
		Il2CppCodeGenWriteBarrier(&___trafficStatsStopwatch_13, value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___trafficStatsEnabled_14)); }
	inline bool get_trafficStatsEnabled_14() const { return ___trafficStatsEnabled_14; }
	inline bool* get_address_of_trafficStatsEnabled_14() { return &___trafficStatsEnabled_14; }
	inline void set_trafficStatsEnabled_14(bool value)
	{
		___trafficStatsEnabled_14 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___commandLogSize_15)); }
	inline int32_t get_commandLogSize_15() const { return ___commandLogSize_15; }
	inline int32_t* get_address_of_commandLogSize_15() { return &___commandLogSize_15; }
	inline void set_commandLogSize_15(int32_t value)
	{
		___commandLogSize_15 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___quickResendAttempts_16)); }
	inline uint8_t get_quickResendAttempts_16() const { return ___quickResendAttempts_16; }
	inline uint8_t* get_address_of_quickResendAttempts_16() { return &___quickResendAttempts_16; }
	inline void set_quickResendAttempts_16(uint8_t value)
	{
		___quickResendAttempts_16 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___RhttpMinConnections_17)); }
	inline int32_t get_RhttpMinConnections_17() const { return ___RhttpMinConnections_17; }
	inline int32_t* get_address_of_RhttpMinConnections_17() { return &___RhttpMinConnections_17; }
	inline void set_RhttpMinConnections_17(int32_t value)
	{
		___RhttpMinConnections_17 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___RhttpMaxConnections_18)); }
	inline int32_t get_RhttpMaxConnections_18() const { return ___RhttpMaxConnections_18; }
	inline int32_t* get_address_of_RhttpMaxConnections_18() { return &___RhttpMaxConnections_18; }
	inline void set_RhttpMaxConnections_18(int32_t value)
	{
		___RhttpMaxConnections_18 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_19)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_19() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_19() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_19; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_19(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___ChannelCount_20)); }
	inline uint8_t get_ChannelCount_20() const { return ___ChannelCount_20; }
	inline uint8_t* get_address_of_ChannelCount_20() { return &___ChannelCount_20; }
	inline void set_ChannelCount_20(uint8_t value)
	{
		___ChannelCount_20 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___crcEnabled_21)); }
	inline bool get_crcEnabled_21() const { return ___crcEnabled_21; }
	inline bool* get_address_of_crcEnabled_21() { return &___crcEnabled_21; }
	inline void set_crcEnabled_21(bool value)
	{
		___crcEnabled_21 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SentCountAllowance_22)); }
	inline int32_t get_SentCountAllowance_22() const { return ___SentCountAllowance_22; }
	inline int32_t* get_address_of_SentCountAllowance_22() { return &___SentCountAllowance_22; }
	inline void set_SentCountAllowance_22(int32_t value)
	{
		___SentCountAllowance_22 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___TimePingInterval_23)); }
	inline int32_t get_TimePingInterval_23() const { return ___TimePingInterval_23; }
	inline int32_t* get_address_of_TimePingInterval_23() { return &___TimePingInterval_23; }
	inline void set_TimePingInterval_23(int32_t value)
	{
		___TimePingInterval_23 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DisconnectTimeout_24)); }
	inline int32_t get_DisconnectTimeout_24() const { return ___DisconnectTimeout_24; }
	inline int32_t* get_address_of_DisconnectTimeout_24() { return &___DisconnectTimeout_24; }
	inline void set_DisconnectTimeout_24(int32_t value)
	{
		___DisconnectTimeout_24 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTransportProtocolU3Ek__BackingField_25)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_25() const { return ___U3CTransportProtocolU3Ek__BackingField_25; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_25() { return &___U3CTransportProtocolU3Ek__BackingField_25; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_25(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_mtu_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___mtu_27)); }
	inline int32_t get_mtu_27() const { return ___mtu_27; }
	inline int32_t* get_address_of_mtu_27() { return &___mtu_27; }
	inline void set_mtu_27(int32_t value)
	{
		___mtu_27 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CIsSendingOnlyAcksU3Ek__BackingField_28)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_28() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_28() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_28; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_28(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_peerBase_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___peerBase_29)); }
	inline PeerBase_t659028201 * get_peerBase_29() const { return ___peerBase_29; }
	inline PeerBase_t659028201 ** get_address_of_peerBase_29() { return &___peerBase_29; }
	inline void set_peerBase_29(PeerBase_t659028201 * value)
	{
		___peerBase_29 = value;
		Il2CppCodeGenWriteBarrier(&___peerBase_29, value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SendOutgoingLockObject_30)); }
	inline Il2CppObject * get_SendOutgoingLockObject_30() const { return ___SendOutgoingLockObject_30; }
	inline Il2CppObject ** get_address_of_SendOutgoingLockObject_30() { return &___SendOutgoingLockObject_30; }
	inline void set_SendOutgoingLockObject_30(Il2CppObject * value)
	{
		___SendOutgoingLockObject_30 = value;
		Il2CppCodeGenWriteBarrier(&___SendOutgoingLockObject_30, value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DispatchLockObject_31)); }
	inline Il2CppObject * get_DispatchLockObject_31() const { return ___DispatchLockObject_31; }
	inline Il2CppObject ** get_address_of_DispatchLockObject_31() { return &___DispatchLockObject_31; }
	inline void set_DispatchLockObject_31(Il2CppObject * value)
	{
		___DispatchLockObject_31 = value;
		Il2CppCodeGenWriteBarrier(&___DispatchLockObject_31, value);
	}

	inline static int32_t get_offset_of_EnqueueLock_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___EnqueueLock_32)); }
	inline Il2CppObject * get_EnqueueLock_32() const { return ___EnqueueLock_32; }
	inline Il2CppObject ** get_address_of_EnqueueLock_32() { return &___EnqueueLock_32; }
	inline void set_EnqueueLock_32(Il2CppObject * value)
	{
		___EnqueueLock_32 = value;
		Il2CppCodeGenWriteBarrier(&___EnqueueLock_32, value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___PayloadEncryptionSecret_33)); }
	inline ByteU5BU5D_t4260760469* get_PayloadEncryptionSecret_33() const { return ___PayloadEncryptionSecret_33; }
	inline ByteU5BU5D_t4260760469** get_address_of_PayloadEncryptionSecret_33() { return &___PayloadEncryptionSecret_33; }
	inline void set_PayloadEncryptionSecret_33(ByteU5BU5D_t4260760469* value)
	{
		___PayloadEncryptionSecret_33 = value;
		Il2CppCodeGenWriteBarrier(&___PayloadEncryptionSecret_33, value);
	}

	inline static int32_t get_offset_of_encryptor_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___encryptor_34)); }
	inline Encryptor_t2421928662 * get_encryptor_34() const { return ___encryptor_34; }
	inline Encryptor_t2421928662 ** get_address_of_encryptor_34() { return &___encryptor_34; }
	inline void set_encryptor_34(Encryptor_t2421928662 * value)
	{
		___encryptor_34 = value;
		Il2CppCodeGenWriteBarrier(&___encryptor_34, value);
	}

	inline static int32_t get_offset_of_decryptor_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___decryptor_35)); }
	inline Decryptor_t1428991998 * get_decryptor_35() const { return ___decryptor_35; }
	inline Decryptor_t1428991998 ** get_address_of_decryptor_35() { return &___decryptor_35; }
	inline void set_decryptor_35(Decryptor_t1428991998 * value)
	{
		___decryptor_35 = value;
		Il2CppCodeGenWriteBarrier(&___decryptor_35, value);
	}
};

struct PhotonPeer_t1287581460_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_4;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_26;

public:
	inline static int32_t get_offset_of_AsyncKeyExchange_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460_StaticFields, ___AsyncKeyExchange_4)); }
	inline bool get_AsyncKeyExchange_4() const { return ___AsyncKeyExchange_4; }
	inline bool* get_address_of_AsyncKeyExchange_4() { return &___AsyncKeyExchange_4; }
	inline void set_AsyncKeyExchange_4(bool value)
	{
		___AsyncKeyExchange_4 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460_StaticFields, ___OutgoingStreamBufferSize_26)); }
	inline int32_t get_OutgoingStreamBufferSize_26() const { return ___OutgoingStreamBufferSize_26; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_26() { return &___OutgoingStreamBufferSize_26; }
	inline void set_OutgoingStreamBufferSize_26(int32_t value)
	{
		___OutgoingStreamBufferSize_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
