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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_OnClickLoadSomething_ResourceTyp1845419457.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickLoadSomething
struct  OnClickLoadSomething_t1382781419  : public MonoBehaviour_t667441552
{
public:
	// OnClickLoadSomething/ResourceTypeOption OnClickLoadSomething::ResourceTypeToLoad
	uint8_t ___ResourceTypeToLoad_2;
	// System.String OnClickLoadSomething::ResourceToLoad
	String_t* ___ResourceToLoad_3;

public:
	inline static int32_t get_offset_of_ResourceTypeToLoad_2() { return static_cast<int32_t>(offsetof(OnClickLoadSomething_t1382781419, ___ResourceTypeToLoad_2)); }
	inline uint8_t get_ResourceTypeToLoad_2() const { return ___ResourceTypeToLoad_2; }
	inline uint8_t* get_address_of_ResourceTypeToLoad_2() { return &___ResourceTypeToLoad_2; }
	inline void set_ResourceTypeToLoad_2(uint8_t value)
	{
		___ResourceTypeToLoad_2 = value;
	}

	inline static int32_t get_offset_of_ResourceToLoad_3() { return static_cast<int32_t>(offsetof(OnClickLoadSomething_t1382781419, ___ResourceToLoad_3)); }
	inline String_t* get_ResourceToLoad_3() const { return ___ResourceToLoad_3; }
	inline String_t** get_address_of_ResourceToLoad_3() { return &___ResourceToLoad_3; }
	inline void set_ResourceToLoad_3(String_t* value)
	{
		___ResourceToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResourceToLoad_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
