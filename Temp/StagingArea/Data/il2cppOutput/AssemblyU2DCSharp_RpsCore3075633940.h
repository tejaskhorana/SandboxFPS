#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// PunTurnManager
struct PunTurnManager_t2757607879;

#include "AssemblyU2DCSharp_Photon_PunBehaviour2436907354.h"
#include "AssemblyU2DCSharp_RpsCore_Hand1846992554.h"
#include "AssemblyU2DCSharp_RpsCore_ResultType4082219762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsCore
struct  RpsCore_t3075633940  : public PunBehaviour_t2436907354
{
public:
	// UnityEngine.RectTransform RpsCore::ConnectUiView
	RectTransform_t972643934 * ___ConnectUiView_3;
	// UnityEngine.RectTransform RpsCore::GameUiView
	RectTransform_t972643934 * ___GameUiView_4;
	// UnityEngine.CanvasGroup RpsCore::ButtonCanvasGroup
	CanvasGroup_t3702418109 * ___ButtonCanvasGroup_5;
	// UnityEngine.RectTransform RpsCore::TimerFillImage
	RectTransform_t972643934 * ___TimerFillImage_6;
	// UnityEngine.UI.Text RpsCore::TurnText
	Text_t9039225 * ___TurnText_7;
	// UnityEngine.UI.Text RpsCore::TimeText
	Text_t9039225 * ___TimeText_8;
	// UnityEngine.UI.Text RpsCore::RemotePlayerText
	Text_t9039225 * ___RemotePlayerText_9;
	// UnityEngine.UI.Text RpsCore::LocalPlayerText
	Text_t9039225 * ___LocalPlayerText_10;
	// UnityEngine.UI.Image RpsCore::WinOrLossImage
	Image_t538875265 * ___WinOrLossImage_11;
	// UnityEngine.UI.Image RpsCore::localSelectionImage
	Image_t538875265 * ___localSelectionImage_12;
	// RpsCore/Hand RpsCore::localSelection
	int32_t ___localSelection_13;
	// UnityEngine.UI.Image RpsCore::remoteSelectionImage
	Image_t538875265 * ___remoteSelectionImage_14;
	// RpsCore/Hand RpsCore::remoteSelection
	int32_t ___remoteSelection_15;
	// UnityEngine.Sprite RpsCore::SelectedRock
	Sprite_t3199167241 * ___SelectedRock_16;
	// UnityEngine.Sprite RpsCore::SelectedPaper
	Sprite_t3199167241 * ___SelectedPaper_17;
	// UnityEngine.Sprite RpsCore::SelectedScissors
	Sprite_t3199167241 * ___SelectedScissors_18;
	// UnityEngine.Sprite RpsCore::SpriteWin
	Sprite_t3199167241 * ___SpriteWin_19;
	// UnityEngine.Sprite RpsCore::SpriteLose
	Sprite_t3199167241 * ___SpriteLose_20;
	// UnityEngine.Sprite RpsCore::SpriteDraw
	Sprite_t3199167241 * ___SpriteDraw_21;
	// UnityEngine.RectTransform RpsCore::DisconnectedPanel
	RectTransform_t972643934 * ___DisconnectedPanel_22;
	// RpsCore/ResultType RpsCore::result
	int32_t ___result_23;
	// PunTurnManager RpsCore::turnManager
	PunTurnManager_t2757607879 * ___turnManager_24;
	// RpsCore/Hand RpsCore::randomHand
	int32_t ___randomHand_25;
	// System.Boolean RpsCore::IsShowingResults
	bool ___IsShowingResults_26;

public:
	inline static int32_t get_offset_of_ConnectUiView_3() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___ConnectUiView_3)); }
	inline RectTransform_t972643934 * get_ConnectUiView_3() const { return ___ConnectUiView_3; }
	inline RectTransform_t972643934 ** get_address_of_ConnectUiView_3() { return &___ConnectUiView_3; }
	inline void set_ConnectUiView_3(RectTransform_t972643934 * value)
	{
		___ConnectUiView_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectUiView_3, value);
	}

	inline static int32_t get_offset_of_GameUiView_4() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___GameUiView_4)); }
	inline RectTransform_t972643934 * get_GameUiView_4() const { return ___GameUiView_4; }
	inline RectTransform_t972643934 ** get_address_of_GameUiView_4() { return &___GameUiView_4; }
	inline void set_GameUiView_4(RectTransform_t972643934 * value)
	{
		___GameUiView_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameUiView_4, value);
	}

	inline static int32_t get_offset_of_ButtonCanvasGroup_5() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___ButtonCanvasGroup_5)); }
	inline CanvasGroup_t3702418109 * get_ButtonCanvasGroup_5() const { return ___ButtonCanvasGroup_5; }
	inline CanvasGroup_t3702418109 ** get_address_of_ButtonCanvasGroup_5() { return &___ButtonCanvasGroup_5; }
	inline void set_ButtonCanvasGroup_5(CanvasGroup_t3702418109 * value)
	{
		___ButtonCanvasGroup_5 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonCanvasGroup_5, value);
	}

	inline static int32_t get_offset_of_TimerFillImage_6() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___TimerFillImage_6)); }
	inline RectTransform_t972643934 * get_TimerFillImage_6() const { return ___TimerFillImage_6; }
	inline RectTransform_t972643934 ** get_address_of_TimerFillImage_6() { return &___TimerFillImage_6; }
	inline void set_TimerFillImage_6(RectTransform_t972643934 * value)
	{
		___TimerFillImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___TimerFillImage_6, value);
	}

	inline static int32_t get_offset_of_TurnText_7() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___TurnText_7)); }
	inline Text_t9039225 * get_TurnText_7() const { return ___TurnText_7; }
	inline Text_t9039225 ** get_address_of_TurnText_7() { return &___TurnText_7; }
	inline void set_TurnText_7(Text_t9039225 * value)
	{
		___TurnText_7 = value;
		Il2CppCodeGenWriteBarrier(&___TurnText_7, value);
	}

	inline static int32_t get_offset_of_TimeText_8() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___TimeText_8)); }
	inline Text_t9039225 * get_TimeText_8() const { return ___TimeText_8; }
	inline Text_t9039225 ** get_address_of_TimeText_8() { return &___TimeText_8; }
	inline void set_TimeText_8(Text_t9039225 * value)
	{
		___TimeText_8 = value;
		Il2CppCodeGenWriteBarrier(&___TimeText_8, value);
	}

	inline static int32_t get_offset_of_RemotePlayerText_9() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___RemotePlayerText_9)); }
	inline Text_t9039225 * get_RemotePlayerText_9() const { return ___RemotePlayerText_9; }
	inline Text_t9039225 ** get_address_of_RemotePlayerText_9() { return &___RemotePlayerText_9; }
	inline void set_RemotePlayerText_9(Text_t9039225 * value)
	{
		___RemotePlayerText_9 = value;
		Il2CppCodeGenWriteBarrier(&___RemotePlayerText_9, value);
	}

	inline static int32_t get_offset_of_LocalPlayerText_10() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___LocalPlayerText_10)); }
	inline Text_t9039225 * get_LocalPlayerText_10() const { return ___LocalPlayerText_10; }
	inline Text_t9039225 ** get_address_of_LocalPlayerText_10() { return &___LocalPlayerText_10; }
	inline void set_LocalPlayerText_10(Text_t9039225 * value)
	{
		___LocalPlayerText_10 = value;
		Il2CppCodeGenWriteBarrier(&___LocalPlayerText_10, value);
	}

	inline static int32_t get_offset_of_WinOrLossImage_11() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___WinOrLossImage_11)); }
	inline Image_t538875265 * get_WinOrLossImage_11() const { return ___WinOrLossImage_11; }
	inline Image_t538875265 ** get_address_of_WinOrLossImage_11() { return &___WinOrLossImage_11; }
	inline void set_WinOrLossImage_11(Image_t538875265 * value)
	{
		___WinOrLossImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___WinOrLossImage_11, value);
	}

	inline static int32_t get_offset_of_localSelectionImage_12() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___localSelectionImage_12)); }
	inline Image_t538875265 * get_localSelectionImage_12() const { return ___localSelectionImage_12; }
	inline Image_t538875265 ** get_address_of_localSelectionImage_12() { return &___localSelectionImage_12; }
	inline void set_localSelectionImage_12(Image_t538875265 * value)
	{
		___localSelectionImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___localSelectionImage_12, value);
	}

	inline static int32_t get_offset_of_localSelection_13() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___localSelection_13)); }
	inline int32_t get_localSelection_13() const { return ___localSelection_13; }
	inline int32_t* get_address_of_localSelection_13() { return &___localSelection_13; }
	inline void set_localSelection_13(int32_t value)
	{
		___localSelection_13 = value;
	}

	inline static int32_t get_offset_of_remoteSelectionImage_14() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___remoteSelectionImage_14)); }
	inline Image_t538875265 * get_remoteSelectionImage_14() const { return ___remoteSelectionImage_14; }
	inline Image_t538875265 ** get_address_of_remoteSelectionImage_14() { return &___remoteSelectionImage_14; }
	inline void set_remoteSelectionImage_14(Image_t538875265 * value)
	{
		___remoteSelectionImage_14 = value;
		Il2CppCodeGenWriteBarrier(&___remoteSelectionImage_14, value);
	}

	inline static int32_t get_offset_of_remoteSelection_15() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___remoteSelection_15)); }
	inline int32_t get_remoteSelection_15() const { return ___remoteSelection_15; }
	inline int32_t* get_address_of_remoteSelection_15() { return &___remoteSelection_15; }
	inline void set_remoteSelection_15(int32_t value)
	{
		___remoteSelection_15 = value;
	}

	inline static int32_t get_offset_of_SelectedRock_16() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedRock_16)); }
	inline Sprite_t3199167241 * get_SelectedRock_16() const { return ___SelectedRock_16; }
	inline Sprite_t3199167241 ** get_address_of_SelectedRock_16() { return &___SelectedRock_16; }
	inline void set_SelectedRock_16(Sprite_t3199167241 * value)
	{
		___SelectedRock_16 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedRock_16, value);
	}

	inline static int32_t get_offset_of_SelectedPaper_17() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedPaper_17)); }
	inline Sprite_t3199167241 * get_SelectedPaper_17() const { return ___SelectedPaper_17; }
	inline Sprite_t3199167241 ** get_address_of_SelectedPaper_17() { return &___SelectedPaper_17; }
	inline void set_SelectedPaper_17(Sprite_t3199167241 * value)
	{
		___SelectedPaper_17 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedPaper_17, value);
	}

	inline static int32_t get_offset_of_SelectedScissors_18() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedScissors_18)); }
	inline Sprite_t3199167241 * get_SelectedScissors_18() const { return ___SelectedScissors_18; }
	inline Sprite_t3199167241 ** get_address_of_SelectedScissors_18() { return &___SelectedScissors_18; }
	inline void set_SelectedScissors_18(Sprite_t3199167241 * value)
	{
		___SelectedScissors_18 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedScissors_18, value);
	}

	inline static int32_t get_offset_of_SpriteWin_19() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteWin_19)); }
	inline Sprite_t3199167241 * get_SpriteWin_19() const { return ___SpriteWin_19; }
	inline Sprite_t3199167241 ** get_address_of_SpriteWin_19() { return &___SpriteWin_19; }
	inline void set_SpriteWin_19(Sprite_t3199167241 * value)
	{
		___SpriteWin_19 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteWin_19, value);
	}

	inline static int32_t get_offset_of_SpriteLose_20() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteLose_20)); }
	inline Sprite_t3199167241 * get_SpriteLose_20() const { return ___SpriteLose_20; }
	inline Sprite_t3199167241 ** get_address_of_SpriteLose_20() { return &___SpriteLose_20; }
	inline void set_SpriteLose_20(Sprite_t3199167241 * value)
	{
		___SpriteLose_20 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteLose_20, value);
	}

	inline static int32_t get_offset_of_SpriteDraw_21() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteDraw_21)); }
	inline Sprite_t3199167241 * get_SpriteDraw_21() const { return ___SpriteDraw_21; }
	inline Sprite_t3199167241 ** get_address_of_SpriteDraw_21() { return &___SpriteDraw_21; }
	inline void set_SpriteDraw_21(Sprite_t3199167241 * value)
	{
		___SpriteDraw_21 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteDraw_21, value);
	}

	inline static int32_t get_offset_of_DisconnectedPanel_22() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___DisconnectedPanel_22)); }
	inline RectTransform_t972643934 * get_DisconnectedPanel_22() const { return ___DisconnectedPanel_22; }
	inline RectTransform_t972643934 ** get_address_of_DisconnectedPanel_22() { return &___DisconnectedPanel_22; }
	inline void set_DisconnectedPanel_22(RectTransform_t972643934 * value)
	{
		___DisconnectedPanel_22 = value;
		Il2CppCodeGenWriteBarrier(&___DisconnectedPanel_22, value);
	}

	inline static int32_t get_offset_of_result_23() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___result_23)); }
	inline int32_t get_result_23() const { return ___result_23; }
	inline int32_t* get_address_of_result_23() { return &___result_23; }
	inline void set_result_23(int32_t value)
	{
		___result_23 = value;
	}

	inline static int32_t get_offset_of_turnManager_24() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___turnManager_24)); }
	inline PunTurnManager_t2757607879 * get_turnManager_24() const { return ___turnManager_24; }
	inline PunTurnManager_t2757607879 ** get_address_of_turnManager_24() { return &___turnManager_24; }
	inline void set_turnManager_24(PunTurnManager_t2757607879 * value)
	{
		___turnManager_24 = value;
		Il2CppCodeGenWriteBarrier(&___turnManager_24, value);
	}

	inline static int32_t get_offset_of_randomHand_25() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___randomHand_25)); }
	inline int32_t get_randomHand_25() const { return ___randomHand_25; }
	inline int32_t* get_address_of_randomHand_25() { return &___randomHand_25; }
	inline void set_randomHand_25(int32_t value)
	{
		___randomHand_25 = value;
	}

	inline static int32_t get_offset_of_IsShowingResults_26() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___IsShowingResults_26)); }
	inline bool get_IsShowingResults_26() const { return ___IsShowingResults_26; }
	inline bool* get_address_of_IsShowingResults_26() { return &___IsShowingResults_26; }
	inline void set_IsShowingResults_26(bool value)
	{
		___IsShowingResults_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
