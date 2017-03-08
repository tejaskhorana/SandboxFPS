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

// System.ComponentModel.TypeConverter
struct TypeConverter_t1753450284;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1784247913;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_ComponentModel_PropertyDescriptorCol3344846062.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C"  void TypeConverter__ctor_m822402727 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m3377278021 (TypeConverter_t1753450284 * __this, Type_t * ___sourceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m2831256967 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m3534396116 (TypeConverter_t1753450284 * __this, Type_t * ___destinationType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m2871458648 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m891071421 (TypeConverter_t1753450284 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m2983973965 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m1618880742 (TypeConverter_t1753450284 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m3367749752 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m309552474 (TypeConverter_t1753450284 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m1346648196 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m1826822058 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C"  Il2CppObject * TypeConverter_ConvertTo_m3286262527 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * TypeConverter_ConvertTo_m2251969871 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m1677412855 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m451735275 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m4085477005 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m2757510677 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m3798919965 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, CultureInfo_t1065375142 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C"  Exception_t3991598821 * TypeConverter_GetConvertFromException_m2409232696 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C"  Exception_t3991598821 * TypeConverter_GetConvertToException_m269920572 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern "C"  Il2CppObject * TypeConverter_CreateInstance_m3000362770 (TypeConverter_t1753450284 * __this, Il2CppObject * ___propertyValues0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C"  Il2CppObject * TypeConverter_CreateInstance_m1227661542 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___propertyValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m2869117678 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m820991374 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeConverter_GetProperties_m640067244 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeConverter_GetProperties_m2064528470 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeConverter_GetProperties_m374885713 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4055800263* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern "C"  bool TypeConverter_GetPropertiesSupported_m1400456748 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetPropertiesSupported_m3583767500 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern "C"  Il2CppObject * TypeConverter_GetStandardValues_m906027594 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t1784247913 * TypeConverter_GetStandardValues_m1051889776 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m2912691088 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m863193904 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern "C"  bool TypeConverter_GetStandardValuesSupported_m3719886240 (TypeConverter_t1753450284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesSupported_m858342720 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern "C"  bool TypeConverter_IsValid_m411224423 (TypeConverter_t1753450284 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool TypeConverter_IsValid_m156616059 (TypeConverter_t1753450284 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeConverter_SortProperties_m980726249 (TypeConverter_t1753450284 * __this, PropertyDescriptorCollection_t3344846062 * ___props0, StringU5BU5D_t4054002952* ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
