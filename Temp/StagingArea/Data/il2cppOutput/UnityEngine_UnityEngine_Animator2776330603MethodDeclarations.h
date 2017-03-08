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

// UnityEngine.Animator
struct Animator_t2776330603;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t274649809;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_AnimatorUpdateMode2936494615.h"
#include "UnityEngine_UnityEngine_AvatarIKGoal2036631794.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo323110318.h"

// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C"  float Animator_GetFloat_m2204811058 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C"  float Animator_GetFloat_m2965884705 (Animator_t2776330603 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1775105839 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloat_m359795641 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C"  void Animator_SetFloat_m57191598 (Animator_t2776330603 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloat_m2671615160 (Animator_t2776330603 * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m436748612 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m2336836203 (Animator_t2776330603 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C"  void Animator_SetBool_m1802007004 (Animator_t2776330603 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C"  int32_t Animator_GetInteger_m2467155164 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m4253187183 (Animator_t2776330603 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m4152421915 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C"  Vector3_t4282066566  Animator_get_deltaPosition_m1658225602 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)
extern "C"  void Animator_INTERNAL_get_deltaPosition_m3729275047 (Animator_t2776330603 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
extern "C"  Quaternion_t1553702882  Animator_get_rootRotation_m3309843777 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_get_rootRotation(UnityEngine.Quaternion&)
extern "C"  void Animator_INTERNAL_get_rootRotation_m3392225554 (Animator_t2776330603 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
extern "C"  bool Animator_get_applyRootMotion_m2388146907 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C"  void Animator_set_applyRootMotion_m394805828 (Animator_t2776330603 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
extern "C"  void Animator_set_updateMode_m1786110077 (Animator_t2776330603 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C"  void Animator_SetIKPosition_m2542416671 (Animator_t2776330603 * __this, int32_t ___goal0, Vector3_t4282066566  ___goalPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPositionInternal(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C"  void Animator_SetIKPositionInternal_m335958844 (Animator_t2776330603 * __this, int32_t ___goal0, Vector3_t4282066566  ___goalPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C"  void Animator_INTERNAL_CALL_SetIKPositionInternal_m647475433 (Il2CppObject * __this /* static, unused */, Animator_t2776330603 * ___self0, int32_t ___goal1, Vector3_t4282066566 * ___goalPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKPositionWeight_m1110244361 (Animator_t2776330603 * __this, int32_t ___goal0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKPositionWeightInternal_m1498324454 (Animator_t2776330603 * __this, int32_t ___goal0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C"  int32_t Animator_get_layerCount_m3326924613 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C"  float Animator_GetLayerWeight_m3878421230 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C"  void Animator_SetLayerWeight_m3838560187 (Animator_t2776330603 * __this, int32_t ___layerIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t323110318  Animator_GetCurrentAnimatorStateInfo_m3061859448 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m2609196857 (Animator_t2776330603 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C"  void Animator_set_speed_m2513936029 (Animator_t2776330603 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t274649809 * Animator_get_runtimeAnimatorController_m1822082727 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m4020897098 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C"  void Animator_CheckIfInIKPass_m2875692449 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::CheckIfInIKPassInternal()
extern "C"  bool Animator_CheckIfInIKPassInternal_m914167192 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m82432478 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C"  void Animator_SetFloatID_m819072393 (Animator_t2776330603 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C"  float Animator_GetFloatString_m1552529953 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C"  float Animator_GetFloatID_m373159228 (Animator_t2776330603 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m275475356 (Animator_t2776330603 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C"  void Animator_SetBoolID_m516262497 (Animator_t2776330603 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C"  bool Animator_GetBoolString_m1806558899 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C"  void Animator_SetIntegerString_m1111174752 (Animator_t2776330603 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C"  int32_t Animator_GetIntegerString_m3084017739 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834 (Animator_t2776330603 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloatStringDamp_m2274151144 (Animator_t2776330603 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloatIDDamp_m4107886867 (Animator_t2776330603 * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C"  bool Animator_get_logWarnings_m1817672208 (Animator_t2776330603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
