#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPlayer
struct PhotonPlayer_t1400510109;
// PhotonView
struct PhotonView_t1498838369;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonMessageInfo
struct  PhotonMessageInfo_t259585817 
{
public:
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t1400510109 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t1498838369 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t259585817, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t259585817, ___sender_1)); }
	inline PhotonPlayer_t1400510109 * get_sender_1() const { return ___sender_1; }
	inline PhotonPlayer_t1400510109 ** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(PhotonPlayer_t1400510109 * value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier(&___sender_1, value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t259585817, ___photonView_2)); }
	inline PhotonView_t1498838369 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t1498838369 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t1498838369 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier(&___photonView_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: PhotonMessageInfo
struct PhotonMessageInfo_t259585817_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	PhotonPlayer_t1400510109 * ___sender_1;
	PhotonView_t1498838369 * ___photonView_2;
};
// Native definition for marshalling of: PhotonMessageInfo
struct PhotonMessageInfo_t259585817_marshaled_com
{
	int32_t ___timeInt_0;
	PhotonPlayer_t1400510109 * ___sender_1;
	PhotonView_t1498838369 * ___photonView_2;
};
