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

// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t3234103944;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Object)
extern "C"  void RefreshEventArgs__ctor_m367277527 (RefreshEventArgs_t3234103944 * __this, Il2CppObject * ___componentChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Type)
extern "C"  void RefreshEventArgs__ctor_m184461436 (RefreshEventArgs_t3234103944 * __this, Type_t * ___typeChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RefreshEventArgs::get_ComponentChanged()
extern "C"  Il2CppObject * RefreshEventArgs_get_ComponentChanged_m4037126588 (RefreshEventArgs_t3234103944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.RefreshEventArgs::get_TypeChanged()
extern "C"  Type_t * RefreshEventArgs_get_TypeChanged_m455109650 (RefreshEventArgs_t3234103944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
