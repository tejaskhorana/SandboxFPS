#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.LicenseContext
struct LicenseContext_t3763822458;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t3647551864  : public Il2CppObject
{
public:

public:
};

struct LicenseManager_t3647551864_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t3763822458 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	Il2CppObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	Il2CppObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t3647551864_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t3763822458 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t3763822458 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t3763822458 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier(&___mycontext_0, value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t3647551864_StaticFields, ___contextLockUser_1)); }
	inline Il2CppObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline Il2CppObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(Il2CppObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier(&___contextLockUser_1, value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t3647551864_StaticFields, ___lockObject_2)); }
	inline Il2CppObject * get_lockObject_2() const { return ___lockObject_2; }
	inline Il2CppObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(Il2CppObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
