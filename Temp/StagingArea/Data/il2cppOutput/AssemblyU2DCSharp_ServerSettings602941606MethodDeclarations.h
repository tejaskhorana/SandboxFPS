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

// ServerSettings
struct ServerSettings_t602941606;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"

// System.Void ServerSettings::.ctor()
extern "C"  void ServerSettings__ctor_m2440167093 (ServerSettings_t602941606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C"  void ServerSettings_UseCloudBestRegion_m443671981 (ServerSettings_t602941606 * __this, String_t* ___cloudAppid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
extern "C"  void ServerSettings_UseCloud_m436355013 (ServerSettings_t602941606 * __this, String_t* ___cloudAppid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C"  void ServerSettings_UseCloud_m2434034619 (ServerSettings_t602941606 * __this, String_t* ___cloudAppid0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C"  void ServerSettings_UseMyServer_m3018401562 (ServerSettings_t602941606 * __this, String_t* ___serverAddress0, int32_t ___serverPort1, String_t* ___application2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ServerSettings::IsAppId(System.String)
extern "C"  bool ServerSettings_IsAppId_m1993841649 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
extern "C"  String_t* ServerSettings_ToString_m483870910 (ServerSettings_t602941606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
