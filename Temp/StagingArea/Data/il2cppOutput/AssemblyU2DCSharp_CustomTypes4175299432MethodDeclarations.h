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

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t2984804470;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe2984804470.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void CustomTypes::.cctor()
extern "C"  void CustomTypes__cctor_m468098826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
extern "C"  void CustomTypes_Register_m2688832964 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector3_m2743841213 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector3_m2148037454 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector2_m374407228 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector2_m1378867439 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeQuaternion_m866383835 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeQuaternion_m2966946136 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializePhotonPlayer_m1377297338 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializePhotonPlayer_m4115980441 (Il2CppObject * __this /* static, unused */, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
