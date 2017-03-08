#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3823368706;
// System.Security.Cryptography.Rijndael
struct Rijndael_t271969675;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t3498715880  : public Il2CppObject
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t3823368706 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t3823368706 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t3823368706 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t271969675 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t4260760469* ___sharedKey_5;

public:
	inline static int32_t get_offset_of_prime_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880, ___prime_1)); }
	inline BigInteger_t3823368706 * get_prime_1() const { return ___prime_1; }
	inline BigInteger_t3823368706 ** get_address_of_prime_1() { return &___prime_1; }
	inline void set_prime_1(BigInteger_t3823368706 * value)
	{
		___prime_1 = value;
		Il2CppCodeGenWriteBarrier(&___prime_1, value);
	}

	inline static int32_t get_offset_of_secret_2() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880, ___secret_2)); }
	inline BigInteger_t3823368706 * get_secret_2() const { return ___secret_2; }
	inline BigInteger_t3823368706 ** get_address_of_secret_2() { return &___secret_2; }
	inline void set_secret_2(BigInteger_t3823368706 * value)
	{
		___secret_2 = value;
		Il2CppCodeGenWriteBarrier(&___secret_2, value);
	}

	inline static int32_t get_offset_of_publicKey_3() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880, ___publicKey_3)); }
	inline BigInteger_t3823368706 * get_publicKey_3() const { return ___publicKey_3; }
	inline BigInteger_t3823368706 ** get_address_of_publicKey_3() { return &___publicKey_3; }
	inline void set_publicKey_3(BigInteger_t3823368706 * value)
	{
		___publicKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___publicKey_3, value);
	}

	inline static int32_t get_offset_of_crypto_4() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880, ___crypto_4)); }
	inline Rijndael_t271969675 * get_crypto_4() const { return ___crypto_4; }
	inline Rijndael_t271969675 ** get_address_of_crypto_4() { return &___crypto_4; }
	inline void set_crypto_4(Rijndael_t271969675 * value)
	{
		___crypto_4 = value;
		Il2CppCodeGenWriteBarrier(&___crypto_4, value);
	}

	inline static int32_t get_offset_of_sharedKey_5() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880, ___sharedKey_5)); }
	inline ByteU5BU5D_t4260760469* get_sharedKey_5() const { return ___sharedKey_5; }
	inline ByteU5BU5D_t4260760469** get_address_of_sharedKey_5() { return &___sharedKey_5; }
	inline void set_sharedKey_5(ByteU5BU5D_t4260760469* value)
	{
		___sharedKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___sharedKey_5, value);
	}
};

struct DiffieHellmanCryptoProvider_t3498715880_StaticFields
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t3823368706 * ___primeRoot_0;

public:
	inline static int32_t get_offset_of_primeRoot_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t3498715880_StaticFields, ___primeRoot_0)); }
	inline BigInteger_t3823368706 * get_primeRoot_0() const { return ___primeRoot_0; }
	inline BigInteger_t3823368706 ** get_address_of_primeRoot_0() { return &___primeRoot_0; }
	inline void set_primeRoot_0(BigInteger_t3823368706 * value)
	{
		___primeRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&___primeRoot_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
