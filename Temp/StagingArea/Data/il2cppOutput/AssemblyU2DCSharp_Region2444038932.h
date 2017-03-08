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

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Region
struct  Region_t2444038932  : public Il2CppObject
{
public:
	// CloudRegionCode Region::Code
	int32_t ___Code_0;
	// System.String Region::HostAndPort
	String_t* ___HostAndPort_1;
	// System.Int32 Region::Ping
	int32_t ___Ping_2;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(Region_t2444038932, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_HostAndPort_1() { return static_cast<int32_t>(offsetof(Region_t2444038932, ___HostAndPort_1)); }
	inline String_t* get_HostAndPort_1() const { return ___HostAndPort_1; }
	inline String_t** get_address_of_HostAndPort_1() { return &___HostAndPort_1; }
	inline void set_HostAndPort_1(String_t* value)
	{
		___HostAndPort_1 = value;
		Il2CppCodeGenWriteBarrier(&___HostAndPort_1, value);
	}

	inline static int32_t get_offset_of_Ping_2() { return static_cast<int32_t>(offsetof(Region_t2444038932, ___Ping_2)); }
	inline int32_t get_Ping_2() const { return ___Ping_2; }
	inline int32_t* get_address_of_Ping_2() { return &___Ping_2; }
	inline void set_Ping_2(int32_t value)
	{
		___Ping_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
