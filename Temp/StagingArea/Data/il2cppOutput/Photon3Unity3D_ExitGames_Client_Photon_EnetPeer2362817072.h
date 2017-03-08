#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t2874893628;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t3009161059;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t3877217936;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// ExitGames.Client.Photon.EnetChannel[]
struct EnetChannelU5BU5D_t1828506688;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t3390080929;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase659028201.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EnetPeer
struct  EnetPeer_t2362817072  : public PeerBase_t659028201
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t2874893628 * ___channels_56;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t3009161059 * ___sentReliableCommands_57;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t3877217936 * ___outgoingAcknowledgementsList_58;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize_59;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount_60;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t4260760469* ___udpBuffer_61;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex_62;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferLength
	int32_t ___udpBufferLength_63;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::bufferForEncryption
	ByteU5BU5D_t4260760469* ___bufferForEncryption_64;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge_65;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated_66;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent_67;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime_68;
	// System.Boolean ExitGames.Client.Photon.EnetPeer::datagramEncryptedConnection
	bool ___datagramEncryptedConnection_71;
	// ExitGames.Client.Photon.EnetChannel[] ExitGames.Client.Photon.EnetPeer::channelArray
	EnetChannelU5BU5D_t1828506688* ___channelArray_72;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t3390080929 * ___commandsToRemove_73;

