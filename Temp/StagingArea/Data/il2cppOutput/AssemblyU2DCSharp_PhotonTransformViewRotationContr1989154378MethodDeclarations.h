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

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t1989154378;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t1785594710;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModel1785594710.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C"  void PhotonTransformViewRotationControl__ctor_m1636365563 (PhotonTransformViewRotationControl_t1989154378 * __this, PhotonTransformViewRotationModel_t1785594710 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetNetworkRotation()
extern "C"  Quaternion_t1553702882  PhotonTransformViewRotationControl_GetNetworkRotation_m835929393 (PhotonTransformViewRotationControl_t1989154378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  PhotonTransformViewRotationControl_GetRotation_m1168148390 (PhotonTransformViewRotationControl_t1989154378 * __this, Quaternion_t1553702882  ___currentRotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewRotationControl_OnPhotonSerializeView_m2200832601 (PhotonTransformViewRotationControl_t1989154378 * __this, Quaternion_t1553702882  ___currentRotation0, PhotonStream_t1494272828 * ___stream1, PhotonMessageInfo_t259585817  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
