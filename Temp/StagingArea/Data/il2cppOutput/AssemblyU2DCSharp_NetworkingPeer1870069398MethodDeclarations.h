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

// NetworkingPeer
struct NetworkingPeer_t1870069398;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// TypedLobby
struct TypedLobby_t1020404140;
// Room
struct Room_t2553083;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.Collections.Generic.List`1<Region>
struct List_1_t3812224484;
// System.String[]
struct StringU5BU5D_t4054002952;
// EnterRoomParams
struct EnterRoomParams_t1470694169;
// OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t1498792015;
// System.Object
struct Il2CppObject;
// RaiseEventOptions
struct RaiseEventOptions_t2943657104;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;
// ExitGames.Client.Photon.EventData
struct EventData_t4282381190;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t3977425488;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "AssemblyU2DCSharp_AuthenticationValues2964448730.h"
#include "AssemblyU2DCSharp_ServerConnection3129530017.h"
#include "AssemblyU2DCSharp_ClientState1483091814.h"
#include "AssemblyU2DCSharp_TypedLobby1020404140.h"
#include "AssemblyU2DCSharp_Room2553083.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "AssemblyU2DCSharp_EnterRoomParams1470694169.h"
#include "AssemblyU2DCSharp_OpJoinRandomRoomParams1498792015.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_RaiseEventOptions2943657104.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4282381190.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2029897749.h"
#include "AssemblyU2DCSharp_PhotonNetworkingMessage2409876791.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_PhotonView1498838369.h"
#include "AssemblyU2DCSharp_PhotonTargets3716398278.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void NetworkingPeer::.ctor(System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void NetworkingPeer__ctor_m1317967705 (NetworkingPeer_t1870069398 * __this, String_t* ___playername0, uint8_t ___connectionProtocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C"  void NetworkingPeer__cctor_m2067385736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_AppVersion()
extern "C"  String_t* NetworkingPeer_get_AppVersion_m1042326146 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_AuthValues()
extern "C"  AuthenticationValues_t2964448730 * NetworkingPeer_get_AuthValues_m849248181 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AuthValues(AuthenticationValues)
extern "C"  void NetworkingPeer_set_AuthValues_m3326956652 (NetworkingPeer_t1870069398 * __this, AuthenticationValues_t2964448730 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_TokenForInit()
extern "C"  String_t* NetworkingPeer_get_TokenForInit_m3071214475 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C"  bool NetworkingPeer_get_IsUsingNameServer_m1734324494 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C"  void NetworkingPeer_set_IsUsingNameServer_m1440646725 (NetworkingPeer_t1870069398 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C"  String_t* NetworkingPeer_get_NameServerAddress_m2569044701 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C"  String_t* NetworkingPeer_get_MasterServerAddress_m3099387046 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C"  void NetworkingPeer_set_MasterServerAddress_m1876520365 (NetworkingPeer_t1870069398 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_GameServerAddress()
extern "C"  String_t* NetworkingPeer_get_GameServerAddress_m4185380502 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_GameServerAddress(System.String)
extern "C"  void NetworkingPeer_set_GameServerAddress_m309154301 (NetworkingPeer_t1870069398 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_Server()
extern "C"  int32_t NetworkingPeer_get_Server_m1801006055 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_Server(ServerConnection)
extern "C"  void NetworkingPeer_set_Server_m320133790 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ClientState NetworkingPeer::get_State()
extern "C"  int32_t NetworkingPeer_get_State_m4051135038 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(ClientState)
extern "C"  void NetworkingPeer_set_State_m4120691861 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C"  TypedLobby_t1020404140 * NetworkingPeer_get_lobby_m4009595775 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C"  void NetworkingPeer_set_lobby_m4211866256 (NetworkingPeer_t1870069398 * __this, TypedLobby_t1020404140 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_requestLobbyStatistics()
extern "C"  bool NetworkingPeer_get_requestLobbyStatistics_m974171462 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C"  String_t* NetworkingPeer_get_PlayerName_m326041303 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C"  void NetworkingPeer_set_PlayerName_m2017036506 (NetworkingPeer_t1870069398 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_CurrentRoom()
extern "C"  Room_t2553083 * NetworkingPeer_get_CurrentRoom_m2530691020 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CurrentRoom(Room)
extern "C"  void NetworkingPeer_set_CurrentRoom_m170987295 (NetworkingPeer_t1870069398 * __this, Room_t2553083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_LocalPlayer()
extern "C"  PhotonPlayer_t1400510109 * NetworkingPeer_get_LocalPlayer_m2718573606 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_LocalPlayer(PhotonPlayer)
extern "C"  void NetworkingPeer_set_LocalPlayer_m652925685 (NetworkingPeer_t1870069398 * __this, PhotonPlayer_t1400510109 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_PlayersOnMasterCount()
extern "C"  int32_t NetworkingPeer_get_PlayersOnMasterCount_m2712413010 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayersOnMasterCount(System.Int32)
extern "C"  void NetworkingPeer_set_PlayersOnMasterCount_m2688711049 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_PlayersInRoomsCount()
extern "C"  int32_t NetworkingPeer_get_PlayersInRoomsCount_m106104890 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayersInRoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_PlayersInRoomsCount_m368252389 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_RoomsCount()
extern "C"  int32_t NetworkingPeer_get_RoomsCount_m127949805 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_RoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_RoomsCount_m3832817956 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendListAge()
extern "C"  int32_t NetworkingPeer_get_FriendListAge_m2481881967 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C"  bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m1198838518 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C"  List_1_t3812224484 * NetworkingPeer_get_AvailableRegions_m1464802245 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C"  void NetworkingPeer_set_AvailableRegions_m569024500 (NetworkingPeer_t1870069398 * __this, List_1_t3812224484 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C"  int32_t NetworkingPeer_get_CloudRegion_m1867522374 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C"  void NetworkingPeer_set_CloudRegion_m2501089229 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C"  int32_t NetworkingPeer_get_mMasterClientId_m4226150881 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C"  void NetworkingPeer_set_mMasterClientId_m4054022668 (NetworkingPeer_t1870069398 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C"  String_t* NetworkingPeer_GetNameServerAddress_m4284752754 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C"  bool NetworkingPeer_Connect_m671051397 (NetworkingPeer_t1870069398 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ReconnectToMaster()
extern "C"  bool NetworkingPeer_ReconnectToMaster_m2651932131 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ReconnectAndRejoin()
extern "C"  bool NetworkingPeer_ReconnectAndRejoin_m1772830672 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C"  bool NetworkingPeer_Connect_m1995754780 (NetworkingPeer_t1870069398 * __this, String_t* ___serverAddress0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C"  bool NetworkingPeer_ConnectToNameServer_m544796162 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C"  bool NetworkingPeer_ConnectToRegionMaster_m3241375218 (NetworkingPeer_t1870069398 * __this, int32_t ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetupProtocol(ServerConnection)
extern "C"  void NetworkingPeer_SetupProtocol_m903815255 (NetworkingPeer_t1870069398 * __this, int32_t ___serverType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C"  void NetworkingPeer_Disconnect_m3238685947 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CallAuthenticate()
extern "C"  bool NetworkingPeer_CallAuthenticate_m1085005350 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C"  void NetworkingPeer_DisconnectToReconnect_m2591317187 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C"  bool NetworkingPeer_GetRegions_m1913293212 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C"  bool NetworkingPeer_OpFindFriends_m421399926 (NetworkingPeer_t1870069398 * __this, StringU5BU5D_t4054002952* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(EnterRoomParams)
extern "C"  bool NetworkingPeer_OpCreateGame_m4019120023 (NetworkingPeer_t1870069398 * __this, EnterRoomParams_t1470694169 * ___enterRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(EnterRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRoom_m2625605024 (NetworkingPeer_t1870069398 * __this, EnterRoomParams_t1470694169 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(OpJoinRandomRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRandomRoom_m1622444781 (NetworkingPeer_t1870069398 * __this, OpJoinRandomRoomParams_t1498792015 * ___opJoinRandomRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C"  bool NetworkingPeer_OpLeave_m431695621 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool NetworkingPeer_OpRaiseEvent_m3039247714 (NetworkingPeer_t1870069398 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t2943657104 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  void NetworkingPeer_ReadoutProperties_m3088065331 (NetworkingPeer_t1870069398 * __this, Hashtable_t284945826 * ___gameProperties0, Hashtable_t284945826 * ___pActorProperties1, int32_t ___targetActorNr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::ReadoutPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  Hashtable_t284945826 * NetworkingPeer_ReadoutPropertiesForActorNr_m3890360668 (NetworkingPeer_t1870069398 * __this, Hashtable_t284945826 * ___actorProperties0, int32_t ___actorNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C"  void NetworkingPeer_ChangeLocalID_m2576860202 (NetworkingPeer_t1870069398 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C"  void NetworkingPeer_LeftLobbyCleanup_m3998012212 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C"  void NetworkingPeer_LeftRoomCleanup_m782909349 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C"  void NetworkingPeer_LocalCleanupAnythingInstantiated_m1932669643 (NetworkingPeer_t1870069398 * __this, bool ___destroyInstantiatedGameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_GameEnteredOnGameServer_m2660256456 (NetworkingPeer_t1870069398 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_AddNewPlayer_m3140094041 (NetworkingPeer_t1870069398 * __this, int32_t ___ID0, PhotonPlayer_t1400510109 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_RemovePlayer_m2864887220 (NetworkingPeer_t1870069398 * __this, int32_t ___ID0, PhotonPlayer_t1400510109 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C"  void NetworkingPeer_RebuildPlayerListCopies_m742653232 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C"  void NetworkingPeer_ResetPhotonViewsOnSerialize_m4086781985 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_HandleEventLeave_m180451735 (NetworkingPeer_t1870069398 * __this, int32_t ___actorID0, EventData_t4282381190 * ___evLeave1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C"  void NetworkingPeer_CheckMasterClient_m2640021225 (NetworkingPeer_t1870069398 * __this, int32_t ___leavingPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C"  void NetworkingPeer_UpdateMasterClient_m3390846997 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C"  int32_t NetworkingPeer_ReturnLowestPlayerId_m1091844043 (Il2CppObject * __this /* static, unused */, PhotonPlayerU5BU5D_t3977425488* ___players0, int32_t ___playerIdToIgnore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C"  bool NetworkingPeer_SetMasterClient_m4206336910 (NetworkingPeer_t1870069398 * __this, int32_t ___playerId0, bool ___sync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C"  bool NetworkingPeer_SetMasterClient_m2817374223 (NetworkingPeer_t1870069398 * __this, int32_t ___nextMasterId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C"  PhotonPlayer_t1400510109 * NetworkingPeer_GetPlayerWithId_m2653271596 (NetworkingPeer_t1870069398 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C"  void NetworkingPeer_SendPlayerName_m1081713171 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C"  Hashtable_t284945826 * NetworkingPeer_GetLocalActorProperties_m695101737 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void NetworkingPeer_DebugReturn_m903692375 (NetworkingPeer_t1870069398 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_OnOperationResponse_m2888615928 (NetworkingPeer_t1870069398 * __this, OperationResponse_t1243130602 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void NetworkingPeer_OnStatusChanged_m2901979501 (NetworkingPeer_t1870069398 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_OnEvent_m507569738 (NetworkingPeer_t1870069398 * __this, EventData_t4282381190 * ___photonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnMessage(System.Object)
extern "C"  void NetworkingPeer_OnMessage_m4243085673 (NetworkingPeer_t1870069398 * __this, Il2CppObject * ___messages0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetupEncryption(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void NetworkingPeer_SetupEncryption_m1378103449 (NetworkingPeer_t1870069398 * __this, Dictionary_2_t903024962 * ___encryptionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C"  void NetworkingPeer_UpdatedActorList_m778388614 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t3230847821* ___actorsInRoom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C"  void NetworkingPeer_SendVacantViewIds_m348920383 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C"  void NetworkingPeer_SendMonoMessage_m3756049992 (Il2CppObject * __this /* static, unused */, int32_t ___methodString0, ObjectU5BU5D_t1108656482* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
extern "C"  void NetworkingPeer_ExecuteRpc_m1844326476 (NetworkingPeer_t1870069398 * __this, Hashtable_t284945826 * ___rpcData0, PhotonPlayer_t1400510109 * ___sender1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C"  bool NetworkingPeer_CheckTypeMatch_m2846991416 (NetworkingPeer_t1870069398 * __this, ParameterInfoU5BU5D_t2015293532* ___methodParameters0, TypeU5BU5D_t3339007067* ___callParameterTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C"  Hashtable_t284945826 * NetworkingPeer_SendInstantiate_m1738477599 (NetworkingPeer_t1870069398 * __this, String_t* ___prefabName0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___group3, Int32U5BU5D_t3230847821* ___viewIDs4, ObjectU5BU5D_t1108656482* ___data5, bool ___isGlobalObject6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * NetworkingPeer_DoInstantiate_m896993236 (NetworkingPeer_t1870069398 * __this, Hashtable_t284945826 * ___evData0, PhotonPlayer_t1400510109 * ___photonPlayer1, GameObject_t3674682005 * ___resourceGameObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C"  void NetworkingPeer_StoreInstantiationData_m2080712914 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId0, ObjectU5BU5D_t1108656482* ___instantiationData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C"  ObjectU5BU5D_t1108656482* NetworkingPeer_FetchInstantiationData_m3512038464 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C"  void NetworkingPeer_RemoveInstantiationData_m1036475751 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_DestroyPlayerObjects_m3081972308 (NetworkingPeer_t1870069398 * __this, int32_t ___playerId0, bool ___localOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C"  void NetworkingPeer_DestroyAll_m3177834461 (NetworkingPeer_t1870069398 * __this, bool ___localOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkingPeer_RemoveInstantiatedGO_m3645311232 (NetworkingPeer_t1870069398 * __this, GameObject_t3674682005 * ___go0, bool ___localOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_ServerCleanInstantiateAndDestroy_m3824077885 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiateId0, int32_t ___creatorId1, bool ___isRuntimeInstantiated2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_SendDestroyOfPlayer_m3294695614 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C"  void NetworkingPeer_SendDestroyOfAll_m3865537271 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m1649569280 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_RequestOwnership_m152523143 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID0, int32_t ___fromOwner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_TransferOwnership_m167016799 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID0, int32_t ___playerID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C"  bool NetworkingPeer_LocalCleanPhotonView_m3566813905 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C"  PhotonView_t1498838369 * NetworkingPeer_GetPhotonView_m1242264559 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C"  void NetworkingPeer_RegisterPhotonView_m3350456034 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___netView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m878784365 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1436567920 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C"  void NetworkingPeer_OpRemoveCompleteCache_m4095075047 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C"  void NetworkingPeer_RemoveCacheOfLeftPlayers_m3159634421 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C"  void NetworkingPeer_CleanRpcBufferIfMine_m1184676746 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m3795511067 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C"  void NetworkingPeer_RemoveRPCsInGroup_m4266240476 (NetworkingPeer_t1870069398 * __this, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C"  void NetworkingPeer_SetLevelPrefix_m393816734 (NetworkingPeer_t1870069398 * __this, int16_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m2232995305 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view0, String_t* ___methodName1, int32_t ___target2, PhotonPlayer_t1400510109 * ___player3, bool ___encrypt4, ObjectU5BU5D_t1108656482* ___parameters5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetReceivingEnabled_m140672486 (NetworkingPeer_t1870069398 * __this, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetReceivingEnabled_m3265369984 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t3230847821* ___enableGroups0, Int32U5BU5D_t3230847821* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetSendingEnabled_m3944413280 (NetworkingPeer_t1870069398 * __this, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetSendingEnabled_m3643104122 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t3230847821* ___enableGroups0, Int32U5BU5D_t3230847821* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C"  void NetworkingPeer_NewSceneLoaded_m2716600848 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C"  void NetworkingPeer_RunViewUpdate_m203367516 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C"  ObjectU5BU5D_t1108656482* NetworkingPeer_OnSerializeWrite_m4280332687 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(System.Object[],PhotonPlayer,System.Int32,System.Int16)
extern "C"  void NetworkingPeer_OnSerializeRead_m1918222411 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t1108656482* ___data0, PhotonPlayer_t1400510109 * ___sender1, int32_t ___networkTime2, int16_t ___correctPrefix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionWrite(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t1108656482* NetworkingPeer_DeltaCompressionWrite_m4241593885 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t1108656482* ___previousContent0, ObjectU5BU5D_t1108656482* ___currentContent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionRead(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t1108656482* NetworkingPeer_DeltaCompressionRead_m3023101224 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t1108656482* ___lastOnSerializeDataReceived0, ObjectU5BU5D_t1108656482* ___incomingData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C"  bool NetworkingPeer_AlmostEquals_m1193338430 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t1108656482* ___lastData0, ObjectU5BU5D_t1108656482* ___currentContent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object,System.Object)
extern "C"  bool NetworkingPeer_AlmostEquals_m1154697602 (NetworkingPeer_t1870069398 * __this, Il2CppObject * ___one0, Il2CppObject * ___two1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C"  bool NetworkingPeer_GetMethod_m2274081598 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t667441552 * ___monob0, String_t* ___methodType1, MethodInfo_t ** ___mi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C"  void NetworkingPeer_LoadLevelIfSynced_m444096504 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C"  void NetworkingPeer_SetLevelInPropsIfSynced_m87919441 (NetworkingPeer_t1870069398 * __this, Il2CppObject * ___levelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C"  void NetworkingPeer_SetApp_m3821194240 (NetworkingPeer_t1870069398 * __this, String_t* ___appId0, String_t* ___gameVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C"  bool NetworkingPeer_WebRpc_m2720471308 (NetworkingPeer_t1870069398 * __this, String_t* ___uriPath0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
