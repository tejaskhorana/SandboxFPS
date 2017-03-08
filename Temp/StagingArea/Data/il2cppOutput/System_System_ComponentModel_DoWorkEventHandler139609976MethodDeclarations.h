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

// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t139609976;
// System.Object
struct Il2CppObject;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t3914683425;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_DoWorkEventArgs3914683425.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.DoWorkEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DoWorkEventHandler__ctor_m3105703509 (DoWorkEventHandler_t139609976 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::Invoke(System.Object,System.ComponentModel.DoWorkEventArgs)
extern "C"  void DoWorkEventHandler_Invoke_m3329269433 (DoWorkEventHandler_t139609976 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t3914683425 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.DoWorkEventHandler::BeginInvoke(System.Object,System.ComponentModel.DoWorkEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DoWorkEventHandler_BeginInvoke_m89334322 (DoWorkEventHandler_t139609976 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t3914683425 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DoWorkEventHandler_EndInvoke_m2354260709 (DoWorkEventHandler_t139609976 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
