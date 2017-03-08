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

// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t3559721360;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase659028201.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke2873057371.h"

// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketTcp__ctor_m3552199785 (SocketTcp_t3559721360 * __this, PeerBase_t659028201 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
extern "C"  void SocketTcp_Dispose_m33551411 (SocketTcp_t3559721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
extern "C"  bool SocketTcp_Connect_m3590489684 (SocketTcp_t3559721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
extern "C"  bool SocketTcp_Disconnect_m3465328404 (SocketTcp_t3559721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketTcp_Send_m3150079600 (SocketTcp_t3559721360 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Receive(System.Byte[]&)
extern "C"  int32_t SocketTcp_Receive_m3455559598 (SocketTcp_t3559721360 * __this, ByteU5BU5D_t4260760469** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
extern "C"  void SocketTcp_DnsAndConnect_m2105131440 (SocketTcp_t3559721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
extern "C"  void SocketTcp_ReceiveLoop_m2049658555 (SocketTcp_t3559721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
