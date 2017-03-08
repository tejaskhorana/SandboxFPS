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

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t3737780012;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern "C"  void BaseNumberConverter__ctor_m3852965223 (BaseNumberConverter_t3737780012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool BaseNumberConverter_CanConvertFrom_m3232966471 (BaseNumberConverter_t3737780012 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool BaseNumberConverter_CanConvertTo_m1379140888 (BaseNumberConverter_t3737780012 * __this, Il2CppObject * ___context0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * BaseNumberConverter_ConvertFrom_m2037197133 (BaseNumberConverter_t3737780012 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * BaseNumberConverter_ConvertTo_m3152374351 (BaseNumberConverter_t3737780012 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * BaseNumberConverter_ConvertFromString_m854099133 (BaseNumberConverter_t3737780012 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
