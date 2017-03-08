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

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType2061043068.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeTy1557360995.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonAnimatorView/SynchronizedParameter
struct  SynchronizedParameter_t312084206  : public Il2CppObject
{
public:
	// PhotonAnimatorView/ParameterType PhotonAnimatorView/SynchronizedParameter::Type
	int32_t ___Type_0;
	// PhotonAnimatorView/SynchronizeType PhotonAnimatorView/SynchronizedParameter::SynchronizeType
	int32_t ___SynchronizeType_1;
	// System.String PhotonAnimatorView/SynchronizedParameter::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t312084206, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_SynchronizeType_1() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t312084206, ___SynchronizeType_1)); }
	inline int32_t get_SynchronizeType_1() const { return ___SynchronizeType_1; }
	inline int32_t* get_address_of_SynchronizeType_1() { return &___SynchronizeType_1; }
	inline void set_SynchronizeType_1(int32_t value)
	{
		___SynchronizeType_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t312084206, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