public:
	inline static int32_t get_offset_of_channels_56() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___channels_56)); }
	inline Dictionary_2_t2874893628 * get_channels_56() const { return ___channels_56; }
	inline Dictionary_2_t2874893628 ** get_address_of_channels_56() { return &___channels_56; }
	inline void set_channels_56(Dictionary_2_t2874893628 * value)
	{
		___channels_56 = value;
		Il2CppCodeGenWriteBarrier(&___channels_56, value);
	}

	inline static int32_t get_offset_of_sentReliableCommands_57() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___sentReliableCommands_57)); }
	inline List_1_t3009161059 * get_sentReliableCommands_57() const { return ___sentReliableCommands_57; }
	inline List_1_t3009161059 ** get_address_of_sentReliableCommands_57() { return &___sentReliableCommands_57; }
	inline void set_sentReliableCommands_57(List_1_t3009161059 * value)
	{
		___sentReliableCommands_57 = value;
		Il2CppCodeGenWriteBarrier(&___sentReliableCommands_57, value);
	}

	inline static int32_t get_offset_of_outgoingAcknowledgementsList_58() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___outgoingAcknowledgementsList_58)); }
	inline Queue_1_t3877217936 * get_outgoingAcknowledgementsList_58() const { return ___outgoingAcknowledgementsList_58; }
	inline Queue_1_t3877217936 ** get_address_of_outgoingAcknowledgementsList_58() { return &___outgoingAcknowledgementsList_58; }
	inline void set_outgoingAcknowledgementsList_58(Queue_1_t3877217936 * value)
	{
		___outgoingAcknowledgementsList_58 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingAcknowledgementsList_58, value);
	}

	inline static int32_t get_offset_of_windowSize_59() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___windowSize_59)); }
	inline int32_t get_windowSize_59() const { return ___windowSize_59; }
	inline int32_t* get_address_of_windowSize_59() { return &___windowSize_59; }
	inline void set_windowSize_59(int32_t value)
	{
		___windowSize_59 = value;
	}

	inline static int32_t get_offset_of_udpCommandCount_60() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___udpCommandCount_60)); }
	inline uint8_t get_udpCommandCount_60() const { return ___udpCommandCount_60; }
	inline uint8_t* get_address_of_udpCommandCount_60() { return &___udpCommandCount_60; }
	inline void set_udpCommandCount_60(uint8_t value)
	{
		___udpCommandCount_60 = value;
	}

	inline static int32_t get_offset_of_udpBuffer_61() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___udpBuffer_61)); }
	inline ByteU5BU5D_t4260760469* get_udpBuffer_61() const { return ___udpBuffer_61; }
	inline ByteU5BU5D_t4260760469** get_address_of_udpBuffer_61() { return &___udpBuffer_61; }
	inline void set_udpBuffer_61(ByteU5BU5D_t4260760469* value)
	{
		___udpBuffer_61 = value;
		Il2CppCodeGenWriteBarrier(&___udpBuffer_61, value);
	}

	inline static int32_t get_offset_of_udpBufferIndex_62() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___udpBufferIndex_62)); }
	inline int32_t get_udpBufferIndex_62() const { return ___udpBufferIndex_62; }
	inline int32_t* get_address_of_udpBufferIndex_62() { return &___udpBufferIndex_62; }
	inline void set_udpBufferIndex_62(int32_t value)
	{
		___udpBufferIndex_62 = value;
	}

	inline static int32_t get_offset_of_udpBufferLength_63() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___udpBufferLength_63)); }
	inline int32_t get_udpBufferLength_63() const { return ___udpBufferLength_63; }
	inline int32_t* get_address_of_udpBufferLength_63() { return &___udpBufferLength_63; }
	inline void set_udpBufferLength_63(int32_t value)
	{
		___udpBufferLength_63 = value;
	}

	inline static int32_t get_offset_of_bufferForEncryption_64() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___bufferForEncryption_64)); }
	inline ByteU5BU5D_t4260760469* get_bufferForEncryption_64() const { return ___bufferForEncryption_64; }
	inline ByteU5BU5D_t4260760469** get_address_of_bufferForEncryption_64() { return &___bufferForEncryption_64; }
	inline void set_bufferForEncryption_64(ByteU5BU5D_t4260760469* value)
	{
		___bufferForEncryption_64 = value;
		Il2CppCodeGenWriteBarrier(&___bufferForEncryption_64, value);
	}

	inline static int32_t get_offset_of_challenge_65() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___challenge_65)); }
	inline int32_t get_challenge_65() const { return ___challenge_65; }
	inline int32_t* get_address_of_challenge_65() { return &___challenge_65; }
	inline void set_challenge_65(int32_t value)
	{
		___challenge_65 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsRepeated_66() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___reliableCommandsRepeated_66)); }
	inline int32_t get_reliableCommandsRepeated_66() const { return ___reliableCommandsRepeated_66; }
	inline int32_t* get_address_of_reliableCommandsRepeated_66() { return &___reliableCommandsRepeated_66; }
	inline void set_reliableCommandsRepeated_66(int32_t value)
	{
		___reliableCommandsRepeated_66 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsSent_67() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___reliableCommandsSent_67)); }
	inline int32_t get_reliableCommandsSent_67() const { return ___reliableCommandsSent_67; }
	inline int32_t* get_address_of_reliableCommandsSent_67() { return &___reliableCommandsSent_67; }
	inline void set_reliableCommandsSent_67(int32_t value)
	{
		___reliableCommandsSent_67 = value;
	}

	inline static int32_t get_offset_of_serverSentTime_68() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___serverSentTime_68)); }
	inline int32_t get_serverSentTime_68() const { return ___serverSentTime_68; }
	inline int32_t* get_address_of_serverSentTime_68() { return &___serverSentTime_68; }
	inline void set_serverSentTime_68(int32_t value)
	{
		___serverSentTime_68 = value;
	}

	inline static int32_t get_offset_of_datagramEncryptedConnection_71() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___datagramEncryptedConnection_71)); }
	inline bool get_datagramEncryptedConnection_71() const { return ___datagramEncryptedConnection_71; }
	inline bool* get_address_of_datagramEncryptedConnection_71() { return &___datagramEncryptedConnection_71; }
	inline void set_datagramEncryptedConnection_71(bool value)
	{
		___datagramEncryptedConnection_71 = value;
	}

	inline static int32_t get_offset_of_channelArray_72() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___channelArray_72)); }
	inline EnetChannelU5BU5D_t1828506688* get_channelArray_72() const { return ___channelArray_72; }
	inline EnetChannelU5BU5D_t1828506688** get_address_of_channelArray_72() { return &___channelArray_72; }
	inline void set_channelArray_72(EnetChannelU5BU5D_t1828506688* value)
	{
		___channelArray_72 = value;
		Il2CppCodeGenWriteBarrier(&___channelArray_72, value);
	}

	inline static int32_t get_offset_of_commandsToRemove_73() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072, ___commandsToRemove_73)); }
	inline Queue_1_t3390080929 * get_commandsToRemove_73() const { return ___commandsToRemove_73; }
	inline Queue_1_t3390080929 ** get_address_of_commandsToRemove_73() { return &___commandsToRemove_73; }
	inline void set_commandsToRemove_73(Queue_1_t3390080929 * value)
	{
		___commandsToRemove_73 = value;
		Il2CppCodeGenWriteBarrier(&___commandsToRemove_73, value);
	}
};

