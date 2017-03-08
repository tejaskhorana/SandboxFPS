#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.UtilityScripts.ButtonInsideScrollList
struct  ButtonInsideScrollList_t1263387613  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.ScrollRect ExitGames.UtilityScripts.ButtonInsideScrollList::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_2;

public:
	inline static int32_t get_offset_of_scrollRect_2() { return static_cast<int32_t>(offsetof(ButtonInsideScrollList_t1263387613, ___scrollRect_2)); }
	inline ScrollRect_t3606982749 * get_scrollRect_2() const { return ___scrollRect_2; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_2() { return &___scrollRect_2; }
	inline void set_scrollRect_2(ScrollRect_t3606982749 * value)
	{
		___scrollRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
