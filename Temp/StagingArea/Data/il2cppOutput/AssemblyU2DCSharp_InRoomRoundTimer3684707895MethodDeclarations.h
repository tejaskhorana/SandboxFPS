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

// InRoomRoundTimer
struct InRoomRoundTimer_t3684707895;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"

// System.Void InRoomRoundTimer::.ctor()
extern "C"  void InRoomRoundTimer__ctor_m3469739588 (InRoomRoundTimer_t3684707895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
extern "C"  void InRoomRoundTimer_StartRoundNow_m132840652 (InRoomRoundTimer_t3684707895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern "C"  void InRoomRoundTimer_OnJoinedRoom_m1765079491 (InRoomRoundTimer_t3684707895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m3838225328 (InRoomRoundTimer_t3684707895 * __this, Hashtable_t284945826 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void InRoomRoundTimer_OnMasterClientSwitched_m380004418 (InRoomRoundTimer_t3684707895 * __this, PhotonPlayer_t1400510109 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
extern "C"  void InRoomRoundTimer_Update_m1914606921 (InRoomRoundTimer_t3684707895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
extern "C"  void InRoomRoundTimer_OnGUI_m2965138238 (InRoomRoundTimer_t3684707895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
