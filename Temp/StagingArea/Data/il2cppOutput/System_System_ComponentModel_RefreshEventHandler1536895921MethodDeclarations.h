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

// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1536895921;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t3234103944;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_RefreshEventArgs3234103944.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RefreshEventHandler__ctor_m412773472 (RefreshEventHandler_t1536895921 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C"  void RefreshEventHandler_Invoke_m486872059 (RefreshEventHandler_t1536895921 * __this, RefreshEventArgs_t3234103944 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RefreshEventHandler_BeginInvoke_m2226077388 (RefreshEventHandler_t1536895921 * __this, RefreshEventArgs_t3234103944 * ___e0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RefreshEventHandler_EndInvoke_m3167948400 (RefreshEventHandler_t1536895921 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
