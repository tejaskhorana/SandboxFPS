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

// System.ComponentModel.UInt16Converter
struct UInt16Converter_t1984177639;
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

// System.Void System.ComponentModel.UInt16Converter::.ctor()
extern "C"  void UInt16Converter__ctor_m4118408332 (UInt16Converter_t1984177639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C"  bool UInt16Converter_get_SupportHex_m2729305399 (UInt16Converter_t1984177639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* UInt16Converter_ConvertToString_m829052634 (UInt16Converter_t1984177639 * __this, Il2CppObject * ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * UInt16Converter_ConvertFromString_m1377478055 (UInt16Converter_t1984177639 * __this, String_t* ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * UInt16Converter_ConvertFromString_m84581026 (UInt16Converter_t1984177639 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
