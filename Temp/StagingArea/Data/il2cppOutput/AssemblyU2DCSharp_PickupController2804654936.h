#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t2007702890;
// UnityEngine.Animation
struct Animation_t1724966010;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_PickupCharacterState3111038116.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_CollisionFlags490137529.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupController
struct  PickupController_t2804654936  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AnimationClip PickupController::idleAnimation
	AnimationClip_t2007702890 * ___idleAnimation_2;
	// UnityEngine.AnimationClip PickupController::walkAnimation
	AnimationClip_t2007702890 * ___walkAnimation_3;
	// UnityEngine.AnimationClip PickupController::runAnimation
	AnimationClip_t2007702890 * ___runAnimation_4;
	// UnityEngine.AnimationClip PickupController::jumpPoseAnimation
	AnimationClip_t2007702890 * ___jumpPoseAnimation_5;
	// System.Single PickupController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_6;
	// System.Single PickupController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_7;
	// System.Single PickupController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_8;
	// System.Single PickupController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_9;
	// System.Single PickupController::landAnimationSpeed
	float ___landAnimationSpeed_10;
	// UnityEngine.Animation PickupController::_animation
	Animation_t1724966010 * ____animation_11;
	// PickupCharacterState PickupController::_characterState
	int32_t ____characterState_12;
	// System.Single PickupController::walkSpeed
	float ___walkSpeed_13;
	// System.Single PickupController::trotSpeed
	float ___trotSpeed_14;
	// System.Single PickupController::runSpeed
	float ___runSpeed_15;
	// System.Single PickupController::inAirControlAcceleration
	float ___inAirControlAcceleration_16;
	// System.Single PickupController::jumpHeight
	float ___jumpHeight_17;
	// System.Single PickupController::gravity
	float ___gravity_18;
	// System.Single PickupController::speedSmoothing
	float ___speedSmoothing_19;
	// System.Single PickupController::rotateSpeed
	float ___rotateSpeed_20;
	// System.Single PickupController::trotAfterSeconds
	float ___trotAfterSeconds_21;
	// System.Boolean PickupController::canJump
	bool ___canJump_22;
	// System.Single PickupController::jumpRepeatTime
	float ___jumpRepeatTime_23;
	// System.Single PickupController::jumpTimeout
	float ___jumpTimeout_24;
	// System.Single PickupController::groundedTimeout
	float ___groundedTimeout_25;
	// System.Single PickupController::lockCameraTimer
	float ___lockCameraTimer_26;
	// UnityEngine.Vector3 PickupController::moveDirection
	Vector3_t4282066566  ___moveDirection_27;
	// System.Single PickupController::verticalSpeed
	float ___verticalSpeed_28;
	// System.Single PickupController::moveSpeed
	float ___moveSpeed_29;
	// UnityEngine.CollisionFlags PickupController::collisionFlags
	int32_t ___collisionFlags_30;
	// System.Boolean PickupController::jumping
	bool ___jumping_31;
	// System.Boolean PickupController::jumpingReachedApex
	bool ___jumpingReachedApex_32;
	// System.Boolean PickupController::movingBack
	bool ___movingBack_33;
	// System.Boolean PickupController::isMoving
	bool ___isMoving_34;
	// System.Single PickupController::walkTimeStart
	float ___walkTimeStart_35;
	// System.Single PickupController::lastJumpButtonTime
	float ___lastJumpButtonTime_36;
	// System.Single PickupController::lastJumpTime
	float ___lastJumpTime_37;
	// UnityEngine.Vector3 PickupController::inAirVelocity
	Vector3_t4282066566  ___inAirVelocity_38;
	// System.Single PickupController::lastGroundedTime
	float ___lastGroundedTime_39;
	// UnityEngine.Vector3 PickupController::velocity
	Vector3_t4282066566  ___velocity_40;
	// UnityEngine.Vector3 PickupController::lastPos
	Vector3_t4282066566  ___lastPos_41;
	// UnityEngine.Vector3 PickupController::remotePosition
	Vector3_t4282066566  ___remotePosition_42;
	// System.Boolean PickupController::isControllable
	bool ___isControllable_43;
	// System.Boolean PickupController::DoRotate
	bool ___DoRotate_44;
	// System.Single PickupController::RemoteSmoothing
	float ___RemoteSmoothing_45;
	// System.Boolean PickupController::AssignAsTagObject
	bool ___AssignAsTagObject_46;

