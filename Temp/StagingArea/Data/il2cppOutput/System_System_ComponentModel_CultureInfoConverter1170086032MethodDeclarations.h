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

// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t1170086032;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1784247913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.CultureInfoConverter::.ctor()
extern "C"  void CultureInfoConverter__ctor_m1016543573 (CultureInfoConverter_t1170086032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool CultureInfoConverter_CanConvertFrom_m3341774597 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool CultureInfoConverter_CanConvertTo_m771433558 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * CultureInfoConverter_ConvertFrom_m622073513 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * CultureInfoConverter_ConvertTo_m3417855147 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t1784247913 * CultureInfoConverter_GetStandardValues_m3883455538 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool CultureInfoConverter_GetStandardValuesExclusive_m1373711534 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool CultureInfoConverter_GetStandardValuesSupported_m1368860350 (CultureInfoConverter_t1170086032 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
