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

// PhotonPlayer
struct PhotonPlayer_t1400510109;
// PhotonView
struct PhotonView_t1498838369;
// System.String
struct String_t;
// PhotonMessageInfo
struct PhotonMessageInfo_t259585817;
struct PhotonMessageInfo_t259585817_marshaled_pinvoke;
struct PhotonMessageInfo_t259585817_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_PhotonView1498838369.h"

// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C"  void PhotonMessageInfo__ctor_m3458226371 (PhotonMessageInfo_t259585817 * __this, PhotonPlayer_t1400510109 * ___player0, int32_t ___timestamp1, PhotonView_t1498838369 * ___view2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C"  double PhotonMessageInfo_get_timestamp_m801105536 (PhotonMessageInfo_t259585817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C"  String_t* PhotonMessageInfo_ToString_m948774971 (PhotonMessageInfo_t259585817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct PhotonMessageInfo_t259585817;
struct PhotonMessageInfo_t259585817_marshaled_pinvoke;

extern "C" void PhotonMessageInfo_t259585817_marshal_pinvoke(const PhotonMessageInfo_t259585817& unmarshaled, PhotonMessageInfo_t259585817_marshaled_pinvoke& marshaled);
extern "C" void PhotonMessageInfo_t259585817_marshal_pinvoke_back(const PhotonMessageInfo_t259585817_marshaled_pinvoke& marshaled, PhotonMessageInfo_t259585817& unmarshaled);
extern "C" void PhotonMessageInfo_t259585817_marshal_pinvoke_cleanup(PhotonMessageInfo_t259585817_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct PhotonMessageInfo_t259585817;
struct PhotonMessageInfo_t259585817_marshaled_com;

extern "C" void PhotonMessageInfo_t259585817_marshal_com(const PhotonMessageInfo_t259585817& unmarshaled, PhotonMessageInfo_t259585817_marshaled_com& marshaled);
extern "C" void PhotonMessageInfo_t259585817_marshal_com_back(const PhotonMessageInfo_t259585817_marshaled_com& marshaled, PhotonMessageInfo_t259585817& unmarshaled);
extern "C" void PhotonMessageInfo_t259585817_marshal_com_cleanup(PhotonMessageInfo_t259585817_marshaled_com& marshaled);
