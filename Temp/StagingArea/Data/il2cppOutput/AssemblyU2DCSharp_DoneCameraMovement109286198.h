#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoneCameraMovement
struct  DoneCameraMovement_t109286198  : public MonoBehaviour_t667441552
{
public:
	// System.Single DoneCameraMovement::smooth
	float ___smooth_2;
	// UnityEngine.Transform DoneCameraMovement::player
	Transform_t1659122786 * ___player_3;
	// UnityEngine.Vector3 DoneCameraMovement::relCameraPos
	Vector3_t4282066566  ___relCameraPos_4;
	// System.Single DoneCameraMovement::relCameraPosMag
	float ___relCameraPosMag_5;
	// UnityEngine.Vector3 DoneCameraMovement::newPos
	Vector3_t4282066566  ___newPos_6;

public:
	inline static int32_t get_offset_of_smooth_2() { return static_cast<int32_t>(offsetof(DoneCameraMovement_t109286198, ___smooth_2)); }
	inline float get_smooth_2() const { return ___smooth_2; }
	inline float* get_address_of_smooth_2() { return &___smooth_2; }
	inline void set_smooth_2(float value)
	{
		___smooth_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DoneCameraMovement_t109286198, ___player_3)); }
	inline Transform_t1659122786 * get_player_3() const { return ___player_3; }
	inline Transform_t1659122786 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t1659122786 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_relCameraPos_4() { return static_cast<int32_t>(offsetof(DoneCameraMovement_t109286198, ___relCameraPos_4)); }
	inline Vector3_t4282066566  get_relCameraPos_4() const { return ___relCameraPos_4; }
	inline Vector3_t4282066566 * get_address_of_relCameraPos_4() { return &___relCameraPos_4; }
	inline void set_relCameraPos_4(Vector3_t4282066566  value)
	{
		___relCameraPos_4 = value;
	}

	inline static int32_t get_offset_of_relCameraPosMag_5() { return static_cast<int32_t>(offsetof(DoneCameraMovement_t109286198, ___relCameraPosMag_5)); }
	inline float get_relCameraPosMag_5() const { return ___relCameraPosMag_5; }
	inline float* get_address_of_relCameraPosMag_5() { return &___relCameraPosMag_5; }
	inline void set_relCameraPosMag_5(float value)
	{
		___relCameraPosMag_5 = value;
	}

	inline static int32_t get_offset_of_newPos_6() { return static_cast<int32_t>(offsetof(DoneCameraMovement_t109286198, ___newPos_6)); }
	inline Vector3_t4282066566  get_newPos_6() const { return ___newPos_6; }
	inline Vector3_t4282066566 * get_address_of_newPos_6() { return &___newPos_6; }
	inline void set_newPos_6(Vector3_t4282066566  value)
	{
		___newPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
