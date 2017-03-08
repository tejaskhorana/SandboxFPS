#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonView
struct PhotonView_t1498838369;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomMatchmaker
struct  RandomMatchmaker_t662331106  : public PunBehaviour_t2436907354
{
public:
	// PhotonView RandomMatchmaker::myPhotonView
	PhotonView_t1498838369 * ___myPhotonView_3;

public:
	inline static int32_t get_offset_of_myPhotonView_3() { return static_cast<int32_t>(offsetof(RandomMatchmaker_t662331106, ___myPhotonView_3)); }
	inline PhotonView_t1498838369 * get_myPhotonView_3() const { return ___myPhotonView_3; }
	inline PhotonView_t1498838369 ** get_address_of_myPhotonView_3() { return &___myPhotonView_3; }
	inline void set_myPhotonView_3(PhotonView_t1498838369 * value)
	{
		___myPhotonView_3 = value;
		Il2CppCodeGenWriteBarrier(&___myPhotonView_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
