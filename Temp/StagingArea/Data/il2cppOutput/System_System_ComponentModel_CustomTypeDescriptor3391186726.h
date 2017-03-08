#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t4089610441;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3391186726  : public Il2CppObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	Il2CppObject * ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3391186726, ____parent_0)); }
	inline Il2CppObject * get__parent_0() const { return ____parent_0; }
	inline Il2CppObject ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(Il2CppObject * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
