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

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t362820202;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t53386863;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_CollectionChangeEventAr53386863.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CollectionChangeEventHandler__ctor_m2647061383 (CollectionChangeEventHandler_t362820202 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void CollectionChangeEventHandler_Invoke_m294398393 (CollectionChangeEventHandler_t362820202 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t53386863 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CollectionChangeEventHandler_BeginInvoke_m597086414 (CollectionChangeEventHandler_t362820202 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t53386863 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CollectionChangeEventHandler_EndInvoke_m3392618775 (CollectionChangeEventHandler_t362820202 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
