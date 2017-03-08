#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPingManager
struct PhotonPingManager_t2948103071;
// Region
struct Region_t2444038932;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera3831897254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5
struct  U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421  : public Il2CppObject
{
public:
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::<pingManager>__0
	PhotonPingManager_t2948103071 * ___U3CpingManagerU3E__0_0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::<$s_53>__1
	Enumerator_t3831897254  ___U3CU24s_53U3E__1_1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::<region>__2
	Region_t2444038932 * ___U3CregionU3E__2_2;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::<best>__3
	Region_t2444038932 * ___U3CbestU3E__3_3;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::connectToBest
	bool ___connectToBest_4;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::$PC
	int32_t ___U24PC_5;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::$current
	Il2CppObject * ___U24current_6;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator5::<$>connectToBest
	bool ___U3CU24U3EconnectToBest_7;

public:
	inline static int32_t get_offset_of_U3CpingManagerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U3CpingManagerU3E__0_0)); }
	inline PhotonPingManager_t2948103071 * get_U3CpingManagerU3E__0_0() const { return ___U3CpingManagerU3E__0_0; }
	inline PhotonPingManager_t2948103071 ** get_address_of_U3CpingManagerU3E__0_0() { return &___U3CpingManagerU3E__0_0; }
	inline void set_U3CpingManagerU3E__0_0(PhotonPingManager_t2948103071 * value)
	{
		___U3CpingManagerU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpingManagerU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CU24s_53U3E__1_1() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U3CU24s_53U3E__1_1)); }
	inline Enumerator_t3831897254  get_U3CU24s_53U3E__1_1() const { return ___U3CU24s_53U3E__1_1; }
	inline Enumerator_t3831897254 * get_address_of_U3CU24s_53U3E__1_1() { return &___U3CU24s_53U3E__1_1; }
	inline void set_U3CU24s_53U3E__1_1(Enumerator_t3831897254  value)
	{
		___U3CU24s_53U3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CregionU3E__2_2() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U3CregionU3E__2_2)); }
	inline Region_t2444038932 * get_U3CregionU3E__2_2() const { return ___U3CregionU3E__2_2; }
	inline Region_t2444038932 ** get_address_of_U3CregionU3E__2_2() { return &___U3CregionU3E__2_2; }
	inline void set_U3CregionU3E__2_2(Region_t2444038932 * value)
	{
		___U3CregionU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CregionU3E__2_2, value);
	}

	inline static int32_t get_offset_of_U3CbestU3E__3_3() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U3CbestU3E__3_3)); }
	inline Region_t2444038932 * get_U3CbestU3E__3_3() const { return ___U3CbestU3E__3_3; }
	inline Region_t2444038932 ** get_address_of_U3CbestU3E__3_3() { return &___U3CbestU3E__3_3; }
	inline void set_U3CbestU3E__3_3(Region_t2444038932 * value)
	{
		___U3CbestU3E__3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbestU3E__3_3, value);
	}

	inline static int32_t get_offset_of_connectToBest_4() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___connectToBest_4)); }
	inline bool get_connectToBest_4() const { return ___connectToBest_4; }
	inline bool* get_address_of_connectToBest_4() { return &___connectToBest_4; }
	inline void set_connectToBest_4(bool value)
	{
		___connectToBest_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EconnectToBest_7() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator5_t948613421, ___U3CU24U3EconnectToBest_7)); }
	inline bool get_U3CU24U3EconnectToBest_7() const { return ___U3CU24U3EconnectToBest_7; }
	inline bool* get_address_of_U3CU24U3EconnectToBest_7() { return &___U3CU24U3EconnectToBest_7; }
	inline void set_U3CU24U3EconnectToBest_7(bool value)
	{
		___U3CU24U3EconnectToBest_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
