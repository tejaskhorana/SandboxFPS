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

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t529135353;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_FromBase64Tr3311781052.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
extern "C"  void FromBase64Transform__ctor_m3671809394 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
extern "C"  void FromBase64Transform__ctor_m4111562703 (FromBase64Transform_t529135353 * __this, int32_t ___whitespaces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
extern "C"  void FromBase64Transform_System_IDisposable_Dispose_m866626925 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
extern "C"  void FromBase64Transform_Finalize_m2749068720 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanTransformMultipleBlocks()
extern "C"  bool FromBase64Transform_get_CanTransformMultipleBlocks_m2594053359 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
extern "C"  bool FromBase64Transform_get_CanReuseTransform_m916476589 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::get_InputBlockSize()
extern "C"  int32_t FromBase64Transform_get_InputBlockSize_m2493291835 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::get_OutputBlockSize()
extern "C"  int32_t FromBase64Transform_get_OutputBlockSize_m3022869240 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Clear()
extern "C"  void FromBase64Transform_Clear_m1077942685 (FromBase64Transform_t529135353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
extern "C"  void FromBase64Transform_Dispose_m2205690982 (FromBase64Transform_t529135353 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
extern "C"  uint8_t FromBase64Transform_lookup_m2632979507 (FromBase64Transform_t529135353 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_ProcessBlock_m3076746554 (FromBase64Transform_t529135353 * __this, ByteU5BU5D_t4260760469* ___output0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void FromBase64Transform_CheckInputParameters_m1649295979 (FromBase64Transform_t529135353 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_TransformBlock_m71192858 (FromBase64Transform_t529135353 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4260760469* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* FromBase64Transform_TransformFinalBlock_m3921748704 (FromBase64Transform_t529135353 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