public:
	inline static int32_t get_offset_of_idleAnimation_2() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___idleAnimation_2)); }
	inline AnimationClip_t2007702890 * get_idleAnimation_2() const { return ___idleAnimation_2; }
	inline AnimationClip_t2007702890 ** get_address_of_idleAnimation_2() { return &___idleAnimation_2; }
	inline void set_idleAnimation_2(AnimationClip_t2007702890 * value)
	{
		___idleAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation_2, value);
	}

	inline static int32_t get_offset_of_walkAnimation_3() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkAnimation_3)); }
	inline AnimationClip_t2007702890 * get_walkAnimation_3() const { return ___walkAnimation_3; }
	inline AnimationClip_t2007702890 ** get_address_of_walkAnimation_3() { return &___walkAnimation_3; }
	inline void set_walkAnimation_3(AnimationClip_t2007702890 * value)
	{
		___walkAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___walkAnimation_3, value);
	}

	inline static int32_t get_offset_of_runAnimation_4() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runAnimation_4)); }
	inline AnimationClip_t2007702890 * get_runAnimation_4() const { return ___runAnimation_4; }
	inline AnimationClip_t2007702890 ** get_address_of_runAnimation_4() { return &___runAnimation_4; }
	inline void set_runAnimation_4(AnimationClip_t2007702890 * value)
	{
		___runAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___runAnimation_4, value);
	}

	inline static int32_t get_offset_of_jumpPoseAnimation_5() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpPoseAnimation_5)); }
	inline AnimationClip_t2007702890 * get_jumpPoseAnimation_5() const { return ___jumpPoseAnimation_5; }
	inline AnimationClip_t2007702890 ** get_address_of_jumpPoseAnimation_5() { return &___jumpPoseAnimation_5; }
	inline void set_jumpPoseAnimation_5(AnimationClip_t2007702890 * value)
	{
		___jumpPoseAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___jumpPoseAnimation_5, value);
	}

	inline static int32_t get_offset_of_walkMaxAnimationSpeed_6() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkMaxAnimationSpeed_6)); }
	inline float get_walkMaxAnimationSpeed_6() const { return ___walkMaxAnimationSpeed_6; }
	inline float* get_address_of_walkMaxAnimationSpeed_6() { return &___walkMaxAnimationSpeed_6; }
	inline void set_walkMaxAnimationSpeed_6(float value)
	{
		___walkMaxAnimationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_trotMaxAnimationSpeed_7() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotMaxAnimationSpeed_7)); }
	inline float get_trotMaxAnimationSpeed_7() const { return ___trotMaxAnimationSpeed_7; }
	inline float* get_address_of_trotMaxAnimationSpeed_7() { return &___trotMaxAnimationSpeed_7; }
	inline void set_trotMaxAnimationSpeed_7(float value)
	{
		___trotMaxAnimationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_runMaxAnimationSpeed_8() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runMaxAnimationSpeed_8)); }
	inline float get_runMaxAnimationSpeed_8() const { return ___runMaxAnimationSpeed_8; }
	inline float* get_address_of_runMaxAnimationSpeed_8() { return &___runMaxAnimationSpeed_8; }
	inline void set_runMaxAnimationSpeed_8(float value)
	{
		___runMaxAnimationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_jumpAnimationSpeed_9() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpAnimationSpeed_9)); }
	inline float get_jumpAnimationSpeed_9() const { return ___jumpAnimationSpeed_9; }
	inline float* get_address_of_jumpAnimationSpeed_9() { return &___jumpAnimationSpeed_9; }
	inline void set_jumpAnimationSpeed_9(float value)
	{
		___jumpAnimationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_landAnimationSpeed_10() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___landAnimationSpeed_10)); }
	inline float get_landAnimationSpeed_10() const { return ___landAnimationSpeed_10; }
	inline float* get_address_of_landAnimationSpeed_10() { return &___landAnimationSpeed_10; }
	inline void set_landAnimationSpeed_10(float value)
	{
		___landAnimationSpeed_10 = value;
	}

	inline static int32_t get_offset_of__animation_11() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ____animation_11)); }
	inline Animation_t1724966010 * get__animation_11() const { return ____animation_11; }
	inline Animation_t1724966010 ** get_address_of__animation_11() { return &____animation_11; }
	inline void set__animation_11(Animation_t1724966010 * value)
	{
		____animation_11 = value;
		Il2CppCodeGenWriteBarrier(&____animation_11, value);
	}

	inline static int32_t get_offset_of__characterState_12() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ____characterState_12)); }
	inline int32_t get__characterState_12() const { return ____characterState_12; }
	inline int32_t* get_address_of__characterState_12() { return &____characterState_12; }
	inline void set__characterState_12(int32_t value)
	{
		____characterState_12 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_13() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkSpeed_13)); }
	inline float get_walkSpeed_13() const { return ___walkSpeed_13; }
	inline float* get_address_of_walkSpeed_13() { return &___walkSpeed_13; }
	inline void set_walkSpeed_13(float value)
	{
		___walkSpeed_13 = value;
	}

	inline static int32_t get_offset_of_trotSpeed_14() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotSpeed_14)); }
	inline float get_trotSpeed_14() const { return ___trotSpeed_14; }
	inline float* get_address_of_trotSpeed_14() { return &___trotSpeed_14; }
	inline void set_trotSpeed_14(float value)
	{
		___trotSpeed_14 = value;
	}

	inline static int32_t get_offset_of_runSpeed_15() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runSpeed_15)); }
	inline float get_runSpeed_15() const { return ___runSpeed_15; }
	inline float* get_address_of_runSpeed_15() { return &___runSpeed_15; }
	inline void set_runSpeed_15(float value)
	{
		___runSpeed_15 = value;
	}

	inline static int32_t get_offset_of_inAirControlAcceleration_16() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___inAirControlAcceleration_16)); }
	inline float get_inAirControlAcceleration_16() const { return ___inAirControlAcceleration_16; }
	inline float* get_address_of_inAirControlAcceleration_16() { return &___inAirControlAcceleration_16; }
	inline void set_inAirControlAcceleration_16(float value)
	{
		___inAirControlAcceleration_16 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_17() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpHeight_17)); }
	inline float get_jumpHeight_17() const { return ___jumpHeight_17; }
	inline float* get_address_of_jumpHeight_17() { return &___jumpHeight_17; }
	inline void set_jumpHeight_17(float value)
	{
		___jumpHeight_17 = value;
	}

	inline static int32_t get_offset_of_gravity_18() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___gravity_18)); }
	inline float get_gravity_18() const { return ___gravity_18; }
	inline float* get_address_of_gravity_18() { return &___gravity_18; }
	inline void set_gravity_18(float value)
	{
		___gravity_18 = value;
	}

	inline static int32_t get_offset_of_speedSmoothing_19() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___speedSmoothing_19)); }
	inline float get_speedSmoothing_19() const { return ___speedSmoothing_19; }
	inline float* get_address_of_speedSmoothing_19() { return &___speedSmoothing_19; }
	inline void set_speedSmoothing_19(float value)
	{
		___speedSmoothing_19 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_20() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___rotateSpeed_20)); }
	inline float get_rotateSpeed_20() const { return ___rotateSpeed_20; }
	inline float* get_address_of_rotateSpeed_20() { return &___rotateSpeed_20; }
	inline void set_rotateSpeed_20(float value)
	{
		___rotateSpeed_20 = value;
	}

	inline static int32_t get_offset_of_trotAfterSeconds_21() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotAfterSeconds_21)); }
	inline float get_trotAfterSeconds_21() const { return ___trotAfterSeconds_21; }
	inline float* get_address_of_trotAfterSeconds_21() { return &___trotAfterSeconds_21; }
	inline void set_trotAfterSeconds_21(float value)
	{
		___trotAfterSeconds_21 = value;
	}

	inline static int32_t get_offset_of_canJump_22() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___canJump_22)); }
	inline bool get_canJump_22() const { return ___canJump_22; }
	inline bool* get_address_of_canJump_22() { return &___canJump_22; }
	inline void set_canJump_22(bool value)
	{
		___canJump_22 = value;
	}

	inline static int32_t get_offset_of_jumpRepeatTime_23() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpRepeatTime_23)); }
	inline float get_jumpRepeatTime_23() const { return ___jumpRepeatTime_23; }
	inline float* get_address_of_jumpRepeatTime_23() { return &___jumpRepeatTime_23; }
	inline void set_jumpRepeatTime_23(float value)
	{
		___jumpRepeatTime_23 = value;
	}

	inline static int32_t get_offset_of_jumpTimeout_24() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpTimeout_24)); }
	inline float get_jumpTimeout_24() const { return ___jumpTimeout_24; }
	inline float* get_address_of_jumpTimeout_24() { return &___jumpTimeout_24; }
	inline void set_jumpTimeout_24(float value)
	{
		___jumpTimeout_24 = value;
	}

	inline static int32_t get_offset_of_groundedTimeout_25() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___groundedTimeout_25)); }
	inline float get_groundedTimeout_25() const { return ___groundedTimeout_25; }
	inline float* get_address_of_groundedTimeout_25() { return &___groundedTimeout_25; }
	inline void set_groundedTimeout_25(float value)
	{
		___groundedTimeout_25 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimer_26() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lockCameraTimer_26)); }
	inline float get_lockCameraTimer_26() const { return ___lockCameraTimer_26; }
	inline float* get_address_of_lockCameraTimer_26() { return &___lockCameraTimer_26; }
	inline void set_lockCameraTimer_26(float value)
	{
		___lockCameraTimer_26 = value;
	}

	inline static int32_t get_offset_of_moveDirection_27() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___moveDirection_27)); }
	inline Vector3_t4282066566  get_moveDirection_27() const { return ___moveDirection_27; }
	inline Vector3_t4282066566 * get_address_of_moveDirection_27() { return &___moveDirection_27; }
	inline void set_moveDirection_27(Vector3_t4282066566  value)
	{
		___moveDirection_27 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_28() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___verticalSpeed_28)); }
	inline float get_verticalSpeed_28() const { return ___verticalSpeed_28; }
	inline float* get_address_of_verticalSpeed_28() { return &___verticalSpeed_28; }
	inline void set_verticalSpeed_28(float value)
	{
		___verticalSpeed_28 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_29() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___moveSpeed_29)); }
	inline float get_moveSpeed_29() const { return ___moveSpeed_29; }
	inline float* get_address_of_moveSpeed_29() { return &___moveSpeed_29; }
	inline void set_moveSpeed_29(float value)
	{
		___moveSpeed_29 = value;
	}

	inline static int32_t get_offset_of_collisionFlags_30() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___collisionFlags_30)); }
	inline int32_t get_collisionFlags_30() const { return ___collisionFlags_30; }
	inline int32_t* get_address_of_collisionFlags_30() { return &___collisionFlags_30; }
	inline void set_collisionFlags_30(int32_t value)
	{
		___collisionFlags_30 = value;
	}

	inline static int32_t get_offset_of_jumping_31() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumping_31)); }
	inline bool get_jumping_31() const { return ___jumping_31; }
	inline bool* get_address_of_jumping_31() { return &___jumping_31; }
	inline void set_jumping_31(bool value)
	{
		___jumping_31 = value;
	}

	inline static int32_t get_offset_of_jumpingReachedApex_32() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpingReachedApex_32)); }
	inline bool get_jumpingReachedApex_32() const { return ___jumpingReachedApex_32; }
	inline bool* get_address_of_jumpingReachedApex_32() { return &___jumpingReachedApex_32; }
	inline void set_jumpingReachedApex_32(bool value)
	{
		___jumpingReachedApex_32 = value;
	}

	inline static int32_t get_offset_of_movingBack_33() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___movingBack_33)); }
	inline bool get_movingBack_33() const { return ___movingBack_33; }
	inline bool* get_address_of_movingBack_33() { return &___movingBack_33; }
	inline void set_movingBack_33(bool value)
	{
		___movingBack_33 = value;
	}

	inline static int32_t get_offset_of_isMoving_34() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___isMoving_34)); }
	inline bool get_isMoving_34() const { return ___isMoving_34; }
	inline bool* get_address_of_isMoving_34() { return &___isMoving_34; }
	inline void set_isMoving_34(bool value)
	{
		___isMoving_34 = value;
	}

	inline static int32_t get_offset_of_walkTimeStart_35() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkTimeStart_35)); }
	inline float get_walkTimeStart_35() const { return ___walkTimeStart_35; }
	inline float* get_address_of_walkTimeStart_35() { return &___walkTimeStart_35; }
	inline void set_walkTimeStart_35(float value)
	{
		___walkTimeStart_35 = value;
	}

	inline static int32_t get_offset_of_lastJumpButtonTime_36() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastJumpButtonTime_36)); }
	inline float get_lastJumpButtonTime_36() const { return ___lastJumpButtonTime_36; }
	inline float* get_address_of_lastJumpButtonTime_36() { return &___lastJumpButtonTime_36; }
	inline void set_lastJumpButtonTime_36(float value)
	{
		___lastJumpButtonTime_36 = value;
	}

	inline static int32_t get_offset_of_lastJumpTime_37() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastJumpTime_37)); }
	inline float get_lastJumpTime_37() const { return ___lastJumpTime_37; }
	inline float* get_address_of_lastJumpTime_37() { return &___lastJumpTime_37; }
	inline void set_lastJumpTime_37(float value)
	{
		___lastJumpTime_37 = value;
	}

	inline static int32_t get_offset_of_inAirVelocity_38() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___inAirVelocity_38)); }
	inline Vector3_t4282066566  get_inAirVelocity_38() const { return ___inAirVelocity_38; }
	inline Vector3_t4282066566 * get_address_of_inAirVelocity_38() { return &___inAirVelocity_38; }
	inline void set_inAirVelocity_38(Vector3_t4282066566  value)
	{
		___inAirVelocity_38 = value;
	}

	inline static int32_t get_offset_of_lastGroundedTime_39() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastGroundedTime_39)); }
	inline float get_lastGroundedTime_39() const { return ___lastGroundedTime_39; }
	inline float* get_address_of_lastGroundedTime_39() { return &___lastGroundedTime_39; }
	inline void set_lastGroundedTime_39(float value)
	{
		___lastGroundedTime_39 = value;
	}

	inline static int32_t get_offset_of_velocity_40() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___velocity_40)); }
	inline Vector3_t4282066566  get_velocity_40() const { return ___velocity_40; }
	inline Vector3_t4282066566 * get_address_of_velocity_40() { return &___velocity_40; }
	inline void set_velocity_40(Vector3_t4282066566  value)
	{
		___velocity_40 = value;
	}

	inline static int32_t get_offset_of_lastPos_41() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastPos_41)); }
	inline Vector3_t4282066566  get_lastPos_41() const { return ___lastPos_41; }
	inline Vector3_t4282066566 * get_address_of_lastPos_41() { return &___lastPos_41; }
	inline void set_lastPos_41(Vector3_t4282066566  value)
	{
		___lastPos_41 = value;
	}

	inline static int32_t get_offset_of_remotePosition_42() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___remotePosition_42)); }
	inline Vector3_t4282066566  get_remotePosition_42() const { return ___remotePosition_42; }
	inline Vector3_t4282066566 * get_address_of_remotePosition_42() { return &___remotePosition_42; }
	inline void set_remotePosition_42(Vector3_t4282066566  value)
	{
		___remotePosition_42 = value;
	}

	inline static int32_t get_offset_of_isControllable_43() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___isControllable_43)); }
	inline bool get_isControllable_43() const { return ___isControllable_43; }
	inline bool* get_address_of_isControllable_43() { return &___isControllable_43; }
	inline void set_isControllable_43(bool value)
	{
		___isControllable_43 = value;
	}

	inline static int32_t get_offset_of_DoRotate_44() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___DoRotate_44)); }
	inline bool get_DoRotate_44() const { return ___DoRotate_44; }
	inline bool* get_address_of_DoRotate_44() { return &___DoRotate_44; }
	inline void set_DoRotate_44(bool value)
	{
		___DoRotate_44 = value;
	}

	inline static int32_t get_offset_of_RemoteSmoothing_45() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___RemoteSmoothing_45)); }
	inline float get_RemoteSmoothing_45() const { return ___RemoteSmoothing_45; }
	inline float* get_address_of_RemoteSmoothing_45() { return &___RemoteSmoothing_45; }
	inline void set_RemoteSmoothing_45(float value)
	{
		___RemoteSmoothing_45 = value;
	}

	inline static int32_t get_offset_of_AssignAsTagObject_46() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___AssignAsTagObject_46)); }
	inline bool get_AssignAsTagObject_46() const { return ___AssignAsTagObject_46; }
	inline bool* get_address_of_AssignAsTagObject_46() { return &___AssignAsTagObject_46; }
	inline void set_AssignAsTagObject_46(bool value)
	{
		___AssignAsTagObject_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
