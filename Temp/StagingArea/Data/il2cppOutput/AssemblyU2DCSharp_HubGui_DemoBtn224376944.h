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

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HubGui/DemoBtn
struct  DemoBtn_t224376944 
{
public:
	// System.String HubGui/DemoBtn::Text
	String_t* ___Text_0;
	// System.String HubGui/DemoBtn::Link
	String_t* ___Link_1;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(DemoBtn_t224376944, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier(&___Text_0, value);
	}

	inline static int32_t get_offset_of_Link_1() { return static_cast<int32_t>(offsetof(DemoBtn_t224376944, ___Link_1)); }
	inline String_t* get_Link_1() const { return ___Link_1; }
	inline String_t** get_address_of_Link_1() { return &___Link_1; }
	inline void set_Link_1(String_t* value)
	{
		___Link_1 = value;
		Il2CppCodeGenWriteBarrier(&___Link_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: HubGui/DemoBtn
struct DemoBtn_t224376944_marshaled_pinvoke
{
	char* ___Text_0;
	char* ___Link_1;
};
// Native definition for marshalling of: HubGui/DemoBtn
struct DemoBtn_t224376944_marshaled_com
{
	Il2CppChar* ___Text_0;
	Il2CppChar* ___Link_1;
};
