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

// PhotonView
struct PhotonView_t1498838369;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// PhotonStream
struct PhotonStream_t1494272828;
// UnityEngine.Component
struct Component_t3501516275;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_PhotonTargets3716398278.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void PhotonView::.ctor()
extern "C"  void PhotonView__ctor_m2210177114 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C"  int32_t PhotonView_get_prefix_m2175374259 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C"  void PhotonView_set_prefix_m4250620906 (PhotonView_t1498838369 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C"  ObjectU5BU5D_t1108656482* PhotonView_get_instantiationData_m3996803795 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C"  void PhotonView_set_instantiationData_m2849280096 (PhotonView_t1498838369 * __this, ObjectU5BU5D_t1108656482* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C"  int32_t PhotonView_get_viewID_m364432417 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C"  void PhotonView_set_viewID_m413357912 (PhotonView_t1498838369 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C"  bool PhotonView_get_isSceneView_m1216699138 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C"  PhotonPlayer_t1400510109 * PhotonView_get_owner_m722703586 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C"  int32_t PhotonView_get_OwnerActorNr_m994861223 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C"  bool PhotonView_get_isOwnerActive_m2675447626 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C"  int32_t PhotonView_get_CreatorActorNr_m4119247694 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C"  bool PhotonView_get_isMine_m1828472228 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C"  void PhotonView_Awake_m2447782333 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C"  void PhotonView_RequestOwnership_m3131626954 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C"  void PhotonView_TransferOwnership_m3648224831 (PhotonView_t1498838369 * __this, PhotonPlayer_t1400510109 * ___newOwner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C"  void PhotonView_TransferOwnership_m120881421 (PhotonView_t1498838369 * __this, int32_t ___newOwnerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PhotonView_OnMasterClientSwitched_m122605036 (PhotonView_t1498838369 * __this, PhotonPlayer_t1400510109 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C"  void PhotonView_OnDestroy_m2838673491 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeView_m2570782804 (PhotonView_t1498838369 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeView_m1411246003 (PhotonView_t1498838369 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeComponent_m3243986777 (PhotonView_t1498838369 * __this, Component_t3501516275 * ___component0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeComponent_m3330265624 (PhotonView_t1498838369 * __this, Component_t3501516275 * ___component0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_ExecuteComponentOnSerialize_m3353315842 (PhotonView_t1498838369 * __this, Component_t3501516275 * ___component0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C"  void PhotonView_RefreshRpcMonoBehaviourCache_m3261269852 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C"  void PhotonView_RPC_m1971004631 (PhotonView_t1498838369 * __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t1108656482* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m2989744181 (PhotonView_t1498838369 * __this, String_t* ___methodName0, int32_t ___target1, bool ___encrypt2, ObjectU5BU5D_t1108656482* ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C"  void PhotonView_RPC_m1026161232 (PhotonView_t1498838369 * __this, String_t* ___methodName0, PhotonPlayer_t1400510109 * ___targetPlayer1, ObjectU5BU5D_t1108656482* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m3348489870 (PhotonView_t1498838369 * __this, String_t* ___methodName0, PhotonPlayer_t1400510109 * ___targetPlayer1, bool ___encrypt2, ObjectU5BU5D_t1108656482* ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C"  PhotonView_t1498838369 * PhotonView_Get_m126248122 (Il2CppObject * __this /* static, unused */, Component_t3501516275 * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C"  PhotonView_t1498838369 * PhotonView_Get_m3106437194 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C"  PhotonView_t1498838369 * PhotonView_Find_m1872143152 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C"  String_t* PhotonView_ToString_m1546105465 (PhotonView_t1498838369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
