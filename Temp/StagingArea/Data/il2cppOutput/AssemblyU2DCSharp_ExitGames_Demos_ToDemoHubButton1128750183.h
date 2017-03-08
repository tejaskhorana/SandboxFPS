#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Demos.ToDemoHubButton
struct ToDemoHubButton_t1128750183;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.ToDemoHubButton
struct  ToDemoHubButton_t1128750183  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.CanvasGroup ExitGames.Demos.ToDemoHubButton::_canvasGroup
	CanvasGroup_t3702418109 * ____canvasGroup_3;

public:
	inline static int32_t get_offset_of__canvasGroup_3() { return static_cast<int32_t>(offsetof(ToDemoHubButton_t1128750183, ____canvasGroup_3)); }
	inline CanvasGroup_t3702418109 * get__canvasGroup_3() const { return ____canvasGroup_3; }
	inline CanvasGroup_t3702418109 ** get_address_of__canvasGroup_3() { return &____canvasGroup_3; }
	inline void set__canvasGroup_3(CanvasGroup_t3702418109 * value)
	{
		____canvasGroup_3 = value;
		Il2CppCodeGenWriteBarrier(&____canvasGroup_3, value);
	}
};

struct ToDemoHubButton_t1128750183_StaticFields
{
public:
	// ExitGames.Demos.ToDemoHubButton ExitGames.Demos.ToDemoHubButton::instance
	ToDemoHubButton_t1128750183 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ToDemoHubButton_t1128750183_StaticFields, ___instance_2)); }
	inline ToDemoHubButton_t1128750183 * get_instance_2() const { return ___instance_2; }
	inline ToDemoHubButton_t1128750183 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ToDemoHubButton_t1128750183 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
