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

// PhotonHandler
struct PhotonHandler_t1652511502;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM3067001883.h"

// System.Void PhotonHandler::.ctor()
extern "C"  void PhotonHandler__ctor_m248290845 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C"  void PhotonHandler__cctor_m2919952688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C"  void PhotonHandler_Awake_m485896064 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Start()
extern "C"  void PhotonHandler_Start_m3490395933 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C"  void PhotonHandler_OnApplicationQuit_m212846619 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationPause(System.Boolean)
extern "C"  void PhotonHandler_OnApplicationPause_m1456037571 (PhotonHandler_t1652511502 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnDestroy()
extern "C"  void PhotonHandler_OnDestroy_m213392534 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C"  void PhotonHandler_Update_m833943696 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C"  void PhotonHandler_OnJoinedRoom_m1427082186 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C"  void PhotonHandler_OnCreatedRoom_m3249365183 (PhotonHandler_t1652511502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C"  void PhotonHandler_StartFallbackSendAckThread_m1546833806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C"  void PhotonHandler_StopFallbackSendAckThread_m2477460258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C"  bool PhotonHandler_FallbackSendAckThread_m98243128 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C"  int32_t PhotonHandler_get_BestRegionCodeInPreferences_m197388413 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C"  void PhotonHandler_set_BestRegionCodeInPreferences_m3145339152 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C"  void PhotonHandler_PingAvailableRegionsAndConnectToBest_m3326423969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C"  Il2CppObject * PhotonHandler_PingAvailableRegionsCoroutine_m2043675370 (PhotonHandler_t1652511502 * __this, bool ___connectToBest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::<Start>m__2(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void PhotonHandler_U3CStartU3Em__2_m672420029 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___scene0, int32_t ___loadingMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
