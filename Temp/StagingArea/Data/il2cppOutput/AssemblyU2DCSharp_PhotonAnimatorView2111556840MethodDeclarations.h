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

// PhotonAnimatorView
struct PhotonAnimatorView_t2111556840;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t3759566310;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t1680269758;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeTy1557360995.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType2061043068.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C"  void PhotonAnimatorView__ctor_m2841524403 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C"  void PhotonAnimatorView_Awake_m3079129622 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C"  void PhotonAnimatorView_Update_m3914772666 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::CacheDiscreteTriggers()
extern "C"  void PhotonAnimatorView_CacheDiscreteTriggers_m2559704007 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C"  bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m3455097491 (PhotonAnimatorView_t2111556840 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C"  bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m3760987688 (PhotonAnimatorView_t2111556840 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C"  List_1_t3759566310 * PhotonAnimatorView_GetSynchronizedLayers_m59114164 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C"  List_1_t1680269758 * PhotonAnimatorView_GetSynchronizedParameters_m384934020 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C"  int32_t PhotonAnimatorView_GetLayerSynchronizeType_m2234377399 (PhotonAnimatorView_t2111556840 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C"  int32_t PhotonAnimatorView_GetParameterSynchronizeType_m3244226228 (PhotonAnimatorView_t2111556840 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetLayerSynchronized_m3843631262 (PhotonAnimatorView_t2111556840 * __this, int32_t ___layerIndex0, int32_t ___synchronizeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetParameterSynchronized_m4079934831 (PhotonAnimatorView_t2111556840 * __this, String_t* ___name0, int32_t ___type1, int32_t ___synchronizeType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C"  void PhotonAnimatorView_SerializeDataContinuously_m3782466807 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C"  void PhotonAnimatorView_DeserializeDataContinuously_m740299734 (PhotonAnimatorView_t2111556840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeDataDiscretly_m2609436196 (PhotonAnimatorView_t2111556840 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeDataDiscretly_m3694324261 (PhotonAnimatorView_t2111556840 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeSynchronizationTypeState_m330360780 (PhotonAnimatorView_t2111556840 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeSynchronizationTypeState_m2372139307 (PhotonAnimatorView_t2111556840 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonAnimatorView_OnPhotonSerializeView_m155261554 (PhotonAnimatorView_t2111556840 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
