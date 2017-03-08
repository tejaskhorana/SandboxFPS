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

// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// Room
struct Room_t2553083;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t3977425488;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t1604655964;
// IPunPrefabPool
struct IPunPrefabPool_t2276860384;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t2952863562;
// TypedLobby
struct TypedLobby_t1020404140;
// System.String[]
struct StringU5BU5D_t4054002952;
// RoomOptions
struct RoomOptions_t979675427;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// RoomInfo[]
struct RoomInfoU5BU5D_t761346164;
// System.Object
struct Il2CppObject;
// RaiseEventOptions
struct RaiseEventOptions_t2943657104;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// PhotonView
struct PhotonView_t1498838369;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t2829110781;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_ConnectionState4018710579.h"
#include "AssemblyU2DCSharp_ClientState1483091814.h"
#include "AssemblyU2DCSharp_ServerConnection3129530017.h"
#include "AssemblyU2DCSharp_AuthenticationValues2964448730.h"
#include "AssemblyU2DCSharp_TypedLobby1020404140.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "AssemblyU2DCSharp_RoomOptions979675427.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"
#include "AssemblyU2DCSharp_MatchmakingMode910646995.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_RaiseEventOptions2943657104.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "AssemblyU2DCSharp_PhotonView1498838369.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_PhotonTargets3716398278.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void PhotonNetwork::.cctor()
extern "C"  void PhotonNetwork__cctor_m339060500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
extern "C"  String_t* PhotonNetwork_get_gameVersion_m532683127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
extern "C"  void PhotonNetwork_set_gameVersion_m2163869602 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C"  String_t* PhotonNetwork_get_ServerAddress_m2212996418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C"  bool PhotonNetwork_get_connected_m3518185483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
extern "C"  bool PhotonNetwork_get_connecting_m1693620120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C"  bool PhotonNetwork_get_connectedAndReady_m4069924151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
extern "C"  int32_t PhotonNetwork_get_connectionState_m804556193 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ClientState PhotonNetwork::get_connectionStateDetailed()
extern "C"  int32_t PhotonNetwork_get_connectionStateDetailed_m4199425950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
extern "C"  int32_t PhotonNetwork_get_Server_m2385723771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
extern "C"  AuthenticationValues_t2964448730 * PhotonNetwork_get_AuthValues_m2750611355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
extern "C"  void PhotonNetwork_set_AuthValues_m3106579448 (Il2CppObject * __this /* static, unused */, AuthenticationValues_t2964448730 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C"  Room_t2553083 * PhotonNetwork_get_room_m4104045837 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
extern "C"  PhotonPlayer_t1400510109 * PhotonNetwork_get_player_m2629430517 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
extern "C"  PhotonPlayer_t1400510109 * PhotonNetwork_get_masterClient_m2410427809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
extern "C"  String_t* PhotonNetwork_get_playerName_m2126678941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
extern "C"  void PhotonNetwork_set_playerName_m1283129070 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
extern "C"  PhotonPlayerU5BU5D_t3977425488* PhotonNetwork_get_playerList_m1877894549 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
extern "C"  PhotonPlayerU5BU5D_t3977425488* PhotonNetwork_get_otherPlayers_m1766293752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
extern "C"  List_1_t1604655964 * PhotonNetwork_get_Friends_m1312524706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
extern "C"  void PhotonNetwork_set_Friends_m1955765071 (Il2CppObject * __this /* static, unused */, List_1_t1604655964 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
extern "C"  int32_t PhotonNetwork_get_FriendsListAge_m2977822482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IPunPrefabPool PhotonNetwork::get_PrefabPool()
extern "C"  Il2CppObject * PhotonNetwork_get_PrefabPool_m3792664887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_PrefabPool(IPunPrefabPool)
extern "C"  void PhotonNetwork_set_PrefabPool_m2365821512 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
extern "C"  bool PhotonNetwork_get_offlineMode_m286556072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
extern "C"  void PhotonNetwork_set_offlineMode_m2243149431 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
extern "C"  bool PhotonNetwork_get_automaticallySyncScene_m3231863598 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
extern "C"  void PhotonNetwork_set_automaticallySyncScene_m1300580813 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C"  bool PhotonNetwork_get_autoCleanUpPlayerObjects_m3727050750 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
extern "C"  void PhotonNetwork_set_autoCleanUpPlayerObjects_m1474349213 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
extern "C"  bool PhotonNetwork_get_autoJoinLobby_m186535775 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
extern "C"  void PhotonNetwork_set_autoJoinLobby_m2511981550 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_EnableLobbyStatistics()
extern "C"  bool PhotonNetwork_get_EnableLobbyStatistics_m1710484920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_EnableLobbyStatistics(System.Boolean)
extern "C"  void PhotonNetwork_set_EnableLobbyStatistics_m8913543 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TypedLobbyInfo> PhotonNetwork::get_LobbyStatistics()
extern "C"  List_1_t2952863562 * PhotonNetwork_get_LobbyStatistics_m2235311508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_LobbyStatistics(System.Collections.Generic.List`1<TypedLobbyInfo>)
extern "C"  void PhotonNetwork_set_LobbyStatistics_m1297503801 (Il2CppObject * __this /* static, unused */, List_1_t2952863562 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
extern "C"  bool PhotonNetwork_get_insideLobby_m3974148540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C"  TypedLobby_t1020404140 * PhotonNetwork_get_lobby_m4141857909 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
extern "C"  void PhotonNetwork_set_lobby_m2535654532 (Il2CppObject * __this /* static, unused */, TypedLobby_t1020404140 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
extern "C"  int32_t PhotonNetwork_get_sendRate_m762077198 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
extern "C"  void PhotonNetwork_set_sendRate_m2916110369 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
extern "C"  int32_t PhotonNetwork_get_sendRateOnSerialize_m4230158133 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
extern "C"  void PhotonNetwork_set_sendRateOnSerialize_m259569668 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
extern "C"  bool PhotonNetwork_get_isMessageQueueRunning_m2157154957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
extern "C"  void PhotonNetwork_set_isMessageQueueRunning_m3968339612 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
extern "C"  int32_t PhotonNetwork_get_unreliableCommandsLimit_m1432182476 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
extern "C"  void PhotonNetwork_set_unreliableCommandsLimit_m3664487963 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
extern "C"  double PhotonNetwork_get_time_m1772017886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ServerTimestamp()
extern "C"  int32_t PhotonNetwork_get_ServerTimestamp_m3174588687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
extern "C"  bool PhotonNetwork_get_isMasterClient_m2816581815 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C"  bool PhotonNetwork_get_inRoom_m1914383872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
extern "C"  bool PhotonNetwork_get_isNonMasterClientInRoom_m2181396210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersOnMaster_m2655718995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersInRooms_m3572664963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
extern "C"  int32_t PhotonNetwork_get_countOfPlayers_m2502743634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
extern "C"  int32_t PhotonNetwork_get_countOfRooms_m30274008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
extern "C"  bool PhotonNetwork_get_NetworkStatisticsEnabled_m1979828432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_NetworkStatisticsEnabled_m4288246255 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
extern "C"  int32_t PhotonNetwork_get_ResentReliableCommands_m147202307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
extern "C"  bool PhotonNetwork_get_CrcCheckEnabled_m2070570031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_CrcCheckEnabled_m307773118 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
extern "C"  int32_t PhotonNetwork_get_PacketLossByCrcCheck_m2957143004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
extern "C"  int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m1716680149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
extern "C"  void PhotonNetwork_set_MaxResendsBeforeDisconnect_m849168104 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_QuickResends()
extern "C"  int32_t PhotonNetwork_get_QuickResends_m1946329425 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_QuickResends(System.Int32)
extern "C"  void PhotonNetwork_set_QuickResends_m805180388 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonNetwork_SwitchToProtocol_m2331771522 (Il2CppObject * __this /* static, unused */, uint8_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
extern "C"  bool PhotonNetwork_ConnectUsingSettings_m3332130446 (Il2CppObject * __this /* static, unused */, String_t* ___gameVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
extern "C"  bool PhotonNetwork_ConnectToMaster_m1805962143 (Il2CppObject * __this /* static, unused */, String_t* ___masterServerAddress0, int32_t ___port1, String_t* ___appID2, String_t* ___gameVersion3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::Reconnect()
extern "C"  bool PhotonNetwork_Reconnect_m1941339426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ReconnectAndRejoin()
extern "C"  bool PhotonNetwork_ReconnectAndRejoin_m3557324660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
extern "C"  bool PhotonNetwork_ConnectToBestCloudServer_m3955417532 (Il2CppObject * __this /* static, unused */, String_t* ___gameVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToRegion(CloudRegionCode,System.String)
extern "C"  bool PhotonNetwork_ConnectToRegion_m3642384084 (Il2CppObject * __this /* static, unused */, int32_t ___region0, String_t* ___gameVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
extern "C"  void PhotonNetwork_OverrideBestCloudServer_m3556346909 (Il2CppObject * __this /* static, unused */, int32_t ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
extern "C"  void PhotonNetwork_RefreshCloudServerRating_m3392028389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
extern "C"  void PhotonNetwork_NetworkStatisticsReset_m819734089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C"  String_t* PhotonNetwork_NetworkStatisticsToString_m2917984375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
extern "C"  void PhotonNetwork_InitializeSecurity_m70488027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
extern "C"  bool PhotonNetwork_VerifyCanUseNetwork_m2005600809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
extern "C"  void PhotonNetwork_Disconnect_m1579589767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
extern "C"  bool PhotonNetwork_FindFriends_m453797657 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
extern "C"  bool PhotonNetwork_CreateRoom_m296754132 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_CreateRoom_m1732513597 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t979675427 * ___roomOptions1, TypedLobby_t1020404140 * ___typedLobby2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C"  bool PhotonNetwork_CreateRoom_m1653654935 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t979675427 * ___roomOptions1, TypedLobby_t1020404140 * ___typedLobby2, StringU5BU5D_t4054002952* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
extern "C"  bool PhotonNetwork_JoinRoom_m2723061606 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String,System.String[])
extern "C"  bool PhotonNetwork_JoinRoom_m3249529792 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, StringU5BU5D_t4054002952* ___expectedUsers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_JoinOrCreateRoom_m2280982922 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t979675427 * ___roomOptions1, TypedLobby_t1020404140 * ___typedLobby2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C"  bool PhotonNetwork_JoinOrCreateRoom_m1227195876 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t979675427 * ___roomOptions1, TypedLobby_t1020404140 * ___typedLobby2, StringU5BU5D_t4054002952* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
extern "C"  bool PhotonNetwork_JoinRandomRoom_m323264447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
extern "C"  bool PhotonNetwork_JoinRandomRoom_m2018071634 (Il2CppObject * __this /* static, unused */, Hashtable_t284945826 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,MatchmakingMode,TypedLobby,System.String,System.String[])
extern "C"  bool PhotonNetwork_JoinRandomRoom_m1733418373 (Il2CppObject * __this /* static, unused */, Hashtable_t284945826 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, uint8_t ___matchingType2, TypedLobby_t1020404140 * ___typedLobby3, String_t* ___sqlLobbyFilter4, StringU5BU5D_t4054002952* ___expectedUsers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ReJoinRoom(System.String)
extern "C"  bool PhotonNetwork_ReJoinRoom_m648242483 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::EnterOfflineRoom(System.String,RoomOptions,System.Boolean)
extern "C"  void PhotonNetwork_EnterOfflineRoom_m2667743619 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t979675427 * ___roomOptions1, bool ___createdRoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
extern "C"  bool PhotonNetwork_JoinLobby_m1679757655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
extern "C"  bool PhotonNetwork_JoinLobby_m1472725931 (Il2CppObject * __this /* static, unused */, TypedLobby_t1020404140 * ___typedLobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
extern "C"  bool PhotonNetwork_LeaveLobby_m1572363094 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
extern "C"  bool PhotonNetwork_LeaveRoom_m2578196285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
extern "C"  RoomInfoU5BU5D_t761346164* PhotonNetwork_GetRoomList_m2940139160 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonNetwork_SetPlayerCustomProperties_m2607689902 (Il2CppObject * __this /* static, unused */, Hashtable_t284945826 * ___customProperties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemovePlayerCustomProperties(System.String[])
extern "C"  void PhotonNetwork_RemovePlayerCustomProperties_m1576535756 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___customPropertiesToDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool PhotonNetwork_RaiseEvent_m633330501 (Il2CppObject * __this /* static, unused */, uint8_t ___eventCode0, Il2CppObject * ___eventContent1, bool ___sendReliable2, RaiseEventOptions_t2943657104 * ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C"  int32_t PhotonNetwork_AllocateViewID_m65702650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
extern "C"  int32_t PhotonNetwork_AllocateSceneViewID_m3595014228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
extern "C"  int32_t PhotonNetwork_AllocateViewID_m418224459 (Il2CppObject * __this /* static, unused */, int32_t ___ownerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
extern "C"  Int32U5BU5D_t3230847821* PhotonNetwork_AllocateSceneViewIDs_m3272313844 (Il2CppObject * __this /* static, unused */, int32_t ___countOfNewViews0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
extern "C"  void PhotonNetwork_UnAllocateViewID_m3063945426 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  GameObject_t3674682005 * PhotonNetwork_Instantiate_m3216725381 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___group3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t3674682005 * PhotonNetwork_Instantiate_m3254862321 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___group3, ObjectU5BU5D_t1108656482* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t3674682005 * PhotonNetwork_InstantiateSceneObject_m1731013008 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___group3, ObjectU5BU5D_t1108656482* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
extern "C"  int32_t PhotonNetwork_GetPing_m3998731085 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
extern "C"  void PhotonNetwork_FetchServerTimestamp_m1089274660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
extern "C"  void PhotonNetwork_SendOutgoingCommands_m2546015527 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
extern "C"  bool PhotonNetwork_CloseConnection_m3235414660 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___kickPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
extern "C"  bool PhotonNetwork_SetMasterClient_m2932463133 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___masterClientPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
extern "C"  void PhotonNetwork_Destroy_m252146064 (Il2CppObject * __this /* static, unused */, PhotonView_t1498838369 * ___targetView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
extern "C"  void PhotonNetwork_Destroy_m477919625 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___targetGo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m3021862343 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m3789486229 (Il2CppObject * __this /* static, unused */, int32_t ___targetPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
extern "C"  void PhotonNetwork_DestroyAll_m1618407538 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
extern "C"  void PhotonNetwork_RemoveRPCs_m1760076608 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t1400510109 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
extern "C"  void PhotonNetwork_RemoveRPCs_m2277675516 (Il2CppObject * __this /* static, unused */, PhotonView_t1498838369 * ___targetPhotonView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
extern "C"  void PhotonNetwork_RemoveRPCsInGroup_m2648953552 (Il2CppObject * __this /* static, unused */, int32_t ___targetGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m267210412 (Il2CppObject * __this /* static, unused */, PhotonView_t1498838369 * ___view0, String_t* ___methodName1, int32_t ___target2, bool ___encrypt3, ObjectU5BU5D_t1108656482* ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m2152287543 (Il2CppObject * __this /* static, unused */, PhotonView_t1498838369 * ___view0, String_t* ___methodName1, PhotonPlayer_t1400510109 * ___targetPlayer2, bool ___encrpyt3, ObjectU5BU5D_t1108656482* ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
extern "C"  void PhotonNetwork_CacheSendMonoMessageTargets_m1751448378 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
extern "C"  HashSet_1_t2829110781 * PhotonNetwork_FindGameObjectsWithComponent_m1439906509 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetReceivingEnabled_m1986583410 (Il2CppObject * __this /* static, unused */, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetReceivingEnabled_m3364274700 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___enableGroups0, Int32U5BU5D_t3230847821* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetSendingEnabled_m2918402284 (Il2CppObject * __this /* static, unused */, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetSendingEnabled_m1194047750 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___enableGroups0, Int32U5BU5D_t3230847821* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
extern "C"  void PhotonNetwork_SetLevelPrefix_m4038379050 (Il2CppObject * __this /* static, unused */, int16_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
extern "C"  void PhotonNetwork_LoadLevel_m1678905958 (Il2CppObject * __this /* static, unused */, int32_t ___levelNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
extern "C"  void PhotonNetwork_LoadLevel_m963175565 (Il2CppObject * __this /* static, unused */, String_t* ___levelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
extern "C"  bool PhotonNetwork_WebRpc_m1783047400 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::<PhotonNetwork>m__3()
extern "C"  int32_t PhotonNetwork_U3CPhotonNetworkU3Em__3_m1092825747 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
