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

// UnityStandardAssets.Vehicles.Car.CarAudio
struct CarAudio_t433379788;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::.ctor()
extern "C"  void CarAudio__ctor_m206445921 (CarAudio_t433379788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StartSound()
extern "C"  void CarAudio_StartSound_m1648265424 (CarAudio_t433379788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StopSound()
extern "C"  void CarAudio_StopSound_m695287404 (CarAudio_t433379788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::Update()
extern "C"  void CarAudio_Update_m3831718348 (CarAudio_t433379788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
extern "C"  AudioSource_t1740077639 * CarAudio_SetUpEngineAudioSource_m3584026759 (CarAudio_t433379788 * __this, AudioClip_t794140988 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarAudio_ULerp_m3088411966 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
