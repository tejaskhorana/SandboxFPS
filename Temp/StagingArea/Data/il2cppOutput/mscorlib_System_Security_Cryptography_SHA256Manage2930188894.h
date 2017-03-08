#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Security_Cryptography_SHA2563081508435.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t2930188894  : public SHA256_t3081508435
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t3230734560* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t4260760469* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t3230734560* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t2930188894, ____H_6)); }
	inline UInt32U5BU5D_t3230734560* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t3230734560** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t3230734560* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier(&____H_6, value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t2930188894, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t2930188894, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t4260760469* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t4260760469** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t4260760469* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&____ProcessingBuffer_8, value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t2930188894, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t2930188894, ___buff_10)); }
	inline UInt32U5BU5D_t3230734560* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t3230734560** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t3230734560* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier(&___buff_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
