#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CullArea
struct CullArea_t461661503;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// PhotonView
struct PhotonView_t1498838369;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkCullingHandler
struct  NetworkCullingHandler_t868827560  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 NetworkCullingHandler::orderIndex
	int32_t ___orderIndex_2;
	// CullArea NetworkCullingHandler::cullArea
	CullArea_t461661503 * ___cullArea_3;
	// System.Collections.Generic.List`1<System.Int32> NetworkCullingHandler::previousActiveCells
	List_1_t2522024052 * ___previousActiveCells_4;
	// System.Collections.Generic.List`1<System.Int32> NetworkCullingHandler::activeCells
	List_1_t2522024052 * ___activeCells_5;
	// PhotonView NetworkCullingHandler::pView
	PhotonView_t1498838369 * ___pView_6;
	// UnityEngine.Vector3 NetworkCullingHandler::lastPosition
	Vector3_t4282066566  ___lastPosition_7;
	// UnityEngine.Vector3 NetworkCullingHandler::currentPosition
	Vector3_t4282066566  ___currentPosition_8;

public:
	inline static int32_t get_offset_of_orderIndex_2() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___orderIndex_2)); }
	inline int32_t get_orderIndex_2() const { return ___orderIndex_2; }
	inline int32_t* get_address_of_orderIndex_2() { return &___orderIndex_2; }
	inline void set_orderIndex_2(int32_t value)
	{
		___orderIndex_2 = value;
	}

	inline static int32_t get_offset_of_cullArea_3() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___cullArea_3)); }
	inline CullArea_t461661503 * get_cullArea_3() const { return ___cullArea_3; }
	inline CullArea_t461661503 ** get_address_of_cullArea_3() { return &___cullArea_3; }
	inline void set_cullArea_3(CullArea_t461661503 * value)
	{
		___cullArea_3 = value;
		Il2CppCodeGenWriteBarrier(&___cullArea_3, value);
	}

	inline static int32_t get_offset_of_previousActiveCells_4() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___previousActiveCells_4)); }
	inline List_1_t2522024052 * get_previousActiveCells_4() const { return ___previousActiveCells_4; }
	inline List_1_t2522024052 ** get_address_of_previousActiveCells_4() { return &___previousActiveCells_4; }
	inline void set_previousActiveCells_4(List_1_t2522024052 * value)
	{
		___previousActiveCells_4 = value;
		Il2CppCodeGenWriteBarrier(&___previousActiveCells_4, value);
	}

	inline static int32_t get_offset_of_activeCells_5() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___activeCells_5)); }
	inline List_1_t2522024052 * get_activeCells_5() const { return ___activeCells_5; }
	inline List_1_t2522024052 ** get_address_of_activeCells_5() { return &___activeCells_5; }
	inline void set_activeCells_5(List_1_t2522024052 * value)
	{
		___activeCells_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeCells_5, value);
	}

	inline static int32_t get_offset_of_pView_6() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___pView_6)); }
	inline PhotonView_t1498838369 * get_pView_6() const { return ___pView_6; }
	inline PhotonView_t1498838369 ** get_address_of_pView_6() { return &___pView_6; }
	inline void set_pView_6(PhotonView_t1498838369 * value)
	{
		___pView_6 = value;
		Il2CppCodeGenWriteBarrier(&___pView_6, value);
	}

	inline static int32_t get_offset_of_lastPosition_7() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___lastPosition_7)); }
	inline Vector3_t4282066566  get_lastPosition_7() const { return ___lastPosition_7; }
	inline Vector3_t4282066566 * get_address_of_lastPosition_7() { return &___lastPosition_7; }
	inline void set_lastPosition_7(Vector3_t4282066566  value)
	{
		___lastPosition_7 = value;
	}

	inline static int32_t get_offset_of_currentPosition_8() { return static_cast<int32_t>(offsetof(NetworkCullingHandler_t868827560, ___currentPosition_8)); }
	inline Vector3_t4282066566  get_currentPosition_8() const { return ___currentPosition_8; }
	inline Vector3_t4282066566 * get_address_of_currentPosition_8() { return &___currentPosition_8; }
	inline void set_currentPosition_8(Vector3_t4282066566  value)
	{
		___currentPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
