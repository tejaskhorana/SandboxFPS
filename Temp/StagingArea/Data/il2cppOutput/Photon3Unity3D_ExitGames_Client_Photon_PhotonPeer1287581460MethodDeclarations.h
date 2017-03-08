#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t1287581460;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1433975096;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t132490578;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t3509750057;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t22885347;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t2721523875;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2491712834;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_TrafficStat1433975096.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_TrafficStats132490578.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateVa3379997816.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SupportClas3509750057.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeSt2721523875.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Deserialize2491712834.h"

// System.Byte ExitGames.Client.Photon.PhotonPeer::get_ClientSdkIdShifted()
extern "C"  uint8_t PhotonPeer_get_ClientSdkIdShifted_m1784071468 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ClientVersion()
extern "C"  String_t* PhotonPeer_get_ClientVersion_m2796477443 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
extern "C"  Type_t * PhotonPeer_get_SocketImplementation_m3732072168 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C"  void PhotonPeer_set_SocketImplementation_m298937207 (PhotonPeer_t1287581460 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C"  Il2CppObject * PhotonPeer_get_Listener_m1447751663 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PhotonPeer_set_Listener_m236590144 (PhotonPeer_t1287581460 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t1433975096 * PhotonPeer_get_TrafficStatsIncoming_m1572764564 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsIncoming(ExitGames.Client.Photon.TrafficStats)
extern "C"  void PhotonPeer_set_TrafficStatsIncoming_m3309121897 (PhotonPeer_t1287581460 * __this, TrafficStats_t1433975096 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t1433975096 * PhotonPeer_get_TrafficStatsOutgoing_m1736572250 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsOutgoing(ExitGames.Client.Photon.TrafficStats)
extern "C"  void PhotonPeer_set_TrafficStatsOutgoing_m786548783 (PhotonPeer_t1287581460 * __this, TrafficStats_t1433975096 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t132490578 * PhotonPeer_get_TrafficStatsGameLevel_m3470277196 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsGameLevel(ExitGames.Client.Photon.TrafficStatsGameLevel)
extern "C"  void PhotonPeer_set_TrafficStatsGameLevel_m3804475335 (PhotonPeer_t1287581460 * __this, TrafficStatsGameLevel_t132490578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C"  int64_t PhotonPeer_get_TrafficStatsElapsedMs_m2830814184 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C"  bool PhotonPeer_get_TrafficStatsEnabled_m755224994 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_TrafficStatsEnabled_m3359482747 (PhotonPeer_t1287581460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C"  void PhotonPeer_TrafficStatsReset_m3433990127 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::InitializeTrafficStats()
extern "C"  void PhotonPeer_InitializeTrafficStats_m3919975698 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_CommandLogSize()
extern "C"  int32_t PhotonPeer_get_CommandLogSize_m2630948435 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C"  uint8_t PhotonPeer_get_QuickResendAttempts_m1419342171 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C"  void PhotonPeer_set_QuickResendAttempts_m648351896 (PhotonPeer_t1287581460 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C"  uint8_t PhotonPeer_get_PeerState_m1651403141 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C"  int32_t PhotonPeer_get_LimitOfUnreliableCommands_m245920422 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C"  void PhotonPeer_set_LimitOfUnreliableCommands_m1454183603 (PhotonPeer_t1287581460 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C"  bool PhotonPeer_get_CrcEnabled_m281174572 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_CrcEnabled_m3537663105 (PhotonPeer_t1287581460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C"  int32_t PhotonPeer_get_PacketLossByCrc_m2535258171 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C"  int32_t PhotonPeer_get_ResentReliableCommands_m2794331478 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C"  int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m1548078592 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ConnectionTime()
extern "C"  int32_t PhotonPeer_get_ConnectionTime_m2859925828 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LastSendOutgoingTime()
extern "C"  int32_t PhotonPeer_get_LastSendOutgoingTime_m3959909424 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LocalMsTimestampDelegate(ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate)
extern "C"  void PhotonPeer_set_LocalMsTimestampDelegate_m4200296382 (PhotonPeer_t1287581460 * __this, IntegerMillisecondsDelegate_t3509750057 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C"  int32_t PhotonPeer_get_RoundTripTime_m1741552137 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C"  int32_t PhotonPeer_get_RoundTripTimeVariance_m1245541466 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C"  int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m354906854 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C"  String_t* PhotonPeer_get_ServerAddress_m1612591015 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C"  uint8_t PhotonPeer_get_UsedProtocol_m89528173 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
extern "C"  uint8_t PhotonPeer_get_TransportProtocol_m930677195 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer_set_TransportProtocol_m2531458422 (PhotonPeer_t1287581460 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C"  bool PhotonPeer_get_IsSimulationEnabled_m1920015443 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_IsSimulationEnabled_m408282220 (PhotonPeer_t1287581460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t22885347 * PhotonPeer_get_NetworkSimulationSettings_m1180521849 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_MaximumTransferUnit()
extern "C"  int32_t PhotonPeer_get_MaximumTransferUnit_m2058856024 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C"  bool PhotonPeer_get_IsEncryptionAvailable_m2303138463 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSendingOnlyAcks()
extern "C"  bool PhotonPeer_get_IsSendingOnlyAcks_m1198103017 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PhotonPeer_set_IsSendingOnlyAcks_m2643096578 (PhotonPeer_t1287581460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m255648660 (PhotonPeer_t1287581460 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m1687247209 (PhotonPeer_t1287581460 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C"  bool PhotonPeer_Connect_m3279737928 (PhotonPeer_t1287581460 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object)
extern "C"  bool PhotonPeer_Connect_m300286230 (PhotonPeer_t1287581460 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, Il2CppObject * ___custom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::CreatePeerBase()
extern "C"  void PhotonPeer_CreatePeerBase_m165688559 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C"  void PhotonPeer_Disconnect_m1116010844 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C"  void PhotonPeer_StopThread_m2797753708 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C"  void PhotonPeer_FetchServerTimestamp_m1199969721 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C"  bool PhotonPeer_EstablishEncryption_m3147807080 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::InitDatagramEncryption(System.Byte[],System.Byte[])
extern "C"  bool PhotonPeer_InitDatagramEncryption_m2046790626 (PhotonPeer_t1287581460 * __this, ByteU5BU5D_t4260760469* ___encryptionSecret0, ByteU5BU5D_t4260760469* ___hmacSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::InitPayloadEncryption(System.Byte[])
extern "C"  void PhotonPeer_InitPayloadEncryption_m2964006790 (PhotonPeer_t1287581460 * __this, ByteU5BU5D_t4260760469* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C"  void PhotonPeer_Service_m1992667159 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C"  bool PhotonPeer_SendOutgoingCommands_m3353319250 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C"  bool PhotonPeer_SendAcksOnly_m2183126420 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C"  bool PhotonPeer_DispatchIncomingCommands_m2351842686 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C"  String_t* PhotonPeer_VitalStatsToString_m3897397209 (PhotonPeer_t1287581460 * __this, bool ___all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3989654084 (PhotonPeer_t1287581460 * __this, uint8_t ___customOpCode0, Dictionary_2_t903024962 * ___customOpParameters1, bool ___sendReliable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C"  bool PhotonPeer_OpCustom_m1198390121 (PhotonPeer_t1287581460 * __this, uint8_t ___customOpCode0, Dictionary_2_t903024962 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3851483380 (PhotonPeer_t1287581460 * __this, uint8_t ___customOpCode0, Dictionary_2_t903024962 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool PhotonPeer_RegisterType_m2302387958 (Il2CppObject * __this /* static, unused */, Type_t * ___customType0, uint8_t ___code1, SerializeStreamMethod_t2721523875 * ___serializeMethod2, DeserializeStreamMethod_t2491712834 * ___constructor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.cctor()
extern "C"  void PhotonPeer__cctor_m3756241513 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EstablishEncryption>b__148_0()
extern "C"  bool PhotonPeer_U3CEstablishEncryptionU3Eb__148_0_m3497104782 (PhotonPeer_t1287581460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
