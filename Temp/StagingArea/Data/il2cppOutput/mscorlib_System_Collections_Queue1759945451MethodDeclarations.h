﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Queue
struct Queue_t1759945451;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void System.Collections.Queue::.ctor()
extern "C"  void Queue__ctor_m1954446073 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C"  void Queue__ctor_m748061386 (Queue_t1759945451 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C"  void Queue__ctor_m3198641199 (Queue_t1759945451 * __this, int32_t ___capacity0, float ___growFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C"  int32_t Queue_get_Count_m626402273 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
extern "C"  bool Queue_get_IsSynchronized_m219192020 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C"  Il2CppObject * Queue_get_SyncRoot_m109028870 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C"  void Queue_CopyTo_m3860803222 (Queue_t1759945451 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C"  Il2CppObject * Queue_GetEnumerator_m2695541627 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Clone()
extern "C"  Il2CppObject * Queue_Clone_m2633244255 (Queue_t1759945451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
