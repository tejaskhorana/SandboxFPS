#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CubeInter/State[]
struct StateU5BU5D_t596300884;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeInter
struct  CubeInter_t948382087  : public MonoBehaviour_t2824676508
{
public:
	// CubeInter/State[] CubeInter::m_BufferedState
	StateU5BU5D_t596300884* ___m_BufferedState_3;
	// System.Int32 CubeInter::m_TimestampCount
	int32_t ___m_TimestampCount_4;
	// System.Double CubeInter::InterpolationDelay
	double ___InterpolationDelay_5;

public:
	inline static int32_t get_offset_of_m_BufferedState_3() { return static_cast<int32_t>(offsetof(CubeInter_t948382087, ___m_BufferedState_3)); }
	inline StateU5BU5D_t596300884* get_m_BufferedState_3() const { return ___m_BufferedState_3; }
	inline StateU5BU5D_t596300884** get_address_of_m_BufferedState_3() { return &___m_BufferedState_3; }
	inline void set_m_BufferedState_3(StateU5BU5D_t596300884* value)
	{
		___m_BufferedState_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_BufferedState_3, value);
	}

	inline static int32_t get_offset_of_m_TimestampCount_4() { return static_cast<int32_t>(offsetof(CubeInter_t948382087, ___m_TimestampCount_4)); }
	inline int32_t get_m_TimestampCount_4() const { return ___m_TimestampCount_4; }
	inline int32_t* get_address_of_m_TimestampCount_4() { return &___m_TimestampCount_4; }
	inline void set_m_TimestampCount_4(int32_t value)
	{
		___m_TimestampCount_4 = value;
	}

	inline static int32_t get_offset_of_InterpolationDelay_5() { return static_cast<int32_t>(offsetof(CubeInter_t948382087, ___InterpolationDelay_5)); }
	inline double get_InterpolationDelay_5() const { return ___InterpolationDelay_5; }
	inline double* get_address_of_InterpolationDelay_5() { return &___InterpolationDelay_5; }
	inline void set_InterpolationDelay_5(double value)
	{
		___InterpolationDelay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
