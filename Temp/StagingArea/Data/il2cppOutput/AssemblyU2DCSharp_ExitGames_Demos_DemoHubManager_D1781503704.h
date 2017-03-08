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

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t1781503704 
{
public:
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Title
	String_t* ___Title_0;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Description
	String_t* ___Description_1;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Scene
	String_t* ___Scene_2;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::WebLink
	String_t* ___WebLink_3;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t1781503704, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier(&___Title_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t1781503704, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t1781503704, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier(&___Scene_2, value);
	}

	inline static int32_t get_offset_of_WebLink_3() { return static_cast<int32_t>(offsetof(DemoData_t1781503704, ___WebLink_3)); }
	inline String_t* get_WebLink_3() const { return ___WebLink_3; }
	inline String_t** get_address_of_WebLink_3() { return &___WebLink_3; }
	inline void set_WebLink_3(String_t* value)
	{
		___WebLink_3 = value;
		Il2CppCodeGenWriteBarrier(&___WebLink_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t1781503704_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___WebLink_3;
};
// Native definition for marshalling of: ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t1781503704_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___WebLink_3;
};
