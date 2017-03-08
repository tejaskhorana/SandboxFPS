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

// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t3559722353;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase659028201.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke2873057371.h"

// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketUdp__ctor_m1868098474 (SocketUdp_t3559722353 * __this, PeerBase_t659028201 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
extern "C"  void SocketUdp_Dispose_m3941995316 (SocketUdp_t3559722353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
extern "C"  bool SocketUdp_Connect_m1837731827 (SocketUdp_t3559722353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
extern "C"  bool SocketUdp_Disconnect_m973427989 (SocketUdp_t3559722353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketUdp_Send_m821243407 (SocketUdp_t3559722353 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Receive(System.Byte[]&)
extern "C"  int32_t SocketUdp_Receive_m666698031 (SocketUdp_t3559722353 * __this, ByteU5BU5D_t4260760469** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
extern "C"  void SocketUdp_DnsAndConnect_m1812126705 (SocketUdp_t3559722353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
extern "C"  void SocketUdp_ReceiveLoop_m2902983996 (SocketUdp_t3559722353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
