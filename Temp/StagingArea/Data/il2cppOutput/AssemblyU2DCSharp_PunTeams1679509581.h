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
// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct Dictionary_2_t983520717;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams
struct  PunTeams_t1679509581  : public MonoBehaviour_t667441552
{
public:

public:
};

struct PunTeams_t1679509581_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>> PunTeams::PlayersPerTeam
	Dictionary_2_t983520717 * ___PlayersPerTeam_3;

public:
	inline static int32_t get_offset_of_PlayersPerTeam_3() { return static_cast<int32_t>(offsetof(PunTeams_t1679509581_StaticFields, ___PlayersPerTeam_3)); }
	inline Dictionary_2_t983520717 * get_PlayersPerTeam_3() const { return ___PlayersPerTeam_3; }
	inline Dictionary_2_t983520717 ** get_address_of_PlayersPerTeam_3() { return &___PlayersPerTeam_3; }
	inline void set_PlayersPerTeam_3(Dictionary_2_t983520717 * value)
	{
		___PlayersPerTeam_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayersPerTeam_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
