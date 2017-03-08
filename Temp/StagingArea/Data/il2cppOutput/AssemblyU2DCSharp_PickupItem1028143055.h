#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;
// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t182571831;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupItem
struct  PickupItem_t1028143055  : public MonoBehaviour_t2824676508
{
public:
	// System.Single PickupItem::SecondsBeforeRespawn
	float ___SecondsBeforeRespawn_3;
	// System.Boolean PickupItem::PickupOnTrigger
	bool ___PickupOnTrigger_4;
	// System.Boolean PickupItem::PickupIsMine
	bool ___PickupIsMine_5;
	// UnityEngine.MonoBehaviour PickupItem::OnPickedUpCall
	MonoBehaviour_t667441552 * ___OnPickedUpCall_6;
	// System.Boolean PickupItem::SentPickup
	bool ___SentPickup_7;
	// System.Double PickupItem::TimeOfRespawn
	double ___TimeOfRespawn_8;

public:
	inline static int32_t get_offset_of_SecondsBeforeRespawn_3() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___SecondsBeforeRespawn_3)); }
	inline float get_SecondsBeforeRespawn_3() const { return ___SecondsBeforeRespawn_3; }
	inline float* get_address_of_SecondsBeforeRespawn_3() { return &___SecondsBeforeRespawn_3; }
	inline void set_SecondsBeforeRespawn_3(float value)
	{
		___SecondsBeforeRespawn_3 = value;
	}

	inline static int32_t get_offset_of_PickupOnTrigger_4() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___PickupOnTrigger_4)); }
	inline bool get_PickupOnTrigger_4() const { return ___PickupOnTrigger_4; }
	inline bool* get_address_of_PickupOnTrigger_4() { return &___PickupOnTrigger_4; }
	inline void set_PickupOnTrigger_4(bool value)
	{
		___PickupOnTrigger_4 = value;
	}

	inline static int32_t get_offset_of_PickupIsMine_5() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___PickupIsMine_5)); }
	inline bool get_PickupIsMine_5() const { return ___PickupIsMine_5; }
	inline bool* get_address_of_PickupIsMine_5() { return &___PickupIsMine_5; }
	inline void set_PickupIsMine_5(bool value)
	{
		___PickupIsMine_5 = value;
	}

	inline static int32_t get_offset_of_OnPickedUpCall_6() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___OnPickedUpCall_6)); }
	inline MonoBehaviour_t667441552 * get_OnPickedUpCall_6() const { return ___OnPickedUpCall_6; }
	inline MonoBehaviour_t667441552 ** get_address_of_OnPickedUpCall_6() { return &___OnPickedUpCall_6; }
	inline void set_OnPickedUpCall_6(MonoBehaviour_t667441552 * value)
	{
		___OnPickedUpCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnPickedUpCall_6, value);
	}

	inline static int32_t get_offset_of_SentPickup_7() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___SentPickup_7)); }
	inline bool get_SentPickup_7() const { return ___SentPickup_7; }
	inline bool* get_address_of_SentPickup_7() { return &___SentPickup_7; }
	inline void set_SentPickup_7(bool value)
	{
		___SentPickup_7 = value;
	}

	inline static int32_t get_offset_of_TimeOfRespawn_8() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055, ___TimeOfRespawn_8)); }
	inline double get_TimeOfRespawn_8() const { return ___TimeOfRespawn_8; }
	inline double* get_address_of_TimeOfRespawn_8() { return &___TimeOfRespawn_8; }
	inline void set_TimeOfRespawn_8(double value)
	{
		___TimeOfRespawn_8 = value;
	}
};

struct PickupItem_t1028143055_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<PickupItem> PickupItem::DisabledPickupItems
	HashSet_1_t182571831 * ___DisabledPickupItems_9;

public:
	inline static int32_t get_offset_of_DisabledPickupItems_9() { return static_cast<int32_t>(offsetof(PickupItem_t1028143055_StaticFields, ___DisabledPickupItems_9)); }
	inline HashSet_1_t182571831 * get_DisabledPickupItems_9() const { return ___DisabledPickupItems_9; }
	inline HashSet_1_t182571831 ** get_address_of_DisabledPickupItems_9() { return &___DisabledPickupItems_9; }
	inline void set_DisabledPickupItems_9(HashSet_1_t182571831 * value)
	{
		___DisabledPickupItems_9 = value;
		Il2CppCodeGenWriteBarrier(&___DisabledPickupItems_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
