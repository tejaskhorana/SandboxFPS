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

// PunTeams
struct PunTeams_t1679509581;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"

// System.Void PunTeams::.ctor()
extern "C"  void PunTeams__ctor_m883784942 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::Start()
extern "C"  void PunTeams_Start_m4125890030 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnDisable()
extern "C"  void PunTeams_OnDisable_m78686805 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnJoinedRoom()
extern "C"  void PunTeams_OnJoinedRoom_m3874394073 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnLeftRoom()
extern "C"  void PunTeams_OnLeftRoom_m1848104727 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C"  void PunTeams_OnPhotonPlayerPropertiesChanged_m3840927521 (PunTeams_t1679509581 * __this, ObjectU5BU5D_t1108656482* ___playerAndUpdatedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PunTeams_OnPhotonPlayerDisconnected_m1814839408 (PunTeams_t1679509581 * __this, PhotonPlayer_t1400510109 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PunTeams_OnPhotonPlayerConnected_m1910109052 (PunTeams_t1679509581 * __this, PhotonPlayer_t1400510109 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::UpdateTeams()
extern "C"  void PunTeams_UpdateTeams_m2132262137 (PunTeams_t1679509581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
