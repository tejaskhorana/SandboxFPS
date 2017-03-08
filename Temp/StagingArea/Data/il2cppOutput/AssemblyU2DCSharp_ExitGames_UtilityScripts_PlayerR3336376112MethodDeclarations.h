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

// ExitGames.UtilityScripts.PlayerRoomIndexing
struct PlayerRoomIndexing_t3336376112;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"

// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::.ctor()
extern "C"  void PlayerRoomIndexing__ctor_m3927175512 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.UtilityScripts.PlayerRoomIndexing::get_PlayerIds()
extern "C"  Int32U5BU5D_t3230847821* PlayerRoomIndexing_get_PlayerIds_m243489744 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::Awake()
extern "C"  void PlayerRoomIndexing_Awake_m4164780731 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnJoinedRoom()
extern "C"  void PlayerRoomIndexing_OnJoinedRoom_m2119839791 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnLeftRoom()
extern "C"  void PlayerRoomIndexing_OnLeftRoom_m3482031341 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnPhotonPlayerConnected_m1407210086 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnPhotonPlayerDisconnected_m797671750 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PlayerRoomIndexing_OnPhotonCustomRoomPropertiesChanged_m1531293212 (PlayerRoomIndexing_t3336376112 * __this, Hashtable_t284945826 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnMasterClientSwitched_m1431029166 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.UtilityScripts.PlayerRoomIndexing::GetRoomIndex(PhotonPlayer)
extern "C"  int32_t PlayerRoomIndexing_GetRoomIndex_m3883936994 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::SanitizeIndexing()
extern "C"  void PlayerRoomIndexing_SanitizeIndexing_m2236821381 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::RefreshData()
extern "C"  void PlayerRoomIndexing_RefreshData_m1957168795 (PlayerRoomIndexing_t3336376112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::AssignIndex(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_AssignIndex_m3760240668 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::UnAssignIndex(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_UnAssignIndex_m160349763 (PlayerRoomIndexing_t3336376112 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
