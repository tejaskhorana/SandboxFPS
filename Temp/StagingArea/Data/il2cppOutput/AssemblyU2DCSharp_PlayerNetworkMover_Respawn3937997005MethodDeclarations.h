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

// PlayerNetworkMover/Respawn
struct Respawn_t3937997005;
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

// System.Void PlayerNetworkMover/Respawn::.ctor(System.Object,System.IntPtr)
extern "C"  void Respawn__ctor_m1512872180 (Respawn_t3937997005 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover/Respawn::Invoke(System.Single)
extern "C"  void Respawn_Invoke_m1216651805 (Respawn_t3937997005 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PlayerNetworkMover/Respawn::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Respawn_BeginInvoke_m495581616 (Respawn_t3937997005 * __this, float ___time0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerNetworkMover/Respawn::EndInvoke(System.IAsyncResult)
extern "C"  void Respawn_EndInvoke_m2684003588 (Respawn_t3937997005 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
