#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t3371348110;
// PhotonAnimatorView
struct PhotonAnimatorView_t2111556840;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoMecanimGUI
struct  DemoMecanimGUI_t3766420386  : public PunBehaviour_t2436907354
{
public:
	// UnityEngine.GUISkin DemoMecanimGUI::Skin
	GUISkin_t3371348110 * ___Skin_3;
	// PhotonAnimatorView DemoMecanimGUI::m_AnimatorView
	PhotonAnimatorView_t2111556840 * ___m_AnimatorView_4;
	// UnityEngine.Animator DemoMecanimGUI::m_RemoteAnimator
	Animator_t2776330603 * ___m_RemoteAnimator_5;
	// System.Single DemoMecanimGUI::m_SlideIn
	float ___m_SlideIn_6;
	// System.Single DemoMecanimGUI::m_FoundPlayerSlideIn
	float ___m_FoundPlayerSlideIn_7;
	// System.Boolean DemoMecanimGUI::m_IsOpen
	bool ___m_IsOpen_8;

public:
	inline static int32_t get_offset_of_Skin_3() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___Skin_3)); }
	inline GUISkin_t3371348110 * get_Skin_3() const { return ___Skin_3; }
	inline GUISkin_t3371348110 ** get_address_of_Skin_3() { return &___Skin_3; }
	inline void set_Skin_3(GUISkin_t3371348110 * value)
	{
		___Skin_3 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_3, value);
	}

	inline static int32_t get_offset_of_m_AnimatorView_4() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___m_AnimatorView_4)); }
	inline PhotonAnimatorView_t2111556840 * get_m_AnimatorView_4() const { return ___m_AnimatorView_4; }
	inline PhotonAnimatorView_t2111556840 ** get_address_of_m_AnimatorView_4() { return &___m_AnimatorView_4; }
	inline void set_m_AnimatorView_4(PhotonAnimatorView_t2111556840 * value)
	{
		___m_AnimatorView_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AnimatorView_4, value);
	}

	inline static int32_t get_offset_of_m_RemoteAnimator_5() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___m_RemoteAnimator_5)); }
	inline Animator_t2776330603 * get_m_RemoteAnimator_5() const { return ___m_RemoteAnimator_5; }
	inline Animator_t2776330603 ** get_address_of_m_RemoteAnimator_5() { return &___m_RemoteAnimator_5; }
	inline void set_m_RemoteAnimator_5(Animator_t2776330603 * value)
	{
		___m_RemoteAnimator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_RemoteAnimator_5, value);
	}

	inline static int32_t get_offset_of_m_SlideIn_6() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___m_SlideIn_6)); }
	inline float get_m_SlideIn_6() const { return ___m_SlideIn_6; }
	inline float* get_address_of_m_SlideIn_6() { return &___m_SlideIn_6; }
	inline void set_m_SlideIn_6(float value)
	{
		___m_SlideIn_6 = value;
	}

	inline static int32_t get_offset_of_m_FoundPlayerSlideIn_7() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___m_FoundPlayerSlideIn_7)); }
	inline float get_m_FoundPlayerSlideIn_7() const { return ___m_FoundPlayerSlideIn_7; }
	inline float* get_address_of_m_FoundPlayerSlideIn_7() { return &___m_FoundPlayerSlideIn_7; }
	inline void set_m_FoundPlayerSlideIn_7(float value)
	{
		___m_FoundPlayerSlideIn_7 = value;
	}

	inline static int32_t get_offset_of_m_IsOpen_8() { return static_cast<int32_t>(offsetof(DemoMecanimGUI_t3766420386, ___m_IsOpen_8)); }
	inline bool get_m_IsOpen_8() const { return ___m_IsOpen_8; }
	inline bool* get_address_of_m_IsOpen_8() { return &___m_IsOpen_8; }
	inline void set_m_IsOpen_8(bool value)
	{
		___m_IsOpen_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
