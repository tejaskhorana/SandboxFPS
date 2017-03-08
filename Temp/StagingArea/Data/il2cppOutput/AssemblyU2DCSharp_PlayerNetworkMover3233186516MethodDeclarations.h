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

// PlayerNetworkMover
struct PlayerNetworkMover_t3233186516;
// PlayerNetworkMover/Respawn
struct Respawn_t3937997005;
// PlayerNetworkMover/SendMessage
struct SendMessage_t1673701508;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// PhotonStream
struct PhotonStream_t1494272828;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerNetworkMover_Respawn3937997005.h"
#include "AssemblyU2DCSharp_PlayerNetworkMover_SendMessage1673701508.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "mscorlib_System_String7231557.h"

// System.Void PlayerNetworkMover::.ctor()
extern "C"  void PlayerNetworkMover__ctor_m477326407 (PlayerNetworkMover_t3233186516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::add_RespawnMe(PlayerNetworkMover/Respawn)
extern "C"  void PlayerNetworkMover_add_RespawnMe_m702482170 (PlayerNetworkMover_t3233186516 * __this, Respawn_t3937997005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::remove_RespawnMe(PlayerNetworkMover/Respawn)
extern "C"  void PlayerNetworkMover_remove_RespawnMe_m1589870357 (PlayerNetworkMover_t3233186516 * __this, Respawn_t3937997005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::add_SendNetworkMessage(PlayerNetworkMover/SendMessage)
extern "C"  void PlayerNetworkMover_add_SendNetworkMessage_m2158109208 (PlayerNetworkMover_t3233186516 * __this, SendMessage_t1673701508 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::remove_SendNetworkMessage(PlayerNetworkMover/SendMessage)
extern "C"  void PlayerNetworkMover_remove_SendNetworkMessage_m656731613 (PlayerNetworkMover_t3233186516 * __this, SendMessage_t1673701508 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::Start()
extern "C"  void PlayerNetworkMover_Start_m3719431495 (PlayerNetworkMover_t3233186516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerNetworkMover::UpdateData()
extern "C"  Il2CppObject * PlayerNetworkMover_UpdateData_m584060088 (PlayerNetworkMover_t3233186516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PlayerNetworkMover_OnPhotonSerializeView_m2681416454 (PlayerNetworkMover_t3233186516 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover::GetHit(System.Single,System.String)
extern "C"  void PlayerNetworkMover_GetHit_m476506157 (PlayerNetworkMover_t3233186516 * __this, float ___damage0, String_t* ___enemyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
