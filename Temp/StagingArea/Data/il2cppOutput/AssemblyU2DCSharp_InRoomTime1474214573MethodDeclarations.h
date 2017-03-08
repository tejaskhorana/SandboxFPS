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

// InRoomTime
struct InRoomTime_t1474214573;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"

// System.Void InRoomTime::.ctor()
extern "C"  void InRoomTime__ctor_m2944372878 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double InRoomTime::get_RoomTime()
extern "C"  double InRoomTime_get_RoomTime_m2291864426 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InRoomTime::get_RoomTimestamp()
extern "C"  int32_t InRoomTime_get_RoomTimestamp_m2141236784 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InRoomTime::get_IsRoomTimeSet()
extern "C"  bool InRoomTime_get_IsRoomTimeSet_m3691073151 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InRoomTime::SetRoomStartTimestamp()
extern "C"  Il2CppObject * InRoomTime_SetRoomStartTimestamp_m1856988341 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnJoinedRoom()
extern "C"  void InRoomTime_OnJoinedRoom_m2666342457 (InRoomTime_t1474214573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void InRoomTime_OnMasterClientSwitched_m3468999224 (InRoomTime_t1474214573 * __this, PhotonPlayer_t1400510109 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void InRoomTime_OnPhotonCustomRoomPropertiesChanged_m2119761958 (InRoomTime_t1474214573 * __this, Hashtable_t284945826 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
