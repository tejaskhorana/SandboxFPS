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

// System.ComponentModel.Int16Converter
struct Int16Converter_t3886635768;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1637637232;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_NumberFormatInfo1637637232.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.Int16Converter::.ctor()
extern "C"  void Int16Converter__ctor_m3941106349 (Int16Converter_t3886635768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int16Converter::get_SupportHex()
extern "C"  bool Int16Converter_get_SupportHex_m3978418594 (Int16Converter_t3886635768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int16Converter_ConvertToString_m2771715391 (Int16Converter_t3886635768 * __this, Il2CppObject * ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * Int16Converter_ConvertFromString_m461003696 (Int16Converter_t3886635768 * __this, String_t* ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * Int16Converter_ConvertFromString_m2727466105 (Int16Converter_t3886635768 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
