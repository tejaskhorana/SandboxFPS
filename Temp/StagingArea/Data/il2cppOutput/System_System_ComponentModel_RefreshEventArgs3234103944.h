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
// System.Type
struct Type_t;

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t3234103944  : public EventArgs_t2540831021
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	Il2CppObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t3234103944, ___component_1)); }
	inline Il2CppObject * get_component_1() const { return ___component_1; }
	inline Il2CppObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(Il2CppObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier(&___component_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t3234103944, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
