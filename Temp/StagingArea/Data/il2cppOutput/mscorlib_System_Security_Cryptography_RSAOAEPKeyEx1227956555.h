#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Security_Cryptography_AsymmetricKey684750218.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t1227956555  : public AsymmetricKeyExchangeFormatter_t684750218
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t2466814310 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t1757673517 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t4260760469* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t1227956555, ___rsa_0)); }
	inline RSA_t2466814310 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2466814310 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2466814310 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t1227956555, ___random_1)); }
	inline RandomNumberGenerator_t1757673517 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t1757673517 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t1757673517 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier(&___random_1, value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t1227956555, ___param_2)); }
	inline ByteU5BU5D_t4260760469* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t4260760469* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier(&___param_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
