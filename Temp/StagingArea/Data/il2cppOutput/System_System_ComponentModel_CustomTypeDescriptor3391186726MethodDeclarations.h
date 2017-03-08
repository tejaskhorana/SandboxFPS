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

// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t3391186726;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t4089610441;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1753450284;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1405012495;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3224620365;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_System_ComponentModel_PropertyDescriptor2073374448.h"

// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern "C"  void CustomTypeDescriptor__ctor_m2064905087 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
extern "C"  void CustomTypeDescriptor__ctor_m1008899315 (CustomTypeDescriptor_t3391186726 * __this, Il2CppObject * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern "C"  AttributeCollection_t100867136 * CustomTypeDescriptor_GetAttributes_m1402897870 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetClassName()
extern "C"  String_t* CustomTypeDescriptor_GetClassName_m1555479733 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetComponentName()
extern "C"  String_t* CustomTypeDescriptor_GetComponentName_m2110007290 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern "C"  TypeConverter_t1753450284 * CustomTypeDescriptor_GetConverter_m1961171903 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultEvent()
extern "C"  EventDescriptor_t1405012495 * CustomTypeDescriptor_GetDefaultEvent_m123866079 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultProperty()
extern "C"  PropertyDescriptor_t2073374448 * CustomTypeDescriptor_GetDefaultProperty_m3182531549 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetEditor(System.Type)
extern "C"  Il2CppObject * CustomTypeDescriptor_GetEditor_m2084062446 (CustomTypeDescriptor_t3391186726 * __this, Type_t * ___editorBaseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents()
extern "C"  EventDescriptorCollection_t3224620365 * CustomTypeDescriptor_GetEvents_m872425885 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents(System.Attribute[])
extern "C"  EventDescriptorCollection_t3224620365 * CustomTypeDescriptor_GetEvents_m3387070 (CustomTypeDescriptor_t3391186726 * __this, AttributeU5BU5D_t4055800263* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties()
extern "C"  PropertyDescriptorCollection_t3344846062 * CustomTypeDescriptor_GetProperties_m2636337420 (CustomTypeDescriptor_t3391186726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * CustomTypeDescriptor_GetProperties_m2824566893 (CustomTypeDescriptor_t3391186726 * __this, AttributeU5BU5D_t4055800263* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetPropertyOwner(System.ComponentModel.PropertyDescriptor)
extern "C"  Il2CppObject * CustomTypeDescriptor_GetPropertyOwner_m143616475 (CustomTypeDescriptor_t3391186726 * __this, PropertyDescriptor_t2073374448 * ___pd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
