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

// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PhotonView[]
struct PhotonViewU5BU5D_t1610075132;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// PhotonView
struct PhotonView_t1498838369;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void Extensions::.cctor()
extern "C"  void Extensions__cctor_m111009190 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] Extensions::GetCachedParemeters(System.Reflection.MethodInfo)
extern "C"  ParameterInfoU5BU5D_t2015293532* Extensions_GetCachedParemeters_m340457786 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___mo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
extern "C"  PhotonViewU5BU5D_t1610075132* Extensions_GetPhotonViewsInChildren_m3235414991 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
extern "C"  PhotonView_t1498838369 * Extensions_GetPhotonView_m4141698872 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Extensions_AlmostEquals_m3282165779 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___target0, Vector3_t4282066566  ___second1, float ___sqrMagnitudePrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool Extensions_AlmostEquals_m1842399701 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___target0, Vector2_t4282066565  ___second1, float ___sqrMagnitudePrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  bool Extensions_AlmostEquals_m2789084621 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___target0, Quaternion_t1553702882  ___second1, float ___maxAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
extern "C"  bool Extensions_AlmostEquals_m3416443511 (Il2CppObject * __this /* static, unused */, float ___target0, float ___second1, float ___floatDiff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_Merge_m2281895369 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_MergeStringKeys_m4115947108 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C"  String_t* Extensions_ToStringFull_m4175704948 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___origin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Object[])
extern "C"  String_t* Extensions_ToStringFull_m514829335 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C"  Hashtable_t284945826 * Extensions_StripToStringKeys_m3160208361 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C"  void Extensions_StripKeysWithNullValues_m3979516409 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
extern "C"  bool Extensions_Contains_m999445880 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___target0, int32_t ___nr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
