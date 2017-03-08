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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChannelSelector
struct  ChannelSelector_t662624738  : public MonoBehaviour_t667441552
{
public:
	// System.String ChannelSelector::Channel
	String_t* ___Channel_2;

public:
	inline static int32_t get_offset_of_Channel_2() { return static_cast<int32_t>(offsetof(ChannelSelector_t662624738, ___Channel_2)); }
	inline String_t* get_Channel_2() const { return ___Channel_2; }
	inline String_t** get_address_of_Channel_2() { return &___Channel_2; }
	inline void set_Channel_2(String_t* value)
	{
		___Channel_2 = value;
		Il2CppCodeGenWriteBarrier(&___Channel_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
