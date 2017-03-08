#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.DemoParticle.TimeKeeper
struct  TimeKeeper_t4240671783  : public Il2CppObject
{
public:
	// System.Int32 ExitGames.Client.DemoParticle.TimeKeeper::lastExecutionTime
	int32_t ___lastExecutionTime_0;
	// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::shouldExecute
	bool ___shouldExecute_1;
	// System.Int32 ExitGames.Client.DemoParticle.TimeKeeper::<Interval>k__BackingField
	int32_t ___U3CIntervalU3Ek__BackingField_2;
	// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_lastExecutionTime_0() { return static_cast<int32_t>(offsetof(TimeKeeper_t4240671783, ___lastExecutionTime_0)); }
	inline int32_t get_lastExecutionTime_0() const { return ___lastExecutionTime_0; }
	inline int32_t* get_address_of_lastExecutionTime_0() { return &___lastExecutionTime_0; }
	inline void set_lastExecutionTime_0(int32_t value)
	{
		___lastExecutionTime_0 = value;
	}

	inline static int32_t get_offset_of_shouldExecute_1() { return static_cast<int32_t>(offsetof(TimeKeeper_t4240671783, ___shouldExecute_1)); }
	inline bool get_shouldExecute_1() const { return ___shouldExecute_1; }
	inline bool* get_address_of_shouldExecute_1() { return &___shouldExecute_1; }
	inline void set_shouldExecute_1(bool value)
	{
		___shouldExecute_1 = value;
	}

	inline static int32_t get_offset_of_U3CIntervalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TimeKeeper_t4240671783, ___U3CIntervalU3Ek__BackingField_2)); }
	inline int32_t get_U3CIntervalU3Ek__BackingField_2() const { return ___U3CIntervalU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIntervalU3Ek__BackingField_2() { return &___U3CIntervalU3Ek__BackingField_2; }
	inline void set_U3CIntervalU3Ek__BackingField_2(int32_t value)
	{
		___U3CIntervalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TimeKeeper_t4240671783, ___U3CIsEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CIsEnabledU3Ek__BackingField_3() const { return ___U3CIsEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsEnabledU3Ek__BackingField_3() { return &___U3CIsEnabledU3Ek__BackingField_3; }
	inline void set_U3CIsEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CIsEnabledU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
