#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupDemoGui
struct  PickupDemoGui_t1433495068  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean PickupDemoGui::ShowScores
	bool ___ShowScores_2;
	// System.Boolean PickupDemoGui::ShowDropButton
	bool ___ShowDropButton_3;
	// System.Boolean PickupDemoGui::ShowTeams
	bool ___ShowTeams_4;
	// System.Single PickupDemoGui::DropOffset
	float ___DropOffset_5;

public:
	inline static int32_t get_offset_of_ShowScores_2() { return static_cast<int32_t>(offsetof(PickupDemoGui_t1433495068, ___ShowScores_2)); }
	inline bool get_ShowScores_2() const { return ___ShowScores_2; }
	inline bool* get_address_of_ShowScores_2() { return &___ShowScores_2; }
	inline void set_ShowScores_2(bool value)
	{
		___ShowScores_2 = value;
	}

	inline static int32_t get_offset_of_ShowDropButton_3() { return static_cast<int32_t>(offsetof(PickupDemoGui_t1433495068, ___ShowDropButton_3)); }
	inline bool get_ShowDropButton_3() const { return ___ShowDropButton_3; }
	inline bool* get_address_of_ShowDropButton_3() { return &___ShowDropButton_3; }
	inline void set_ShowDropButton_3(bool value)
	{
		___ShowDropButton_3 = value;
	}

	inline static int32_t get_offset_of_ShowTeams_4() { return static_cast<int32_t>(offsetof(PickupDemoGui_t1433495068, ___ShowTeams_4)); }
	inline bool get_ShowTeams_4() const { return ___ShowTeams_4; }
	inline bool* get_address_of_ShowTeams_4() { return &___ShowTeams_4; }
	inline void set_ShowTeams_4(bool value)
	{
		___ShowTeams_4 = value;
	}

	inline static int32_t get_offset_of_DropOffset_5() { return static_cast<int32_t>(offsetof(PickupDemoGui_t1433495068, ___DropOffset_5)); }
	inline float get_DropOffset_5() const { return ___DropOffset_5; }
	inline float* get_address_of_DropOffset_5() { return &___DropOffset_5; }
	inline void set_DropOffset_5(float value)
	{
		___DropOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
