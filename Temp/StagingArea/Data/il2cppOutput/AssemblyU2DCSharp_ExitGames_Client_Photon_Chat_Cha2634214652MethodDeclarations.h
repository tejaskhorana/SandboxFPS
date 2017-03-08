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

// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t2634214652;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1570318300;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Aut1570318300.h"

// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatPeer__ctor_m1961758554 (ChatPeer_t2634214652 * __this, Il2CppObject * ___listener0, uint8_t ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.cctor()
extern "C"  void ChatPeer__cctor_m3072131032 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C"  String_t* ChatPeer_get_NameServerAddress_m15646963 (ChatPeer_t2634214652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C"  bool ChatPeer_get_IsProtocolSecure_m1928363837 (ChatPeer_t2634214652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::ConfigUnitySockets()
extern "C"  void ChatPeer_ConfigUnitySockets_m2554466044 (ChatPeer_t2634214652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C"  String_t* ChatPeer_GetNameServerAddress_m3094006428 (ChatPeer_t2634214652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect()
extern "C"  bool ChatPeer_Connect_m258031665 (ChatPeer_t2634214652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatPeer_AuthenticateOnNameServer_m2632998803 (ChatPeer_t2634214652 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_t1570318300 * ___authValues3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
