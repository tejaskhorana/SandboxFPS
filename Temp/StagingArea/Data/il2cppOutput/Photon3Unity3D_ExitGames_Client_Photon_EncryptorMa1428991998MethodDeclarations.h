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

// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t1428991998;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Decryptor::DecryptBufferWithIV(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  ByteU5BU5D_t4260760469* Decryptor_DecryptBufferWithIV_m1590050977 (Decryptor_t1428991998 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EncryptorManaged.Decryptor::CheckHMAC(System.Byte[],System.Int32)
extern "C"  bool Decryptor_CheckHMAC_m4097109230 (Decryptor_t1428991998 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Decryptor::.ctor()
extern "C"  void Decryptor__ctor_m2361246665 (Decryptor_t1428991998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
