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

#include "mscorlib_System_Security_Cryptography_MD52466809028.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t2567592755  : public MD5_t2466809028
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t3230734560* ____H_6;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t3230734560* ___buff_7;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_8;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t4260760469* ____ProcessingBuffer_9;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755, ____H_6)); }
	inline UInt32U5BU5D_t3230734560* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t3230734560** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t3230734560* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier(&____H_6, value);
	}

	inline static int32_t get_offset_of_buff_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755, ___buff_7)); }
	inline UInt32U5BU5D_t3230734560* get_buff_7() const { return ___buff_7; }
	inline UInt32U5BU5D_t3230734560** get_address_of_buff_7() { return &___buff_7; }
	inline void set_buff_7(UInt32U5BU5D_t3230734560* value)
	{
		___buff_7 = value;
		Il2CppCodeGenWriteBarrier(&___buff_7, value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755, ___count_8)); }
	inline uint64_t get_count_8() const { return ___count_8; }
	inline uint64_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(uint64_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755, ____ProcessingBuffer_9)); }
	inline ByteU5BU5D_t4260760469* get__ProcessingBuffer_9() const { return ____ProcessingBuffer_9; }
	inline ByteU5BU5D_t4260760469** get_address_of__ProcessingBuffer_9() { return &____ProcessingBuffer_9; }
	inline void set__ProcessingBuffer_9(ByteU5BU5D_t4260760469* value)
	{
		____ProcessingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&____ProcessingBuffer_9, value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755, ____ProcessingBufferCount_10)); }
	inline int32_t get__ProcessingBufferCount_10() const { return ____ProcessingBufferCount_10; }
	inline int32_t* get_address_of__ProcessingBufferCount_10() { return &____ProcessingBufferCount_10; }
	inline void set__ProcessingBufferCount_10(int32_t value)
	{
		____ProcessingBufferCount_10 = value;
	}
};

struct MD5CryptoServiceProvider_t2567592755_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t3230734560* ___K_11;

public:
	inline static int32_t get_offset_of_K_11() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2567592755_StaticFields, ___K_11)); }
	inline UInt32U5BU5D_t3230734560* get_K_11() const { return ___K_11; }
	inline UInt32U5BU5D_t3230734560** get_address_of_K_11() { return &___K_11; }
	inline void set_K_11(UInt32U5BU5D_t3230734560* value)
	{
		___K_11 = value;
		Il2CppCodeGenWriteBarrier(&___K_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
