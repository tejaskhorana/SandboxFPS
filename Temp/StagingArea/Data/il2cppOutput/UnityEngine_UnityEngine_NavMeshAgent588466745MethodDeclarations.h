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

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// UnityEngine.NavMeshPath
struct NavMeshPath_t384806059;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_NavMeshAgent588466745.h"
#include "UnityEngine_UnityEngine_NavMeshPath384806059.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m1934812347 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m1043531080 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t588466745 * ___self0, Vector3_t4282066566 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_destination()
extern "C"  Vector3_t4282066566  NavMeshAgent_get_destination_m2210292865 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_destination(UnityEngine.Vector3)
extern "C"  void NavMeshAgent_set_destination_m1040949554 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_destination(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_destination_m950103490 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_set_destination_m612325326 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_stoppingDistance()
extern "C"  float NavMeshAgent_get_stoppingDistance_m1449561130 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_velocity(UnityEngine.Vector3)
extern "C"  void NavMeshAgent_set_velocity_m2183624243 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_set_velocity_m2849407365 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern "C"  Vector3_t4282066566  NavMeshAgent_get_desiredVelocity_m2559123146 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_desiredVelocity_m125379211 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_remainingDistance()
extern "C"  float NavMeshAgent_get_remainingDistance_m2123497836 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::Stop()
extern "C"  void NavMeshAgent_Stop_m2641168622 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::StopInternal()
extern "C"  void NavMeshAgent_StopInternal_m152023947 (NavMeshAgent_t588466745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::CalculatePath(UnityEngine.Vector3,UnityEngine.NavMeshPath)
extern "C"  bool NavMeshAgent_CalculatePath_m4132323788 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566  ___targetPosition0, NavMeshPath_t384806059 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.NavMeshPath)
extern "C"  bool NavMeshAgent_CalculatePathInternal_m4009899023 (NavMeshAgent_t588466745 * __this, Vector3_t4282066566  ___targetPosition0, NavMeshPath_t384806059 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_CalculatePathInternal(UnityEngine.NavMeshAgent,UnityEngine.Vector3&,UnityEngine.NavMeshPath)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_CalculatePathInternal_m1367361594 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t588466745 * ___self0, Vector3_t4282066566 * ___targetPosition1, NavMeshPath_t384806059 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_speed(System.Single)
extern "C"  void NavMeshAgent_set_speed_m3553192555 (NavMeshAgent_t588466745 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C"  void NavMeshAgent_set_updatePosition_m2814304018 (NavMeshAgent_t588466745 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C"  void NavMeshAgent_set_updateRotation_m3246394215 (NavMeshAgent_t588466745 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
