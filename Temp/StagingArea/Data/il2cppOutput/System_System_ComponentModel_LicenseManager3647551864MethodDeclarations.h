#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.LicenseManager
struct LicenseManager_t3647551864;
// System.ComponentModel.LicenseContext
struct LicenseContext_t3763822458;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.ComponentModel.License
struct License_t4073533863;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_LicenseContext3763822458.h"
#include "System_System_ComponentModel_LicenseUsageMode2972933167.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_ComponentModel_License4073533863.h"

// System.Void System.ComponentModel.LicenseManager::.ctor()
extern "C"  void LicenseManager__ctor_m1423635501 (LicenseManager_t3647551864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::.cctor()
extern "C"  void LicenseManager__cctor_m700931360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::get_CurrentContext()
extern "C"  LicenseContext_t3763822458 * LicenseManager_get_CurrentContext_m1305345380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::set_CurrentContext(System.ComponentModel.LicenseContext)
extern "C"  void LicenseManager_set_CurrentContext_m2303806585 (Il2CppObject * __this /* static, unused */, LicenseContext_t3763822458 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseManager::get_UsageMode()
extern "C"  int32_t LicenseManager_get_UsageMode_m2795410253 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext)
extern "C"  Il2CppObject * LicenseManager_CreateWithContext_m1899396255 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, LicenseContext_t3763822458 * ___creationContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext,System.Object[])
extern "C"  Il2CppObject * LicenseManager_CreateWithContext_m797897995 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, LicenseContext_t3763822458 * ___creationContext1, ObjectU5BU5D_t1108656482* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsLicensed(System.Type)
extern "C"  bool LicenseManager_IsLicensed_m2078916831 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type)
extern "C"  bool LicenseManager_IsValid_m1966190898 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type,System.Object,System.ComponentModel.License&)
extern "C"  bool LicenseManager_IsValid_m808805214 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, License_t4073533863 ** ___license2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::LockContext(System.Object)
extern "C"  void LicenseManager_LockContext_m1324027685 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___contextUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::UnlockContext(System.Object)
extern "C"  void LicenseManager_UnlockContext_m2005768958 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___contextUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::Validate(System.Type)
extern "C"  void LicenseManager_Validate_m7234892 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.License System.ComponentModel.LicenseManager::Validate(System.Type,System.Object)
extern "C"  License_t4073533863 * LicenseManager_Validate_m2735477989 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::privateGetLicense(System.Type,System.Object,System.Boolean,System.ComponentModel.License&)
extern "C"  bool LicenseManager_privateGetLicense_m13864101 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, bool ___allowExceptions2, License_t4073533863 ** ___license3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
