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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t2738322727;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t364171432;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SendOrPostCallback364171432.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Threading_SynchronizationContext2738322727.h"

// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C"  void SynchronizationContext__ctor_m2910701872 (SynchronizationContext_t2738322727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C"  SynchronizationContext_t2738322727 * SynchronizationContext_get_Current_m4276635309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationCompleted()
extern "C"  void SynchronizationContext_OperationCompleted_m2079124600 (SynchronizationContext_t2738322727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationStarted()
extern "C"  void SynchronizationContext_OperationStarted_m1591381038 (SynchronizationContext_t2738322727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void SynchronizationContext_Post_m2052728231 (SynchronizationContext_t2738322727 * __this, SendOrPostCallback_t364171432 * ___d0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C"  void SynchronizationContext_SetSynchronizationContext_m3938243599 (Il2CppObject * __this /* static, unused */, SynchronizationContext_t2738322727 * ___syncContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
