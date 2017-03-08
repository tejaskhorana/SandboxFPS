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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3412911591;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3543085017;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid3543085017.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptionProvider,System.Type,System.Object)
extern "C"  void DefaultTypeDescriptor__ctor_m2276401102 (DefaultTypeDescriptor_t3412911591 * __this, TypeDescriptionProvider_t3543085017 * ___owner0, Type_t * ___objectType1, Il2CppObject * ___instance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetAttributes()
extern "C"  AttributeCollection_t100867136 * DefaultTypeDescriptor_GetAttributes_m2699390884 (DefaultTypeDescriptor_t3412911591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetClassName()
extern "C"  String_t* DefaultTypeDescriptor_GetClassName_m1458360863 (DefaultTypeDescriptor_t3412911591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetDefaultProperty()
extern "C"  PropertyDescriptor_t2073374448 * DefaultTypeDescriptor_GetDefaultProperty_m1863100359 (DefaultTypeDescriptor_t3412911591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetProperties()
extern "C"  PropertyDescriptorCollection_t3344846062 * DefaultTypeDescriptor_GetProperties_m1825912546 (DefaultTypeDescriptor_t3412911591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
