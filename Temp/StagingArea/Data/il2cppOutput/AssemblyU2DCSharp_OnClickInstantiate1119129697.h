#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickInstantiate
struct  OnClickInstantiate_t1119129697  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject OnClickInstantiate::Prefab
	GameObject_t3674682005 * ___Prefab_2;
	// System.Int32 OnClickInstantiate::InstantiateType
	int32_t ___InstantiateType_3;
	// System.String[] OnClickInstantiate::InstantiateTypeNames
	StringU5BU5D_t4054002952* ___InstantiateTypeNames_4;
	// System.Boolean OnClickInstantiate::showGui
	bool ___showGui_5;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___Prefab_2)); }
	inline GameObject_t3674682005 * get_Prefab_2() const { return ___Prefab_2; }
	inline GameObject_t3674682005 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(GameObject_t3674682005 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_InstantiateType_3() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___InstantiateType_3)); }
	inline int32_t get_InstantiateType_3() const { return ___InstantiateType_3; }
	inline int32_t* get_address_of_InstantiateType_3() { return &___InstantiateType_3; }
	inline void set_InstantiateType_3(int32_t value)
	{
		___InstantiateType_3 = value;
	}

	inline static int32_t get_offset_of_InstantiateTypeNames_4() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___InstantiateTypeNames_4)); }
	inline StringU5BU5D_t4054002952* get_InstantiateTypeNames_4() const { return ___InstantiateTypeNames_4; }
	inline StringU5BU5D_t4054002952** get_address_of_InstantiateTypeNames_4() { return &___InstantiateTypeNames_4; }
	inline void set_InstantiateTypeNames_4(StringU5BU5D_t4054002952* value)
	{
		___InstantiateTypeNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___InstantiateTypeNames_4, value);
	}

	inline static int32_t get_offset_of_showGui_5() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___showGui_5)); }
	inline bool get_showGui_5() const { return ___showGui_5; }
	inline bool* get_address_of_showGui_5() { return &___showGui_5; }
	inline void set_showGui_5(bool value)
	{
		___showGui_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
