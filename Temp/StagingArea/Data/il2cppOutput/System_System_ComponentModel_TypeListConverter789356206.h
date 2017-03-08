#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3339007067;

#include "System_System_ComponentModel_TypeConverter1753450284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeListConverter
struct  TypeListConverter_t789356206  : public TypeConverter_t1753450284
{
public:
	// System.Type[] System.ComponentModel.TypeListConverter::types
	TypeU5BU5D_t3339007067* ___types_0;

public:
	inline static int32_t get_offset_of_types_0() { return static_cast<int32_t>(offsetof(TypeListConverter_t789356206, ___types_0)); }
	inline TypeU5BU5D_t3339007067* get_types_0() const { return ___types_0; }
	inline TypeU5BU5D_t3339007067** get_address_of_types_0() { return &___types_0; }
	inline void set_types_0(TypeU5BU5D_t3339007067* value)
	{
		___types_0 = value;
		Il2CppCodeGenWriteBarrier(&___types_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
