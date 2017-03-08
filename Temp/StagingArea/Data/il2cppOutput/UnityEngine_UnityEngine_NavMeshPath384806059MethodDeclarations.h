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

// UnityEngine.NavMeshPath
struct NavMeshPath_t384806059;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
struct NavMeshPath_t384806059_marshaled_pinvoke;
struct NavMeshPath_t384806059_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.NavMeshPath::.ctor()
extern "C"  void NavMeshPath__ctor_m1906311428 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::DestroyNavMeshPath()
extern "C"  void NavMeshPath_DestroyNavMeshPath_m1363400795 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::Finalize()
extern "C"  void NavMeshPath_Finalize_m2968670430 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.NavMeshPath::CalculateCornersInternal()
extern "C"  Vector3U5BU5D_t215400611* NavMeshPath_CalculateCornersInternal_m4272384573 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::ClearCornersInternal()
extern "C"  void NavMeshPath_ClearCornersInternal_m2640631246 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::ClearCorners()
extern "C"  void NavMeshPath_ClearCorners_m2814254641 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::CalculateCorners()
extern "C"  void NavMeshPath_CalculateCorners_m117540280 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.NavMeshPath::get_corners()
extern "C"  Vector3U5BU5D_t215400611* NavMeshPath_get_corners_m1889186863 (NavMeshPath_t384806059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NavMeshPath_t384806059;
struct NavMeshPath_t384806059_marshaled_pinvoke;

extern "C" void NavMeshPath_t384806059_marshal_pinvoke(const NavMeshPath_t384806059& unmarshaled, NavMeshPath_t384806059_marshaled_pinvoke& marshaled);
extern "C" void NavMeshPath_t384806059_marshal_pinvoke_back(const NavMeshPath_t384806059_marshaled_pinvoke& marshaled, NavMeshPath_t384806059& unmarshaled);
extern "C" void NavMeshPath_t384806059_marshal_pinvoke_cleanup(NavMeshPath_t384806059_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NavMeshPath_t384806059;
struct NavMeshPath_t384806059_marshaled_com;

extern "C" void NavMeshPath_t384806059_marshal_com(const NavMeshPath_t384806059& unmarshaled, NavMeshPath_t384806059_marshaled_com& marshaled);
extern "C" void NavMeshPath_t384806059_marshal_com_back(const NavMeshPath_t384806059_marshaled_com& marshaled, NavMeshPath_t384806059& unmarshaled);
extern "C" void NavMeshPath_t384806059_marshal_com_cleanup(NavMeshPath_t384806059_marshaled_com& marshaled);
