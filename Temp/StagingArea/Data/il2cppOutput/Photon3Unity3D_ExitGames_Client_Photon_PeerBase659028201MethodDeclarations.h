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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1433975096;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t132490578;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t22885347;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2162807876;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_My2162807876.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2029897749.h"

// System.String ExitGames.Client.Photon.PeerBase::get_ClientVersion()
extern "C"  String_t* PeerBase_get_ClientVersion_m3374954190 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
extern "C"  Type_t * PeerBase_get_SocketImplementation_m346395517 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C"  String_t* PeerBase_get_ServerAddress_m2191067762 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C"  void PeerBase_set_ServerAddress_m1606218401 (PeerBase_t659028201 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C"  bool PeerBase_get_TrafficStatsEnabled_m1446203245 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t1433975096 * PeerBase_get_TrafficStatsIncoming_m137213545 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t1433975096 * PeerBase_get_TrafficStatsOutgoing_m301021231 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t132490578 * PeerBase_get_TrafficStatsGameLevel_m3623779223 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_crcEnabled()
extern "C"  bool PeerBase_get_crcEnabled_m128700385 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C"  Il2CppObject * PeerBase_get_Listener_m2440165892 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
extern "C"  uint8_t PeerBase_get_debugOut_m1149890861 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_sentCountAllowance()
extern "C"  int32_t PeerBase_get_sentCountAllowance_m2361887151 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
extern "C"  int32_t PeerBase_get_DisconnectTimeout_m2722927545 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
extern "C"  int32_t PeerBase_get_timePingInterval_m2499638898 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
extern "C"  uint8_t PeerBase_get_ChannelCount_m2307756918 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_limitOfUnreliableCommands()
extern "C"  int32_t PeerBase_get_limitOfUnreliableCommands_m319526353 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C"  uint8_t PeerBase_get_QuickResendAttempts_m4022294950 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t22885347 * PeerBase_get_NetworkSimulationSettings_m2442487428 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_CommandLogSize()
extern "C"  int32_t PeerBase_get_CommandLogSize_m2020115496 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C"  void PeerBase_CommandLogResize_m3387006562 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C"  void PeerBase_CommandLogInit_m866731774 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C"  void PeerBase_InitOnce_m3044186886 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::GetHttpKeyValueString(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  String_t* PeerBase_GetHttpKeyValueString_m3407079676 (PeerBase_t659028201 * __this, Dictionary_2_t827649927 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsIpv6()
extern "C"  bool PeerBase_get_IsIpv6_m713436133 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
extern "C"  ByteU5BU5D_t4260760469* PeerBase_PrepareConnectData_m2703502432 (PeerBase_t659028201 * __this, String_t* ___serverAddress0, String_t* ___appID1, Il2CppObject * ___custom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
extern "C"  String_t* PeerBase_PepareWebSocketUrl_m629291955 (PeerBase_t659028201 * __this, String_t* ___serverAddress0, String_t* ___appId1, Il2CppObject * ___customData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PeerBase_EnqueueOperation_m3101369536 (PeerBase_t659028201 * __this, Dictionary_2_t903024962 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypted4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C"  bool PeerBase_SendAcksOnly_m4216656041 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C"  void PeerBase_InitCallback_m3112810954 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C"  bool PeerBase_get_IsSendingOnlyAcks_m90443380 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_mtu()
extern "C"  int32_t PeerBase_get_mtu_m1943790946 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption(System.Object)
extern "C"  bool PeerBase_ExchangeKeysForEncryption_m2714319112 (PeerBase_t659028201 * __this, Il2CppObject * ___lockObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PeerBase_DeriveSharedKey_m2466133956 (PeerBase_t659028201 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_EnqueueActionForDispatch_m3802104372 (PeerBase_t659028201 * __this, MyAction_t2162807876 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void PeerBase_EnqueueDebugReturn_m588616545 (PeerBase_t659028201 * __this, uint8_t ___level0, String_t* ___debugReturn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C"  void PeerBase_EnqueueStatusCallback_m919368243 (PeerBase_t659028201 * __this, int32_t ___statusValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C"  void PeerBase_InitPeerBase_m2717874520 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C"  bool PeerBase_DeserializeMessageAndCallback_m2440894846 (PeerBase_t659028201 * __this, ByteU5BU5D_t4260760469* ___inBuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_SendNetworkSimulated_m3835487327 (PeerBase_t659028201 * __this, MyAction_t2162807876 * ___sendAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_ReceiveNetworkSimulated_m3933505740 (PeerBase_t659028201 * __this, MyAction_t2162807876 * ___receiveAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C"  void PeerBase_NetworkSimRun_m1000990831 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C"  void PeerBase_UpdateRoundTripTimeAndVariance_m874745751 (PeerBase_t659028201 * __this, int32_t ___lastRoundtripTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitEncryption(System.Byte[])
extern "C"  void PeerBase_InitEncryption_m989506625 (PeerBase_t659028201 * __this, ByteU5BU5D_t4260760469* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C"  void PeerBase__ctor_m2261481935 (PeerBase_t659028201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
