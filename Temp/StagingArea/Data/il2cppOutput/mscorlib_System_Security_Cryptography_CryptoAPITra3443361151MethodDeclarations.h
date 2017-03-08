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

// System.Security.Cryptography.CryptoAPITransform
struct CryptoAPITransform_t3443361151;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void System.Security.Cryptography.CryptoAPITransform::.ctor()
extern "C"  void CryptoAPITransform__ctor_m2637704814 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::System.IDisposable.Dispose()
extern "C"  void CryptoAPITransform_System_IDisposable_Dispose_m3591410161 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoAPITransform::get_CanReuseTransform()
extern "C"  bool CryptoAPITransform_get_CanReuseTransform_m735602029 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoAPITransform::get_CanTransformMultipleBlocks()
extern "C"  bool CryptoAPITransform_get_CanTransformMultipleBlocks_m1701782063 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::get_InputBlockSize()
extern "C"  int32_t CryptoAPITransform_get_InputBlockSize_m3193209863 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.CryptoAPITransform::get_KeyHandle()
extern "C"  IntPtr_t CryptoAPITransform_get_KeyHandle_m3809048063 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::get_OutputBlockSize()
extern "C"  int32_t CryptoAPITransform_get_OutputBlockSize_m3245491628 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Clear()
extern "C"  void CryptoAPITransform_Clear_m43838105 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Dispose(System.Boolean)
extern "C"  void CryptoAPITransform_Dispose_m2037089634 (CryptoAPITransform_t3443361151 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CryptoAPITransform_TransformBlock_m4276427494 (CryptoAPITransform_t3443361151 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4260760469* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoAPITransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* CryptoAPITransform_TransformFinalBlock_m2664432592 (CryptoAPITransform_t3443361151 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Reset()
extern "C"  void CryptoAPITransform_Reset_m284137755 (CryptoAPITransform_t3443361151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
