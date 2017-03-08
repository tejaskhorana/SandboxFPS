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

// System.ComponentModel.ComponentCollection
struct ComponentCollection_t659278177;
// System.ComponentModel.IComponent[]
struct IComponentU5BU5D_t2640339233;
// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.ComponentCollection::.ctor(System.ComponentModel.IComponent[])
extern "C"  void ComponentCollection__ctor_m273416025 (ComponentCollection_t659278177 * __this, IComponentU5BU5D_t2640339233* ___components0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.Int32)
extern "C"  Il2CppObject * ComponentCollection_get_Item_m1834481367 (ComponentCollection_t659278177 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.String)
extern "C"  Il2CppObject * ComponentCollection_get_Item_m1491045948 (ComponentCollection_t659278177 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentCollection::CopyTo(System.ComponentModel.IComponent[],System.Int32)
extern "C"  void ComponentCollection_CopyTo_m691267118 (ComponentCollection_t659278177 * __this, IComponentU5BU5D_t2640339233* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
