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

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct RSAOAEPKeyExchangeDeformatter_t1068884970;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::.ctor()
extern "C"  void RSAOAEPKeyExchangeDeformatter__ctor_m2507677921 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeDeformatter__ctor_m1545441435 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::get_Parameters()
extern "C"  String_t* RSAOAEPKeyExchangeDeformatter_get_Parameters_m2801753817 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::set_Parameters(System.String)
extern "C"  void RSAOAEPKeyExchangeDeformatter_set_Parameters_m1973677400 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSAOAEPKeyExchangeDeformatter_DecryptKeyExchange_m4060865799 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, ByteU5BU5D_t4260760469* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeDeformatter_SetKey_m4186062042 (RSAOAEPKeyExchangeDeformatter_t1068884970 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
