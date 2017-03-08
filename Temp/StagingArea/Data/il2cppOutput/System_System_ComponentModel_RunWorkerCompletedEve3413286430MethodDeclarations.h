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

// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t3413286430;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3373723451;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve3373723451.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RunWorkerCompletedEventHandler__ctor_m1268649851 (RunWorkerCompletedEventHandler_t3413286430 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::Invoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void RunWorkerCompletedEventHandler_Invoke_m1222062457 (RunWorkerCompletedEventHandler_t3413286430 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t3373723451 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.RunWorkerCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RunWorkerCompletedEventHandler_BeginInvoke_m1188553062 (RunWorkerCompletedEventHandler_t3413286430 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t3373723451 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RunWorkerCompletedEventHandler_EndInvoke_m4248991499 (RunWorkerCompletedEventHandler_t3413286430 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
