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
// System.Object
struct Il2CppObject;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t1791013315;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct  LinkedList_1_t48913777  : public Il2CppObject
{
public:
	// System.UInt32 System.Collections.Generic.LinkedList`1::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1::syncRoot
	Il2CppObject * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::first
	LinkedListNode_1_t1791013315 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::si
	SerializationInfo_t2185721892 * ___si_6;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t48913777, ___count_2)); }
	inline uint32_t get_count_2() const { return ___count_2; }
	inline uint32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(uint32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t48913777, ___version_3)); }
	inline uint32_t get_version_3() const { return ___version_3; }
	inline uint32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_syncRoot_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t48913777, ___syncRoot_4)); }
	inline Il2CppObject * get_syncRoot_4() const { return ___syncRoot_4; }
	inline Il2CppObject ** get_address_of_syncRoot_4() { return &___syncRoot_4; }
	inline void set_syncRoot_4(Il2CppObject * value)
	{
		___syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_4, value);
	}

	inline static int32_t get_offset_of_first_5() { return static_cast<int32_t>(offsetof(LinkedList_1_t48913777, ___first_5)); }
	inline LinkedListNode_1_t1791013315 * get_first_5() const { return ___first_5; }
	inline LinkedListNode_1_t1791013315 ** get_address_of_first_5() { return &___first_5; }
	inline void set_first_5(LinkedListNode_1_t1791013315 * value)
	{
		___first_5 = value;
		Il2CppCodeGenWriteBarrier(&___first_5, value);
	}

	inline static int32_t get_offset_of_si_6() { return static_cast<int32_t>(offsetof(LinkedList_1_t48913777, ___si_6)); }
	inline SerializationInfo_t2185721892 * get_si_6() const { return ___si_6; }
	inline SerializationInfo_t2185721892 ** get_address_of_si_6() { return &___si_6; }
	inline void set_si_6(SerializationInfo_t2185721892 * value)
	{
		___si_6 = value;
		Il2CppCodeGenWriteBarrier(&___si_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
