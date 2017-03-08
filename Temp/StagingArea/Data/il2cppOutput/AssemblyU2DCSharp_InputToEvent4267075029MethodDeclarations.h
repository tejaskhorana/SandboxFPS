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

// InputToEvent
struct InputToEvent_t4267075029;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void InputToEvent::.ctor()
extern "C"  void InputToEvent__ctor_m2230209638 (InputToEvent_t4267075029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern "C"  GameObject_t3674682005 * InputToEvent_get_goPointedAt_m1478939552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern "C"  void InputToEvent_set_goPointedAt_m741946809 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C"  Vector2_t4282066565  InputToEvent_get_DragVector_m2938101785 (InputToEvent_t4267075029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
extern "C"  void InputToEvent_Start_m1177347430 (InputToEvent_t4267075029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
extern "C"  void InputToEvent_Update_m2143884135 (InputToEvent_t4267075029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C"  void InputToEvent_Press_m1487870803 (InputToEvent_t4267075029 * __this, Vector2_t4282066565  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C"  void InputToEvent_Release_m1237919439 (InputToEvent_t4267075029 * __this, Vector2_t4282066565  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern "C"  GameObject_t3674682005 * InputToEvent_RaycastObject_m3043443043 (InputToEvent_t4267075029 * __this, Vector2_t4282066565  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
