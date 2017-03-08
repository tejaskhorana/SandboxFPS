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

// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t2593193852;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[])
extern "C"  void Rfc2898DeriveBytes__ctor_m2981820628 (Rfc2898DeriveBytes_t2593193852 * __this, String_t* ___password0, ByteU5BU5D_t4260760469* ___salt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[],System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m1118182531 (Rfc2898DeriveBytes_t2593193852 * __this, String_t* ___password0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.Byte[],System.Byte[],System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m3146676060 (Rfc2898DeriveBytes_t2593193852 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m424931046 (Rfc2898DeriveBytes_t2593193852 * __this, String_t* ___password0, int32_t ___saltSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m4083487665 (Rfc2898DeriveBytes_t2593193852 * __this, String_t* ___password0, int32_t ___saltSize1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::get_IterationCount()
extern "C"  int32_t Rfc2898DeriveBytes_get_IterationCount_m3819830642 (Rfc2898DeriveBytes_t2593193852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void Rfc2898DeriveBytes_set_IterationCount_m1290639059 (Rfc2898DeriveBytes_t2593193852 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::get_Salt()
extern "C"  ByteU5BU5D_t4260760469* Rfc2898DeriveBytes_get_Salt_m3074503176 (Rfc2898DeriveBytes_t2593193852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::set_Salt(System.Byte[])
extern "C"  void Rfc2898DeriveBytes_set_Salt_m41076515 (Rfc2898DeriveBytes_t2593193852 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::F(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* Rfc2898DeriveBytes_F_m4070214474 (Rfc2898DeriveBytes_t2593193852 * __this, ByteU5BU5D_t4260760469* ___s0, int32_t ___c1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t4260760469* Rfc2898DeriveBytes_GetBytes_m2282898415 (Rfc2898DeriveBytes_t2593193852 * __this, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::Reset()
extern "C"  void Rfc2898DeriveBytes_Reset_m3020491710 (Rfc2898DeriveBytes_t2593193852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
