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

// System.ComponentModel.SByteConverter
struct SByteConverter_t3013403921;
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

// System.Void System.ComponentModel.SByteConverter::.ctor()
extern "C"  void SByteConverter__ctor_m1383875764 (SByteConverter_t3013403921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C"  bool SByteConverter_get_SupportHex_m2963959675 (SByteConverter_t3013403921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SByteConverter_ConvertToString_m349016216 (SByteConverter_t3013403921 * __this, Il2CppObject * ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * SByteConverter_ConvertFromString_m119370953 (SByteConverter_t3013403921 * __this, String_t* ___value0, NumberFormatInfo_t1637637232 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * SByteConverter_ConvertFromString_m4266318144 (SByteConverter_t3013403921 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
