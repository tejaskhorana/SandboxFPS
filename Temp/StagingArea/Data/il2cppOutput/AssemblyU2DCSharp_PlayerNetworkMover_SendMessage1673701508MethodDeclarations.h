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

// PlayerNetworkMover/SendMessage
struct SendMessage_t1673701508;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void PlayerNetworkMover/SendMessage::.ctor(System.Object,System.IntPtr)
extern "C"  void SendMessage__ctor_m1045179691 (SendMessage_t1673701508 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover/SendMessage::Invoke(System.String)
extern "C"  void SendMessage_Invoke_m1312038365 (SendMessage_t1673701508 * __this, String_t* ___MessageOverlay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PlayerNetworkMover/SendMessage::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendMessage_BeginInvoke_m3338668130 (SendMessage_t1673701508 * __this, String_t* ___MessageOverlay0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover/SendMessage::EndInvoke(System.IAsyncResult)
extern "C"  void SendMessage_EndInvoke_m2508385467 (SendMessage_t1673701508 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
