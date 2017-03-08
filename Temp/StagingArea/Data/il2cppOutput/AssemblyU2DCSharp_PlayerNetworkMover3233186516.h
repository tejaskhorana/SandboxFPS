#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;
// PlayerNetworkMover/Respawn
struct Respawn_t3937997005;
// PlayerNetworkMover/SendMessage
struct SendMessage_t1673701508;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerNetworkMover
struct  PlayerNetworkMover_t3233186516  : public MonoBehaviour_t2824676508
{
public:
	// UnityEngine.Texture PlayerNetworkMover::enemyTexture
	Texture_t2526458961 * ___enemyTexture_3;
	// System.Single PlayerNetworkMover::currentHealth
	float ___currentHealth_4;
	// System.Single PlayerNetworkMover::health
	float ___health_5;
	// System.Single PlayerNetworkMover::flashSpeed
	float ___flashSpeed_6;
	// UnityEngine.Color PlayerNetworkMover::flashColor
	Color_t4194546905  ___flashColor_7;
	// UnityEngine.UI.Slider PlayerNetworkMover::healthSlider
	Slider_t79469677 * ___healthSlider_8;
	// UnityEngine.GameObject PlayerNetworkMover::visibilityCapsule
	GameObject_t3674682005 * ___visibilityCapsule_9;
	// UnityEngine.Vector3 PlayerNetworkMover::position
	Vector3_t4282066566  ___position_10;
	// UnityEngine.Quaternion PlayerNetworkMover::rotation
	Quaternion_t1553702882  ___rotation_11;
	// UnityEngine.Animator PlayerNetworkMover::anim
	Animator_t2776330603 * ___anim_12;
	// System.Single PlayerNetworkMover::charControllerHeight
	float ___charControllerHeight_13;
	// UnityEngine.Vector3 PlayerNetworkMover::visibleCapsuleScale
	Vector3_t4282066566  ___visibleCapsuleScale_14;
	// System.Single PlayerNetworkMover::smoothing
	float ___smoothing_15;
	// System.Int32 PlayerNetworkMover::aim
	int32_t ___aim_16;
	// System.Int32 PlayerNetworkMover::sprint
	int32_t ___sprint_17;
	// System.Boolean PlayerNetworkMover::initialLoad
	bool ___initialLoad_18;
	// PlayerNetworkMover/Respawn PlayerNetworkMover::RespawnMe
	Respawn_t3937997005 * ___RespawnMe_19;
	// PlayerNetworkMover/SendMessage PlayerNetworkMover::SendNetworkMessage
	SendMessage_t1673701508 * ___SendNetworkMessage_20;

public:
	inline static int32_t get_offset_of_enemyTexture_3() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___enemyTexture_3)); }
	inline Texture_t2526458961 * get_enemyTexture_3() const { return ___enemyTexture_3; }
	inline Texture_t2526458961 ** get_address_of_enemyTexture_3() { return &___enemyTexture_3; }
	inline void set_enemyTexture_3(Texture_t2526458961 * value)
	{
		___enemyTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTexture_3, value);
	}

	inline static int32_t get_offset_of_currentHealth_4() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___currentHealth_4)); }
	inline float get_currentHealth_4() const { return ___currentHealth_4; }
	inline float* get_address_of_currentHealth_4() { return &___currentHealth_4; }
	inline void set_currentHealth_4(float value)
	{
		___currentHealth_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___health_5)); }
	inline float get_health_5() const { return ___health_5; }
	inline float* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(float value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_flashSpeed_6() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___flashSpeed_6)); }
	inline float get_flashSpeed_6() const { return ___flashSpeed_6; }
	inline float* get_address_of_flashSpeed_6() { return &___flashSpeed_6; }
	inline void set_flashSpeed_6(float value)
	{
		___flashSpeed_6 = value;
	}

	inline static int32_t get_offset_of_flashColor_7() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___flashColor_7)); }
	inline Color_t4194546905  get_flashColor_7() const { return ___flashColor_7; }
	inline Color_t4194546905 * get_address_of_flashColor_7() { return &___flashColor_7; }
	inline void set_flashColor_7(Color_t4194546905  value)
	{
		___flashColor_7 = value;
	}

	inline static int32_t get_offset_of_healthSlider_8() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___healthSlider_8)); }
	inline Slider_t79469677 * get_healthSlider_8() const { return ___healthSlider_8; }
	inline Slider_t79469677 ** get_address_of_healthSlider_8() { return &___healthSlider_8; }
	inline void set_healthSlider_8(Slider_t79469677 * value)
	{
		___healthSlider_8 = value;
		Il2CppCodeGenWriteBarrier(&___healthSlider_8, value);
	}

	inline static int32_t get_offset_of_visibilityCapsule_9() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___visibilityCapsule_9)); }
	inline GameObject_t3674682005 * get_visibilityCapsule_9() const { return ___visibilityCapsule_9; }
	inline GameObject_t3674682005 ** get_address_of_visibilityCapsule_9() { return &___visibilityCapsule_9; }
	inline void set_visibilityCapsule_9(GameObject_t3674682005 * value)
	{
		___visibilityCapsule_9 = value;
		Il2CppCodeGenWriteBarrier(&___visibilityCapsule_9, value);
	}

	inline static int32_t get_offset_of_position_10() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___position_10)); }
	inline Vector3_t4282066566  get_position_10() const { return ___position_10; }
	inline Vector3_t4282066566 * get_address_of_position_10() { return &___position_10; }
	inline void set_position_10(Vector3_t4282066566  value)
	{
		___position_10 = value;
	}

	inline static int32_t get_offset_of_rotation_11() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___rotation_11)); }
	inline Quaternion_t1553702882  get_rotation_11() const { return ___rotation_11; }
	inline Quaternion_t1553702882 * get_address_of_rotation_11() { return &___rotation_11; }
	inline void set_rotation_11(Quaternion_t1553702882  value)
	{
		___rotation_11 = value;
	}

	inline static int32_t get_offset_of_anim_12() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___anim_12)); }
	inline Animator_t2776330603 * get_anim_12() const { return ___anim_12; }
	inline Animator_t2776330603 ** get_address_of_anim_12() { return &___anim_12; }
	inline void set_anim_12(Animator_t2776330603 * value)
	{
		___anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___anim_12, value);
	}

	inline static int32_t get_offset_of_charControllerHeight_13() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___charControllerHeight_13)); }
	inline float get_charControllerHeight_13() const { return ___charControllerHeight_13; }
	inline float* get_address_of_charControllerHeight_13() { return &___charControllerHeight_13; }
	inline void set_charControllerHeight_13(float value)
	{
		___charControllerHeight_13 = value;
	}

	inline static int32_t get_offset_of_visibleCapsuleScale_14() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___visibleCapsuleScale_14)); }
	inline Vector3_t4282066566  get_visibleCapsuleScale_14() const { return ___visibleCapsuleScale_14; }
	inline Vector3_t4282066566 * get_address_of_visibleCapsuleScale_14() { return &___visibleCapsuleScale_14; }
	inline void set_visibleCapsuleScale_14(Vector3_t4282066566  value)
	{
		___visibleCapsuleScale_14 = value;
	}

	inline static int32_t get_offset_of_smoothing_15() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___smoothing_15)); }
	inline float get_smoothing_15() const { return ___smoothing_15; }
	inline float* get_address_of_smoothing_15() { return &___smoothing_15; }
	inline void set_smoothing_15(float value)
	{
		___smoothing_15 = value;
	}

	inline static int32_t get_offset_of_aim_16() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___aim_16)); }
	inline int32_t get_aim_16() const { return ___aim_16; }
	inline int32_t* get_address_of_aim_16() { return &___aim_16; }
	inline void set_aim_16(int32_t value)
	{
		___aim_16 = value;
	}

	inline static int32_t get_offset_of_sprint_17() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___sprint_17)); }
	inline int32_t get_sprint_17() const { return ___sprint_17; }
	inline int32_t* get_address_of_sprint_17() { return &___sprint_17; }
	inline void set_sprint_17(int32_t value)
	{
		___sprint_17 = value;
	}

	inline static int32_t get_offset_of_initialLoad_18() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___initialLoad_18)); }
	inline bool get_initialLoad_18() const { return ___initialLoad_18; }
	inline bool* get_address_of_initialLoad_18() { return &___initialLoad_18; }
	inline void set_initialLoad_18(bool value)
	{
		___initialLoad_18 = value;
	}

	inline static int32_t get_offset_of_RespawnMe_19() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___RespawnMe_19)); }
	inline Respawn_t3937997005 * get_RespawnMe_19() const { return ___RespawnMe_19; }
	inline Respawn_t3937997005 ** get_address_of_RespawnMe_19() { return &___RespawnMe_19; }
	inline void set_RespawnMe_19(Respawn_t3937997005 * value)
	{
		___RespawnMe_19 = value;
		Il2CppCodeGenWriteBarrier(&___RespawnMe_19, value);
	}

	inline static int32_t get_offset_of_SendNetworkMessage_20() { return static_cast<int32_t>(offsetof(PlayerNetworkMover_t3233186516, ___SendNetworkMessage_20)); }
	inline SendMessage_t1673701508 * get_SendNetworkMessage_20() const { return ___SendNetworkMessage_20; }
	inline SendMessage_t1673701508 ** get_address_of_SendNetworkMessage_20() { return &___SendNetworkMessage_20; }
	inline void set_SendNetworkMessage_20(SendMessage_t1673701508 * value)
	{
		___SendNetworkMessage_20 = value;
		Il2CppCodeGenWriteBarrier(&___SendNetworkMessage_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
