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

// RpsDemoConnect
struct RpsDemoConnect_t3700857970;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DisconnectCause396256525.h"

// System.Void RpsDemoConnect::.ctor()
extern "C"  void RpsDemoConnect__ctor_m3689091177 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::Start()
extern "C"  void RpsDemoConnect_Start_m2636228969 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::ApplyUserIdAndConnect()
extern "C"  void RpsDemoConnect_ApplyUserIdAndConnect_m2595299662 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnConnectedToMaster()
extern "C"  void RpsDemoConnect_OnConnectedToMaster_m974693390 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnJoinedLobby()
extern "C"  void RpsDemoConnect_OnJoinedLobby_m3818319541 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnPhotonRandomJoinFailed(System.Object[])
extern "C"  void RpsDemoConnect_OnPhotonRandomJoinFailed_m960260530 (RpsDemoConnect_t3700857970 * __this, ObjectU5BU5D_t1108656482* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnJoinedRoom()
extern "C"  void RpsDemoConnect_OnJoinedRoom_m3759025150 (RpsDemoConnect_t3700857970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnPhotonJoinRoomFailed(System.Object[])
extern "C"  void RpsDemoConnect_OnPhotonJoinRoomFailed_m2062578906 (RpsDemoConnect_t3700857970 * __this, ObjectU5BU5D_t1108656482* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsDemoConnect::OnConnectionFail(DisconnectCause)
extern "C"  void RpsDemoConnect_OnConnectionFail_m645922927 (RpsDemoConnect_t3700857970 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
