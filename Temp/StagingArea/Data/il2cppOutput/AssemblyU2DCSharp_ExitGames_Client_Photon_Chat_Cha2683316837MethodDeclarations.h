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

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2683316837;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t3075161162;
// System.String
struct String_t;
// ExitGames.Client.Photon.EventData
struct EventData_t4282381190;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1570318300;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3645051765;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4282381190.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2029897749.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2247734787.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Chat447829919.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Aut1570318300.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha3645051765.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatClient__ctor_m2228705838 (ChatClient_t2683316837 * __this, Il2CppObject * ___listener0, uint8_t ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m4228729937 (ChatClient_t2683316837 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m2837198992 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m2885565246 (ChatClient_t2683316837 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m2060357095 (ChatClient_t2683316837 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C"  String_t* ChatClient_get_NameServerAddress_m2206889194 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C"  void ChatClient_set_NameServerAddress_m2438851599 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C"  String_t* ChatClient_get_FrontendAddress_m2341387718 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C"  void ChatClient_set_FrontendAddress_m2135419507 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C"  String_t* ChatClient_get_ChatRegion_m1315884234 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C"  void ChatClient_set_ChatRegion_m1792173217 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C"  int32_t ChatClient_get_State_m1344139026 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatClient_set_State_m252220001 (ChatClient_t2683316837 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C"  int32_t ChatClient_get_DisconnectedCause_m2622843347 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C"  void ChatClient_set_DisconnectedCause_m568772898 (ChatClient_t2683316837 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C"  bool ChatClient_get_CanChat_m135816925 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::CanChatInChannel(System.String)
extern "C"  bool ChatClient_CanChatInChannel_m2374829096 (ChatClient_t2683316837 * __this, String_t* ___channelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C"  bool ChatClient_get_HasPeer_m200555953 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C"  String_t* ChatClient_get_AppVersion_m1348154645 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C"  void ChatClient_set_AppVersion_m776539702 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C"  String_t* ChatClient_get_AppId_m1023506592 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C"  void ChatClient_set_AppId_m906148505 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C"  AuthenticationValues_t1570318300 * ChatClient_get_AuthValues_m1081887150 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  void ChatClient_set_AuthValues_m2223143485 (ChatClient_t2683316837 * __this, AuthenticationValues_t1570318300 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C"  String_t* ChatClient_get_UserId_m250142372 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern "C"  void ChatClient_set_UserId_m4055310727 (ChatClient_t2683316837 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatClient_Connect_m4208117420 (ChatClient_t2683316837 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t1570318300 * ___authValues2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C"  void ChatClient_Service_m1942449535 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C"  void ChatClient_Disconnect_m4026360564 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C"  void ChatClient_StopThread_m1413136132 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C"  bool ChatClient_Subscribe_m2822742872 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C"  bool ChatClient_Subscribe_m3236014207 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___channels0, int32_t ___messagesFromHistory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C"  bool ChatClient_Unsubscribe_m1189709809 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern "C"  bool ChatClient_PublishMessage_m3156405556 (ChatClient_t2683316837 * __this, String_t* ___channelName0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object)
extern "C"  bool ChatClient_PublishMessageUnreliable_m3392590801 (ChatClient_t2683316837 * __this, String_t* ___channelName0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_publishMessage_m3230251945 (ChatClient_t2683316837 * __this, String_t* ___channelName0, Il2CppObject * ___message1, bool ___reliable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C"  bool ChatClient_SendPrivateMessage_m1581463680 (ChatClient_t2683316837 * __this, String_t* ___target0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_SendPrivateMessage_m2954169085 (ChatClient_t2683316837 * __this, String_t* ___target0, Il2CppObject * ___message1, bool ___encrypt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_SendPrivateMessageUnreliable_m1778255296 (ChatClient_t2683316837 * __this, String_t* ___target0, Il2CppObject * ___message1, bool ___encrypt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C"  bool ChatClient_sendPrivateMessage_m1210982144 (ChatClient_t2683316837 * __this, String_t* ___target0, Il2CppObject * ___message1, bool ___encrypt2, bool ___reliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C"  bool ChatClient_SetOnlineStatus_m1857098809 (ChatClient_t2683316837 * __this, int32_t ___status0, Il2CppObject * ___message1, bool ___skipMessage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C"  bool ChatClient_SetOnlineStatus_m2651953782 (ChatClient_t2683316837 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C"  bool ChatClient_SetOnlineStatus_m3004522180 (ChatClient_t2683316837 * __this, int32_t ___status0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C"  bool ChatClient_AddFriends_m3471925960 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___friends0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C"  bool ChatClient_RemoveFriends_m1822465425 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___friends0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C"  String_t* ChatClient_GetPrivateChannelNameByUser_m4106407314 (ChatClient_t2683316837 * __this, String_t* ___userName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m1324272726 (ChatClient_t2683316837 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t3645051765 ** ___channel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m2376683089 (ChatClient_t2683316837 * __this, String_t* ___channelName0, ChatChannel_t3645051765 ** ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C"  void ChatClient_SendAcksOnly_m487252886 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void ChatClient_set_DebugOut_m1466234533 (ChatClient_t2683316837 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C"  uint8_t ChatClient_get_DebugOut_m487387402 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C"  bool ChatClient_SendChannelOperation_m2882762722 (ChatClient_t2683316837 * __this, StringU5BU5D_t4054002952* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandlePrivateMessageEvent_m3248326960 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleChatMessagesEvent_m60832944 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleSubscribeEvent_m4150295256 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleUnsubscribeEvent_m2719742239 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_HandleAuthResponse_m1131356923 (ChatClient_t2683316837 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleStatusUpdate_m578655053 (ChatClient_t2683316837 * __this, EventData_t4282381190 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C"  void ChatClient_ConnectToFrontEnd_m1708094753 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C"  bool ChatClient_AuthenticateOnFrontEnd_m1229005514 (ChatClient_t2683316837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
