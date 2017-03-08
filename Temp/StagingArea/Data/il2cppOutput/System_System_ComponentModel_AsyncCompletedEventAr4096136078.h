#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t4096136078  : public EventArgs_t2540831021
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t3991598821 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	Il2CppObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t4096136078, ____error_1)); }
	inline Exception_t3991598821 * get__error_1() const { return ____error_1; }
	inline Exception_t3991598821 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t3991598821 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier(&____error_1, value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t4096136078, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t4096136078, ____userState_3)); }
	inline Il2CppObject * get__userState_3() const { return ____userState_3; }
	inline Il2CppObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(Il2CppObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier(&____userState_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
