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

// PhotonPingManager
struct PhotonPingManager_t2948103071;
// Region
struct Region_t2444038932;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Region2444038932.h"
#include "mscorlib_System_String7231557.h"

// System.Void PhotonPingManager::.ctor()
extern "C"  void PhotonPingManager__ctor_m437441708 (PhotonPingManager_t2948103071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
extern "C"  void PhotonPingManager__cctor_m193694849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
extern "C"  Region_t2444038932 * PhotonPingManager_get_BestRegion_m1815223952 (PhotonPingManager_t2948103071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
extern "C"  bool PhotonPingManager_get_Done_m675948911 (PhotonPingManager_t2948103071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
extern "C"  Il2CppObject * PhotonPingManager_PingSocket_m2101911361 (PhotonPingManager_t2948103071 * __this, Region_t2444038932 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
extern "C"  String_t* PhotonPingManager_ResolveHost_m3063041729 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
