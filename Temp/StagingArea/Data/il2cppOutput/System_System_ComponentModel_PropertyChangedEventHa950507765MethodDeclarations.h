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

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t950507765;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t448576452;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_PropertyChangedEventAr448576452.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangedEventHandler__ctor_m2551570084 (PropertyChangedEventHandler_t950507765 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void PropertyChangedEventHandler_Invoke_m3617918709 (PropertyChangedEventHandler_t950507765 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t448576452 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangedEventHandler_BeginInvoke_m2443252954 (PropertyChangedEventHandler_t950507765 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t448576452 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangedEventHandler_EndInvoke_m1867137716 (PropertyChangedEventHandler_t950507765 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
