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

// Photon.PunBehaviour
struct PunBehaviour_t2436907354;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_DisconnectCause396256525.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C"  void PunBehaviour__ctor_m2830814789 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C"  void PunBehaviour_OnConnectedToPhoton_m466694276 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C"  void PunBehaviour_OnLeftRoom_m1195033632 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PunBehaviour_OnMasterClientSwitched_m2747091937 (PunBehaviour_t2436907354 * __this, PhotonPlayer_t1400510109 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonCreateRoomFailed_m2503269860 (PunBehaviour_t2436907354 * __this, ObjectU5BU5D_t1108656482* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonJoinRoomFailed_m2532950710 (PunBehaviour_t2436907354 * __this, ObjectU5BU5D_t1108656482* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C"  void PunBehaviour_OnCreatedRoom_m2367482087 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C"  void PunBehaviour_OnJoinedLobby_m3660648593 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C"  void PunBehaviour_OnLeftLobby_m1643993811 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C"  void PunBehaviour_OnFailedToConnectToPhoton_m1974841912 (PunBehaviour_t2436907354 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C"  void PunBehaviour_OnDisconnectedFromPhoton_m2223602047 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C"  void PunBehaviour_OnConnectionFail_m530572107 (PunBehaviour_t2436907354 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void PunBehaviour_OnPhotonInstantiate_m2882452135 (PunBehaviour_t2436907354 * __this, PhotonMessageInfo_t259585817  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C"  void PunBehaviour_OnReceivedRoomListUpdate_m2141576737 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C"  void PunBehaviour_OnJoinedRoom_m3338296994 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerConnected_m3550450323 (PunBehaviour_t2436907354 * __this, PhotonPlayer_t1400510109 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerDisconnected_m1083749881 (PunBehaviour_t2436907354 * __this, PhotonPlayer_t1400510109 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonRandomJoinFailed_m2015998094 (PunBehaviour_t2436907354 * __this, ObjectU5BU5D_t1108656482* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C"  void PunBehaviour_OnConnectedToMaster_m2024861930 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C"  void PunBehaviour_OnPhotonMaxCccuReached_m3297121622 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m3204704143 (PunBehaviour_t2436907354 * __this, Hashtable_t284945826 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C"  void PunBehaviour_OnPhotonPlayerPropertiesChanged_m750175146 (PunBehaviour_t2436907354 * __this, ObjectU5BU5D_t1108656482* ___playerAndUpdatedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C"  void PunBehaviour_OnUpdatedFriendList_m1820964155 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C"  void PunBehaviour_OnCustomAuthenticationFailed_m975475518 (PunBehaviour_t2436907354 * __this, String_t* ___debugMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void PunBehaviour_OnCustomAuthenticationResponse_m2191392423 (PunBehaviour_t2436907354 * __this, Dictionary_2_t696267445 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PunBehaviour_OnWebRpcResponse_m2092475156 (PunBehaviour_t2436907354 * __this, OperationResponse_t1243130602 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C"  void PunBehaviour_OnOwnershipRequest_m3833830836 (PunBehaviour_t2436907354 * __this, ObjectU5BU5D_t1108656482* ___viewAndPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLobbyStatisticsUpdate()
extern "C"  void PunBehaviour_OnLobbyStatisticsUpdate_m2845751622 (PunBehaviour_t2436907354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
