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

// System.ComponentModel.SingleConverter
struct SingleConverter_t3295811230;
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

// System.Void System.ComponentModel.SingleConverter::.ctor()
extern "C"  void SingleConverter__ctor_m3296319925 (SingleConverter_t3295811230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C"  bool SingleConverter_get_SupportHex_m1611380270 (SingleConverter_t3295811230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SingleConverter_ConvertToString_m3726731857 (SingleConverter_t3295811230 * __this, Il2CppObject * ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * SingleConverter_ConvertFromString_m2908403550 (SingleConverter_t3295811230 * __this, String_t* ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
