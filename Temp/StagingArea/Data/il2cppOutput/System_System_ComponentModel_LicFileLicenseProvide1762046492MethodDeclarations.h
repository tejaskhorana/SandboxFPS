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

// System.ComponentModel.LicFileLicenseProvider
struct LicFileLicenseProvider_t1762046492;
// System.ComponentModel.License
struct License_t4073533863;
// System.ComponentModel.LicenseContext
struct LicenseContext_t3763822458;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_LicenseContext3763822458.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.LicFileLicenseProvider::.ctor()
extern "C"  void LicFileLicenseProvider__ctor_m265964297 (LicFileLicenseProvider_t1762046492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.License System.ComponentModel.LicFileLicenseProvider::GetLicense(System.ComponentModel.LicenseContext,System.Type,System.Object,System.Boolean)
extern "C"  License_t4073533863 * LicFileLicenseProvider_GetLicense_m2334806802 (LicFileLicenseProvider_t1762046492 * __this, LicenseContext_t3763822458 * ___context0, Type_t * ___type1, Il2CppObject * ___instance2, bool ___allowExceptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.LicFileLicenseProvider::GetKey(System.Type)
extern "C"  String_t* LicFileLicenseProvider_GetKey_m238150514 (LicFileLicenseProvider_t1762046492 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicFileLicenseProvider::IsKeyValid(System.String,System.Type)
extern "C"  bool LicFileLicenseProvider_IsKeyValid_m494339357 (LicFileLicenseProvider_t1762046492 * __this, String_t* ___key0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
