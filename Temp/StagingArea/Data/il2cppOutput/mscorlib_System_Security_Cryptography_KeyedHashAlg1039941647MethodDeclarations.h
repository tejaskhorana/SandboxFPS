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

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1039941647;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.KeyedHashAlgorithm::.ctor()
extern "C"  void KeyedHashAlgorithm__ctor_m3887748574 (KeyedHashAlgorithm_t1039941647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.KeyedHashAlgorithm::Finalize()
extern "C"  void KeyedHashAlgorithm_Finalize_m1932170692 (KeyedHashAlgorithm_t1039941647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::get_Key()
extern "C"  ByteU5BU5D_t4260760469* KeyedHashAlgorithm_get_Key_m2526120156 (KeyedHashAlgorithm_t1039941647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.KeyedHashAlgorithm::set_Key(System.Byte[])
extern "C"  void KeyedHashAlgorithm_set_Key_m1327774667 (KeyedHashAlgorithm_t1039941647 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.KeyedHashAlgorithm::Dispose(System.Boolean)
extern "C"  void KeyedHashAlgorithm_Dispose_m2870004946 (KeyedHashAlgorithm_t1039941647 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.KeyedHashAlgorithm::ZeroizeKey()
extern "C"  void KeyedHashAlgorithm_ZeroizeKey_m2894944313 (KeyedHashAlgorithm_t1039941647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm System.Security.Cryptography.KeyedHashAlgorithm::Create()
extern "C"  KeyedHashAlgorithm_t1039941647 * KeyedHashAlgorithm_Create_m2235270533 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm System.Security.Cryptography.KeyedHashAlgorithm::Create(System.String)
extern "C"  KeyedHashAlgorithm_t1039941647 * KeyedHashAlgorithm_Create_m2063595933 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
