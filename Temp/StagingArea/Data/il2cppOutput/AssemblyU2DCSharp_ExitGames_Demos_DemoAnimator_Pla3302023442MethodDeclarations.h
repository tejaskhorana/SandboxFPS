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

// ExitGames.Demos.DemoAnimator.PlayerManager
struct PlayerManager_t3302023442;
// UnityEngine.Collider
struct Collider_t2939674232;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM3067001883.h"

// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::.ctor()
extern "C"  void PlayerManager__ctor_m239753450 (PlayerManager_t3302023442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Awake()
extern "C"  void PlayerManager_Awake_m477358669 (PlayerManager_t3302023442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Start()
extern "C"  void PlayerManager_Start_m3481858538 (PlayerManager_t3302023442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Update()
extern "C"  void PlayerManager_Update_m569284451 (PlayerManager_t3302023442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerManager_OnTriggerEnter_m1818587854 (PlayerManager_t3302023442 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnTriggerStay(UnityEngine.Collider)
extern "C"  void PlayerManager_OnTriggerStay_m1495392271 (PlayerManager_t3302023442 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::CalledOnLevelWasLoaded(System.Int32)
extern "C"  void PlayerManager_CalledOnLevelWasLoaded_m1442725169 (PlayerManager_t3302023442 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::ProcessInputs()
extern "C"  void PlayerManager_ProcessInputs_m1423455808 (PlayerManager_t3302023442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PlayerManager_OnPhotonSerializeView_m859009641 (PlayerManager_t3302023442 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::<Start>m__1(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void PlayerManager_U3CStartU3Em__1_m207781873 (PlayerManager_t3302023442 * __this, Scene_t1080795294  ___scene0, int32_t ___loadingMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
