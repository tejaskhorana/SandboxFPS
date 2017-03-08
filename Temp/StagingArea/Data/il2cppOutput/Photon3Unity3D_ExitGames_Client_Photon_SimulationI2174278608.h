#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2162807876;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SimulationItem
struct  SimulationItem_t2174278608  : public Il2CppObject
{
public:
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.SimulationItem::stopw
	Stopwatch_t3420517611 * ___stopw_0;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::TimeToExecute
	int32_t ___TimeToExecute_1;
	// ExitGames.Client.Photon.PeerBase/MyAction ExitGames.Client.Photon.SimulationItem::ActionToExecute
	MyAction_t2162807876 * ___ActionToExecute_2;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::<Delay>k__BackingField
	int32_t ___U3CDelayU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_stopw_0() { return static_cast<int32_t>(offsetof(SimulationItem_t2174278608, ___stopw_0)); }
	inline Stopwatch_t3420517611 * get_stopw_0() const { return ___stopw_0; }
	inline Stopwatch_t3420517611 ** get_address_of_stopw_0() { return &___stopw_0; }
	inline void set_stopw_0(Stopwatch_t3420517611 * value)
	{
		___stopw_0 = value;
		Il2CppCodeGenWriteBarrier(&___stopw_0, value);
	}

	inline static int32_t get_offset_of_TimeToExecute_1() { return static_cast<int32_t>(offsetof(SimulationItem_t2174278608, ___TimeToExecute_1)); }
	inline int32_t get_TimeToExecute_1() const { return ___TimeToExecute_1; }
	inline int32_t* get_address_of_TimeToExecute_1() { return &___TimeToExecute_1; }
	inline void set_TimeToExecute_1(int32_t value)
	{
		___TimeToExecute_1 = value;
	}

	inline static int32_t get_offset_of_ActionToExecute_2() { return static_cast<int32_t>(offsetof(SimulationItem_t2174278608, ___ActionToExecute_2)); }
	inline MyAction_t2162807876 * get_ActionToExecute_2() const { return ___ActionToExecute_2; }
	inline MyAction_t2162807876 ** get_address_of_ActionToExecute_2() { return &___ActionToExecute_2; }
	inline void set_ActionToExecute_2(MyAction_t2162807876 * value)
	{
		___ActionToExecute_2 = value;
		Il2CppCodeGenWriteBarrier(&___ActionToExecute_2, value);
	}

	inline static int32_t get_offset_of_U3CDelayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimulationItem_t2174278608, ___U3CDelayU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayU3Ek__BackingField_3() const { return ___U3CDelayU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayU3Ek__BackingField_3() { return &___U3CDelayU3Ek__BackingField_3; }
	inline void set_U3CDelayU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
