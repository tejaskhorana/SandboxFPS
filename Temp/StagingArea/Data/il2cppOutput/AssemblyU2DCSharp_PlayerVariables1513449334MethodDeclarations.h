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

// PlayerVariables
struct PlayerVariables_t1513449334;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// System.Void PlayerVariables::.ctor()
extern "C"  void PlayerVariables__ctor_m1240491189 (PlayerVariables_t1513449334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerVariables::.cctor()
extern "C"  void PlayerVariables__cctor_m3613392280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PlayerVariables::GetColor(System.Int32)
extern "C"  Color_t4194546905  PlayerVariables_GetColor_m1970332294 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerVariables::GetColorName(System.Int32)
extern "C"  String_t* PlayerVariables_GetColorName_m35082389 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PlayerVariables::GetMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t3870600107 * PlayerVariables_GetMaterial_m2740552198 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___original0, int32_t ___playerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
