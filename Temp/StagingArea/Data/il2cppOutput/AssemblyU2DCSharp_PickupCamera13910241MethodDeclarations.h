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

// PickupCamera
struct PickupCamera_t13910241;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PickupCamera::.ctor()
extern "C"  void PickupCamera__ctor_m1179131610 (PickupCamera_t13910241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::OnEnable()
extern "C"  void PickupCamera_OnEnable_m1043858028 (PickupCamera_t13910241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::DebugDrawStuff()
extern "C"  void PickupCamera_DebugDrawStuff_m3227677351 (PickupCamera_t13910241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupCamera::AngleDistance(System.Single,System.Single)
extern "C"  float PickupCamera_AngleDistance_m313973052 (PickupCamera_t13910241 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Apply_m3752323882 (PickupCamera_t13910241 * __this, Transform_t1659122786 * ___dummyTarget0, Vector3_t4282066566  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::LateUpdate()
extern "C"  void PickupCamera_LateUpdate_m2230346681 (PickupCamera_t13910241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Cut_m1330386454 (PickupCamera_t13910241 * __this, Transform_t1659122786 * ___dummyTarget0, Vector3_t4282066566  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void PickupCamera_SetUpRotation_m3942026265 (PickupCamera_t13910241 * __this, Vector3_t4282066566  ___centerPos0, Vector3_t4282066566  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupCamera::GetCenterOffset()
extern "C"  Vector3_t4282066566  PickupCamera_GetCenterOffset_m926595772 (PickupCamera_t13910241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
