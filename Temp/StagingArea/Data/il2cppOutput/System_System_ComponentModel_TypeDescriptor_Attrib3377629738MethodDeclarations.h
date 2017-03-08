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

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct AttributeProvider_t3377629738;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3543085017;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t4089610441;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid3543085017.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.TypeDescriptor/AttributeProvider::.ctor(System.Attribute[],System.ComponentModel.TypeDescriptionProvider)
extern "C"  void AttributeProvider__ctor_m2493812559 (AttributeProvider_t3377629738 * __this, AttributeU5BU5D_t4055800263* ___attributes0, TypeDescriptionProvider_t3543085017 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/AttributeProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * AttributeProvider_GetTypeDescriptor_m436919371 (AttributeProvider_t3377629738 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
