#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupItemSimple
struct  PickupItemSimple_t4157210209  : public MonoBehaviour_t2824676508
{
public:
	// System.Single PickupItemSimple::SecondsBeforeRespawn
	float ___SecondsBeforeRespawn_3;
	// System.Boolean PickupItemSimple::PickupOnCollide
	bool ___PickupOnCollide_4;
	// System.Boolean PickupItemSimple::SentPickup
	bool ___SentPickup_5;

public:
	inline static int32_t get_offset_of_SecondsBeforeRespawn_3() { return static_cast<int32_t>(offsetof(PickupItemSimple_t4157210209, ___SecondsBeforeRespawn_3)); }
	inline float get_SecondsBeforeRespawn_3() const { return ___SecondsBeforeRespawn_3; }
	inline float* get_address_of_SecondsBeforeRespawn_3() { return &___SecondsBeforeRespawn_3; }
	inline void set_SecondsBeforeRespawn_3(float value)
	{
		___SecondsBeforeRespawn_3 = value;
	}

	inline static int32_t get_offset_of_PickupOnCollide_4() { return static_cast<int32_t>(offsetof(PickupItemSimple_t4157210209, ___PickupOnCollide_4)); }
	inline bool get_PickupOnCollide_4() const { return ___PickupOnCollide_4; }
	inline bool* get_address_of_PickupOnCollide_4() { return &___PickupOnCollide_4; }
	inline void set_PickupOnCollide_4(bool value)
	{
		___PickupOnCollide_4 = value;
	}

	inline static int32_t get_offset_of_SentPickup_5() { return static_cast<int32_t>(offsetof(PickupItemSimple_t4157210209, ___SentPickup_5)); }
	inline bool get_SentPickup_5() const { return ___SentPickup_5; }
	inline bool* get_address_of_SentPickup_5() { return &___SentPickup_5; }
	inline void set_SentPickup_5(bool value)
	{
		___SentPickup_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
