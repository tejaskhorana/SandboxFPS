#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_IO_Stream1561764144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StreamBuffer
struct  StreamBuffer_t2984804470  : public Stream_t1561764144
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_2;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_3;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_t4260760469* ___buf_4;

public:
	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(StreamBuffer_t2984804470, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(StreamBuffer_t2984804470, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
	}

	inline static int32_t get_offset_of_buf_4() { return static_cast<int32_t>(offsetof(StreamBuffer_t2984804470, ___buf_4)); }
	inline ByteU5BU5D_t4260760469* get_buf_4() const { return ___buf_4; }
	inline ByteU5BU5D_t4260760469** get_address_of_buf_4() { return &___buf_4; }
	inline void set_buf_4(ByteU5BU5D_t4260760469* value)
	{
		___buf_4 = value;
		Il2CppCodeGenWriteBarrier(&___buf_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
