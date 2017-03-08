#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Boolean>
struct Func_1_t1601960292;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t568674076  : public Il2CppObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t1601960292 * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t568674076, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t568674076, ___myThread_1)); }
	inline Func_1_t1601960292 * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t1601960292 ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t1601960292 * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier(&___myThread_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
