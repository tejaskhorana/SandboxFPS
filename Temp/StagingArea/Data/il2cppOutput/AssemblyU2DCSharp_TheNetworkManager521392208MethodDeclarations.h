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

// TheNetworkManager
struct TheNetworkManager_t521392208;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void TheNetworkManager::.ctor()
extern "C"  void TheNetworkManager__ctor_m3237820187 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::Start()
extern "C"  void TheNetworkManager_Start_m2184957979 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TheNetworkManager::UpdateConnectionString()
extern "C"  Il2CppObject * TheNetworkManager_UpdateConnectionString_m776708857 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::OnJoinedLobby()
extern "C"  void TheNetworkManager_OnJoinedLobby_m1321223015 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::OnReceivedRoomListUpdate()
extern "C"  void TheNetworkManager_OnReceivedRoomListUpdate_m209955211 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::JoinRoom()
extern "C"  void TheNetworkManager_JoinRoom_m671677102 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::OnJoinedRoom()
extern "C"  void TheNetworkManager_OnJoinedRoom_m2431547660 (TheNetworkManager_t521392208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::StartSpawnProcess(System.Single)
extern "C"  void TheNetworkManager_StartSpawnProcess_m2724211548 (TheNetworkManager_t521392208 * __this, float ___respawnTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TheNetworkManager::SpawnPlayer(System.Single)
extern "C"  Il2CppObject * TheNetworkManager_SpawnPlayer_m2448357646 (TheNetworkManager_t521392208 * __this, float ___respawnTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::AddMessage(System.String)
extern "C"  void TheNetworkManager_AddMessage_m2578535411 (TheNetworkManager_t521392208 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TheNetworkManager::AddMessage_RPC(System.String)
extern "C"  void TheNetworkManager_AddMessage_RPC_m1879310637 (TheNetworkManager_t521392208 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
