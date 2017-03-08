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

// UnityStandardAssets.Vehicles.Car.CarAIControl
struct CarAIControl_t515783723;
// UnityEngine.Collision
struct Collision_t2494107688;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::.ctor()
extern "C"  void CarAIControl__ctor_m2072199650 (CarAIControl_t515783723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::Awake()
extern "C"  void CarAIControl_Awake_m2309804869 (CarAIControl_t515783723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::FixedUpdate()
extern "C"  void CarAIControl_FixedUpdate_m2342039005 (CarAIControl_t515783723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::OnCollisionStay(UnityEngine.Collision)
extern "C"  void CarAIControl_OnCollisionStay_m3309696363 (CarAIControl_t515783723 * __this, Collision_t2494107688 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::SetTarget(UnityEngine.Transform)
extern "C"  void CarAIControl_SetTarget_m2896081354 (CarAIControl_t515783723 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
