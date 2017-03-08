﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Water.Water
struct Water_t1031722193;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Water_Water_2817869650.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void UnityStandardAssets.Water.Water::.ctor()
extern "C"  void Water__ctor_m4040366884 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern "C"  void Water_OnWillRenderObject_m2996776774 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern "C"  void Water_OnDisable_m3687857547 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::Update()
extern "C"  void Water_Update_m2424183913 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void Water_UpdateCameraModes_m560766530 (Water_t1031722193 * __this, Camera_t2727095145 * ___src0, Camera_t2727095145 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C"  void Water_CreateWaterObjects_m972247393 (Water_t1031722193 * __this, Camera_t2727095145 * ___currentCamera0, Camera_t2727095145 ** ___reflectionCamera1, Camera_t2727095145 ** ___refractionCamera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C"  int32_t Water_GetWaterMode_m3917521635 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern "C"  int32_t Water_FindHardwareWaterSupport_m3110017048 (Water_t1031722193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t4282066567  Water_CameraSpacePlane_m515889105 (Water_t1031722193 * __this, Camera_t2727095145 * ___cam0, Vector3_t4282066566  ___pos1, Vector3_t4282066566  ___normal2, float ___sideSign3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C"  void Water_CalculateReflectionMatrix_m2871451352 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333 * ___reflectionMat0, Vector4_t4282066567  ___plane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
