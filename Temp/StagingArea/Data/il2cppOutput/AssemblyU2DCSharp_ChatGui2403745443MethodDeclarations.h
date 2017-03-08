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

// ChatGui
struct ChatGui_t2403745443;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2247734787.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void ChatGui::.ctor()
extern "C"  void ChatGui__ctor_m1170978856 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
extern "C"  void ChatGui__cctor_m1458509957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
extern "C"  String_t* ChatGui_get_UserName_m4137430936 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
extern "C"  void ChatGui_set_UserName_m3050547923 (ChatGui_t2403745443 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
extern "C"  void ChatGui_Start_m118116648 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Connect()
extern "C"  void ChatGui_Connect_m3392407152 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
extern "C"  void ChatGui_OnApplicationQuit_m1266231718 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
extern "C"  void ChatGui_Update_m3667468261 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnEnterSend()
extern "C"  void ChatGui_OnEnterSend_m2610371751 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnClickSend()
extern "C"  void ChatGui_OnClickSend_m3896252247 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::SendChatMessage(System.String)
extern "C"  void ChatGui_SendChatMessage_m2216574453 (ChatGui_t2403745443 * __this, String_t* ___inputLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
extern "C"  void ChatGui_PostHelpToCurrentChannel_m1853693410 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatGui_DebugReturn_m2165201274 (ChatGui_t2403745443 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
extern "C"  void ChatGui_OnConnected_m4292014832 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
extern "C"  void ChatGui_OnDisconnected_m233577878 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatGui_OnChatStateChange_m2495926835 (ChatGui_t2403745443 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
extern "C"  void ChatGui_OnSubscribed_m3637841968 (ChatGui_t2403745443 * __this, StringU5BU5D_t4054002952* ___channels0, BooleanU5BU5D_t3456302923* ___results1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::InstantiateChannelButton(System.String)
extern "C"  void ChatGui_InstantiateChannelButton_m985279803 (ChatGui_t2403745443 * __this, String_t* ___channelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::InstantiateFriendButton(System.String)
extern "C"  void ChatGui_InstantiateFriendButton_m334202882 (ChatGui_t2403745443 * __this, String_t* ___friendId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
extern "C"  void ChatGui_OnUnsubscribed_m3267464914 (ChatGui_t2403745443 * __this, StringU5BU5D_t4054002952* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
extern "C"  void ChatGui_OnGetMessages_m1418079615 (ChatGui_t2403745443 * __this, String_t* ___channelName0, StringU5BU5D_t4054002952* ___senders1, ObjectU5BU5D_t1108656482* ___messages2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
extern "C"  void ChatGui_OnPrivateMessage_m990768589 (ChatGui_t2403745443 * __this, String_t* ___sender0, Il2CppObject * ___message1, String_t* ___channelName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
extern "C"  void ChatGui_OnStatusUpdate_m1328107296 (ChatGui_t2403745443 * __this, String_t* ___user0, int32_t ___status1, bool ___gotMessage2, Il2CppObject * ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::AddMessageToSelectedChannel(System.String)
extern "C"  void ChatGui_AddMessageToSelectedChannel_m4120221685 (ChatGui_t2403745443 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::ShowChannel(System.String)
extern "C"  void ChatGui_ShowChannel_m1498164022 (ChatGui_t2403745443 * __this, String_t* ___channelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OpenDashboard()
extern "C"  void ChatGui_OpenDashboard_m1729047856 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
