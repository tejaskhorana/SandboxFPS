#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t662734294;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7
struct  U3CReceiveLoopU3Ec__Iterator7_t3466407396  : public Il2CppObject
{
public:
	// System.Byte[] ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7::<inBuff>__0
	ByteU5BU5D_t4260760469* ___U3CinBuffU3E__0_0;
	// System.Exception ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7::<e>__1
	Exception_t3991598821 * ___U3CeU3E__1_1;
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7::$PC
	int32_t ___U24PC_2;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7::$current
	Il2CppObject * ___U24current_3;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator7::<>f__this
	SocketWebTcp_t662734294 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CinBuffU3E__0_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator7_t3466407396, ___U3CinBuffU3E__0_0)); }
	inline ByteU5BU5D_t4260760469* get_U3CinBuffU3E__0_0() const { return ___U3CinBuffU3E__0_0; }
	inline ByteU5BU5D_t4260760469** get_address_of_U3CinBuffU3E__0_0() { return &___U3CinBuffU3E__0_0; }
	inline void set_U3CinBuffU3E__0_0(ByteU5BU5D_t4260760469* value)
	{
		___U3CinBuffU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinBuffU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator7_t3466407396, ___U3CeU3E__1_1)); }
	inline Exception_t3991598821 * get_U3CeU3E__1_1() const { return ___U3CeU3E__1_1; }
	inline Exception_t3991598821 ** get_address_of_U3CeU3E__1_1() { return &___U3CeU3E__1_1; }
	inline void set_U3CeU3E__1_1(Exception_t3991598821 * value)
	{
		___U3CeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator7_t3466407396, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator7_t3466407396, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator7_t3466407396, ___U3CU3Ef__this_4)); }
	inline SocketWebTcp_t662734294 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline SocketWebTcp_t662734294 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(SocketWebTcp_t662734294 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
