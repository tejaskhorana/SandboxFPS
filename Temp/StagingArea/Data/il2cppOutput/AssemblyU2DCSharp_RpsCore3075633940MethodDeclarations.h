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

// RpsCore
struct RpsCore_t3075633940;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Sprite
struct Sprite_t3199167241;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_RpsCore_Hand1846992554.h"
#include "AssemblyU2DCSharp_DisconnectCause396256525.h"

// System.Void RpsCore::.ctor()
extern "C"  void RpsCore__ctor_m715453143 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::Start()
extern "C"  void RpsCore_Start_m3957558231 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::Update()
extern "C"  void RpsCore_Update_m2431073046 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnBegins(System.Int32)
extern "C"  void RpsCore_OnTurnBegins_m3626145252 (RpsCore_t3075633940 * __this, int32_t ___turn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnCompleted(System.Int32)
extern "C"  void RpsCore_OnTurnCompleted_m2611281205 (RpsCore_t3075633940 * __this, int32_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPlayerMove(PhotonPlayer,System.Int32,System.Object)
extern "C"  void RpsCore_OnPlayerMove_m1973219428 (RpsCore_t3075633940 * __this, PhotonPlayer_t1400510109 * ___photonPlayer0, int32_t ___turn1, Il2CppObject * ___move2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPlayerFinished(PhotonPlayer,System.Int32,System.Object)
extern "C"  void RpsCore_OnPlayerFinished_m2912557795 (RpsCore_t3075633940 * __this, PhotonPlayer_t1400510109 * ___photonPlayer0, int32_t ___turn1, Il2CppObject * ___move2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnTimeEnds(System.Int32)
extern "C"  void RpsCore_OnTurnTimeEnds_m3958040351 (RpsCore_t3075633940 * __this, int32_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::UpdateScores()
extern "C"  void RpsCore_UpdateScores_m3589540695 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::StartTurn()
extern "C"  void RpsCore_StartTurn_m1148547636 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::MakeTurn(RpsCore/Hand)
extern "C"  void RpsCore_MakeTurn_m3658293870 (RpsCore_t3075633940 * __this, int32_t ___selection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnEndTurn()
extern "C"  void RpsCore_OnEndTurn_m298153166 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RpsCore::ShowResultsBeginNextTurnCoroutine()
extern "C"  Il2CppObject * RpsCore_ShowResultsBeginNextTurnCoroutine_m306405589 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::EndGame()
extern "C"  void RpsCore_EndGame_m1251059490 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::CalculateWinAndLoss()
extern "C"  void RpsCore_CalculateWinAndLoss_m1245014553 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite RpsCore::SelectionToSprite(RpsCore/Hand)
extern "C"  Sprite_t3199167241 * RpsCore_SelectionToSprite_m1658150552 (RpsCore_t3075633940 * __this, int32_t ___hand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::UpdatePlayerTexts()
extern "C"  void RpsCore_UpdatePlayerTexts_m1013693681 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RpsCore::CycleRemoteHandCoroutine()
extern "C"  Il2CppObject * RpsCore_CycleRemoteHandCoroutine_m3819321538 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickRock()
extern "C"  void RpsCore_OnClickRock_m1475837795 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickPaper()
extern "C"  void RpsCore_OnClickPaper_m637381360 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickScissors()
extern "C"  void RpsCore_OnClickScissors_m590062869 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickConnect()
extern "C"  void RpsCore_OnClickConnect_m1762223630 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickReConnectAndRejoin()
extern "C"  void RpsCore_OnClickReConnectAndRejoin_m691822683 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::RefreshUIViews()
extern "C"  void RpsCore_RefreshUIViews_m3009654220 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnLeftRoom()
extern "C"  void RpsCore_OnLeftRoom_m3475679950 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnJoinedRoom()
extern "C"  void RpsCore_OnJoinedRoom_m311120336 (RpsCore_t3075633940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void RpsCore_OnPhotonPlayerConnected_m1224010661 (RpsCore_t3075633940 * __this, PhotonPlayer_t1400510109 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void RpsCore_OnPhotonPlayerDisconnected_m2007034791 (RpsCore_t3075633940 * __this, PhotonPlayer_t1400510109 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnConnectionFail(DisconnectCause)
extern "C"  void RpsCore_OnConnectionFail_m3349189981 (RpsCore_t3075633940 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
