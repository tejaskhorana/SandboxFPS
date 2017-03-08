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

// PhotonStreamQueue
struct PhotonStreamQueue_t2747597621;
// System.Object
struct Il2CppObject;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C"  void PhotonStreamQueue__ctor_m172235303 (PhotonStreamQueue_t2747597621 * __this, int32_t ___sampleRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C"  void PhotonStreamQueue_BeginWritePackage_m588799268 (PhotonStreamQueue_t2747597621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C"  void PhotonStreamQueue_Reset_m1156440195 (PhotonStreamQueue_t2747597621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C"  void PhotonStreamQueue_SendNext_m1544978987 (PhotonStreamQueue_t2747597621 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C"  bool PhotonStreamQueue_HasQueuedObjects_m3826725089 (PhotonStreamQueue_t2747597621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C"  Il2CppObject * PhotonStreamQueue_ReceiveNext_m1698178143 (PhotonStreamQueue_t2747597621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Serialize_m3029437464 (PhotonStreamQueue_t2747597621 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Deserialize_m2598948279 (PhotonStreamQueue_t2747597621 * __this, PhotonStream_t1494272828 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
