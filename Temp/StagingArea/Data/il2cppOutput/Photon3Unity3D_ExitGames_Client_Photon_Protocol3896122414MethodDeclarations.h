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

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t2721523875;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2491712834;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeSt2721523875.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Deserialize2491712834.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool Protocol_TryRegisterType_m4026185887 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, uint8_t ___typeCode1, SerializeStreamMethod_t2721523875 * ___serializeFunction2, DeserializeStreamMethod_t2491712834 * ___deserializeFunction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1344711179 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ByteU5BU5D_t4260760469* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m2001046545 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t4260760469* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m729069851 (Il2CppObject * __this /* static, unused */, float ___value0, ByteU5BU5D_t4260760469* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m2617704396 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, ByteU5BU5D_t4260760469* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m3746144530 (Il2CppObject * __this /* static, unused */, int16_t* ___value0, ByteU5BU5D_t4260760469* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m3616978080 (Il2CppObject * __this /* static, unused */, float* ___value0, ByteU5BU5D_t4260760469* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C"  void Protocol__cctor_m1450056899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
