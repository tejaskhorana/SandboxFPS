#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationRequest
struct  OperationRequest_t2569778878  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationRequest::OperationCode
	uint8_t ___OperationCode_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationRequest::Parameters
	Dictionary_2_t903024962 * ___Parameters_1;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationRequest_t2569778878, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(OperationRequest_t2569778878, ___Parameters_1)); }
	inline Dictionary_2_t903024962 * get_Parameters_1() const { return ___Parameters_1; }
	inline Dictionary_2_t903024962 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(Dictionary_2_t903024962 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
