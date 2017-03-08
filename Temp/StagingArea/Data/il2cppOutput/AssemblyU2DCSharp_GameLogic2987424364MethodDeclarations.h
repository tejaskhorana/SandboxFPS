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

// GameLogic
struct GameLogic_t2987424364;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"

// System.Void GameLogic::.ctor()
extern "C"  void GameLogic__ctor_m737121407 (GameLogic_t2987424364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::.cctor()
extern "C"  void GameLogic__cctor_m893830926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
extern "C"  void GameLogic_Start_m3979226495 (GameLogic_t2987424364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnJoinedRoom()
extern "C"  void GameLogic_OnJoinedRoom_m3003056936 (GameLogic_t2987424364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerConnected_m2339583821 (GameLogic_t2987424364 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TagPlayer(System.Int32)
extern "C"  void GameLogic_TagPlayer_m2860916041 (Il2CppObject * __this /* static, unused */, int32_t ___playerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TaggedPlayer(System.Int32)
extern "C"  void GameLogic_TaggedPlayer_m264610659 (GameLogic_t2987424364 * __this, int32_t ___playerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerDisconnected_m1590107903 (GameLogic_t2987424364 * __this, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnMasterClientSwitched()
extern "C"  void GameLogic_OnMasterClientSwitched_m1949461348 (GameLogic_t2987424364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
