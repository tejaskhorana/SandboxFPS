#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IPunTurnManagerCallbacks
struct IPunTurnManagerCallbacks_t1296962654;
// System.Collections.Generic.HashSet`1<PhotonPlayer>
struct HashSet_1_t554938885;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTurnManager
struct  PunTurnManager_t2757607879  : public PunBehaviour_t2436907354
{
public:
	// System.Single PunTurnManager::TurnDuration
	float ___TurnDuration_6;
	// IPunTurnManagerCallbacks PunTurnManager::TurnManagerListener
	Il2CppObject * ___TurnManagerListener_7;
	// System.Collections.Generic.HashSet`1<PhotonPlayer> PunTurnManager::finishedPlayers
	HashSet_1_t554938885 * ___finishedPlayers_8;
	// System.Boolean PunTurnManager::_isOverCallProcessed
	bool ____isOverCallProcessed_9;

public:
	inline static int32_t get_offset_of_TurnDuration_6() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___TurnDuration_6)); }
	inline float get_TurnDuration_6() const { return ___TurnDuration_6; }
	inline float* get_address_of_TurnDuration_6() { return &___TurnDuration_6; }
	inline void set_TurnDuration_6(float value)
	{
		___TurnDuration_6 = value;
	}

	inline static int32_t get_offset_of_TurnManagerListener_7() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___TurnManagerListener_7)); }
	inline Il2CppObject * get_TurnManagerListener_7() const { return ___TurnManagerListener_7; }
	inline Il2CppObject ** get_address_of_TurnManagerListener_7() { return &___TurnManagerListener_7; }
	inline void set_TurnManagerListener_7(Il2CppObject * value)
	{
		___TurnManagerListener_7 = value;
		Il2CppCodeGenWriteBarrier(&___TurnManagerListener_7, value);
	}

	inline static int32_t get_offset_of_finishedPlayers_8() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___finishedPlayers_8)); }
	inline HashSet_1_t554938885 * get_finishedPlayers_8() const { return ___finishedPlayers_8; }
	inline HashSet_1_t554938885 ** get_address_of_finishedPlayers_8() { return &___finishedPlayers_8; }
	inline void set_finishedPlayers_8(HashSet_1_t554938885 * value)
	{
		___finishedPlayers_8 = value;
		Il2CppCodeGenWriteBarrier(&___finishedPlayers_8, value);
	}

	inline static int32_t get_offset_of__isOverCallProcessed_9() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ____isOverCallProcessed_9)); }
	inline bool get__isOverCallProcessed_9() const { return ____isOverCallProcessed_9; }
	inline bool* get_address_of__isOverCallProcessed_9() { return &____isOverCallProcessed_9; }
	inline void set__isOverCallProcessed_9(bool value)
	{
		____isOverCallProcessed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
