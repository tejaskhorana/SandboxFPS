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

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct WrappedTypeDescriptionProvider_t4187483089;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3543085017;
// System.Object
struct Il2CppObject;
// System.IServiceProvider
struct IServiceProvider_t1633313169;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t4089610441;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid3543085017.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider__ctor_m941655049 (WrappedTypeDescriptionProvider_t4187483089 * __this, TypeDescriptionProvider_t3543085017 * ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::get_Wrapped()
extern "C"  TypeDescriptionProvider_t3543085017 * WrappedTypeDescriptionProvider_get_Wrapped_m2676248694 (WrappedTypeDescriptionProvider_t4187483089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::set_Wrapped(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider_set_Wrapped_m3067547011 (WrappedTypeDescriptionProvider_t4187483089 * __this, TypeDescriptionProvider_t3543085017 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_CreateInstance_m3849727263 (WrappedTypeDescriptionProvider_t4187483089 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t3339007067* ___argTypes2, ObjectU5BU5D_t1108656482* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetCache(System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetCache_m1995746741 (WrappedTypeDescriptionProvider_t4187483089 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetExtendedTypeDescriptor_m3615452498 (WrappedTypeDescriptionProvider_t4187483089 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C"  String_t* WrappedTypeDescriptionProvider_GetFullComponentName_m305320777 (WrappedTypeDescriptionProvider_t4187483089 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C"  Type_t * WrappedTypeDescriptionProvider_GetReflectionType_m2229004155 (WrappedTypeDescriptionProvider_t4187483089 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetTypeDescriptor_m3167153022 (WrappedTypeDescriptionProvider_t4187483089 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
