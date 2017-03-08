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

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t364171432;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SendOrPostCallback__ctor_m1760971635 (SendOrPostCallback_t364171432 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C"  void SendOrPostCallback_Invoke_m3528166695 (SendOrPostCallback_t364171432 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendOrPostCallback_BeginInvoke_m9652176 (SendOrPostCallback_t364171432 * __this, Il2CppObject * ___state0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SendOrPostCallback_EndInvoke_m2521263875 (SendOrPostCallback_t364171432 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
