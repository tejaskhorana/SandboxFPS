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

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct SimplePropertyDescriptor_t3787797666;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type)
extern "C"  void SimplePropertyDescriptor__ctor_m2921174830 (SimplePropertyDescriptor_t3787797666 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___propertyType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void SimplePropertyDescriptor__ctor_m4152789881 (SimplePropertyDescriptor_t3787797666 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___propertyType2, AttributeU5BU5D_t4055800263* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_ComponentType()
extern "C"  Type_t * SimplePropertyDescriptor_get_ComponentType_m806342828 (SimplePropertyDescriptor_t3787797666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_PropertyType()
extern "C"  Type_t * SimplePropertyDescriptor_get_PropertyType_m421901788 (SimplePropertyDescriptor_t3787797666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_IsReadOnly()
extern "C"  bool SimplePropertyDescriptor_get_IsReadOnly_m288336149 (SimplePropertyDescriptor_t3787797666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool SimplePropertyDescriptor_ShouldSerializeValue_m3325026608 (SimplePropertyDescriptor_t3787797666 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool SimplePropertyDescriptor_CanResetValue_m2900527936 (SimplePropertyDescriptor_t3787797666 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ResetValue(System.Object)
extern "C"  void SimplePropertyDescriptor_ResetValue_m2941324712 (SimplePropertyDescriptor_t3787797666 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
