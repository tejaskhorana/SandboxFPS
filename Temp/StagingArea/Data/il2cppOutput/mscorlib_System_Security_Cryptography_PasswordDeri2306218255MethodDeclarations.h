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

// System.Security.Cryptography.PasswordDeriveBytes
struct PasswordDeriveBytes_t2306218255;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.CspParameters
struct CspParameters_t309313264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_CspParameters309313264.h"

// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[])
extern "C"  void PasswordDeriveBytes__ctor_m1755240169 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___strPassword0, ByteU5BU5D_t4260760469* ___rgbSalt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m4032550630 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___strPassword0, ByteU5BU5D_t4260760469* ___rgbSalt1, CspParameters_t309313264 * ___cspParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes__ctor_m3520157074 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___strPassword0, ByteU5BU5D_t4260760469* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.String,System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m2245535901 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___strPassword0, ByteU5BU5D_t4260760469* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, CspParameters_t309313264 * ___cspParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[])
extern "C"  void PasswordDeriveBytes__ctor_m3579760496 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m1929146367 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, CspParameters_t309313264 * ___cspParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes__ctor_m3809558699 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, String_t* ___hashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.String,System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m3507070948 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, String_t* ___hashName2, int32_t ___iterations3, CspParameters_t309313264 * ___cspParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Finalize()
extern "C"  void PasswordDeriveBytes_Finalize_m1910974150 (PasswordDeriveBytes_t2306218255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Prepare(System.String,System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes_Prepare_m3423226359 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___strPassword0, ByteU5BU5D_t4260760469* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Prepare(System.Byte[],System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes_Prepare_m3712627984 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.PasswordDeriveBytes::get_HashName()
extern "C"  String_t* PasswordDeriveBytes_get_HashName_m1952286093 (PasswordDeriveBytes_t2306218255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_HashName(System.String)
extern "C"  void PasswordDeriveBytes_set_HashName_m1026214564 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::get_IterationCount()
extern "C"  int32_t PasswordDeriveBytes_get_IterationCount_m536393215 (PasswordDeriveBytes_t2306218255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_IterationCount(System.Int32)
extern "C"  void PasswordDeriveBytes_set_IterationCount_m1240200744 (PasswordDeriveBytes_t2306218255 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::get_Salt()
extern "C"  ByteU5BU5D_t4260760469* PasswordDeriveBytes_get_Salt_m2370797489 (PasswordDeriveBytes_t2306218255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_Salt(System.Byte[])
extern "C"  void PasswordDeriveBytes_set_Salt_m397206574 (PasswordDeriveBytes_t2306218255 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::CryptDeriveKey(System.String,System.String,System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PasswordDeriveBytes_CryptDeriveKey_m799969944 (PasswordDeriveBytes_t2306218255 * __this, String_t* ___algname0, String_t* ___alghashname1, int32_t ___keySize2, ByteU5BU5D_t4260760469* ___rgbIV3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t4260760469* PasswordDeriveBytes_GetBytes_m2526305304 (PasswordDeriveBytes_t2306218255 * __this, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Reset()
extern "C"  void PasswordDeriveBytes_Reset_m226270921 (PasswordDeriveBytes_t2306218255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
