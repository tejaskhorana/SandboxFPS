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

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4046949162;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarController::.ctor()
extern "C"  void CarController__ctor_m774638835 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::.cctor()
extern "C"  void CarController__cctor_m2056871194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::get_Skidding()
extern "C"  bool CarController_get_Skidding_m3220553439 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Skidding(System.Boolean)
extern "C"  void CarController_set_Skidding_m2372401622 (CarController_t4046949162 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_BrakeInput()
extern "C"  float CarController_get_BrakeInput_m4243525797 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_BrakeInput(System.Single)
extern "C"  void CarController_set_BrakeInput_m2728143998 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSteerAngle()
extern "C"  float CarController_get_CurrentSteerAngle_m2887801463 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSpeed()
extern "C"  float CarController_get_CurrentSpeed_m2511903380 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_MaxSpeed()
extern "C"  float CarController_get_MaxSpeed_m4065537737 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_Revs()
extern "C"  float CarController_get_Revs_m3942040822 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Revs(System.Single)
extern "C"  void CarController_set_Revs_m593765837 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_AccelInput()
extern "C"  float CarController_get_AccelInput_m2180478024 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_AccelInput(System.Single)
extern "C"  void CarController_set_AccelInput_m532941243 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Start()
extern "C"  void CarController_Start_m4016743923 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::GearChanging()
extern "C"  void CarController_GearChanging_m1793536525 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::CurveFactor(System.Single)
extern "C"  float CarController_CurveFactor_m4101166632 (Il2CppObject * __this /* static, unused */, float ___factor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarController_ULerp_m209425156 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateGearFactor()
extern "C"  void CarController_CalculateGearFactor_m2862245077 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateRevs()
extern "C"  void CarController_CalculateRevs_m2464660807 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Move(System.Single,System.Single,System.Single,System.Single)
extern "C"  void CarController_Move_m2963145368 (CarController_t4046949162 * __this, float ___steering0, float ___accel1, float ___footbrake2, float ___handbrake3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CapSpeed()
extern "C"  void CarController_CapSpeed_m2433732678 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::ApplyDrive(System.Single,System.Single)
extern "C"  void CarController_ApplyDrive_m3814327171 (CarController_t4046949162 * __this, float ___accel0, float ___footbrake1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::SteerHelper()
extern "C"  void CarController_SteerHelper_m3065321264 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AddDownForce()
extern "C"  void CarController_AddDownForce_m1147587513 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CheckForWheelSpin()
extern "C"  void CarController_CheckForWheelSpin_m525563821 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::TractionControl()
extern "C"  void CarController_TractionControl_m1121289306 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AdjustTorque(System.Single)
extern "C"  void CarController_AdjustTorque_m2034854849 (CarController_t4046949162 * __this, float ___forwardSlip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::AnySkidSoundPlaying()
extern "C"  bool CarController_AnySkidSoundPlaying_m126380955 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
