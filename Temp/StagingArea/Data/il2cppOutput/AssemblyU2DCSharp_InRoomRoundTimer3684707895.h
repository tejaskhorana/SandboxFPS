#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InRoomRoundTimer
struct  InRoomRoundTimer_t3684707895  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_3;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_4;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t4241904616  ___TextPos_5;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_6;

public:
	inline static int32_t get_offset_of_SecondsPerTurn_3() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___SecondsPerTurn_3)); }
	inline int32_t get_SecondsPerTurn_3() const { return ___SecondsPerTurn_3; }
	inline int32_t* get_address_of_SecondsPerTurn_3() { return &___SecondsPerTurn_3; }
	inline void set_SecondsPerTurn_3(int32_t value)
	{
		___SecondsPerTurn_3 = value;
	}

	inline static int32_t get_offset_of_StartTime_4() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___StartTime_4)); }
	inline double get_StartTime_4() const { return ___StartTime_4; }
	inline double* get_address_of_StartTime_4() { return &___StartTime_4; }
	inline void set_StartTime_4(double value)
	{
		___StartTime_4 = value;
	}

	inline static int32_t get_offset_of_TextPos_5() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___TextPos_5)); }
	inline Rect_t4241904616  get_TextPos_5() const { return ___TextPos_5; }
	inline Rect_t4241904616 * get_address_of_TextPos_5() { return &___TextPos_5; }
	inline void set_TextPos_5(Rect_t4241904616  value)
	{
		___TextPos_5 = value;
	}

	inline static int32_t get_offset_of_startRoundWhenTimeIsSynced_6() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___startRoundWhenTimeIsSynced_6)); }
	inline bool get_startRoundWhenTimeIsSynced_6() const { return ___startRoundWhenTimeIsSynced_6; }
	inline bool* get_address_of_startRoundWhenTimeIsSynced_6() { return &___startRoundWhenTimeIsSynced_6; }
	inline void set_startRoundWhenTimeIsSynced_6(bool value)
	{
		___startRoundWhenTimeIsSynced_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
