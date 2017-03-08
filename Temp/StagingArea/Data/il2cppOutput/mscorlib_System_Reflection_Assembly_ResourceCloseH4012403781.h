#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Module
struct Module_t1394482686;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResourceCloseHandler
struct  ResourceCloseHandler_t4012403781  : public Il2CppObject
{
public:
	// System.Reflection.Module System.Reflection.Assembly/ResourceCloseHandler::module
	Module_t1394482686 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(ResourceCloseHandler_t4012403781, ___module_0)); }
	inline Module_t1394482686 * get_module_0() const { return ___module_0; }
	inline Module_t1394482686 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(Module_t1394482686 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier(&___module_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
