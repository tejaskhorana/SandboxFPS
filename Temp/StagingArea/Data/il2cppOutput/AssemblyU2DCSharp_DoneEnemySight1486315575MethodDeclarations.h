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

// DoneEnemySight
struct DoneEnemySight_t1486315575;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void DoneEnemySight::.ctor()
extern "C"  void DoneEnemySight__ctor_m3448879684 (DoneEnemySight_t1486315575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoneEnemySight::Awake()
extern "C"  void DoneEnemySight_Awake_m3686484903 (DoneEnemySight_t1486315575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoneEnemySight::Update()
extern "C"  void DoneEnemySight_Update_m1267949897 (DoneEnemySight_t1486315575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoneEnemySight::OnTriggerStay(UnityEngine.Collider)
extern "C"  void DoneEnemySight_OnTriggerStay_m3281262185 (DoneEnemySight_t1486315575 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoneEnemySight::OnTriggerExit(UnityEngine.Collider)
extern "C"  void DoneEnemySight_OnTriggerExit_m663172974 (DoneEnemySight_t1486315575 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DoneEnemySight::CalculatePathLength(UnityEngine.Vector3)
extern "C"  float DoneEnemySight_CalculatePathLength_m3821432050 (DoneEnemySight_t1486315575 * __this, Vector3_t4282066566  ___targetPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
