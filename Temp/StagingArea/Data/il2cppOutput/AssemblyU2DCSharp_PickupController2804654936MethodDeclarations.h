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

// PickupController
struct PickupController_t2804654936;
// PhotonStream
struct PhotonStream_t1494272828;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2416790841;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit2416790841.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PickupController::.ctor()
extern "C"  void PickupController__ctor_m3721381443 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
extern "C"  void PickupController_Awake_m3958986662 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
extern "C"  void PickupController_Update_m1125569834 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupController_OnPhotonSerializeView_m2075749378 (PickupController_t2804654936 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
extern "C"  void PickupController_UpdateSmoothedMovementDirection_m1812342875 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
extern "C"  void PickupController_ApplyJumping_m2813340359 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
extern "C"  void PickupController_ApplyGravity_m1119134113 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float PickupController_CalculateJumpVerticalSpeed_m3142106273 (PickupController_t2804654936 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
extern "C"  void PickupController_DidJump_m1222871406 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void PickupController_OnControllerColliderHit_m2892613857 (PickupController_t2804654936 * __this, ControllerColliderHit_t2416790841 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
extern "C"  float PickupController_GetSpeed_m1602567102 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
extern "C"  bool PickupController_IsJumping_m3521927959 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
extern "C"  bool PickupController_IsGrounded_m2989634053 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
extern "C"  Vector3_t4282066566  PickupController_GetDirection_m3572165284 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
extern "C"  bool PickupController_IsMovingBackwards_m123736293 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
extern "C"  float PickupController_GetLockCameraTimer_m2458880364 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
extern "C"  bool PickupController_IsMoving_m268357485 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
extern "C"  bool PickupController_HasJumpReachedApex_m324530657 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
extern "C"  bool PickupController_IsGroundedWithTimeout_m432333912 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
extern "C"  void PickupController_Reset_m1367814384 (PickupController_t2804654936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
