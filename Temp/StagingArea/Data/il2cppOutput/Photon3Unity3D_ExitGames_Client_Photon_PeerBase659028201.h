#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t1287581460;
// ExitGames.Client.IProtocol
struct IProtocol_t327407867;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t1216666938;
// System.String
struct String_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1640975507;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t104083009;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t2456114869;
// System.Random
struct Random_t4255898871;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t48913777;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t22885347;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t2493049584;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t2984804470;

#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Co1588291360.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t659028201  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::ppeer
	PhotonPeer_t1287581460 * ___ppeer_0;
	// ExitGames.Client.IProtocol ExitGames.Client.Photon.PeerBase::protocol
	IProtocol_t327407867 * ___protocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t1216666938 * ___rt_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<HttpUrlParameters>k__BackingField
	String_t* ___U3CHttpUrlParametersU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t1640975507 * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t104083009 * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_14;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_21;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_22;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_23;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval_24;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_26;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize_29;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	Il2CppObject * ___CryptoProvider_30;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t4255898871 * ___lagRandomizer_31;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t48913777 * ___NetSimListOutgoing_32;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t48913777 * ___NetSimListIncoming_33;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t22885347 * ___networkSimulationSettings_34;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t2493049584 * ___CommandLog_35;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t2493049584 * ___InReliableLog_36;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	Il2CppObject * ___CustomInitData_37;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_38;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::<TcpConnectionPrefix>k__BackingField
	ByteU5BU5D_t4260760469* ___U3CTcpConnectionPrefixU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_40;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_41;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_42;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_45;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_49;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_50;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_51;
	// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeMemStream
	StreamBuffer_t2984804470 * ___SerializeMemStream_52;

