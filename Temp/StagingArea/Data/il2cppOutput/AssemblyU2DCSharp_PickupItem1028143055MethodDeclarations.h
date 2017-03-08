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

// PickupItem
struct PickupItem_t1028143055;
// UnityEngine.Collider
struct Collider_t2939674232;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PickupItem::.ctor()
extern "C"  void PickupItem__ctor_m506706348 (PickupItem_t1028143055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C"  void PickupItem__cctor_m2340898689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C"  int32_t PickupItem_get_ViewID_m2794527279 (PickupItem_t1028143055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PickupItem_OnTriggerEnter_m877797708 (PickupItem_t1028143055 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupItem_OnPhotonSerializeView_m2823147435 (PickupItem_t1028143055 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C"  void PickupItem_Pickup_m2488827860 (PickupItem_t1028143055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C"  void PickupItem_Drop_m936983879 (PickupItem_t1028143055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C"  void PickupItem_Drop_m3201648434 (PickupItem_t1028143055 * __this, Vector3_t4282066566  ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C"  void PickupItem_PunPickup_m3535652138 (PickupItem_t1028143055 * __this, PhotonMessageInfo_t259585817  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C"  void PickupItem_PickedUp_m9051512 (PickupItem_t1028143055 * __this, float ___timeUntilRespawn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C"  void PickupItem_PunRespawn_m3037019010 (PickupItem_t1028143055 * __this, Vector3_t4282066566  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C"  void PickupItem_PunRespawn_m1336380151 (PickupItem_t1028143055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
