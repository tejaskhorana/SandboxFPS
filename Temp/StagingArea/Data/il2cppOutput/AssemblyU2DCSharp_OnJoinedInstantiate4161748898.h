#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnJoinedInstantiate
struct  OnJoinedInstantiate_t4161748898  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform OnJoinedInstantiate::SpawnPosition
	Transform_t1659122786 * ___SpawnPosition_2;
	// System.Single OnJoinedInstantiate::PositionOffset
	float ___PositionOffset_3;
	// UnityEngine.GameObject[] OnJoinedInstantiate::PrefabsToInstantiate
	GameObjectU5BU5D_t2662109048* ___PrefabsToInstantiate_4;

public:
	inline static int32_t get_offset_of_SpawnPosition_2() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___SpawnPosition_2)); }
	inline Transform_t1659122786 * get_SpawnPosition_2() const { return ___SpawnPosition_2; }
	inline Transform_t1659122786 ** get_address_of_SpawnPosition_2() { return &___SpawnPosition_2; }
	inline void set_SpawnPosition_2(Transform_t1659122786 * value)
	{
		___SpawnPosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPosition_2, value);
	}

	inline static int32_t get_offset_of_PositionOffset_3() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___PositionOffset_3)); }
	inline float get_PositionOffset_3() const { return ___PositionOffset_3; }
	inline float* get_address_of_PositionOffset_3() { return &___PositionOffset_3; }
	inline void set_PositionOffset_3(float value)
	{
		___PositionOffset_3 = value;
	}

	inline static int32_t get_offset_of_PrefabsToInstantiate_4() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___PrefabsToInstantiate_4)); }
	inline GameObjectU5BU5D_t2662109048* get_PrefabsToInstantiate_4() const { return ___PrefabsToInstantiate_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_PrefabsToInstantiate_4() { return &___PrefabsToInstantiate_4; }
	inline void set_PrefabsToInstantiate_4(GameObjectU5BU5D_t2662109048* value)
	{
		___PrefabsToInstantiate_4 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabsToInstantiate_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
