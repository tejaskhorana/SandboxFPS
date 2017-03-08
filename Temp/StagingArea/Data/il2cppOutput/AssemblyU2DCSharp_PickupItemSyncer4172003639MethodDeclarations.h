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

// PickupItemSyncer
struct PickupItemSyncer_t4172003639;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PickupItemSyncer::.ctor()
extern "C"  void PickupItemSyncer__ctor_m244374340 (PickupItemSyncer_t4172003639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PickupItemSyncer_OnPhotonPlayerConnected_m2620921682 (PickupItemSyncer_t4172003639 * __this, PhotonPlayer_t1400510109 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
extern "C"  void PickupItemSyncer_OnJoinedRoom_m1271563459 (PickupItemSyncer_t4172003639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern "C"  void PickupItemSyncer_AskForPickupItemSpawnTimes_m1649024778 (PickupItemSyncer_t4172003639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C"  void PickupItemSyncer_RequestForPickupTimes_m3523479303 (PickupItemSyncer_t4172003639 * __this, PhotonMessageInfo_t259585817  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupItems(PhotonMessageInfo)
extern "C"  void PickupItemSyncer_RequestForPickupItems_m1588482125 (PickupItemSyncer_t4172003639 * __this, PhotonMessageInfo_t259585817  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern "C"  void PickupItemSyncer_SendPickedUpItems_m1470168642 (PickupItemSyncer_t4172003639 * __this, PhotonPlayer_t1400510109 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern "C"  void PickupItemSyncer_PickupItemInit_m3675923462 (PickupItemSyncer_t4172003639 * __this, double ___timeBase0, SingleU5BU5D_t2316563989* ___inactivePickupsAndTimes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
