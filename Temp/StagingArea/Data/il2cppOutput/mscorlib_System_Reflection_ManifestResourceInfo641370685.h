#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_ResourceLocation2713095285.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ManifestResourceInfo
struct  ManifestResourceInfo_t641370685  : public Il2CppObject
{
public:
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t1418687608 * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;

public:
	inline static int32_t get_offset_of__assembly_0() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t641370685, ____assembly_0)); }
	inline Assembly_t1418687608 * get__assembly_0() const { return ____assembly_0; }
	inline Assembly_t1418687608 ** get_address_of__assembly_0() { return &____assembly_0; }
	inline void set__assembly_0(Assembly_t1418687608 * value)
	{
		____assembly_0 = value;
		Il2CppCodeGenWriteBarrier(&____assembly_0, value);
	}

	inline static int32_t get_offset_of__filename_1() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t641370685, ____filename_1)); }
	inline String_t* get__filename_1() const { return ____filename_1; }
	inline String_t** get_address_of__filename_1() { return &____filename_1; }
	inline void set__filename_1(String_t* value)
	{
		____filename_1 = value;
		Il2CppCodeGenWriteBarrier(&____filename_1, value);
	}

	inline static int32_t get_offset_of__location_2() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t641370685, ____location_2)); }
	inline int32_t get__location_2() const { return ____location_2; }
	inline int32_t* get_address_of__location_2() { return &____location_2; }
	inline void set__location_2(int32_t value)
	{
		____location_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
