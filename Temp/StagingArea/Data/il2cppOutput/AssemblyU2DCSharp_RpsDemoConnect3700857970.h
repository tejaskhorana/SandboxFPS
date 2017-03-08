#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.InputField
struct InputField_t609046876;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDemoConnect
struct  RpsDemoConnect_t3700857970  : public PunBehaviour_t2436907354
{
public:
	// UnityEngine.UI.InputField RpsDemoConnect::InputField
	InputField_t609046876 * ___InputField_5;
	// System.String RpsDemoConnect::UserId
	String_t* ___UserId_6;
	// System.String RpsDemoConnect::previousRoom
	String_t* ___previousRoom_7;

public:
	inline static int32_t get_offset_of_InputField_5() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___InputField_5)); }
	inline InputField_t609046876 * get_InputField_5() const { return ___InputField_5; }
	inline InputField_t609046876 ** get_address_of_InputField_5() { return &___InputField_5; }
	inline void set_InputField_5(InputField_t609046876 * value)
	{
		___InputField_5 = value;
		Il2CppCodeGenWriteBarrier(&___InputField_5, value);
	}

	inline static int32_t get_offset_of_UserId_6() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___UserId_6)); }
	inline String_t* get_UserId_6() const { return ___UserId_6; }
	inline String_t** get_address_of_UserId_6() { return &___UserId_6; }
	inline void set_UserId_6(String_t* value)
	{
		___UserId_6 = value;
		Il2CppCodeGenWriteBarrier(&___UserId_6, value);
	}

	inline static int32_t get_offset_of_previousRoom_7() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___previousRoom_7)); }
	inline String_t* get_previousRoom_7() const { return ___previousRoom_7; }
	inline String_t** get_address_of_previousRoom_7() { return &___previousRoom_7; }
	inline void set_previousRoom_7(String_t* value)
	{
		___previousRoom_7 = value;
		Il2CppCodeGenWriteBarrier(&___previousRoom_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
