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

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct AsymmetricSignatureFormatter_t1609524596;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t532578791;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm532578791.h"

// System.Void System.Security.Cryptography.AsymmetricSignatureFormatter::.ctor()
extern "C"  void AsymmetricSignatureFormatter__ctor_m497260761 (AsymmetricSignatureFormatter_t1609524596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsymmetricSignatureFormatter::CreateSignature(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* AsymmetricSignatureFormatter_CreateSignature_m1459603535 (AsymmetricSignatureFormatter_t1609524596 * __this, HashAlgorithm_t532578791 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
