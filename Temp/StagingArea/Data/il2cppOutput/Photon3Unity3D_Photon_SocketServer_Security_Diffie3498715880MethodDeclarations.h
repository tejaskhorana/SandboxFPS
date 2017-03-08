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

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t3498715880;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3823368706;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_Photon_SocketServer_Numeric_BigInte3823368706.h"

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C"  void DiffieHellmanCryptoProvider__ctor_m978908950 (DiffieHellmanCryptoProvider_t3498715880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider__ctor_m385465459 (DiffieHellmanCryptoProvider_t3498715880 * __this, ByteU5BU5D_t4260760469* ___sharedSecretHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C"  ByteU5BU5D_t4260760469* DiffieHellmanCryptoProvider_get_PublicKey_m1904414615 (DiffieHellmanCryptoProvider_t3498715880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider_DeriveSharedKey_m3746382626 (DiffieHellmanCryptoProvider_t3498715880 * __this, ByteU5BU5D_t4260760469* ___otherPartyPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DiffieHellmanCryptoProvider_Encrypt_m2616640250 (DiffieHellmanCryptoProvider_t3498715880 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* DiffieHellmanCryptoProvider_Encrypt_m1082422234 (DiffieHellmanCryptoProvider_t3498715880 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* DiffieHellmanCryptoProvider_Decrypt_m3849222578 (DiffieHellmanCryptoProvider_t3498715880 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m31946195 (DiffieHellmanCryptoProvider_t3498715880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m2071330314 (DiffieHellmanCryptoProvider_t3498715880 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C"  BigInteger_t3823368706 * DiffieHellmanCryptoProvider_CalculatePublicKey_m62337240 (DiffieHellmanCryptoProvider_t3498715880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * DiffieHellmanCryptoProvider_CalculateSharedKey_m492717559 (DiffieHellmanCryptoProvider_t3498715880 * __this, BigInteger_t3823368706 * ___otherPartyPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C"  BigInteger_t3823368706 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m4209497953 (DiffieHellmanCryptoProvider_t3498715880 * __this, int32_t ___secretLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C"  void DiffieHellmanCryptoProvider__cctor_m4094277463 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
