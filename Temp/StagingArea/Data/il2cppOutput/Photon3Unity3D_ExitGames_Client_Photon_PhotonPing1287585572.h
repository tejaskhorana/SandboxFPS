#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPing
struct  PhotonPing_t1287585572  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] ExitGames.Client.Photon.PhotonPing::PingBytes
	ByteU5BU5D_t4260760469* ___PingBytes_4;
	// System.Byte ExitGames.Client.Photon.PhotonPing::PingId
	uint8_t ___PingId_5;

public:
	inline static int32_t get_offset_of_DebugString_0() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___DebugString_0)); }
	inline String_t* get_DebugString_0() const { return ___DebugString_0; }
	inline String_t** get_address_of_DebugString_0() { return &___DebugString_0; }
	inline void set_DebugString_0(String_t* value)
	{
		___DebugString_0 = value;
		Il2CppCodeGenWriteBarrier(&___DebugString_0, value);
	}

	inline static int32_t get_offset_of_Successful_1() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___Successful_1)); }
	inline bool get_Successful_1() const { return ___Successful_1; }
	inline bool* get_address_of_Successful_1() { return &___Successful_1; }
	inline void set_Successful_1(bool value)
	{
		___Successful_1 = value;
	}

	inline static int32_t get_offset_of_GotResult_2() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___GotResult_2)); }
	inline bool get_GotResult_2() const { return ___GotResult_2; }
	inline bool* get_address_of_GotResult_2() { return &___GotResult_2; }
	inline void set_GotResult_2(bool value)
	{
		___GotResult_2 = value;
	}

	inline static int32_t get_offset_of_PingLength_3() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___PingLength_3)); }
	inline int32_t get_PingLength_3() const { return ___PingLength_3; }
	inline int32_t* get_address_of_PingLength_3() { return &___PingLength_3; }
	inline void set_PingLength_3(int32_t value)
	{
		___PingLength_3 = value;
	}

	inline static int32_t get_offset_of_PingBytes_4() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___PingBytes_4)); }
	inline ByteU5BU5D_t4260760469* get_PingBytes_4() const { return ___PingBytes_4; }
	inline ByteU5BU5D_t4260760469** get_address_of_PingBytes_4() { return &___PingBytes_4; }
	inline void set_PingBytes_4(ByteU5BU5D_t4260760469* value)
	{
		___PingBytes_4 = value;
		Il2CppCodeGenWriteBarrier(&___PingBytes_4, value);
	}

	inline static int32_t get_offset_of_PingId_5() { return static_cast<int32_t>(offsetof(PhotonPing_t1287585572, ___PingId_5)); }
	inline uint8_t get_PingId_5() const { return ___PingId_5; }
	inline uint8_t* get_address_of_PingId_5() { return &___PingId_5; }
	inline void set_PingId_5(uint8_t value)
	{
		___PingId_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
