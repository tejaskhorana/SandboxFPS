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

// PunTurnManager
struct PunTurnManager_t2757607879;
// System.Object
struct Il2CppObject;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"

// System.Void PunTurnManager::.ctor()
extern "C"  void PunTurnManager__ctor_m2646088372 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PunTurnManager::get_Turn()
extern "C"  int32_t PunTurnManager_get_Turn_m2080694116 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::set_Turn(System.Int32)
extern "C"  void PunTurnManager_set_Turn_m3825743515 (PunTurnManager_t2757607879 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::get_ElapsedTimeInTurn()
extern "C"  float PunTurnManager_get_ElapsedTimeInTurn_m1907236200 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::get_RemainingSecondsInTurn()
extern "C"  float PunTurnManager_get_RemainingSecondsInTurn_m3246497776 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsCompletedByAll()
extern "C"  bool PunTurnManager_get_IsCompletedByAll_m324115734 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsFinishedByMe()
extern "C"  bool PunTurnManager_get_IsFinishedByMe_m439410616 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsOver()
extern "C"  bool PunTurnManager_get_IsOver_m3778550251 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::Start()
extern "C"  void PunTurnManager_Start_m1593226164 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::Update()
extern "C"  void PunTurnManager_Update_m2151223001 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::BeginTurn()
extern "C"  void PunTurnManager_BeginTurn_m2308212376 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::SendMove(System.Object,System.Boolean)
extern "C"  void PunTurnManager_SendMove_m2147511730 (PunTurnManager_t2757607879 * __this, Il2CppObject * ___move0, bool ___finished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::GetPlayerFinishedTurn(PhotonPlayer)
extern "C"  bool PunTurnManager_GetPlayerFinishedTurn_m448639783 (PunTurnManager_t2757607879 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnEvent(System.Byte,System.Object,System.Int32)
extern "C"  void PunTurnManager_OnEvent_m491970955 (PunTurnManager_t2757607879 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunTurnManager_OnPhotonCustomRoomPropertiesChanged_m3080571200 (PunTurnManager_t2757607879 * __this, Hashtable_t284945826 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
