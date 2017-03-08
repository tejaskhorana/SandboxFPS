#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[,]
struct ByteU5BU2CU5D_t4260760470;

#include "mscorlib_System_Security_Cryptography_SymmetricAlg3097904804.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2466800440  : public SymmetricAlgorithm_t3097904804
{
public:

public:
};

struct DES_t2466800440_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t4260760470* ___weakKeys_11;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t4260760470* ___semiWeakKeys_12;

public:
	inline static int32_t get_offset_of_weakKeys_11() { return static_cast<int32_t>(offsetof(DES_t2466800440_StaticFields, ___weakKeys_11)); }
	inline ByteU5BU2CU5D_t4260760470* get_weakKeys_11() const { return ___weakKeys_11; }
	inline ByteU5BU2CU5D_t4260760470** get_address_of_weakKeys_11() { return &___weakKeys_11; }
	inline void set_weakKeys_11(ByteU5BU2CU5D_t4260760470* value)
	{
		___weakKeys_11 = value;
		Il2CppCodeGenWriteBarrier(&___weakKeys_11, value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_12() { return static_cast<int32_t>(offsetof(DES_t2466800440_StaticFields, ___semiWeakKeys_12)); }
	inline ByteU5BU2CU5D_t4260760470* get_semiWeakKeys_12() const { return ___semiWeakKeys_12; }
	inline ByteU5BU2CU5D_t4260760470** get_address_of_semiWeakKeys_12() { return &___semiWeakKeys_12; }
	inline void set_semiWeakKeys_12(ByteU5BU2CU5D_t4260760470* value)
	{
		___semiWeakKeys_12 = value;
		Il2CppCodeGenWriteBarrier(&___semiWeakKeys_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
