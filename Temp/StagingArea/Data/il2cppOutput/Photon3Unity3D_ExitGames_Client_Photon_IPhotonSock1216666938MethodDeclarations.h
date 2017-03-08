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

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t1216666938;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Net.IPAddress
struct IPAddress_t3525271463;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke2886030052.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase659028201.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2029897749.h"
#include "System_System_Net_IPAddress3525271463.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C"  Il2CppObject * IPhotonSocket_get_Listener_m3765223043 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
extern "C"  uint8_t IPhotonSocket_get_Protocol_m2034841546 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void IPhotonSocket_set_Protocol_m1540185693 (IPhotonSocket_t1216666938 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C"  int32_t IPhotonSocket_get_State_m1003586621 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C"  void IPhotonSocket_set_State_m2933234860 (IPhotonSocket_t1216666938 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C"  String_t* IPhotonSocket_get_ServerAddress_m4190203349 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
extern "C"  void IPhotonSocket_set_ServerAddress_m1846553988 (IPhotonSocket_t1216666938 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C"  int32_t IPhotonSocket_get_ServerPort_m1857831029 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
extern "C"  void IPhotonSocket_set_ServerPort_m1656771434 (IPhotonSocket_t1216666938 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_AddressResolvedAsIpv6()
extern "C"  bool IPhotonSocket_get_AddressResolvedAsIpv6_m3401253628 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_AddressResolvedAsIpv6(System.Boolean)
extern "C"  void IPhotonSocket_set_AddressResolvedAsIpv6_m917954665 (IPhotonSocket_t1216666938 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_UrlProtocol(System.String)
extern "C"  void IPhotonSocket_set_UrlProtocol_m2524088782 (IPhotonSocket_t1216666938 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_UrlPath(System.String)
extern "C"  void IPhotonSocket_set_UrlPath_m457175841 (IPhotonSocket_t1216666938 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C"  bool IPhotonSocket_get_Connected_m828386720 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C"  int32_t IPhotonSocket_get_MTU_m373835039 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void IPhotonSocket__ctor_m96132223 (IPhotonSocket_t1216666938 * __this, PeerBase_t659028201 * ___peerBase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C"  bool IPhotonSocket_Connect_m46157290 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C"  void IPhotonSocket_HandleReceivedDatagram_m3916771341 (IPhotonSocket_t1216666938 * __this, ByteU5BU5D_t4260760469* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C"  bool IPhotonSocket_ReportDebugOfLevel_m1536892133 (IPhotonSocket_t1216666938 * __this, uint8_t ___levelOfMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void IPhotonSocket_EnqueueDebugReturn_m933517508 (IPhotonSocket_t1216666938 * __this, uint8_t ___debugLevel0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C"  void IPhotonSocket_HandleException_m1931643896 (IPhotonSocket_t1216666938 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&,System.String&,System.String&)
extern "C"  bool IPhotonSocket_TryParseAddress_m3045740980 (IPhotonSocket_t1216666938 * __this, String_t* ___url0, String_t** ___address1, uint16_t* ___port2, String_t** ___urlProtocol3, String_t** ___urlPath4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::IsIpv6SimpleCheck(System.Net.IPAddress)
extern "C"  bool IPhotonSocket_IsIpv6SimpleCheck_m731136104 (IPhotonSocket_t1216666938 * __this, IPAddress_t3525271463 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C"  IPAddress_t3525271463 * IPhotonSocket_GetIpAddress_m973659029 (Il2CppObject * __this /* static, unused */, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__44_0()
extern "C"  void IPhotonSocket_U3CHandleExceptionU3Eb__44_0_m2845282232 (IPhotonSocket_t1216666938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
