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

// ExitGames.Client.Photon.TPeer
struct TPeer_t3036571928;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Eg1418663389.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"

// System.Void ExitGames.Client.Photon.TPeer::.ctor()
extern "C"  void TPeer__ctor_m424223342 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
extern "C"  void TPeer_InitPeerBase_m53456857 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.Object)
extern "C"  bool TPeer_Connect_m564055872 (TPeer_t3036571928 * __this, String_t* ___serverAddress0, String_t* ___appID1, Il2CppObject * ___customData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
extern "C"  void TPeer_OnConnect_m685141335 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
extern "C"  void TPeer_Disconnect_m113246962 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
extern "C"  void TPeer_StopConnection_m3289503574 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
extern "C"  void TPeer_FetchServerTimestamp_m2253036495 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
extern "C"  void TPeer_EnqueueInit_m1234144709 (TPeer_t3036571928 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
extern "C"  bool TPeer_DispatchIncomingCommands_m1321103784 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
extern "C"  bool TPeer_SendOutgoingCommands_m250636412 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
extern "C"  bool TPeer_SendAcksOnly_m935426238 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C"  bool TPeer_EnqueueOperation_m740613012 (TPeer_t3036571928 * __this, Dictionary_2_t903024962 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, uint8_t ___messageType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* TPeer_SerializeOperationToMessage_m2353976576 (TPeer_t3036571928 * __this, uint8_t ___opc0, Dictionary_2_t903024962 * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(System.Boolean,System.Byte[],System.Byte)
extern "C"  bool TPeer_EnqueueMessageAsPayload_m1033141982 (TPeer_t3036571928 * __this, bool ___sendReliable0, ByteU5BU5D_t4260760469* ___opMessage1, uint8_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C"  void TPeer_SendPing_m292050224 (TPeer_t3036571928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[])
extern "C"  void TPeer_SendData_m2732454753 (TPeer_t3036571928 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C"  void TPeer_ReceiveIncomingCommands_m349453771 (TPeer_t3036571928 * __this, ByteU5BU5D_t4260760469* ___inbuff0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C"  void TPeer_ReadPingResult_m3812023214 (TPeer_t3036571928 * __this, ByteU5BU5D_t4260760469* ___inbuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
extern "C"  void TPeer_ReadPingResult_m76216745 (TPeer_t3036571928 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
extern "C"  void TPeer__cctor_m4078892799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
