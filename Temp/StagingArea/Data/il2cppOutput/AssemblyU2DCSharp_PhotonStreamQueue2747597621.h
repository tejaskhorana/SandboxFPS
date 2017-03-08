#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonStreamQueue
struct  PhotonStreamQueue_t2747597621  : public Il2CppObject
{
public:
	// System.Int32 PhotonStreamQueue::m_SampleRate
	int32_t ___m_SampleRate_0;
	// System.Int32 PhotonStreamQueue::m_SampleCount
	int32_t ___m_SampleCount_1;
	// System.Int32 PhotonStreamQueue::m_ObjectsPerSample
	int32_t ___m_ObjectsPerSample_2;
	// System.Single PhotonStreamQueue::m_LastSampleTime
	float ___m_LastSampleTime_3;
	// System.Int32 PhotonStreamQueue::m_LastFrameCount
	int32_t ___m_LastFrameCount_4;
	// System.Int32 PhotonStreamQueue::m_NextObjectIndex
	int32_t ___m_NextObjectIndex_5;
	// System.Collections.Generic.List`1<System.Object> PhotonStreamQueue::m_Objects
	List_1_t1244034627 * ___m_Objects_6;
	// System.Boolean PhotonStreamQueue::m_IsWriting
	bool ___m_IsWriting_7;

public:
	inline static int32_t get_offset_of_m_SampleRate_0() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_SampleRate_0)); }
	inline int32_t get_m_SampleRate_0() const { return ___m_SampleRate_0; }
	inline int32_t* get_address_of_m_SampleRate_0() { return &___m_SampleRate_0; }
	inline void set_m_SampleRate_0(int32_t value)
	{
		___m_SampleRate_0 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_1() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_SampleCount_1)); }
	inline int32_t get_m_SampleCount_1() const { return ___m_SampleCount_1; }
	inline int32_t* get_address_of_m_SampleCount_1() { return &___m_SampleCount_1; }
	inline void set_m_SampleCount_1(int32_t value)
	{
		___m_SampleCount_1 = value;
	}

	inline static int32_t get_offset_of_m_ObjectsPerSample_2() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_ObjectsPerSample_2)); }
	inline int32_t get_m_ObjectsPerSample_2() const { return ___m_ObjectsPerSample_2; }
	inline int32_t* get_address_of_m_ObjectsPerSample_2() { return &___m_ObjectsPerSample_2; }
	inline void set_m_ObjectsPerSample_2(int32_t value)
	{
		___m_ObjectsPerSample_2 = value;
	}

	inline static int32_t get_offset_of_m_LastSampleTime_3() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_LastSampleTime_3)); }
	inline float get_m_LastSampleTime_3() const { return ___m_LastSampleTime_3; }
	inline float* get_address_of_m_LastSampleTime_3() { return &___m_LastSampleTime_3; }
	inline void set_m_LastSampleTime_3(float value)
	{
		___m_LastSampleTime_3 = value;
	}

	inline static int32_t get_offset_of_m_LastFrameCount_4() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_LastFrameCount_4)); }
	inline int32_t get_m_LastFrameCount_4() const { return ___m_LastFrameCount_4; }
	inline int32_t* get_address_of_m_LastFrameCount_4() { return &___m_LastFrameCount_4; }
	inline void set_m_LastFrameCount_4(int32_t value)
	{
		___m_LastFrameCount_4 = value;
	}

	inline static int32_t get_offset_of_m_NextObjectIndex_5() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_NextObjectIndex_5)); }
	inline int32_t get_m_NextObjectIndex_5() const { return ___m_NextObjectIndex_5; }
	inline int32_t* get_address_of_m_NextObjectIndex_5() { return &___m_NextObjectIndex_5; }
	inline void set_m_NextObjectIndex_5(int32_t value)
	{
		___m_NextObjectIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_Objects_6() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_Objects_6)); }
	inline List_1_t1244034627 * get_m_Objects_6() const { return ___m_Objects_6; }
	inline List_1_t1244034627 ** get_address_of_m_Objects_6() { return &___m_Objects_6; }
	inline void set_m_Objects_6(List_1_t1244034627 * value)
	{
		___m_Objects_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Objects_6, value);
	}

	inline static int32_t get_offset_of_m_IsWriting_7() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t2747597621, ___m_IsWriting_7)); }
	inline bool get_m_IsWriting_7() const { return ___m_IsWriting_7; }
	inline bool* get_address_of_m_IsWriting_7() { return &___m_IsWriting_7; }
	inline void set_m_IsWriting_7(bool value)
	{
		___m_IsWriting_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
