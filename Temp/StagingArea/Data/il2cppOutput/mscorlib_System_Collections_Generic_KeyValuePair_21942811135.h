#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Component
struct Component_t3501516275;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct  KeyValuePair_2_t1942811135 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Component_t3501516275 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MethodInfo_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1942811135, ___key_0)); }
	inline Component_t3501516275 * get_key_0() const { return ___key_0; }
	inline Component_t3501516275 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Component_t3501516275 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1942811135, ___value_1)); }
	inline MethodInfo_t * get_value_1() const { return ___value_1; }
	inline MethodInfo_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MethodInfo_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
