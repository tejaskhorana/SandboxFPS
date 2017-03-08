#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RaiseEventOptions
struct RaiseEventOptions_t2943657104;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_EventCaching1612786661.h"
#include "AssemblyU2DCSharp_ReceiverGroup3151047088.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaiseEventOptions
struct  RaiseEventOptions_t2943657104  : public Il2CppObject
{
public:
	// EventCaching RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] RaiseEventOptions::TargetActors
	Int32U5BU5D_t3230847821* ___TargetActors_3;
	// ReceiverGroup RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// System.Boolean RaiseEventOptions::ForwardToWebhook
	bool ___ForwardToWebhook_6;
	// System.Boolean RaiseEventOptions::Encrypt
	bool ___Encrypt_7;

public:
	inline static int32_t get_offset_of_CachingOption_1() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___CachingOption_1)); }
	inline uint8_t get_CachingOption_1() const { return ___CachingOption_1; }
	inline uint8_t* get_address_of_CachingOption_1() { return &___CachingOption_1; }
	inline void set_CachingOption_1(uint8_t value)
	{
		___CachingOption_1 = value;
	}

	inline static int32_t get_offset_of_InterestGroup_2() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___InterestGroup_2)); }
	inline uint8_t get_InterestGroup_2() const { return ___InterestGroup_2; }
	inline uint8_t* get_address_of_InterestGroup_2() { return &___InterestGroup_2; }
	inline void set_InterestGroup_2(uint8_t value)
	{
		___InterestGroup_2 = value;
	}

	inline static int32_t get_offset_of_TargetActors_3() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___TargetActors_3)); }
	inline Int32U5BU5D_t3230847821* get_TargetActors_3() const { return ___TargetActors_3; }
	inline Int32U5BU5D_t3230847821** get_address_of_TargetActors_3() { return &___TargetActors_3; }
	inline void set_TargetActors_3(Int32U5BU5D_t3230847821* value)
	{
		___TargetActors_3 = value;
		Il2CppCodeGenWriteBarrier(&___TargetActors_3, value);
	}

	inline static int32_t get_offset_of_Receivers_4() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___Receivers_4)); }
	inline uint8_t get_Receivers_4() const { return ___Receivers_4; }
	inline uint8_t* get_address_of_Receivers_4() { return &___Receivers_4; }
	inline void set_Receivers_4(uint8_t value)
	{
		___Receivers_4 = value;
	}

	inline static int32_t get_offset_of_SequenceChannel_5() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___SequenceChannel_5)); }
	inline uint8_t get_SequenceChannel_5() const { return ___SequenceChannel_5; }
	inline uint8_t* get_address_of_SequenceChannel_5() { return &___SequenceChannel_5; }
	inline void set_SequenceChannel_5(uint8_t value)
	{
		___SequenceChannel_5 = value;
	}

	inline static int32_t get_offset_of_ForwardToWebhook_6() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___ForwardToWebhook_6)); }
	inline bool get_ForwardToWebhook_6() const { return ___ForwardToWebhook_6; }
	inline bool* get_address_of_ForwardToWebhook_6() { return &___ForwardToWebhook_6; }
	inline void set_ForwardToWebhook_6(bool value)
	{
		___ForwardToWebhook_6 = value;
	}

	inline static int32_t get_offset_of_Encrypt_7() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104, ___Encrypt_7)); }
	inline bool get_Encrypt_7() const { return ___Encrypt_7; }
	inline bool* get_address_of_Encrypt_7() { return &___Encrypt_7; }
	inline void set_Encrypt_7(bool value)
	{
		___Encrypt_7 = value;
	}
};

struct RaiseEventOptions_t2943657104_StaticFields
{
public:
	// RaiseEventOptions RaiseEventOptions::Default
	RaiseEventOptions_t2943657104 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2943657104_StaticFields, ___Default_0)); }
	inline RaiseEventOptions_t2943657104 * get_Default_0() const { return ___Default_0; }
	inline RaiseEventOptions_t2943657104 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RaiseEventOptions_t2943657104 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
