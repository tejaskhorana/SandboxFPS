#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2683316837;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_t931231266;
// System.Collections.Generic.Dictionary`2<System.String,FriendItem>
struct Dictionary_2_t1056894515;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatGui
struct  ChatGui_t2403745443  : public MonoBehaviour_t667441552
{
public:
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t4054002952* ___ChannelsToJoinOnConnect_2;
	// System.String[] ChatGui::FriendsList
	StringU5BU5D_t4054002952* ___FriendsList_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_5;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t2683316837 * ___chatClient_6;
	// UnityEngine.GameObject ChatGui::missingAppIdErrorPanel
	GameObject_t3674682005 * ___missingAppIdErrorPanel_7;
	// UnityEngine.GameObject ChatGui::ConnectingLabel
	GameObject_t3674682005 * ___ConnectingLabel_8;
	// UnityEngine.RectTransform ChatGui::ChatPanel
	RectTransform_t972643934 * ___ChatPanel_9;
	// UnityEngine.GameObject ChatGui::UserIdFormPanel
	GameObject_t3674682005 * ___UserIdFormPanel_10;
	// UnityEngine.UI.InputField ChatGui::InputFieldChat
	InputField_t609046876 * ___InputFieldChat_11;
	// UnityEngine.UI.Text ChatGui::CurrentChannelText
	Text_t9039225 * ___CurrentChannelText_12;
	// UnityEngine.UI.Toggle ChatGui::ChannelToggleToInstantiate
	Toggle_t110812896 * ___ChannelToggleToInstantiate_13;
	// UnityEngine.GameObject ChatGui::FriendListUiItemtoInstantiate
	GameObject_t3674682005 * ___FriendListUiItemtoInstantiate_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> ChatGui::channelToggles
	Dictionary_2_t931231266 * ___channelToggles_15;
	// System.Collections.Generic.Dictionary`2<System.String,FriendItem> ChatGui::friendListItemLUT
	Dictionary_2_t1056894515 * ___friendListItemLUT_16;
	// System.Boolean ChatGui::ShowState
	bool ___ShowState_17;
	// UnityEngine.GameObject ChatGui::Title
	GameObject_t3674682005 * ___Title_18;
	// UnityEngine.UI.Text ChatGui::StateText
	Text_t9039225 * ___StateText_19;
	// UnityEngine.UI.Text ChatGui::UserIdText
	Text_t9039225 * ___UserIdText_20;
	// System.Int32 ChatGui::TestLength
	int32_t ___TestLength_22;
	// System.Byte[] ChatGui::testBytes
	ByteU5BU5D_t4260760469* ___testBytes_23;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_ChannelsToJoinOnConnect_2() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelsToJoinOnConnect_2)); }
	inline StringU5BU5D_t4054002952* get_ChannelsToJoinOnConnect_2() const { return ___ChannelsToJoinOnConnect_2; }
	inline StringU5BU5D_t4054002952** get_address_of_ChannelsToJoinOnConnect_2() { return &___ChannelsToJoinOnConnect_2; }
	inline void set_ChannelsToJoinOnConnect_2(StringU5BU5D_t4054002952* value)
	{
		___ChannelsToJoinOnConnect_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelsToJoinOnConnect_2, value);
	}

	inline static int32_t get_offset_of_FriendsList_3() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___FriendsList_3)); }
	inline StringU5BU5D_t4054002952* get_FriendsList_3() const { return ___FriendsList_3; }
	inline StringU5BU5D_t4054002952** get_address_of_FriendsList_3() { return &___FriendsList_3; }
	inline void set_FriendsList_3(StringU5BU5D_t4054002952* value)
	{
		___FriendsList_3 = value;
		Il2CppCodeGenWriteBarrier(&___FriendsList_3, value);
	}

	inline static int32_t get_offset_of_HistoryLengthToFetch_4() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___HistoryLengthToFetch_4)); }
	inline int32_t get_HistoryLengthToFetch_4() const { return ___HistoryLengthToFetch_4; }
	inline int32_t* get_address_of_HistoryLengthToFetch_4() { return &___HistoryLengthToFetch_4; }
	inline void set_HistoryLengthToFetch_4(int32_t value)
	{
		___HistoryLengthToFetch_4 = value;
	}

	inline static int32_t get_offset_of_selectedChannelName_5() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelName_5)); }
	inline String_t* get_selectedChannelName_5() const { return ___selectedChannelName_5; }
	inline String_t** get_address_of_selectedChannelName_5() { return &___selectedChannelName_5; }
	inline void set_selectedChannelName_5(String_t* value)
	{
		___selectedChannelName_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannelName_5, value);
	}

	inline static int32_t get_offset_of_chatClient_6() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___chatClient_6)); }
	inline ChatClient_t2683316837 * get_chatClient_6() const { return ___chatClient_6; }
	inline ChatClient_t2683316837 ** get_address_of_chatClient_6() { return &___chatClient_6; }
	inline void set_chatClient_6(ChatClient_t2683316837 * value)
	{
		___chatClient_6 = value;
		Il2CppCodeGenWriteBarrier(&___chatClient_6, value);
	}

	inline static int32_t get_offset_of_missingAppIdErrorPanel_7() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___missingAppIdErrorPanel_7)); }
	inline GameObject_t3674682005 * get_missingAppIdErrorPanel_7() const { return ___missingAppIdErrorPanel_7; }
	inline GameObject_t3674682005 ** get_address_of_missingAppIdErrorPanel_7() { return &___missingAppIdErrorPanel_7; }
	inline void set_missingAppIdErrorPanel_7(GameObject_t3674682005 * value)
	{
		___missingAppIdErrorPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___missingAppIdErrorPanel_7, value);
	}

	inline static int32_t get_offset_of_ConnectingLabel_8() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ConnectingLabel_8)); }
	inline GameObject_t3674682005 * get_ConnectingLabel_8() const { return ___ConnectingLabel_8; }
	inline GameObject_t3674682005 ** get_address_of_ConnectingLabel_8() { return &___ConnectingLabel_8; }
	inline void set_ConnectingLabel_8(GameObject_t3674682005 * value)
	{
		___ConnectingLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectingLabel_8, value);
	}

	inline static int32_t get_offset_of_ChatPanel_9() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChatPanel_9)); }
	inline RectTransform_t972643934 * get_ChatPanel_9() const { return ___ChatPanel_9; }
	inline RectTransform_t972643934 ** get_address_of_ChatPanel_9() { return &___ChatPanel_9; }
	inline void set_ChatPanel_9(RectTransform_t972643934 * value)
	{
		___ChatPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___ChatPanel_9, value);
	}

	inline static int32_t get_offset_of_UserIdFormPanel_10() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___UserIdFormPanel_10)); }
	inline GameObject_t3674682005 * get_UserIdFormPanel_10() const { return ___UserIdFormPanel_10; }
	inline GameObject_t3674682005 ** get_address_of_UserIdFormPanel_10() { return &___UserIdFormPanel_10; }
	inline void set_UserIdFormPanel_10(GameObject_t3674682005 * value)
	{
		___UserIdFormPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___UserIdFormPanel_10, value);
	}

	inline static int32_t get_offset_of_InputFieldChat_11() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___InputFieldChat_11)); }
	inline InputField_t609046876 * get_InputFieldChat_11() const { return ___InputFieldChat_11; }
	inline InputField_t609046876 ** get_address_of_InputFieldChat_11() { return &___InputFieldChat_11; }
	inline void set_InputFieldChat_11(InputField_t609046876 * value)
	{
		___InputFieldChat_11 = value;
		Il2CppCodeGenWriteBarrier(&___InputFieldChat_11, value);
	}

	inline static int32_t get_offset_of_CurrentChannelText_12() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___CurrentChannelText_12)); }
	inline Text_t9039225 * get_CurrentChannelText_12() const { return ___CurrentChannelText_12; }
	inline Text_t9039225 ** get_address_of_CurrentChannelText_12() { return &___CurrentChannelText_12; }
	inline void set_CurrentChannelText_12(Text_t9039225 * value)
	{
		___CurrentChannelText_12 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentChannelText_12, value);
	}

	inline static int32_t get_offset_of_ChannelToggleToInstantiate_13() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelToggleToInstantiate_13)); }
	inline Toggle_t110812896 * get_ChannelToggleToInstantiate_13() const { return ___ChannelToggleToInstantiate_13; }
	inline Toggle_t110812896 ** get_address_of_ChannelToggleToInstantiate_13() { return &___ChannelToggleToInstantiate_13; }
	inline void set_ChannelToggleToInstantiate_13(Toggle_t110812896 * value)
	{
		___ChannelToggleToInstantiate_13 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelToggleToInstantiate_13, value);
	}

	inline static int32_t get_offset_of_FriendListUiItemtoInstantiate_14() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___FriendListUiItemtoInstantiate_14)); }
	inline GameObject_t3674682005 * get_FriendListUiItemtoInstantiate_14() const { return ___FriendListUiItemtoInstantiate_14; }
	inline GameObject_t3674682005 ** get_address_of_FriendListUiItemtoInstantiate_14() { return &___FriendListUiItemtoInstantiate_14; }
	inline void set_FriendListUiItemtoInstantiate_14(GameObject_t3674682005 * value)
	{
		___FriendListUiItemtoInstantiate_14 = value;
		Il2CppCodeGenWriteBarrier(&___FriendListUiItemtoInstantiate_14, value);
	}

	inline static int32_t get_offset_of_channelToggles_15() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___channelToggles_15)); }
	inline Dictionary_2_t931231266 * get_channelToggles_15() const { return ___channelToggles_15; }
	inline Dictionary_2_t931231266 ** get_address_of_channelToggles_15() { return &___channelToggles_15; }
	inline void set_channelToggles_15(Dictionary_2_t931231266 * value)
	{
		___channelToggles_15 = value;
		Il2CppCodeGenWriteBarrier(&___channelToggles_15, value);
	}

	inline static int32_t get_offset_of_friendListItemLUT_16() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___friendListItemLUT_16)); }
	inline Dictionary_2_t1056894515 * get_friendListItemLUT_16() const { return ___friendListItemLUT_16; }
	inline Dictionary_2_t1056894515 ** get_address_of_friendListItemLUT_16() { return &___friendListItemLUT_16; }
	inline void set_friendListItemLUT_16(Dictionary_2_t1056894515 * value)
	{
		___friendListItemLUT_16 = value;
		Il2CppCodeGenWriteBarrier(&___friendListItemLUT_16, value);
	}

	inline static int32_t get_offset_of_ShowState_17() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ShowState_17)); }
	inline bool get_ShowState_17() const { return ___ShowState_17; }
	inline bool* get_address_of_ShowState_17() { return &___ShowState_17; }
	inline void set_ShowState_17(bool value)
	{
		___ShowState_17 = value;
	}

	inline static int32_t get_offset_of_Title_18() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___Title_18)); }
	inline GameObject_t3674682005 * get_Title_18() const { return ___Title_18; }
	inline GameObject_t3674682005 ** get_address_of_Title_18() { return &___Title_18; }
	inline void set_Title_18(GameObject_t3674682005 * value)
	{
		___Title_18 = value;
		Il2CppCodeGenWriteBarrier(&___Title_18, value);
	}

	inline static int32_t get_offset_of_StateText_19() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___StateText_19)); }
	inline Text_t9039225 * get_StateText_19() const { return ___StateText_19; }
	inline Text_t9039225 ** get_address_of_StateText_19() { return &___StateText_19; }
	inline void set_StateText_19(Text_t9039225 * value)
	{
		___StateText_19 = value;
		Il2CppCodeGenWriteBarrier(&___StateText_19, value);
	}

	inline static int32_t get_offset_of_UserIdText_20() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___UserIdText_20)); }
	inline Text_t9039225 * get_UserIdText_20() const { return ___UserIdText_20; }
	inline Text_t9039225 ** get_address_of_UserIdText_20() { return &___UserIdText_20; }
	inline void set_UserIdText_20(Text_t9039225 * value)
	{
		___UserIdText_20 = value;
		Il2CppCodeGenWriteBarrier(&___UserIdText_20, value);
	}

	inline static int32_t get_offset_of_TestLength_22() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___TestLength_22)); }
	inline int32_t get_TestLength_22() const { return ___TestLength_22; }
	inline int32_t* get_address_of_TestLength_22() { return &___TestLength_22; }
	inline void set_TestLength_22(int32_t value)
	{
		___TestLength_22 = value;
	}

	inline static int32_t get_offset_of_testBytes_23() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___testBytes_23)); }
	inline ByteU5BU5D_t4260760469* get_testBytes_23() const { return ___testBytes_23; }
	inline ByteU5BU5D_t4260760469** get_address_of_testBytes_23() { return &___testBytes_23; }
	inline void set_testBytes_23(ByteU5BU5D_t4260760469* value)
	{
		___testBytes_23 = value;
		Il2CppCodeGenWriteBarrier(&___testBytes_23, value);
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___U3CUserNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_24() const { return ___U3CUserNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_24() { return &___U3CUserNameU3Ek__BackingField_24; }
	inline void set_U3CUserNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_24, value);
	}
};

struct ChatGui_t2403745443_StaticFields
{
public:
	// System.String ChatGui::HelpText
	String_t* ___HelpText_21;

public:
	inline static int32_t get_offset_of_HelpText_21() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___HelpText_21)); }
	inline String_t* get_HelpText_21() const { return ___HelpText_21; }
	inline String_t** get_address_of_HelpText_21() { return &___HelpText_21; }
	inline void set_HelpText_21(String_t* value)
	{
		___HelpText_21 = value;
		Il2CppCodeGenWriteBarrier(&___HelpText_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
