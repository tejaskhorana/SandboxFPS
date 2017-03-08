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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t735670971;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.String
struct String_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t1751339649;
// System.Object
struct Il2CppObject;
// System.ComponentModel.Design.DesignerTransaction
struct DesignerTransaction_t3549871809;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_System_ComponentModel_PropertyDescriptor2073374448.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_ComponentModel_Design_DesignerTransa3549871809.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C"  void ReflectionPropertyDescriptor__ctor_m2917671191 (ReflectionPropertyDescriptor_t735670971 * __this, Type_t * ___componentType0, PropertyDescriptor_t2073374448 * ___oldPropertyDescriptor1, AttributeU5BU5D_t4055800263* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void ReflectionPropertyDescriptor__ctor_m4252169545 (ReflectionPropertyDescriptor_t735670971 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4055800263* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C"  void ReflectionPropertyDescriptor__ctor_m2999028035 (ReflectionPropertyDescriptor_t735670971 * __this, PropertyInfo_t * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C"  PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m3398814953 (ReflectionPropertyDescriptor_t735670971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_ComponentType_m2721876476 (ReflectionPropertyDescriptor_t735670971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::get_IsReadOnly()
extern "C"  bool ReflectionPropertyDescriptor_get_IsReadOnly_m3355122885 (ReflectionPropertyDescriptor_t735670971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_PropertyType_m483693196 (ReflectionPropertyDescriptor_t735670971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void ReflectionPropertyDescriptor_FillAttributes_m3651363557 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReflectionPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * ReflectionPropertyDescriptor_GetValue_m3481654698 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.DesignerTransaction System.ComponentModel.ReflectionPropertyDescriptor::CreateTransaction(System.Object,System.String)
extern "C"  DesignerTransaction_t3549871809 * ReflectionPropertyDescriptor_CreateTransaction_m3189283519 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___obj0, String_t* ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::EndTransaction(System.Object,System.ComponentModel.Design.DesignerTransaction,System.Object,System.Object,System.Boolean)
extern "C"  void ReflectionPropertyDescriptor_EndTransaction_m942618648 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___obj0, DesignerTransaction_t3549871809 * ___tran1, Il2CppObject * ___oldValue2, Il2CppObject * ___newValue3, bool ___commit4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::InitAccessors()
extern "C"  void ReflectionPropertyDescriptor_InitAccessors_m3582867844 (ReflectionPropertyDescriptor_t735670971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void ReflectionPropertyDescriptor_SetValue_m4225352793 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.ReflectionPropertyDescriptor::FindPropertyMethod(System.Object,System.String)
extern "C"  MethodInfo_t * ReflectionPropertyDescriptor_FindPropertyMethod_m1685387323 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___o0, String_t* ___method_name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::ResetValue(System.Object)
extern "C"  void ReflectionPropertyDescriptor_ResetValue_m1762677624 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool ReflectionPropertyDescriptor_CanResetValue_m1630402288 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool ReflectionPropertyDescriptor_ShouldSerializeValue_m1075113856 (ReflectionPropertyDescriptor_t735670971 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
