#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "System_System_ComponentModel_AsyncCompletedEventAr4096136078.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunWorkerCompletedEventArgs
struct  RunWorkerCompletedEventArgs_t3373723451  : public AsyncCompletedEventArgs_t4096136078
{
public:
	// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::result
	Il2CppObject * ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(RunWorkerCompletedEventArgs_t3373723451, ___result_4)); }
	inline Il2CppObject * get_result_4() const { return ___result_4; }
	inline Il2CppObject ** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(Il2CppObject * value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier(&___result_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
