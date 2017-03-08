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

// PhotonStream
struct PhotonStream_t1494272828;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C"  void PhotonStream__ctor_m4267538562 (PhotonStream_t1494272828 * __this, bool ___write0, ObjectU5BU5D_t1108656482* ___incomingData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SetReadStream(System.Object[],System.Byte)
extern "C"  void PhotonStream_SetReadStream_m1095314946 (PhotonStream_t1494272828 * __this, ObjectU5BU5D_t1108656482* ___incomingData0, uint8_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::ResetWriteStream()
extern "C"  void PhotonStream_ResetWriteStream_m4263930869 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C"  bool PhotonStream_get_isWriting_m4099770962 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C"  bool PhotonStream_get_isReading_m102282242 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C"  int32_t PhotonStream_get_Count_m1070527765 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C"  Il2CppObject * PhotonStream_ReceiveNext_m1218125854 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C"  Il2CppObject * PhotonStream_PeekNext_m587627944 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C"  void PhotonStream_SendNext_m3887129908 (PhotonStream_t1494272828 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C"  ObjectU5BU5D_t1108656482* PhotonStream_ToArray_m448068200 (PhotonStream_t1494272828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C"  void PhotonStream_Serialize_m2724315832 (PhotonStream_t1494272828 * __this, bool* ___myBool0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C"  void PhotonStream_Serialize_m1425359582 (PhotonStream_t1494272828 * __this, int32_t* ___myInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C"  void PhotonStream_Serialize_m2509224743 (PhotonStream_t1494272828 * __this, String_t** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C"  void PhotonStream_Serialize_m3054746092 (PhotonStream_t1494272828 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C"  void PhotonStream_Serialize_m1425303844 (PhotonStream_t1494272828 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C"  void PhotonStream_Serialize_m1220193694 (PhotonStream_t1494272828 * __this, float* ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C"  void PhotonStream_Serialize_m3398822892 (PhotonStream_t1494272828 * __this, PhotonPlayer_t1400510109 ** ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C"  void PhotonStream_Serialize_m769489776 (PhotonStream_t1494272828 * __this, Vector3_t4282066566 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C"  void PhotonStream_Serialize_m769488815 (PhotonStream_t1494272828 * __this, Vector2_t4282066565 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void PhotonStream_Serialize_m4195574756 (PhotonStream_t1494272828 * __this, Quaternion_t1553702882 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
