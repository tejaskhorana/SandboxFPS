#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// ToHubButton
struct ToHubButton_t2876583980;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToHubButton
struct  ToHubButton_t2876583980  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D ToHubButton::ButtonTexture
	Texture2D_t3884108195 * ___ButtonTexture_2;
	// UnityEngine.Rect ToHubButton::ButtonRect
	Rect_t4241904616  ___ButtonRect_3;

public:
	inline static int32_t get_offset_of_ButtonTexture_2() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980, ___ButtonTexture_2)); }
	inline Texture2D_t3884108195 * get_ButtonTexture_2() const { return ___ButtonTexture_2; }
	inline Texture2D_t3884108195 ** get_address_of_ButtonTexture_2() { return &___ButtonTexture_2; }
	inline void set_ButtonTexture_2(Texture2D_t3884108195 * value)
	{
		___ButtonTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonTexture_2, value);
	}

	inline static int32_t get_offset_of_ButtonRect_3() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980, ___ButtonRect_3)); }
	inline Rect_t4241904616  get_ButtonRect_3() const { return ___ButtonRect_3; }
	inline Rect_t4241904616 * get_address_of_ButtonRect_3() { return &___ButtonRect_3; }
	inline void set_ButtonRect_3(Rect_t4241904616  value)
	{
		___ButtonRect_3 = value;
	}
};

struct ToHubButton_t2876583980_StaticFields
{
public:
	// ToHubButton ToHubButton::instance
	ToHubButton_t2876583980 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980_StaticFields, ___instance_4)); }
	inline ToHubButton_t2876583980 * get_instance_4() const { return ___instance_4; }
	inline ToHubButton_t2876583980 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ToHubButton_t2876583980 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
