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

// Room
struct Room_t2553083;
// RoomInfo
struct RoomInfo_t4185970761;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Room2553083.h"
#include "AssemblyU2DCSharp_RoomInfo4185970761.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"

// System.Void TurnExtensions::.cctor()
extern "C"  void TurnExtensions__cctor_m1880010179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurnExtensions::SetTurn(Room,System.Int32,System.Boolean)
extern "C"  void TurnExtensions_SetTurn_m610819570 (Il2CppObject * __this /* static, unused */, Room_t2553083 * ___room0, int32_t ___turn1, bool ___setStartTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetTurn(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurn_m3770286404 (Il2CppObject * __this /* static, unused */, RoomInfo_t4185970761 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetTurnStart(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurnStart_m1276897198 (Il2CppObject * __this /* static, unused */, RoomInfo_t4185970761 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetFinishedTurn(PhotonPlayer)
extern "C"  int32_t TurnExtensions_GetFinishedTurn_m2826416258 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurnExtensions::SetFinishedTurn(PhotonPlayer,System.Int32)
extern "C"  void TurnExtensions_SetFinishedTurn_m2963437691 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___player0, int32_t ___turn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
