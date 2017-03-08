#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPingManager
struct  PhotonPingManager_t2948103071  : public Il2CppObject
{
public:
	// System.Boolean PhotonPingManager::UseNative
	bool ___UseNative_0;
	// System.Int32 PhotonPingManager::PingsRunning
	int32_t ___PingsRunning_4;

public:
	inline static int32_t get_offset_of_UseNative_0() { return static_cast<int32_t>(offsetof(PhotonPingManager_t2948103071, ___UseNative_0)); }
	inline bool get_UseNative_0() const { return ___UseNative_0; }
	inline bool* get_address_of_UseNative_0() { return &___UseNative_0; }
	inline void set_UseNative_0(bool value)
	{
		___UseNative_0 = value;
	}

	inline static int32_t get_offset_of_PingsRunning_4() { return static_cast<int32_t>(offsetof(PhotonPingManager_t2948103071, ___PingsRunning_4)); }
	inline int32_t get_PingsRunning_4() const { return ___PingsRunning_4; }
	inline int32_t* get_address_of_PingsRunning_4() { return &___PingsRunning_4; }
	inline void set_PingsRunning_4(int32_t value)
	{
		___PingsRunning_4 = value;
	}
};

struct PhotonPingManager_t2948103071_StaticFields
{
public:
	// System.Int32 PhotonPingManager::Attempts
	int32_t ___Attempts_1;
	// System.Boolean PhotonPingManager::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_2;
	// System.Int32 PhotonPingManager::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_3;

public:
	inline static int32_t get_offset_of_Attempts_1() { return static_cast<int32_t>(offsetof(PhotonPingManager_t2948103071_StaticFields, ___Attempts_1)); }
	inline int32_t get_Attempts_1() const { return ___Attempts_1; }
	inline int32_t* get_address_of_Attempts_1() { return &___Attempts_1; }
	inline void set_Attempts_1(int32_t value)
	{
		___Attempts_1 = value;
	}

	inline static int32_t get_offset_of_IgnoreInitialAttempt_2() { return static_cast<int32_t>(offsetof(PhotonPingManager_t2948103071_StaticFields, ___IgnoreInitialAttempt_2)); }
	inline bool get_IgnoreInitialAttempt_2() const { return ___IgnoreInitialAttempt_2; }
	inline bool* get_address_of_IgnoreInitialAttempt_2() { return &___IgnoreInitialAttempt_2; }
	inline void set_IgnoreInitialAttempt_2(bool value)
	{
		___IgnoreInitialAttempt_2 = value;
	}

	inline static int32_t get_offset_of_MaxMilliseconsPerPing_3() { return static_cast<int32_t>(offsetof(PhotonPingManager_t2948103071_StaticFields, ___MaxMilliseconsPerPing_3)); }
	inline int32_t get_MaxMilliseconsPerPing_3() const { return ___MaxMilliseconsPerPing_3; }
	inline int32_t* get_address_of_MaxMilliseconsPerPing_3() { return &___MaxMilliseconsPerPing_3; }
	inline void set_MaxMilliseconsPerPing_3(int32_t value)
	{
		___MaxMilliseconsPerPing_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
