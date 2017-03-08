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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.MonoBehaviour
struct  MonoBehaviour_t2824676508  : public MonoBehaviour_t667441552
{
public:
	// PhotonView Photon.MonoBehaviour::pvCache
	PhotonView_t1498838369 * ___pvCache_2;

public:
	inline static int32_t get_offset_of_pvCache_2() { return static_cast<int32_t>(offsetof(MonoBehaviour_t2824676508, ___pvCache_2)); }
	inline PhotonView_t1498838369 * get_pvCache_2() const { return ___pvCache_2; }
	inline PhotonView_t1498838369 ** get_address_of_pvCache_2() { return &___pvCache_2; }
	inline void set_pvCache_2(PhotonView_t1498838369 * value)
	{
		___pvCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___pvCache_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
