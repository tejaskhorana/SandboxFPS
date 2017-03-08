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

// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2333945751;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2738322727;
// System.Object
struct Il2CppObject;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t364171432;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SynchronizationContext2738322727.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Threading_SendOrPostCallback364171432.h"

// System.Void System.ComponentModel.AsyncOperation::.ctor(System.Threading.SynchronizationContext,System.Object)
extern "C"  void AsyncOperation__ctor_m2743404238 (AsyncOperation_t2333945751 * __this, SynchronizationContext_t2738322727 * ___ctx0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Finalize()
extern "C"  void AsyncOperation_Finalize_m1095884980 (AsyncOperation_t2333945751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::get_SynchronizationContext()
extern "C"  SynchronizationContext_t2738322727 * AsyncOperation_get_SynchronizationContext_m3701684765 (AsyncOperation_t2333945751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncOperation::get_UserSuppliedState()
extern "C"  Il2CppObject * AsyncOperation_get_UserSuppliedState_m986097206 (AsyncOperation_t2333945751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::OperationCompleted()
extern "C"  void AsyncOperation_OperationCompleted_m3450685818 (AsyncOperation_t2333945751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void AsyncOperation_Post_m2962430309 (AsyncOperation_t2333945751 * __this, SendOrPostCallback_t364171432 * ___d0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::PostOperationCompleted(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void AsyncOperation_PostOperationCompleted_m3939730785 (AsyncOperation_t2333945751 * __this, SendOrPostCallback_t364171432 * ___d0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
