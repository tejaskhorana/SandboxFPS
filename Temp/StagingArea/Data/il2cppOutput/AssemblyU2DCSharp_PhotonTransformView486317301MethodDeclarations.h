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

// PhotonTransformView
struct PhotonTransformView_t486317301;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PhotonTransformView::.ctor()
extern "C"  void PhotonTransformView__ctor_m3956947478 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C"  void PhotonTransformView_Awake_m4194552697 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnEnable()
extern "C"  void PhotonTransformView_OnEnable_m3821489584 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C"  void PhotonTransformView_Update_m4133149623 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C"  void PhotonTransformView_UpdatePosition_m1659802816 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C"  void PhotonTransformView_UpdateRotation_m204523989 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C"  void PhotonTransformView_UpdateScale_m715876021 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformView_SetSynchronizedValues_m1970820594 (PhotonTransformView_t486317301 * __this, Vector3_t4282066566  ___speed0, float ___turnSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformView_OnPhotonSerializeView_m991962773 (PhotonTransformView_t486317301 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C"  void PhotonTransformView_DoDrawEstimatedPositionError_m356798400 (PhotonTransformView_t486317301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
