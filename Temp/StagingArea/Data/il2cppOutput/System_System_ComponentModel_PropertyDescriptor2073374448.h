#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeConverter
struct TypeConverter_t1753450284;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "System_System_ComponentModel_MemberDescriptor2617136693.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t2073374448  : public MemberDescriptor_t2617136693
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t1753450284 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1407064410 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2073374448, ___converter_4)); }
	inline TypeConverter_t1753450284 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t1753450284 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t1753450284 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier(&___converter_4, value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2073374448, ___notifiers_5)); }
	inline Hashtable_t1407064410 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1407064410 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1407064410 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier(&___notifiers_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
