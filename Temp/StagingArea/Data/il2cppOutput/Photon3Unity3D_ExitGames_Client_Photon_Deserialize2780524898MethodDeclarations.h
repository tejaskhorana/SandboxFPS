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

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2780524898;
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

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeMethod__ctor_m2522370750 (DeserializeMethod_t2780524898 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
extern "C"  Il2CppObject * DeserializeMethod_Invoke_m1673137958 (DeserializeMethod_t2780524898 * __this, ByteU5BU5D_t4260760469* ___serializedCustomObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeserializeMethod_BeginInvoke_m3007778384 (DeserializeMethod_t2780524898 * __this, ByteU5BU5D_t4260760469* ___serializedCustomObject0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DeserializeMethod_EndInvoke_m1155714681 (DeserializeMethod_t2780524898 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
