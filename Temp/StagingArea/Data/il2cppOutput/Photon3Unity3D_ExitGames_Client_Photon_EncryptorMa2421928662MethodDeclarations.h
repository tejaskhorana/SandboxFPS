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

// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t2421928662;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&)
extern "C"  void Encryptor_Encrypt_m2395327482 (Encryptor_t2421928662 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___len1, ByteU5BU5D_t4260760469* ___output2, int32_t* ___offset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Encryptor::FinishHMAC(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* Encryptor_FinishHMAC_m1761605298 (Encryptor_t2421928662 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::.ctor()
extern "C"  void Encryptor__ctor_m659059697 (Encryptor_t2421928662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::.cctor()
extern "C"  void Encryptor__cctor_m2768885212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
