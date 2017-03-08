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
// ChatGui
struct ChatGui_t2403745443;
// UnityEngine.UI.InputField
struct InputField_t609046876;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NamePickGui
struct  NamePickGui_t1262517295  : public MonoBehaviour_t667441552
{
public:
	// ChatGui NamePickGui::chatNewComponent
	ChatGui_t2403745443 * ___chatNewComponent_3;
	// UnityEngine.UI.InputField NamePickGui::idInput
	InputField_t609046876 * ___idInput_4;

public:
	inline static int32_t get_offset_of_chatNewComponent_3() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___chatNewComponent_3)); }
	inline ChatGui_t2403745443 * get_chatNewComponent_3() const { return ___chatNewComponent_3; }
	inline ChatGui_t2403745443 ** get_address_of_chatNewComponent_3() { return &___chatNewComponent_3; }
	inline void set_chatNewComponent_3(ChatGui_t2403745443 * value)
	{
		___chatNewComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___chatNewComponent_3, value);
	}

	inline static int32_t get_offset_of_idInput_4() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___idInput_4)); }
	inline InputField_t609046876 * get_idInput_4() const { return ___idInput_4; }
	inline InputField_t609046876 ** get_address_of_idInput_4() { return &___idInput_4; }
	inline void set_idInput_4(InputField_t609046876 * value)
	{
		___idInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___idInput_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
