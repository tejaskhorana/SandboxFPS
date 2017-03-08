#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectAndJoinRandom
struct  ConnectAndJoinRandom_t3630502682  : public MonoBehaviour_t2824676508
{
public:
	// System.Boolean ConnectAndJoinRandom::AutoConnect
	bool ___AutoConnect_3;
	// System.Byte ConnectAndJoinRandom::Version
	uint8_t ___Version_4;
	// System.Boolean ConnectAndJoinRandom::ConnectInUpdate
	bool ___ConnectInUpdate_5;

public:
	inline static int32_t get_offset_of_AutoConnect_3() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandom_t3630502682, ___AutoConnect_3)); }
	inline bool get_AutoConnect_3() const { return ___AutoConnect_3; }
	inline bool* get_address_of_AutoConnect_3() { return &___AutoConnect_3; }
	inline void set_AutoConnect_3(bool value)
	{
		___AutoConnect_3 = value;
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandom_t3630502682, ___Version_4)); }
	inline uint8_t get_Version_4() const { return ___Version_4; }
	inline uint8_t* get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(uint8_t value)
	{
		___Version_4 = value;
	}

	inline static int32_t get_offset_of_ConnectInUpdate_5() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandom_t3630502682, ___ConnectInUpdate_5)); }
	inline bool get_ConnectInUpdate_5() const { return ___ConnectInUpdate_5; }
	inline bool* get_address_of_ConnectInUpdate_5() { return &___ConnectInUpdate_5; }
	inline void set_ConnectInUpdate_5(bool value)
	{
		___ConnectInUpdate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
