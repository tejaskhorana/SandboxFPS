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

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t300115519;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t2597244043;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel2597244043.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C"  void PhotonTransformViewPositionControl__ctor_m2324609553 (PhotonTransformViewPositionControl_t300115519 * __this, PhotonTransformViewPositionModel_t2597244043 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C"  Vector3_t4282066566  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m1100045281 (PhotonTransformViewPositionControl_t300115519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformViewPositionControl_SetSynchronizedValues_m2300516236 (PhotonTransformViewPositionControl_t300115519 * __this, Vector3_t4282066566  ___speed0, float ___turnSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  PhotonTransformViewPositionControl_UpdatePosition_m2506994309 (PhotonTransformViewPositionControl_t300115519 * __this, Vector3_t4282066566  ___currentPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C"  Vector3_t4282066566  PhotonTransformViewPositionControl_GetNetworkPosition_m1333783235 (PhotonTransformViewPositionControl_t300115519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C"  Vector3_t4282066566  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m2916527649 (PhotonTransformViewPositionControl_t300115519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_OnPhotonSerializeView_m397645896 (PhotonTransformViewPositionControl_t300115519 * __this, Vector3_t4282066566  ___currentPosition0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_SerializeData_m2529791432 (PhotonTransformViewPositionControl_t300115519 * __this, Vector3_t4282066566  ___currentPosition0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_DeserializeData_m2949029786 (PhotonTransformViewPositionControl_t300115519 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
