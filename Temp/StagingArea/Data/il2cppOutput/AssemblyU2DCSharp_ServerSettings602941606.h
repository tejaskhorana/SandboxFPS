#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"
#include "AssemblyU2DCSharp_ServerSettings_HostingOption3423683718.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "AssemblyU2DCSharp_CloudRegionFlag3866817653.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"
#include "AssemblyU2DCSharp_PhotonLogLevel1681911644.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerSettings
struct  ServerSettings_t602941606  : public ScriptableObject_t2970544072
{
public:
	// System.String ServerSettings::AppID
	String_t* ___AppID_2;
	// System.String ServerSettings::VoiceAppID
	String_t* ___VoiceAppID_3;
	// System.String ServerSettings::ChatAppID
	String_t* ___ChatAppID_4;
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType_5;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion_6;
	// CloudRegionFlag ServerSettings::EnabledRegions
	int32_t ___EnabledRegions_7;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol_8;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress_9;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort_10;
	// System.Int32 ServerSettings::VoiceServerPort
	int32_t ___VoiceServerPort_11;
	// System.Boolean ServerSettings::JoinLobby
	bool ___JoinLobby_12;
	// System.Boolean ServerSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_13;
	// PhotonLogLevel ServerSettings::PunLogging
	int32_t ___PunLogging_14;
	// ExitGames.Client.Photon.DebugLevel ServerSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
	// System.Boolean ServerSettings::RunInBackground
	bool ___RunInBackground_16;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t1375417109 * ___RpcList_17;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard_18;

public:
	inline static int32_t get_offset_of_AppID_2() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___AppID_2)); }
	inline String_t* get_AppID_2() const { return ___AppID_2; }
	inline String_t** get_address_of_AppID_2() { return &___AppID_2; }
	inline void set_AppID_2(String_t* value)
	{
		___AppID_2 = value;
		Il2CppCodeGenWriteBarrier(&___AppID_2, value);
	}

	inline static int32_t get_offset_of_VoiceAppID_3() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___VoiceAppID_3)); }
	inline String_t* get_VoiceAppID_3() const { return ___VoiceAppID_3; }
	inline String_t** get_address_of_VoiceAppID_3() { return &___VoiceAppID_3; }
	inline void set_VoiceAppID_3(String_t* value)
	{
		___VoiceAppID_3 = value;
		Il2CppCodeGenWriteBarrier(&___VoiceAppID_3, value);
	}

	inline static int32_t get_offset_of_ChatAppID_4() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___ChatAppID_4)); }
	inline String_t* get_ChatAppID_4() const { return ___ChatAppID_4; }
	inline String_t** get_address_of_ChatAppID_4() { return &___ChatAppID_4; }
	inline void set_ChatAppID_4(String_t* value)
	{
		___ChatAppID_4 = value;
		Il2CppCodeGenWriteBarrier(&___ChatAppID_4, value);
	}

	inline static int32_t get_offset_of_HostType_5() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___HostType_5)); }
	inline int32_t get_HostType_5() const { return ___HostType_5; }
	inline int32_t* get_address_of_HostType_5() { return &___HostType_5; }
	inline void set_HostType_5(int32_t value)
	{
		___HostType_5 = value;
	}

	inline static int32_t get_offset_of_PreferredRegion_6() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___PreferredRegion_6)); }
	inline int32_t get_PreferredRegion_6() const { return ___PreferredRegion_6; }
	inline int32_t* get_address_of_PreferredRegion_6() { return &___PreferredRegion_6; }
	inline void set_PreferredRegion_6(int32_t value)
	{
		___PreferredRegion_6 = value;
	}

	inline static int32_t get_offset_of_EnabledRegions_7() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___EnabledRegions_7)); }
	inline int32_t get_EnabledRegions_7() const { return ___EnabledRegions_7; }
	inline int32_t* get_address_of_EnabledRegions_7() { return &___EnabledRegions_7; }
	inline void set_EnabledRegions_7(int32_t value)
	{
		___EnabledRegions_7 = value;
	}

	inline static int32_t get_offset_of_Protocol_8() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___Protocol_8)); }
	inline uint8_t get_Protocol_8() const { return ___Protocol_8; }
	inline uint8_t* get_address_of_Protocol_8() { return &___Protocol_8; }
	inline void set_Protocol_8(uint8_t value)
	{
		___Protocol_8 = value;
	}

	inline static int32_t get_offset_of_ServerAddress_9() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___ServerAddress_9)); }
	inline String_t* get_ServerAddress_9() const { return ___ServerAddress_9; }
	inline String_t** get_address_of_ServerAddress_9() { return &___ServerAddress_9; }
	inline void set_ServerAddress_9(String_t* value)
	{
		___ServerAddress_9 = value;
		Il2CppCodeGenWriteBarrier(&___ServerAddress_9, value);
	}

	inline static int32_t get_offset_of_ServerPort_10() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___ServerPort_10)); }
	inline int32_t get_ServerPort_10() const { return ___ServerPort_10; }
	inline int32_t* get_address_of_ServerPort_10() { return &___ServerPort_10; }
	inline void set_ServerPort_10(int32_t value)
	{
		___ServerPort_10 = value;
	}

	inline static int32_t get_offset_of_VoiceServerPort_11() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___VoiceServerPort_11)); }
	inline int32_t get_VoiceServerPort_11() const { return ___VoiceServerPort_11; }
	inline int32_t* get_address_of_VoiceServerPort_11() { return &___VoiceServerPort_11; }
	inline void set_VoiceServerPort_11(int32_t value)
	{
		___VoiceServerPort_11 = value;
	}

	inline static int32_t get_offset_of_JoinLobby_12() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___JoinLobby_12)); }
	inline bool get_JoinLobby_12() const { return ___JoinLobby_12; }
	inline bool* get_address_of_JoinLobby_12() { return &___JoinLobby_12; }
	inline void set_JoinLobby_12(bool value)
	{
		___JoinLobby_12 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_13() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___EnableLobbyStatistics_13)); }
	inline bool get_EnableLobbyStatistics_13() const { return ___EnableLobbyStatistics_13; }
	inline bool* get_address_of_EnableLobbyStatistics_13() { return &___EnableLobbyStatistics_13; }
	inline void set_EnableLobbyStatistics_13(bool value)
	{
		___EnableLobbyStatistics_13 = value;
	}

	inline static int32_t get_offset_of_PunLogging_14() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___PunLogging_14)); }
	inline int32_t get_PunLogging_14() const { return ___PunLogging_14; }
	inline int32_t* get_address_of_PunLogging_14() { return &___PunLogging_14; }
	inline void set_PunLogging_14(int32_t value)
	{
		___PunLogging_14 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_15() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___NetworkLogging_15)); }
	inline uint8_t get_NetworkLogging_15() const { return ___NetworkLogging_15; }
	inline uint8_t* get_address_of_NetworkLogging_15() { return &___NetworkLogging_15; }
	inline void set_NetworkLogging_15(uint8_t value)
	{
		___NetworkLogging_15 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_16() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___RunInBackground_16)); }
	inline bool get_RunInBackground_16() const { return ___RunInBackground_16; }
	inline bool* get_address_of_RunInBackground_16() { return &___RunInBackground_16; }
	inline void set_RunInBackground_16(bool value)
	{
		___RunInBackground_16 = value;
	}

	inline static int32_t get_offset_of_RpcList_17() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___RpcList_17)); }
	inline List_1_t1375417109 * get_RpcList_17() const { return ___RpcList_17; }
	inline List_1_t1375417109 ** get_address_of_RpcList_17() { return &___RpcList_17; }
	inline void set_RpcList_17(List_1_t1375417109 * value)
	{
		___RpcList_17 = value;
		Il2CppCodeGenWriteBarrier(&___RpcList_17, value);
	}

	inline static int32_t get_offset_of_DisableAutoOpenWizard_18() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___DisableAutoOpenWizard_18)); }
	inline bool get_DisableAutoOpenWizard_18() const { return ___DisableAutoOpenWizard_18; }
	inline bool* get_address_of_DisableAutoOpenWizard_18() { return &___DisableAutoOpenWizard_18; }
	inline void set_DisableAutoOpenWizard_18(bool value)
	{
		___DisableAutoOpenWizard_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
