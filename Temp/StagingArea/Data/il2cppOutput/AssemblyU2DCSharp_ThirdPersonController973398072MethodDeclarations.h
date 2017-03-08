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

// ThirdPersonController
struct ThirdPersonController_t973398072;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2416790841;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit2416790841.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void ThirdPersonController::.ctor()
extern "C"  void ThirdPersonController__ctor_m3236878387 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C"  void ThirdPersonController_Awake_m3474483606 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C"  void ThirdPersonController_UpdateSmoothedMovementDirection_m3028397643 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C"  void ThirdPersonController_ApplyJumping_m717621975 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C"  void ThirdPersonController_ApplyGravity_m3318383025 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float ThirdPersonController_CalculateJumpVerticalSpeed_m2400492457 (ThirdPersonController_t973398072 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C"  void ThirdPersonController_DidJump_m3766869854 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C"  void ThirdPersonController_Update_m3285844282 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void ThirdPersonController_OnControllerColliderHit_m4164669681 (ThirdPersonController_t973398072 * __this, ControllerColliderHit_t2416790841 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C"  float ThirdPersonController_GetSpeed_m2482707894 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C"  bool ThirdPersonController_IsJumping_m1032370415 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C"  bool ThirdPersonController_IsGrounded_m3122761517 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C"  Vector3_t4282066566  ThirdPersonController_GetDirection_m1117588480 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C"  bool ThirdPersonController_IsMovingBackwards_m218961597 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C"  float ThirdPersonController_GetLockCameraTimer_m3077395812 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C"  bool ThirdPersonController_IsMoving_m49501845 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C"  bool ThirdPersonController_HasJumpReachedApex_m3276515081 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C"  bool ThirdPersonController_IsGroundedWithTimeout_m3544923696 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C"  void ThirdPersonController_Reset_m883311328 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
