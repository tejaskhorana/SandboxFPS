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

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct RSAOAEPKeyExchangeFormatter_t1227956555;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber1757673517.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor()
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m902795360 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m3246286362 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameter()
extern "C"  ByteU5BU5D_t4260760469* RSAOAEPKeyExchangeFormatter_get_Parameter_m2398598420 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Parameter(System.Byte[])
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Parameter_m1917760127 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAOAEPKeyExchangeFormatter_get_Parameters_m3694947066 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t1757673517 * RSAOAEPKeyExchangeFormatter_get_Rng_m2530559177 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Rng_m2257492952 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, RandomNumberGenerator_t1757673517 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m3844667119 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, ByteU5BU5D_t4260760469* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t4260760469* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m1764399010 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, ByteU5BU5D_t4260760469* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter_SetKey_m1077679931 (RSAOAEPKeyExchangeFormatter_t1227956555 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
