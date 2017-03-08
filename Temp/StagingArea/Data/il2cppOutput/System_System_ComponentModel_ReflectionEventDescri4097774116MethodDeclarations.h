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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t4097774116;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1405012495;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3310234105;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_EventInfo2739272946.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_System_ComponentModel_EventDescriptor1405012495.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Delegate3310234105.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C"  void ReflectionEventDescriptor__ctor_m997288511 (ReflectionEventDescriptor_t4097774116 * __this, EventInfo_t * ___eventInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m3497071543 (ReflectionEventDescriptor_t4097774116 * __this, Type_t * ___componentType0, EventDescriptor_t1405012495 * ___oldEventDescriptor1, AttributeU5BU5D_t4055800263* ___attrs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m2529362926 (ReflectionEventDescriptor_t4097774116 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4055800263* ___attrs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::GetEventInfo()
extern "C"  EventInfo_t * ReflectionEventDescriptor_GetEventInfo_m3167439640 (ReflectionEventDescriptor_t4097774116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::AddEventHandler(System.Object,System.Delegate)
extern "C"  void ReflectionEventDescriptor_AddEventHandler_m212189694 (ReflectionEventDescriptor_t4097774116 * __this, Il2CppObject * ___component0, Delegate_t3310234105 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::RemoveEventHandler(System.Object,System.Delegate)
extern "C"  void ReflectionEventDescriptor_RemoveEventHandler_m1768579411 (ReflectionEventDescriptor_t4097774116 * __this, Il2CppObject * ___component0, Delegate_t3310234105 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionEventDescriptor_get_ComponentType_m1519845013 (ReflectionEventDescriptor_t4097774116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C"  Type_t * ReflectionEventDescriptor_get_EventType_m1050095858 (ReflectionEventDescriptor_t4097774116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionEventDescriptor::get_IsMulticast()
extern "C"  bool ReflectionEventDescriptor_get_IsMulticast_m3411257000 (ReflectionEventDescriptor_t4097774116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
