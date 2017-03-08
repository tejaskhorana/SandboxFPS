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

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3645051765;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C"  void ChatChannel__ctor_m4247370038 (ChatChannel_t3645051765 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C"  bool ChatChannel_get_IsPrivate_m3372286086 (ChatChannel_t3645051765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C"  void ChatChannel_set_IsPrivate_m979536573 (ChatChannel_t3645051765 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C"  int32_t ChatChannel_get_MessageCount_m97522775 (ChatChannel_t3645051765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C"  void ChatChannel_Add_m1905348197 (ChatChannel_t3645051765 * __this, String_t* ___sender0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C"  void ChatChannel_Add_m700170657 (ChatChannel_t3645051765 * __this, StringU5BU5D_t4054002952* ___senders0, ObjectU5BU5D_t1108656482* ___messages1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::TruncateMessages()
extern "C"  void ChatChannel_TruncateMessages_m1854044234 (ChatChannel_t3645051765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C"  void ChatChannel_ClearMessages_m704184803 (ChatChannel_t3645051765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatChannel::ToStringMessages()
extern "C"  String_t* ChatChannel_ToStringMessages_m2131237235 (ChatChannel_t3645051765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
