#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragToMove
struct  DragToMove_t612845408  : public MonoBehaviour_t667441552
{
public:
	// System.Single DragToMove::speed
	float ___speed_2;
	// UnityEngine.Transform[] DragToMove::cubes
	TransformU5BU5D_t3792884695* ___cubes_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DragToMove::PositionsQueue
	List_1_t1355284822 * ___PositionsQueue_4;
	// UnityEngine.Vector3[] DragToMove::cubeStartPositions
	Vector3U5BU5D_t215400611* ___cubeStartPositions_5;
	// System.Int32 DragToMove::nextPosIndex
	int32_t ___nextPosIndex_6;
	// System.Single DragToMove::lerpTime
	float ___lerpTime_7;
	// System.Boolean DragToMove::recording
	bool ___recording_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cubes_3() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___cubes_3)); }
	inline TransformU5BU5D_t3792884695* get_cubes_3() const { return ___cubes_3; }
	inline TransformU5BU5D_t3792884695** get_address_of_cubes_3() { return &___cubes_3; }
	inline void set_cubes_3(TransformU5BU5D_t3792884695* value)
	{
		___cubes_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubes_3, value);
	}

	inline static int32_t get_offset_of_PositionsQueue_4() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___PositionsQueue_4)); }
	inline List_1_t1355284822 * get_PositionsQueue_4() const { return ___PositionsQueue_4; }
	inline List_1_t1355284822 ** get_address_of_PositionsQueue_4() { return &___PositionsQueue_4; }
	inline void set_PositionsQueue_4(List_1_t1355284822 * value)
	{
		___PositionsQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___PositionsQueue_4, value);
	}

	inline static int32_t get_offset_of_cubeStartPositions_5() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___cubeStartPositions_5)); }
	inline Vector3U5BU5D_t215400611* get_cubeStartPositions_5() const { return ___cubeStartPositions_5; }
	inline Vector3U5BU5D_t215400611** get_address_of_cubeStartPositions_5() { return &___cubeStartPositions_5; }
	inline void set_cubeStartPositions_5(Vector3U5BU5D_t215400611* value)
	{
		___cubeStartPositions_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubeStartPositions_5, value);
	}

	inline static int32_t get_offset_of_nextPosIndex_6() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___nextPosIndex_6)); }
	inline int32_t get_nextPosIndex_6() const { return ___nextPosIndex_6; }
	inline int32_t* get_address_of_nextPosIndex_6() { return &___nextPosIndex_6; }
	inline void set_nextPosIndex_6(int32_t value)
	{
		___nextPosIndex_6 = value;
	}

	inline static int32_t get_offset_of_lerpTime_7() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___lerpTime_7)); }
	inline float get_lerpTime_7() const { return ___lerpTime_7; }
	inline float* get_address_of_lerpTime_7() { return &___lerpTime_7; }
	inline void set_lerpTime_7(float value)
	{
		___lerpTime_7 = value;
	}

	inline static int32_t get_offset_of_recording_8() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___recording_8)); }
	inline bool get_recording_8() const { return ___recording_8; }
	inline bool* get_address_of_recording_8() { return &___recording_8; }
	inline void set_recording_8(bool value)
	{
		___recording_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
