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

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct ProcessWorkerEventHandler_t3696646333;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2333945751;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t364171432;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_AsyncOperation2333945751.h"
#include "mscorlib_System_Threading_SendOrPostCallback364171432.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProcessWorkerEventHandler__ctor_m2120487491 (ProcessWorkerEventHandler_t3696646333 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::Invoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void ProcessWorkerEventHandler_Invoke_m1004409832 (ProcessWorkerEventHandler_t3696646333 * __this, Il2CppObject * ___argument0, AsyncOperation_t2333945751 * ___async1, SendOrPostCallback_t364171432 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProcessWorkerEventHandler_BeginInvoke_m1905035501 (ProcessWorkerEventHandler_t3696646333 * __this, Il2CppObject * ___argument0, AsyncOperation_t2333945751 * ___async1, SendOrPostCallback_t364171432 * ___callback2, AsyncCallback_t1369114871 * ____callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProcessWorkerEventHandler_EndInvoke_m885595603 (ProcessWorkerEventHandler_t3696646333 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
