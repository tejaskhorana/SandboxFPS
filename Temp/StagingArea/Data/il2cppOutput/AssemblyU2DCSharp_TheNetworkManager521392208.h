#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t2243473986;
// PhotonView
struct PhotonView_t1498838369;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TheNetworkManager
struct  TheNetworkManager_t521392208  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text TheNetworkManager::connectionText
	Text_t9039225 * ___connectionText_3;
	// UnityEngine.Transform[] TheNetworkManager::spawnPoints
	TransformU5BU5D_t3792884695* ___spawnPoints_4;
	// UnityEngine.Camera TheNetworkManager::sceneCamera
	Camera_t2727095145 * ___sceneCamera_5;
	// UnityEngine.GameObject TheNetworkManager::serverWindow
	GameObject_t3674682005 * ___serverWindow_6;
	// UnityEngine.GameObject TheNetworkManager::healthBar
	GameObject_t3674682005 * ___healthBar_7;
	// UnityEngine.UI.InputField TheNetworkManager::username
	InputField_t609046876 * ___username_8;
	// UnityEngine.UI.InputField TheNetworkManager::roomName
	InputField_t609046876 * ___roomName_9;
	// UnityEngine.UI.InputField TheNetworkManager::roomList
	InputField_t609046876 * ___roomList_10;
	// UnityEngine.UI.InputField TheNetworkManager::messageWindow
	InputField_t609046876 * ___messageWindow_11;
	// UnityEngine.GameObject TheNetworkManager::player
	GameObject_t3674682005 * ___player_12;
	// System.Collections.Generic.Queue`1<System.String> TheNetworkManager::messages
	Queue_1_t2243473986 * ___messages_13;
	// PhotonView TheNetworkManager::photonView
	PhotonView_t1498838369 * ___photonView_14;

public:
	inline static int32_t get_offset_of_connectionText_3() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___connectionText_3)); }
	inline Text_t9039225 * get_connectionText_3() const { return ___connectionText_3; }
	inline Text_t9039225 ** get_address_of_connectionText_3() { return &___connectionText_3; }
	inline void set_connectionText_3(Text_t9039225 * value)
	{
		___connectionText_3 = value;
		Il2CppCodeGenWriteBarrier(&___connectionText_3, value);
	}

	inline static int32_t get_offset_of_spawnPoints_4() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___spawnPoints_4)); }
	inline TransformU5BU5D_t3792884695* get_spawnPoints_4() const { return ___spawnPoints_4; }
	inline TransformU5BU5D_t3792884695** get_address_of_spawnPoints_4() { return &___spawnPoints_4; }
	inline void set_spawnPoints_4(TransformU5BU5D_t3792884695* value)
	{
		___spawnPoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoints_4, value);
	}

	inline static int32_t get_offset_of_sceneCamera_5() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___sceneCamera_5)); }
	inline Camera_t2727095145 * get_sceneCamera_5() const { return ___sceneCamera_5; }
	inline Camera_t2727095145 ** get_address_of_sceneCamera_5() { return &___sceneCamera_5; }
	inline void set_sceneCamera_5(Camera_t2727095145 * value)
	{
		___sceneCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___sceneCamera_5, value);
	}

	inline static int32_t get_offset_of_serverWindow_6() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___serverWindow_6)); }
	inline GameObject_t3674682005 * get_serverWindow_6() const { return ___serverWindow_6; }
	inline GameObject_t3674682005 ** get_address_of_serverWindow_6() { return &___serverWindow_6; }
	inline void set_serverWindow_6(GameObject_t3674682005 * value)
	{
		___serverWindow_6 = value;
		Il2CppCodeGenWriteBarrier(&___serverWindow_6, value);
	}

	inline static int32_t get_offset_of_healthBar_7() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___healthBar_7)); }
	inline GameObject_t3674682005 * get_healthBar_7() const { return ___healthBar_7; }
	inline GameObject_t3674682005 ** get_address_of_healthBar_7() { return &___healthBar_7; }
	inline void set_healthBar_7(GameObject_t3674682005 * value)
	{
		___healthBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_7, value);
	}

	inline static int32_t get_offset_of_username_8() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___username_8)); }
	inline InputField_t609046876 * get_username_8() const { return ___username_8; }
	inline InputField_t609046876 ** get_address_of_username_8() { return &___username_8; }
	inline void set_username_8(InputField_t609046876 * value)
	{
		___username_8 = value;
		Il2CppCodeGenWriteBarrier(&___username_8, value);
	}

	inline static int32_t get_offset_of_roomName_9() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___roomName_9)); }
	inline InputField_t609046876 * get_roomName_9() const { return ___roomName_9; }
	inline InputField_t609046876 ** get_address_of_roomName_9() { return &___roomName_9; }
	inline void set_roomName_9(InputField_t609046876 * value)
	{
		___roomName_9 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_9, value);
	}

	inline static int32_t get_offset_of_roomList_10() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___roomList_10)); }
	inline InputField_t609046876 * get_roomList_10() const { return ___roomList_10; }
	inline InputField_t609046876 ** get_address_of_roomList_10() { return &___roomList_10; }
	inline void set_roomList_10(InputField_t609046876 * value)
	{
		___roomList_10 = value;
		Il2CppCodeGenWriteBarrier(&___roomList_10, value);
	}

	inline static int32_t get_offset_of_messageWindow_11() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___messageWindow_11)); }
	inline InputField_t609046876 * get_messageWindow_11() const { return ___messageWindow_11; }
	inline InputField_t609046876 ** get_address_of_messageWindow_11() { return &___messageWindow_11; }
	inline void set_messageWindow_11(InputField_t609046876 * value)
	{
		___messageWindow_11 = value;
		Il2CppCodeGenWriteBarrier(&___messageWindow_11, value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___player_12)); }
	inline GameObject_t3674682005 * get_player_12() const { return ___player_12; }
	inline GameObject_t3674682005 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(GameObject_t3674682005 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_messages_13() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___messages_13)); }
	inline Queue_1_t2243473986 * get_messages_13() const { return ___messages_13; }
	inline Queue_1_t2243473986 ** get_address_of_messages_13() { return &___messages_13; }
	inline void set_messages_13(Queue_1_t2243473986 * value)
	{
		___messages_13 = value;
		Il2CppCodeGenWriteBarrier(&___messages_13, value);
	}

	inline static int32_t get_offset_of_photonView_14() { return static_cast<int32_t>(offsetof(TheNetworkManager_t521392208, ___photonView_14)); }
	inline PhotonView_t1498838369 * get_photonView_14() const { return ___photonView_14; }
	inline PhotonView_t1498838369 ** get_address_of_photonView_14() { return &___photonView_14; }
	inline void set_photonView_14(PhotonView_t1498838369 * value)
	{
		___photonView_14 = value;
		Il2CppCodeGenWriteBarrier(&___photonView_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
