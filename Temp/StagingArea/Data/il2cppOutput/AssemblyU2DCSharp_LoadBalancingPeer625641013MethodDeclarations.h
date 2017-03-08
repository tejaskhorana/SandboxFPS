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

// LoadBalancingPeer
struct LoadBalancingPeer_t625641013;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t1020404140;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// RoomOptions
struct RoomOptions_t979675427;
// EnterRoomParams
struct EnterRoomParams_t1470694169;
// OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t1498792015;
// System.String[]
struct StringU5BU5D_t4054002952;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// System.Object
struct Il2CppObject;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// RaiseEventOptions
struct RaiseEventOptions_t2943657104;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_TypedLobby1020404140.h"
#include "AssemblyU2DCSharp_RoomOptions979675427.h"
#include "AssemblyU2DCSharp_EnterRoomParams1470694169.h"
#include "AssemblyU2DCSharp_OpJoinRandomRoomParams1498792015.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_AuthenticationValues2964448730.h"
#include "AssemblyU2DCSharp_EncryptionMode2170097638.h"
#include "AssemblyU2DCSharp_RaiseEventOptions2943657104.h"

// System.Void LoadBalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m2488233510 (LoadBalancingPeer_t625641013 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m4012626171 (LoadBalancingPeer_t625641013 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::get_IsProtocolSecure()
extern "C"  bool LoadBalancingPeer_get_IsProtocolSecure_m2249471676 (LoadBalancingPeer_t625641013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpGetRegions(System.String)
extern "C"  bool LoadBalancingPeer_OpGetRegions_m3928585470 (LoadBalancingPeer_t625641013 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinLobby(TypedLobby)
extern "C"  bool LoadBalancingPeer_OpJoinLobby_m4147639527 (LoadBalancingPeer_t625641013 * __this, TypedLobby_t1020404140 * ___lobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpLeaveLobby()
extern "C"  bool LoadBalancingPeer_OpLeaveLobby_m4104443546 (LoadBalancingPeer_t625641013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,RoomOptions)
extern "C"  void LoadBalancingPeer_RoomOptionsToOpParameters_m3882392668 (LoadBalancingPeer_t625641013 * __this, Dictionary_2_t903024962 * ___op0, RoomOptions_t979675427 * ___roomOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpCreateRoom(EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpCreateRoom_m1386904583 (LoadBalancingPeer_t625641013 * __this, EnterRoomParams_t1470694169 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinRoom(EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRoom_m2569421337 (LoadBalancingPeer_t625641013 * __this, EnterRoomParams_t1470694169 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinRandomRoom(OpJoinRandomRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRandomRoom_m1432789780 (LoadBalancingPeer_t625641013 * __this, OpJoinRandomRoomParams_t1498792015 * ___opJoinRandomRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpLeaveRoom_m2900877616 (LoadBalancingPeer_t625641013 * __this, bool ___becomeInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpFindFriends(System.String[])
extern "C"  bool LoadBalancingPeer_OpFindFriends_m1690425949 (LoadBalancingPeer_t625641013 * __this, StringU5BU5D_t4054002952* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadBalancingPeer_OpSetCustomPropertiesOfActor_m704146698 (LoadBalancingPeer_t625641013 * __this, int32_t ___actorNr0, Hashtable_t284945826 * ___actorProperties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfActor_m102008540 (LoadBalancingPeer_t625641013 * __this, int32_t ___actorNr0, Hashtable_t284945826 * ___actorProperties1, Hashtable_t284945826 * ___expectedProperties2, bool ___webForward3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C"  void LoadBalancingPeer_OpSetPropertyOfRoom_m163690269 (LoadBalancingPeer_t625641013 * __this, uint8_t ___propCode0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C"  bool LoadBalancingPeer_OpSetCustomPropertiesOfRoom_m802144085 (LoadBalancingPeer_t625641013 * __this, Hashtable_t284945826 * ___gameProperties0, bool ___broadcast1, uint8_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfRoom_m2591519961 (LoadBalancingPeer_t625641013 * __this, Hashtable_t284945826 * ___gameProperties0, Hashtable_t284945826 * ___expectedProperties1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpAuthenticate_m2898693635 (LoadBalancingPeer_t625641013 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t2964448730 * ___authValues2, String_t* ___regionCode3, bool ___getLobbyStatistics4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpAuthenticateOnce(System.String,System.String,AuthenticationValues,System.String,EncryptionMode,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  bool LoadBalancingPeer_OpAuthenticateOnce_m1331819217 (LoadBalancingPeer_t625641013 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t2964448730 * ___authValues2, String_t* ___regionCode3, int32_t ___encryptionMode4, uint8_t ___expectedProtocol5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadBalancingPeer_OpChangeGroups_m2053314701 (LoadBalancingPeer_t625641013 * __this, ByteU5BU5D_t4260760469* ___groupsToRemove0, ByteU5BU5D_t4260760469* ___groupsToAdd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool LoadBalancingPeer_OpRaiseEvent_m3344365961 (LoadBalancingPeer_t625641013 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t2943657104 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSettings(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSettings_m1655851477 (LoadBalancingPeer_t625641013 * __this, bool ___receiveLobbyStats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
