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

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t3914683425  : public EventArgs_t2540831021
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	Il2CppObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	Il2CppObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3914683425, ___arg_1)); }
	inline Il2CppObject * get_arg_1() const { return ___arg_1; }
	inline Il2CppObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(Il2CppObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier(&___arg_1, value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3914683425, ___result_2)); }
	inline Il2CppObject * get_result_2() const { return ___result_2; }
	inline Il2CppObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(Il2CppObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier(&___result_2, value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3914683425, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
