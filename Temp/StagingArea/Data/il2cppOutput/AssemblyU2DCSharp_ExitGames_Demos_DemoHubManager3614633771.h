#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Demos.DemoHubManager/DemoData>
struct Dictionary_2_t2601922074;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager
struct  DemoHubManager_t3614633771  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text ExitGames.Demos.DemoHubManager::TitleText
	Text_t9039225 * ___TitleText_2;
	// UnityEngine.UI.Text ExitGames.Demos.DemoHubManager::DescriptionText
	Text_t9039225 * ___DescriptionText_3;
	// UnityEngine.GameObject ExitGames.Demos.DemoHubManager::OpenSceneButton
	GameObject_t3674682005 * ___OpenSceneButton_4;
	// UnityEngine.GameObject ExitGames.Demos.DemoHubManager::OpenWebLinkButton
	GameObject_t3674682005 * ___OpenWebLinkButton_5;
	// System.String ExitGames.Demos.DemoHubManager::MainDemoWebLink
	String_t* ___MainDemoWebLink_6;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Demos.DemoHubManager/DemoData> ExitGames.Demos.DemoHubManager::_data
	Dictionary_2_t2601922074 * ____data_7;
	// System.String ExitGames.Demos.DemoHubManager::currentSelection
	String_t* ___currentSelection_8;

public:
	inline static int32_t get_offset_of_TitleText_2() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___TitleText_2)); }
	inline Text_t9039225 * get_TitleText_2() const { return ___TitleText_2; }
	inline Text_t9039225 ** get_address_of_TitleText_2() { return &___TitleText_2; }
	inline void set_TitleText_2(Text_t9039225 * value)
	{
		___TitleText_2 = value;
		Il2CppCodeGenWriteBarrier(&___TitleText_2, value);
	}

	inline static int32_t get_offset_of_DescriptionText_3() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___DescriptionText_3)); }
	inline Text_t9039225 * get_DescriptionText_3() const { return ___DescriptionText_3; }
	inline Text_t9039225 ** get_address_of_DescriptionText_3() { return &___DescriptionText_3; }
	inline void set_DescriptionText_3(Text_t9039225 * value)
	{
		___DescriptionText_3 = value;
		Il2CppCodeGenWriteBarrier(&___DescriptionText_3, value);
	}

	inline static int32_t get_offset_of_OpenSceneButton_4() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___OpenSceneButton_4)); }
	inline GameObject_t3674682005 * get_OpenSceneButton_4() const { return ___OpenSceneButton_4; }
	inline GameObject_t3674682005 ** get_address_of_OpenSceneButton_4() { return &___OpenSceneButton_4; }
	inline void set_OpenSceneButton_4(GameObject_t3674682005 * value)
	{
		___OpenSceneButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___OpenSceneButton_4, value);
	}

	inline static int32_t get_offset_of_OpenWebLinkButton_5() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___OpenWebLinkButton_5)); }
	inline GameObject_t3674682005 * get_OpenWebLinkButton_5() const { return ___OpenWebLinkButton_5; }
	inline GameObject_t3674682005 ** get_address_of_OpenWebLinkButton_5() { return &___OpenWebLinkButton_5; }
	inline void set_OpenWebLinkButton_5(GameObject_t3674682005 * value)
	{
		___OpenWebLinkButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___OpenWebLinkButton_5, value);
	}

	inline static int32_t get_offset_of_MainDemoWebLink_6() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___MainDemoWebLink_6)); }
	inline String_t* get_MainDemoWebLink_6() const { return ___MainDemoWebLink_6; }
	inline String_t** get_address_of_MainDemoWebLink_6() { return &___MainDemoWebLink_6; }
	inline void set_MainDemoWebLink_6(String_t* value)
	{
		___MainDemoWebLink_6 = value;
		Il2CppCodeGenWriteBarrier(&___MainDemoWebLink_6, value);
	}

	inline static int32_t get_offset_of__data_7() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ____data_7)); }
	inline Dictionary_2_t2601922074 * get__data_7() const { return ____data_7; }
	inline Dictionary_2_t2601922074 ** get_address_of__data_7() { return &____data_7; }
	inline void set__data_7(Dictionary_2_t2601922074 * value)
	{
		____data_7 = value;
		Il2CppCodeGenWriteBarrier(&____data_7, value);
	}

	inline static int32_t get_offset_of_currentSelection_8() { return static_cast<int32_t>(offsetof(DemoHubManager_t3614633771, ___currentSelection_8)); }
	inline String_t* get_currentSelection_8() const { return ___currentSelection_8; }
	inline String_t** get_address_of_currentSelection_8() { return &___currentSelection_8; }
	inline void set_currentSelection_8(String_t* value)
	{
		___currentSelection_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentSelection_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
