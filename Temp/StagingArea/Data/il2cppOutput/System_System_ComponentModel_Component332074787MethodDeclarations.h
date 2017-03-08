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

// System.ComponentModel.Component
struct Component_t332074787;
// System.EventHandler
struct EventHandler_t2463957060;
// System.ComponentModel.ISite
struct ISite_t1541550070;
// System.ComponentModel.IContainer
struct IContainer_t1802226916;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1056591002;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C"  void Component__ctor_m953686032 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C"  void Component_add_Disposed_m4046465868 (Component_t332074787 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C"  void Component_remove_Disposed_m1869009077 (Component_t332074787 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern "C"  bool Component_get_CanRaiseEvents_m3526410716 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C"  Il2CppObject * Component_get_Site_m577153182 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::set_Site(System.ComponentModel.ISite)
extern "C"  void Component_set_Site_m1616022925 (Component_t332074787 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IContainer System.ComponentModel.Component::get_Container()
extern "C"  Il2CppObject * Component_get_Container_m111916938 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_DesignMode()
extern "C"  bool Component_get_DesignMode_m2830247976 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C"  EventHandlerList_t1056591002 * Component_get_Events_m1559028808 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C"  void Component_Finalize_m154422866 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C"  void Component_Dispose_m1562525773 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C"  void Component_Dispose_m2643979012 (Component_t332074787 * __this, bool ___release_all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Component::GetService(System.Type)
extern "C"  Il2CppObject * Component_GetService_m3320217563 (Component_t332074787 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C"  String_t* Component_ToString_m91155165 (Component_t332074787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
