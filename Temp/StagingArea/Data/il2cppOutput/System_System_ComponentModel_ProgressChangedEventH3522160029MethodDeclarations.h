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

// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t3522160029;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t1382019100;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_ProgressChangedEventA1382019100.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.ProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProgressChangedEventHandler__ctor_m3863672652 (ProgressChangedEventHandler_t3522160029 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::Invoke(System.Object,System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void ProgressChangedEventHandler_Invoke_m3851768901 (ProgressChangedEventHandler_t3522160029 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t1382019100 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.ProgressChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProgressChangedEventHandler_BeginInvoke_m2997756890 (ProgressChangedEventHandler_t3522160029 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t1382019100 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProgressChangedEventHandler_EndInvoke_m2314596188 (ProgressChangedEventHandler_t3522160029 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