struct EnetPeer_t2362817072_StaticFields
{
public:
	// System.Int32 ExitGames.Client.Photon.EnetPeer::HMAC_SIZE
	int32_t ___HMAC_SIZE_53;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::BLOCK_SIZE
	int32_t ___BLOCK_SIZE_54;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::IV_SIZE
	int32_t ___IV_SIZE_55;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t4260760469* ___udpHeader0xF3_69;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t4260760469* ___messageHeader_70;

public:
	inline static int32_t get_offset_of_HMAC_SIZE_53() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072_StaticFields, ___HMAC_SIZE_53)); }
	inline int32_t get_HMAC_SIZE_53() const { return ___HMAC_SIZE_53; }
	inline int32_t* get_address_of_HMAC_SIZE_53() { return &___HMAC_SIZE_53; }
	inline void set_HMAC_SIZE_53(int32_t value)
	{
		___HMAC_SIZE_53 = value;
	}

	inline static int32_t get_offset_of_BLOCK_SIZE_54() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072_StaticFields, ___BLOCK_SIZE_54)); }
	inline int32_t get_BLOCK_SIZE_54() const { return ___BLOCK_SIZE_54; }
	inline int32_t* get_address_of_BLOCK_SIZE_54() { return &___BLOCK_SIZE_54; }
	inline void set_BLOCK_SIZE_54(int32_t value)
	{
		___BLOCK_SIZE_54 = value;
	}

	inline static int32_t get_offset_of_IV_SIZE_55() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072_StaticFields, ___IV_SIZE_55)); }
	inline int32_t get_IV_SIZE_55() const { return ___IV_SIZE_55; }
	inline int32_t* get_address_of_IV_SIZE_55() { return &___IV_SIZE_55; }
	inline void set_IV_SIZE_55(int32_t value)
	{
		___IV_SIZE_55 = value;
	}

	inline static int32_t get_offset_of_udpHeader0xF3_69() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072_StaticFields, ___udpHeader0xF3_69)); }
	inline ByteU5BU5D_t4260760469* get_udpHeader0xF3_69() const { return ___udpHeader0xF3_69; }
	inline ByteU5BU5D_t4260760469** get_address_of_udpHeader0xF3_69() { return &___udpHeader0xF3_69; }
	inline void set_udpHeader0xF3_69(ByteU5BU5D_t4260760469* value)
	{
		___udpHeader0xF3_69 = value;
		Il2CppCodeGenWriteBarrier(&___udpHeader0xF3_69, value);
	}

	inline static int32_t get_offset_of_messageHeader_70() { return static_cast<int32_t>(offsetof(EnetPeer_t2362817072_StaticFields, ___messageHeader_70)); }
	inline ByteU5BU5D_t4260760469* get_messageHeader_70() const { return ___messageHeader_70; }
	inline ByteU5BU5D_t4260760469** get_address_of_messageHeader_70() { return &___messageHeader_70; }
	inline void set_messageHeader_70(ByteU5BU5D_t4260760469* value)
	{
		___messageHeader_70 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_70, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
