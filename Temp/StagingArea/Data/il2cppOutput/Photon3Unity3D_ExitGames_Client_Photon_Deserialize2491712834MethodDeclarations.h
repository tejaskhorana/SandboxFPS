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

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2491712834;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t2984804470;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe2984804470.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeStreamMethod__ctor_m2638295006 (DeserializeStreamMethod_t2491712834 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * DeserializeStreamMethod_Invoke_m1171546632 (DeserializeStreamMethod_t2491712834 * __this, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.DeserializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Int16,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeserializeStreamMethod_BeginInvoke_m1602691374 (DeserializeStreamMethod_t2491712834 * __this, StreamBuffer_t2984804470 * ___inStream0, int16_t ___length1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DeserializeStreamMethod_EndInvoke_m2372751193 (DeserializeStreamMethod_t2491712834 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
