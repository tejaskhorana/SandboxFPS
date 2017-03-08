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

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t2721523875;
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

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeStreamMethod__ctor_m1029384447 (SerializeStreamMethod_t2721523875 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t SerializeStreamMethod_Invoke_m1239976771 (SerializeStreamMethod_t2721523875 * __this, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeStreamMethod_BeginInvoke_m2560005368 (SerializeStreamMethod_t2721523875 * __this, StreamBuffer_t2984804470 * ___outStream0, Il2CppObject * ___customObject1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  int16_t SerializeStreamMethod_EndInvoke_m3161046821 (SerializeStreamMethod_t2721523875 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
