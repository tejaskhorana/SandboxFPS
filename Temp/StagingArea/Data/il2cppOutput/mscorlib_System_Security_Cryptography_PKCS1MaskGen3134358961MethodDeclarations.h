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

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct PKCS1MaskGenerationMethod_t3134358961;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.PKCS1MaskGenerationMethod::.ctor()
extern "C"  void PKCS1MaskGenerationMethod__ctor_m1588911738 (PKCS1MaskGenerationMethod_t3134358961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::get_HashName()
extern "C"  String_t* PKCS1MaskGenerationMethod_get_HashName_m2333695791 (PKCS1MaskGenerationMethod_t3134358961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PKCS1MaskGenerationMethod::set_HashName(System.String)
extern "C"  void PKCS1MaskGenerationMethod_set_HashName_m1741396482 (PKCS1MaskGenerationMethod_t3134358961 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PKCS1MaskGenerationMethod::GenerateMask(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* PKCS1MaskGenerationMethod_GenerateMask_m942368995 (PKCS1MaskGenerationMethod_t3134358961 * __this, ByteU5BU5D_t4260760469* ___rgbSeed0, int32_t ___cbReturn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
