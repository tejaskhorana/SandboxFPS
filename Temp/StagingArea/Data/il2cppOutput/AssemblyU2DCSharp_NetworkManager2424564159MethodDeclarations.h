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

// NetworkManager
struct NetworkManager_t2424564159;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m3551750588 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::Start()
extern "C"  void NetworkManager_Start_m2498888380 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NetworkManager::UpdateConnectionString()
extern "C"  Il2CppObject * NetworkManager_UpdateConnectionString_m3753056264 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::OnJoinedLobby()
extern "C"  void NetworkManager_OnJoinedLobby_m3895346440 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::OnReceivedRoomListUpdate()
extern "C"  void NetworkManager_OnReceivedRoomListUpdate_m1790183754 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::JoinRoom()
extern "C"  void NetworkManager_JoinRoom_m2828449901 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::OnJoinedRoom()
extern "C"  void NetworkManager_OnJoinedRoom_m1960394571 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::StartSpawnProcess(System.Single)
extern "C"  void NetworkManager_StartSpawnProcess_m2220064731 (NetworkManager_t2424564159 * __this, float ___respawnTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NetworkManager::SpawnPlayer(System.Single)
extern "C"  Il2CppObject * NetworkManager_SpawnPlayer_m2269996637 (NetworkManager_t2424564159 * __this, float ___respawnTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::AddMessage(System.String)
extern "C"  void NetworkManager_AddMessage_m1244037204 (NetworkManager_t2424564159 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::AddMessage_RPC(System.String)
extern "C"  void NetworkManager_AddMessage_RPC_m1331303694 (NetworkManager_t2424564159 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