public:
	inline static int32_t get_offset_of_ppeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___ppeer_0)); }
	inline PhotonPeer_t1287581460 * get_ppeer_0() const { return ___ppeer_0; }
	inline PhotonPeer_t1287581460 ** get_address_of_ppeer_0() { return &___ppeer_0; }
	inline void set_ppeer_0(PhotonPeer_t1287581460 * value)
	{
		___ppeer_0 = value;
		Il2CppCodeGenWriteBarrier(&___ppeer_0, value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___protocol_1)); }
	inline IProtocol_t327407867 * get_protocol_1() const { return ___protocol_1; }
	inline IProtocol_t327407867 ** get_address_of_protocol_1() { return &___protocol_1; }
	inline void set_protocol_1(IProtocol_t327407867 * value)
	{
		___protocol_1 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_1, value);
	}

	inline static int32_t get_offset_of_usedProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___usedProtocol_2)); }
	inline uint8_t get_usedProtocol_2() const { return ___usedProtocol_2; }
	inline uint8_t* get_address_of_usedProtocol_2() { return &___usedProtocol_2; }
	inline void set_usedProtocol_2(uint8_t value)
	{
		___usedProtocol_2 = value;
	}

	inline static int32_t get_offset_of_rt_3() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___rt_3)); }
	inline IPhotonSocket_t1216666938 * get_rt_3() const { return ___rt_3; }
	inline IPhotonSocket_t1216666938 ** get_address_of_rt_3() { return &___rt_3; }
	inline void set_rt_3(IPhotonSocket_t1216666938 * value)
	{
		___rt_3 = value;
		Il2CppCodeGenWriteBarrier(&___rt_3, value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CServerAddressU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CHttpUrlParametersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___U3CHttpUrlParametersU3Ek__BackingField_5)); }
	inline String_t* get_U3CHttpUrlParametersU3Ek__BackingField_5() const { return ___U3CHttpUrlParametersU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CHttpUrlParametersU3Ek__BackingField_5() { return &___U3CHttpUrlParametersU3Ek__BackingField_5; }
	inline void set_U3CHttpUrlParametersU3Ek__BackingField_5(String_t* value)
	{
		___U3CHttpUrlParametersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHttpUrlParametersU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_6() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___ByteCountLastOperation_6)); }
	inline int32_t get_ByteCountLastOperation_6() const { return ___ByteCountLastOperation_6; }
	inline int32_t* get_address_of_ByteCountLastOperation_6() { return &___ByteCountLastOperation_6; }
	inline void set_ByteCountLastOperation_6(int32_t value)
	{
		___ByteCountLastOperation_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_7() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___ByteCountCurrentDispatch_7)); }
	inline int32_t get_ByteCountCurrentDispatch_7() const { return ___ByteCountCurrentDispatch_7; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_7() { return &___ByteCountCurrentDispatch_7; }
	inline void set_ByteCountCurrentDispatch_7(int32_t value)
	{
		___ByteCountCurrentDispatch_7 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___CommandInCurrentDispatch_8)); }
	inline NCommand_t1640975507 * get_CommandInCurrentDispatch_8() const { return ___CommandInCurrentDispatch_8; }
	inline NCommand_t1640975507 ** get_address_of_CommandInCurrentDispatch_8() { return &___CommandInCurrentDispatch_8; }
	inline void set_CommandInCurrentDispatch_8(NCommand_t1640975507 * value)
	{
		___CommandInCurrentDispatch_8 = value;
		Il2CppCodeGenWriteBarrier(&___CommandInCurrentDispatch_8, value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_9() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___TrafficPackageHeaderSize_9)); }
	inline int32_t get_TrafficPackageHeaderSize_9() const { return ___TrafficPackageHeaderSize_9; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_9() { return &___TrafficPackageHeaderSize_9; }
	inline void set_TrafficPackageHeaderSize_9(int32_t value)
	{
		___TrafficPackageHeaderSize_9 = value;
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___ActionQueue_12)); }
	inline Queue_1_t104083009 * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t104083009 ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t104083009 * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionQueue_12, value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_peerConnectionState_14() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___peerConnectionState_14)); }
	inline uint8_t get_peerConnectionState_14() const { return ___peerConnectionState_14; }
	inline uint8_t* get_address_of_peerConnectionState_14() { return &___peerConnectionState_14; }
	inline void set_peerConnectionState_14(uint8_t value)
	{
		___peerConnectionState_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_15() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___serverTimeOffset_15)); }
	inline int32_t get_serverTimeOffset_15() const { return ___serverTimeOffset_15; }
	inline int32_t* get_address_of_serverTimeOffset_15() { return &___serverTimeOffset_15; }
	inline void set_serverTimeOffset_15(int32_t value)
	{
		___serverTimeOffset_15 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_16() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___serverTimeOffsetIsAvailable_16)); }
	inline bool get_serverTimeOffsetIsAvailable_16() const { return ___serverTimeOffsetIsAvailable_16; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_16() { return &___serverTimeOffsetIsAvailable_16; }
	inline void set_serverTimeOffsetIsAvailable_16(bool value)
	{
		___serverTimeOffsetIsAvailable_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_17() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___roundTripTime_17)); }
	inline int32_t get_roundTripTime_17() const { return ___roundTripTime_17; }
	inline int32_t* get_address_of_roundTripTime_17() { return &___roundTripTime_17; }
	inline void set_roundTripTime_17(int32_t value)
	{
		___roundTripTime_17 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_18() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___roundTripTimeVariance_18)); }
	inline int32_t get_roundTripTimeVariance_18() const { return ___roundTripTimeVariance_18; }
	inline int32_t* get_address_of_roundTripTimeVariance_18() { return &___roundTripTimeVariance_18; }
	inline void set_roundTripTimeVariance_18(int32_t value)
	{
		___roundTripTimeVariance_18 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___lastRoundTripTime_19)); }
	inline int32_t get_lastRoundTripTime_19() const { return ___lastRoundTripTime_19; }
	inline int32_t* get_address_of_lastRoundTripTime_19() { return &___lastRoundTripTime_19; }
	inline void set_lastRoundTripTime_19(int32_t value)
	{
		___lastRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_20() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___lowestRoundTripTime_20)); }
	inline int32_t get_lowestRoundTripTime_20() const { return ___lowestRoundTripTime_20; }
	inline int32_t* get_address_of_lowestRoundTripTime_20() { return &___lowestRoundTripTime_20; }
	inline void set_lowestRoundTripTime_20(int32_t value)
	{
		___lowestRoundTripTime_20 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTimeVariance_21() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___lastRoundTripTimeVariance_21)); }
	inline int32_t get_lastRoundTripTimeVariance_21() const { return ___lastRoundTripTimeVariance_21; }
	inline int32_t* get_address_of_lastRoundTripTimeVariance_21() { return &___lastRoundTripTimeVariance_21; }
	inline void set_lastRoundTripTimeVariance_21(int32_t value)
	{
		___lastRoundTripTimeVariance_21 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_22() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___highestRoundTripTimeVariance_22)); }
	inline int32_t get_highestRoundTripTimeVariance_22() const { return ___highestRoundTripTimeVariance_22; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_22() { return &___highestRoundTripTimeVariance_22; }
	inline void set_highestRoundTripTimeVariance_22(int32_t value)
	{
		___highestRoundTripTimeVariance_22 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_23() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timestampOfLastReceive_23)); }
	inline int32_t get_timestampOfLastReceive_23() const { return ___timestampOfLastReceive_23; }
	inline int32_t* get_address_of_timestampOfLastReceive_23() { return &___timestampOfLastReceive_23; }
	inline void set_timestampOfLastReceive_23(int32_t value)
	{
		___timestampOfLastReceive_23 = value;
	}

	inline static int32_t get_offset_of_packetThrottleInterval_24() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___packetThrottleInterval_24)); }
	inline int32_t get_packetThrottleInterval_24() const { return ___packetThrottleInterval_24; }
	inline int32_t* get_address_of_packetThrottleInterval_24() { return &___packetThrottleInterval_24; }
	inline void set_packetThrottleInterval_24(int32_t value)
	{
		___packetThrottleInterval_24 = value;
	}

	inline static int32_t get_offset_of_bytesOut_26() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___bytesOut_26)); }
	inline int64_t get_bytesOut_26() const { return ___bytesOut_26; }
	inline int64_t* get_address_of_bytesOut_26() { return &___bytesOut_26; }
	inline void set_bytesOut_26(int64_t value)
	{
		___bytesOut_26 = value;
	}

	inline static int32_t get_offset_of_bytesIn_27() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___bytesIn_27)); }
	inline int64_t get_bytesIn_27() const { return ___bytesIn_27; }
	inline int64_t* get_address_of_bytesIn_27() { return &___bytesIn_27; }
	inline void set_bytesIn_27(int64_t value)
	{
		___bytesIn_27 = value;
	}

	inline static int32_t get_offset_of_commandBufferSize_28() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___commandBufferSize_28)); }
	inline int32_t get_commandBufferSize_28() const { return ___commandBufferSize_28; }
	inline int32_t* get_address_of_commandBufferSize_28() { return &___commandBufferSize_28; }
	inline void set_commandBufferSize_28(int32_t value)
	{
		___commandBufferSize_28 = value;
	}

	inline static int32_t get_offset_of_warningSize_29() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___warningSize_29)); }
	inline int32_t get_warningSize_29() const { return ___warningSize_29; }
	inline int32_t* get_address_of_warningSize_29() { return &___warningSize_29; }
	inline void set_warningSize_29(int32_t value)
	{
		___warningSize_29 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_30() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___CryptoProvider_30)); }
	inline Il2CppObject * get_CryptoProvider_30() const { return ___CryptoProvider_30; }
	inline Il2CppObject ** get_address_of_CryptoProvider_30() { return &___CryptoProvider_30; }
	inline void set_CryptoProvider_30(Il2CppObject * value)
	{
		___CryptoProvider_30 = value;
		Il2CppCodeGenWriteBarrier(&___CryptoProvider_30, value);
	}

	inline static int32_t get_offset_of_lagRandomizer_31() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___lagRandomizer_31)); }
	inline Random_t4255898871 * get_lagRandomizer_31() const { return ___lagRandomizer_31; }
	inline Random_t4255898871 ** get_address_of_lagRandomizer_31() { return &___lagRandomizer_31; }
	inline void set_lagRandomizer_31(Random_t4255898871 * value)
	{
		___lagRandomizer_31 = value;
		Il2CppCodeGenWriteBarrier(&___lagRandomizer_31, value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_32() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___NetSimListOutgoing_32)); }
	inline LinkedList_1_t48913777 * get_NetSimListOutgoing_32() const { return ___NetSimListOutgoing_32; }
	inline LinkedList_1_t48913777 ** get_address_of_NetSimListOutgoing_32() { return &___NetSimListOutgoing_32; }
	inline void set_NetSimListOutgoing_32(LinkedList_1_t48913777 * value)
	{
		___NetSimListOutgoing_32 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListOutgoing_32, value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_33() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___NetSimListIncoming_33)); }
	inline LinkedList_1_t48913777 * get_NetSimListIncoming_33() const { return ___NetSimListIncoming_33; }
	inline LinkedList_1_t48913777 ** get_address_of_NetSimListIncoming_33() { return &___NetSimListIncoming_33; }
	inline void set_NetSimListIncoming_33(LinkedList_1_t48913777 * value)
	{
		___NetSimListIncoming_33 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListIncoming_33, value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_34() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___networkSimulationSettings_34)); }
	inline NetworkSimulationSet_t22885347 * get_networkSimulationSettings_34() const { return ___networkSimulationSettings_34; }
	inline NetworkSimulationSet_t22885347 ** get_address_of_networkSimulationSettings_34() { return &___networkSimulationSettings_34; }
	inline void set_networkSimulationSettings_34(NetworkSimulationSet_t22885347 * value)
	{
		___networkSimulationSettings_34 = value;
		Il2CppCodeGenWriteBarrier(&___networkSimulationSettings_34, value);
	}

	inline static int32_t get_offset_of_CommandLog_35() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___CommandLog_35)); }
	inline Queue_1_t2493049584 * get_CommandLog_35() const { return ___CommandLog_35; }
	inline Queue_1_t2493049584 ** get_address_of_CommandLog_35() { return &___CommandLog_35; }
	inline void set_CommandLog_35(Queue_1_t2493049584 * value)
	{
		___CommandLog_35 = value;
		Il2CppCodeGenWriteBarrier(&___CommandLog_35, value);
	}

	inline static int32_t get_offset_of_InReliableLog_36() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___InReliableLog_36)); }
	inline Queue_1_t2493049584 * get_InReliableLog_36() const { return ___InReliableLog_36; }
	inline Queue_1_t2493049584 ** get_address_of_InReliableLog_36() { return &___InReliableLog_36; }
	inline void set_InReliableLog_36(Queue_1_t2493049584 * value)
	{
		___InReliableLog_36 = value;
		Il2CppCodeGenWriteBarrier(&___InReliableLog_36, value);
	}

	inline static int32_t get_offset_of_CustomInitData_37() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___CustomInitData_37)); }
	inline Il2CppObject * get_CustomInitData_37() const { return ___CustomInitData_37; }
	inline Il2CppObject ** get_address_of_CustomInitData_37() { return &___CustomInitData_37; }
	inline void set_CustomInitData_37(Il2CppObject * value)
	{
		___CustomInitData_37 = value;
		Il2CppCodeGenWriteBarrier(&___CustomInitData_37, value);
	}

	inline static int32_t get_offset_of_AppId_38() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___AppId_38)); }
	inline String_t* get_AppId_38() const { return ___AppId_38; }
	inline String_t** get_address_of_AppId_38() { return &___AppId_38; }
	inline void set_AppId_38(String_t* value)
	{
		___AppId_38 = value;
		Il2CppCodeGenWriteBarrier(&___AppId_38, value);
	}

	inline static int32_t get_offset_of_U3CTcpConnectionPrefixU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___U3CTcpConnectionPrefixU3Ek__BackingField_39)); }
	inline ByteU5BU5D_t4260760469* get_U3CTcpConnectionPrefixU3Ek__BackingField_39() const { return ___U3CTcpConnectionPrefixU3Ek__BackingField_39; }
	inline ByteU5BU5D_t4260760469** get_address_of_U3CTcpConnectionPrefixU3Ek__BackingField_39() { return &___U3CTcpConnectionPrefixU3Ek__BackingField_39; }
	inline void set_U3CTcpConnectionPrefixU3Ek__BackingField_39(ByteU5BU5D_t4260760469* value)
	{
		___U3CTcpConnectionPrefixU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTcpConnectionPrefixU3Ek__BackingField_39, value);
	}

	inline static int32_t get_offset_of_timeBase_40() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeBase_40)); }
	inline int32_t get_timeBase_40() const { return ___timeBase_40; }
	inline int32_t* get_address_of_timeBase_40() { return &___timeBase_40; }
	inline void set_timeBase_40(int32_t value)
	{
		___timeBase_40 = value;
	}

	inline static int32_t get_offset_of_timeInt_41() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeInt_41)); }
	inline int32_t get_timeInt_41() const { return ___timeInt_41; }
	inline int32_t* get_address_of_timeInt_41() { return &___timeInt_41; }
	inline void set_timeInt_41(int32_t value)
	{
		___timeInt_41 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_42() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeoutInt_42)); }
	inline int32_t get_timeoutInt_42() const { return ___timeoutInt_42; }
	inline int32_t* get_address_of_timeoutInt_42() { return &___timeoutInt_42; }
	inline void set_timeoutInt_42(int32_t value)
	{
		___timeoutInt_42 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_43() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeLastAckReceive_43)); }
	inline int32_t get_timeLastAckReceive_43() const { return ___timeLastAckReceive_43; }
	inline int32_t* get_address_of_timeLastAckReceive_43() { return &___timeLastAckReceive_43; }
	inline void set_timeLastAckReceive_43(int32_t value)
	{
		___timeLastAckReceive_43 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_44() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeLastSendAck_44)); }
	inline int32_t get_timeLastSendAck_44() const { return ___timeLastSendAck_44; }
	inline int32_t* get_address_of_timeLastSendAck_44() { return &___timeLastSendAck_44; }
	inline void set_timeLastSendAck_44(int32_t value)
	{
		___timeLastSendAck_44 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_45() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___timeLastSendOutgoing_45)); }
	inline int32_t get_timeLastSendOutgoing_45() const { return ___timeLastSendOutgoing_45; }
	inline int32_t* get_address_of_timeLastSendOutgoing_45() { return &___timeLastSendOutgoing_45; }
	inline void set_timeLastSendOutgoing_45(int32_t value)
	{
		___timeLastSendOutgoing_45 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_49() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___ApplicationIsInitialized_49)); }
	inline bool get_ApplicationIsInitialized_49() const { return ___ApplicationIsInitialized_49; }
	inline bool* get_address_of_ApplicationIsInitialized_49() { return &___ApplicationIsInitialized_49; }
	inline void set_ApplicationIsInitialized_49(bool value)
	{
		___ApplicationIsInitialized_49 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_50() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___isEncryptionAvailable_50)); }
	inline bool get_isEncryptionAvailable_50() const { return ___isEncryptionAvailable_50; }
	inline bool* get_address_of_isEncryptionAvailable_50() { return &___isEncryptionAvailable_50; }
	inline void set_isEncryptionAvailable_50(bool value)
	{
		___isEncryptionAvailable_50 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_51() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___outgoingCommandsInStream_51)); }
	inline int32_t get_outgoingCommandsInStream_51() const { return ___outgoingCommandsInStream_51; }
	inline int32_t* get_address_of_outgoingCommandsInStream_51() { return &___outgoingCommandsInStream_51; }
	inline void set_outgoingCommandsInStream_51(int32_t value)
	{
		___outgoingCommandsInStream_51 = value;
	}

	inline static int32_t get_offset_of_SerializeMemStream_52() { return static_cast<int32_t>(offsetof(PeerBase_t659028201, ___SerializeMemStream_52)); }
	inline StreamBuffer_t2984804470 * get_SerializeMemStream_52() const { return ___SerializeMemStream_52; }
	inline StreamBuffer_t2984804470 ** get_address_of_SerializeMemStream_52() { return &___SerializeMemStream_52; }
	inline void set_SerializeMemStream_52(StreamBuffer_t2984804470 * value)
	{
		___SerializeMemStream_52 = value;
		Il2CppCodeGenWriteBarrier(&___SerializeMemStream_52, value);
	}
};

struct PeerBase_t659028201_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_25;

public:
	inline static int32_t get_offset_of_peerCount_25() { return static_cast<int32_t>(offsetof(PeerBase_t659028201_StaticFields, ___peerCount_25)); }
	inline int16_t get_peerCount_25() const { return ___peerCount_25; }
	inline int16_t* get_address_of_peerCount_25() { return &___peerCount_25; }
	inline void set_peerCount_25(int16_t value)
	{
		___peerCount_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
