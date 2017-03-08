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

// PhotonNetwork/EventCallback
struct EventCallback_t357824386;
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

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void EventCallback__ctor_m2245100633 (EventCallback_t357824386 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
extern "C"  void EventCallback_Invoke_m2981428785 (EventCallback_t357824386 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventCallback_BeginInvoke_m1709012328 (EventCallback_t357824386 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void EventCallback_EndInvoke_m2982087401 (EventCallback_t357824386 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
