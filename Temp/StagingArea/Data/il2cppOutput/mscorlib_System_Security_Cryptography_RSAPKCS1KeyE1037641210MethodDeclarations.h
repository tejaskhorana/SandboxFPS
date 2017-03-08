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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1037641210;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber1757673517.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor()
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m3374518035 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2849280717 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t1757673517 * RSAPKCS1KeyExchangeFormatter_get_Rng_m4113608778 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAPKCS1KeyExchangeFormatter_set_Rng_m3385407243 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, RandomNumberGenerator_t1757673517 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAPKCS1KeyExchangeFormatter_get_Parameters_m1618411969 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m473400456 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, ByteU5BU5D_t4260760469* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t4260760469* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m840730555 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, ByteU5BU5D_t4260760469* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m2782488748 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetKey_m1655406824 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
