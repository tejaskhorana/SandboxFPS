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

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t2012258748;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Reflection.Module
struct Module_t1394482686;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes1999146654.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C"  int32_t PropertyBuilder_get_Attributes_m548385532 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C"  bool PropertyBuilder_get_CanRead_m1928541820 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C"  bool PropertyBuilder_get_CanWrite_m177907803 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C"  Type_t * PropertyBuilder_get_DeclaringType_m1573425887 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C"  String_t* PropertyBuilder_get_Name_m1476342296 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C"  Type_t * PropertyBuilder_get_PropertyType_m946002355 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C"  Type_t * PropertyBuilder_get_ReflectedType_m803872660 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t2824366364* PropertyBuilder_GetAccessors_m3435130372 (PropertyBuilder_t2012258748 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* PropertyBuilder_GetCustomAttributes_m3021459715 (PropertyBuilder_t2012258748 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* PropertyBuilder_GetCustomAttributes_m3490282608 (PropertyBuilder_t2012258748 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetGetMethod_m1084139825 (PropertyBuilder_t2012258748 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* PropertyBuilder_GetIndexParameters_m3909940773 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetSetMethod_m1927431485 (PropertyBuilder_t2012258748 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m1709912399 (PropertyBuilder_t2012258748 * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t1108656482* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m2770378927 (PropertyBuilder_t2012258748 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___index3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool PropertyBuilder_IsDefined_m3818094274 (PropertyBuilder_t2012258748 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyBuilder_SetValue_m2811621182 (PropertyBuilder_t2012258748 * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, ObjectU5BU5D_t1108656482* ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void PropertyBuilder_SetValue_m307828128 (PropertyBuilder_t2012258748 * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, int32_t ___invokeAttr2, Binder_t1074302268 * ___binder3, ObjectU5BU5D_t1108656482* ___index4, CultureInfo_t1065375142 * ___culture5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C"  Module_t1394482686 * PropertyBuilder_get_Module_m3451643761 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C"  Exception_t3991598821 * PropertyBuilder_not_supported_m3524698216 (PropertyBuilder_t2012258748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
