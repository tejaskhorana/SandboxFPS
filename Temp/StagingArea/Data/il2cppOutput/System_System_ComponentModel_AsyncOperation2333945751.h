#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.SynchronizationContext
struct SynchronizationContext_t2738322727;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t2333945751  : public Il2CppObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t2738322727 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	Il2CppObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2333945751, ___ctx_0)); }
	inline SynchronizationContext_t2738322727 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t2738322727 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t2738322727 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_0, value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t2333945751, ___state_1)); }
	inline Il2CppObject * get_state_1() const { return ___state_1; }
	inline Il2CppObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(Il2CppObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier(&___state_1, value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t2333945751, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
