#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Region
struct Region_t2444038932;
// ExitGames.Client.Photon.PhotonPing
struct PhotonPing_t1287585572;
// System.String
struct String_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;
// PhotonPingManager
struct PhotonPingManager_t2948103071;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPingManager/<PingSocket>c__Iterator6
struct  U3CPingSocketU3Ec__Iterator6_t2732255666  : public Il2CppObject
{
public:
	// Region PhotonPingManager/<PingSocket>c__Iterator6::region
	Region_t2444038932 * ___region_0;
	// ExitGames.Client.Photon.PhotonPing PhotonPingManager/<PingSocket>c__Iterator6::<ping>__0
	PhotonPing_t1287585572 * ___U3CpingU3E__0_1;
	// System.Single PhotonPingManager/<PingSocket>c__Iterator6::<rttSum>__1
	float ___U3CrttSumU3E__1_2;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator6::<replyCount>__2
	int32_t ___U3CreplyCountU3E__2_3;
	// System.String PhotonPingManager/<PingSocket>c__Iterator6::<regionAddress>__3
	String_t* ___U3CregionAddressU3E__3_4;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator6::<indexOfColon>__4
	int32_t ___U3CindexOfColonU3E__4_5;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator6::<i>__5
	int32_t ___U3CiU3E__5_6;
	// System.Boolean PhotonPingManager/<PingSocket>c__Iterator6::<overtime>__6
	bool ___U3CovertimeU3E__6_7;
	// System.Diagnostics.Stopwatch PhotonPingManager/<PingSocket>c__Iterator6::<sw>__7
	Stopwatch_t3420517611 * ___U3CswU3E__7_8;
	// System.Exception PhotonPingManager/<PingSocket>c__Iterator6::<e>__8
	Exception_t3991598821 * ___U3CeU3E__8_9;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator6::<rtt>__9
	int32_t ___U3CrttU3E__9_10;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator6::$PC
	int32_t ___U24PC_11;
	// System.Object PhotonPingManager/<PingSocket>c__Iterator6::$current
	Il2CppObject * ___U24current_12;
	// Region PhotonPingManager/<PingSocket>c__Iterator6::<$>region
	Region_t2444038932 * ___U3CU24U3Eregion_13;
	// PhotonPingManager PhotonPingManager/<PingSocket>c__Iterator6::<>f__this
	PhotonPingManager_t2948103071 * ___U3CU3Ef__this_14;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___region_0)); }
	inline Region_t2444038932 * get_region_0() const { return ___region_0; }
	inline Region_t2444038932 ** get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(Region_t2444038932 * value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier(&___region_0, value);
	}

	inline static int32_t get_offset_of_U3CpingU3E__0_1() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CpingU3E__0_1)); }
	inline PhotonPing_t1287585572 * get_U3CpingU3E__0_1() const { return ___U3CpingU3E__0_1; }
	inline PhotonPing_t1287585572 ** get_address_of_U3CpingU3E__0_1() { return &___U3CpingU3E__0_1; }
	inline void set_U3CpingU3E__0_1(PhotonPing_t1287585572 * value)
	{
		___U3CpingU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpingU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E__1_2() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CrttSumU3E__1_2)); }
	inline float get_U3CrttSumU3E__1_2() const { return ___U3CrttSumU3E__1_2; }
	inline float* get_address_of_U3CrttSumU3E__1_2() { return &___U3CrttSumU3E__1_2; }
	inline void set_U3CrttSumU3E__1_2(float value)
	{
		___U3CrttSumU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E__2_3() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CreplyCountU3E__2_3)); }
	inline int32_t get_U3CreplyCountU3E__2_3() const { return ___U3CreplyCountU3E__2_3; }
	inline int32_t* get_address_of_U3CreplyCountU3E__2_3() { return &___U3CreplyCountU3E__2_3; }
	inline void set_U3CreplyCountU3E__2_3(int32_t value)
	{
		___U3CreplyCountU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CregionAddressU3E__3_4() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CregionAddressU3E__3_4)); }
	inline String_t* get_U3CregionAddressU3E__3_4() const { return ___U3CregionAddressU3E__3_4; }
	inline String_t** get_address_of_U3CregionAddressU3E__3_4() { return &___U3CregionAddressU3E__3_4; }
	inline void set_U3CregionAddressU3E__3_4(String_t* value)
	{
		___U3CregionAddressU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CregionAddressU3E__3_4, value);
	}

	inline static int32_t get_offset_of_U3CindexOfColonU3E__4_5() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CindexOfColonU3E__4_5)); }
	inline int32_t get_U3CindexOfColonU3E__4_5() const { return ___U3CindexOfColonU3E__4_5; }
	inline int32_t* get_address_of_U3CindexOfColonU3E__4_5() { return &___U3CindexOfColonU3E__4_5; }
	inline void set_U3CindexOfColonU3E__4_5(int32_t value)
	{
		___U3CindexOfColonU3E__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__5_6() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CiU3E__5_6)); }
	inline int32_t get_U3CiU3E__5_6() const { return ___U3CiU3E__5_6; }
	inline int32_t* get_address_of_U3CiU3E__5_6() { return &___U3CiU3E__5_6; }
	inline void set_U3CiU3E__5_6(int32_t value)
	{
		___U3CiU3E__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CovertimeU3E__6_7() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CovertimeU3E__6_7)); }
	inline bool get_U3CovertimeU3E__6_7() const { return ___U3CovertimeU3E__6_7; }
	inline bool* get_address_of_U3CovertimeU3E__6_7() { return &___U3CovertimeU3E__6_7; }
	inline void set_U3CovertimeU3E__6_7(bool value)
	{
		___U3CovertimeU3E__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E__7_8() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CswU3E__7_8)); }
	inline Stopwatch_t3420517611 * get_U3CswU3E__7_8() const { return ___U3CswU3E__7_8; }
	inline Stopwatch_t3420517611 ** get_address_of_U3CswU3E__7_8() { return &___U3CswU3E__7_8; }
	inline void set_U3CswU3E__7_8(Stopwatch_t3420517611 * value)
	{
		___U3CswU3E__7_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CswU3E__7_8, value);
	}

	inline static int32_t get_offset_of_U3CeU3E__8_9() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CeU3E__8_9)); }
	inline Exception_t3991598821 * get_U3CeU3E__8_9() const { return ___U3CeU3E__8_9; }
	inline Exception_t3991598821 ** get_address_of_U3CeU3E__8_9() { return &___U3CeU3E__8_9; }
	inline void set_U3CeU3E__8_9(Exception_t3991598821 * value)
	{
		___U3CeU3E__8_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__8_9, value);
	}

	inline static int32_t get_offset_of_U3CrttU3E__9_10() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CrttU3E__9_10)); }
	inline int32_t get_U3CrttU3E__9_10() const { return ___U3CrttU3E__9_10; }
	inline int32_t* get_address_of_U3CrttU3E__9_10() { return &___U3CrttU3E__9_10; }
	inline void set_U3CrttU3E__9_10(int32_t value)
	{
		___U3CrttU3E__9_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}

	inline static int32_t get_offset_of_U24current_12() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U24current_12)); }
	inline Il2CppObject * get_U24current_12() const { return ___U24current_12; }
	inline Il2CppObject ** get_address_of_U24current_12() { return &___U24current_12; }
	inline void set_U24current_12(Il2CppObject * value)
	{
		___U24current_12 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_12, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eregion_13() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CU24U3Eregion_13)); }
	inline Region_t2444038932 * get_U3CU24U3Eregion_13() const { return ___U3CU24U3Eregion_13; }
	inline Region_t2444038932 ** get_address_of_U3CU24U3Eregion_13() { return &___U3CU24U3Eregion_13; }
	inline void set_U3CU24U3Eregion_13(Region_t2444038932 * value)
	{
		___U3CU24U3Eregion_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Eregion_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_14() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator6_t2732255666, ___U3CU3Ef__this_14)); }
	inline PhotonPingManager_t2948103071 * get_U3CU3Ef__this_14() const { return ___U3CU3Ef__this_14; }
	inline PhotonPingManager_t2948103071 ** get_address_of_U3CU3Ef__this_14() { return &___U3CU3Ef__this_14; }
	inline void set_U3CU3Ef__this_14(PhotonPingManager_t2948103071 * value)
	{
		___U3CU3Ef__this_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
