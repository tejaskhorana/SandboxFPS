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

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t898727436;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1402979853;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_ListChangedEventArgs1402979853.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ListChangedEventHandler__ctor_m2016901307 (ListChangedEventHandler_t898727436 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void ListChangedEventHandler_Invoke_m4014260515 (ListChangedEventHandler_t898727436 * __this, Il2CppObject * ___sender0, ListChangedEventArgs_t1402979853 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ListChangedEventHandler_BeginInvoke_m1345887354 (ListChangedEventHandler_t898727436 * __this, Il2CppObject * ___sender0, ListChangedEventArgs_t1402979853 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ListChangedEventHandler_EndInvoke_m3347218507 (ListChangedEventHandler_t898727436 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
