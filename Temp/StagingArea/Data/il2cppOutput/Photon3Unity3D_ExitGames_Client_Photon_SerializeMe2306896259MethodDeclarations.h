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

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2306896259;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeMethod__ctor_m1797781663 (SerializeMethod_t2306896259 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C"  ByteU5BU5D_t4260760469* SerializeMethod_Invoke_m996346405 (SerializeMethod_t2306896259 * __this, Il2CppObject * ___customObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeMethod_BeginInvoke_m132015908 (SerializeMethod_t2306896259 * __this, Il2CppObject * ___customObject0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t4260760469* SerializeMethod_EndInvoke_m1790554053 (SerializeMethod_t2306896259 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
