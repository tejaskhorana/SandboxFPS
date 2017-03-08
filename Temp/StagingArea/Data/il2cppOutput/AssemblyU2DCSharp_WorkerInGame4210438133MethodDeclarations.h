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

// WorkerInGame
struct WorkerInGame_t4210438133;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void WorkerInGame::.ctor()
extern "C"  void WorkerInGame__ctor_m3349145158 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
extern "C"  void WorkerInGame_Awake_m3586750377 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
extern "C"  void WorkerInGame_OnGUI_m2844543808 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void WorkerInGame_OnMasterClientSwitched_m4223393664 (WorkerInGame_t4210438133 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
extern "C"  void WorkerInGame_OnLeftRoom_m2776204479 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
extern "C"  void WorkerInGame_OnDisconnectedFromPhoton_m2101295070 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void WorkerInGame_OnPhotonInstantiate_m4269204102 (WorkerInGame_t4210438133 * __this, PhotonMessageInfo_t259585817  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerConnected_m2071163604 (WorkerInGame_t4210438133 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerDisconnected_m2312528408 (WorkerInGame_t4210438133 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
extern "C"  void WorkerInGame_OnFailedToConnectToPhoton_m512085934 (WorkerInGame_t4210438133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
