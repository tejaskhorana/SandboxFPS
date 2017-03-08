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

// System.ComponentModel.DecimalConverter
struct DecimalConverter_t3800356315;
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
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1637637232;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_NumberFormatInfo1637637232.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.DecimalConverter::.ctor()
extern "C"  void DecimalConverter__ctor_m2525009130 (DecimalConverter_t3800356315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C"  bool DecimalConverter_get_SupportHex_m1605848709 (DecimalConverter_t3800356315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool DecimalConverter_CanConvertTo_m1530176801 (DecimalConverter_t3800356315 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * DecimalConverter_ConvertTo_m3120756854 (DecimalConverter_t3800356315 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* DecimalConverter_ConvertToString_m3065163618 (DecimalConverter_t3800356315 * __this, Il2CppObject * ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * DecimalConverter_ConvertFromString_m324299923 (DecimalConverter_t3800356315 * __this, String_t* ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
