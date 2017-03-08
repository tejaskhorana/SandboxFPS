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

// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1402979853;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_ListChangedType3371996406.h"
#include "System_System_ComponentModel_PropertyDescriptor2073374448.h"

// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32)
extern "C"  void ListChangedEventArgs__ctor_m3586050410 (ListChangedEventArgs_t1402979853 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.ComponentModel.PropertyDescriptor)
extern "C"  void ListChangedEventArgs__ctor_m282696242 (ListChangedEventArgs_t1402979853 * __this, int32_t ___listChangedType0, PropertyDescriptor_t2073374448 * ___propDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern "C"  void ListChangedEventArgs__ctor_m2269671341 (ListChangedEventArgs_t1402979853 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, int32_t ___oldIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C"  void ListChangedEventArgs__ctor_m687279605 (ListChangedEventArgs_t1402979853 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, PropertyDescriptor_t2073374448 * ___propDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::get_ListChangedType()
extern "C"  int32_t ListChangedEventArgs_get_ListChangedType_m2483599127 (ListChangedEventArgs_t1402979853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_OldIndex()
extern "C"  int32_t ListChangedEventArgs_get_OldIndex_m2694862768 (ListChangedEventArgs_t1402979853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_NewIndex()
extern "C"  int32_t ListChangedEventArgs_get_NewIndex_m1412313623 (ListChangedEventArgs_t1402979853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::get_PropertyDescriptor()
extern "C"  PropertyDescriptor_t2073374448 * ListChangedEventArgs_get_PropertyDescriptor_m273474673 (ListChangedEventArgs_t1402979853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
