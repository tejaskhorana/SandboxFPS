#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2306896259;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2780524898;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t2721523875;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2491712834;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.CustomType
struct  CustomType_t200707425  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.CustomType::Code
	uint8_t ___Code_0;
	// System.Type ExitGames.Client.Photon.CustomType::Type
	Type_t * ___Type_1;
	// ExitGames.Client.Photon.SerializeMethod ExitGames.Client.Photon.CustomType::SerializeFunction
	SerializeMethod_t2306896259 * ___SerializeFunction_2;
	// ExitGames.Client.Photon.DeserializeMethod ExitGames.Client.Photon.CustomType::DeserializeFunction
	DeserializeMethod_t2780524898 * ___DeserializeFunction_3;
	// ExitGames.Client.Photon.SerializeStreamMethod ExitGames.Client.Photon.CustomType::SerializeStreamFunction
	SerializeStreamMethod_t2721523875 * ___SerializeStreamFunction_4;
	// ExitGames.Client.Photon.DeserializeStreamMethod ExitGames.Client.Photon.CustomType::DeserializeStreamFunction
	DeserializeStreamMethod_t2491712834 * ___DeserializeStreamFunction_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier(&___Type_1, value);
	}

	inline static int32_t get_offset_of_SerializeFunction_2() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___SerializeFunction_2)); }
	inline SerializeMethod_t2306896259 * get_SerializeFunction_2() const { return ___SerializeFunction_2; }
	inline SerializeMethod_t2306896259 ** get_address_of_SerializeFunction_2() { return &___SerializeFunction_2; }
	inline void set_SerializeFunction_2(SerializeMethod_t2306896259 * value)
	{
		___SerializeFunction_2 = value;
		Il2CppCodeGenWriteBarrier(&___SerializeFunction_2, value);
	}

	inline static int32_t get_offset_of_DeserializeFunction_3() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___DeserializeFunction_3)); }
	inline DeserializeMethod_t2780524898 * get_DeserializeFunction_3() const { return ___DeserializeFunction_3; }
	inline DeserializeMethod_t2780524898 ** get_address_of_DeserializeFunction_3() { return &___DeserializeFunction_3; }
	inline void set_DeserializeFunction_3(DeserializeMethod_t2780524898 * value)
	{
		___DeserializeFunction_3 = value;
		Il2CppCodeGenWriteBarrier(&___DeserializeFunction_3, value);
	}

	inline static int32_t get_offset_of_SerializeStreamFunction_4() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___SerializeStreamFunction_4)); }
	inline SerializeStreamMethod_t2721523875 * get_SerializeStreamFunction_4() const { return ___SerializeStreamFunction_4; }
	inline SerializeStreamMethod_t2721523875 ** get_address_of_SerializeStreamFunction_4() { return &___SerializeStreamFunction_4; }
	inline void set_SerializeStreamFunction_4(SerializeStreamMethod_t2721523875 * value)
	{
		___SerializeStreamFunction_4 = value;
		Il2CppCodeGenWriteBarrier(&___SerializeStreamFunction_4, value);
	}

	inline static int32_t get_offset_of_DeserializeStreamFunction_5() { return static_cast<int32_t>(offsetof(CustomType_t200707425, ___DeserializeStreamFunction_5)); }
	inline DeserializeStreamMethod_t2491712834 * get_DeserializeStreamFunction_5() const { return ___DeserializeStreamFunction_5; }
	inline DeserializeStreamMethod_t2491712834 ** get_address_of_DeserializeStreamFunction_5() { return &___DeserializeStreamFunction_5; }
	inline void set_DeserializeStreamFunction_5(DeserializeStreamMethod_t2491712834 * value)
	{
		___DeserializeStreamFunction_5 = value;
		Il2CppCodeGenWriteBarrier(&___DeserializeStreamFunction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
