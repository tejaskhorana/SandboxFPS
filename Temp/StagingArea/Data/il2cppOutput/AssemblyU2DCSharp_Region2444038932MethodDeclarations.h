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

// Region
struct Region_t2444038932;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_CloudRegionFlag3866817653.h"

// System.Void Region::.ctor()
extern "C"  void Region__ctor_m3596388359 (Region_t2444038932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode Region::Parse(System.String)
extern "C"  int32_t Region_Parse_m3973223239 (Il2CppObject * __this /* static, unused */, String_t* ___codeAsString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionFlag Region::ParseFlag(System.String)
extern "C"  int32_t Region_ParseFlag_m3757370780 (Il2CppObject * __this /* static, unused */, String_t* ___codeAsString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Region::ToString()
extern "C"  String_t* Region_ToString_m2284419372 (Region_t2444038932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
