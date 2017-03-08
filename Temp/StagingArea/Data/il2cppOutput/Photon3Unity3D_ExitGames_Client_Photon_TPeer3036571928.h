#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t2202035602;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1333978725;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase659028201.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TPeer
struct  TPeer_t3036571928  : public PeerBase_t659028201
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t2202035602 * ___incomingList_53;
	// System.Collections.Generic.List`1<System.Byte[]> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t1333978725 * ___outgoingStream_54;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_55;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_t4260760469* ___pingRequest_56;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_t4260760469* ___messageHeader_59;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_60;

public:
	inline static int32_t get_offset_of_incomingList_53() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___incomingList_53)); }
	inline Queue_1_t2202035602 * get_incomingList_53() const { return ___incomingList_53; }
	inline Queue_1_t2202035602 ** get_address_of_incomingList_53() { return &___incomingList_53; }
	inline void set_incomingList_53(Queue_1_t2202035602 * value)
	{
		___incomingList_53 = value;
		Il2CppCodeGenWriteBarrier(&___incomingList_53, value);
	}

	inline static int32_t get_offset_of_outgoingStream_54() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___outgoingStream_54)); }
	inline List_1_t1333978725 * get_outgoingStream_54() const { return ___outgoingStream_54; }
	inline List_1_t1333978725 ** get_address_of_outgoingStream_54() { return &___outgoingStream_54; }
	inline void set_outgoingStream_54(List_1_t1333978725 * value)
	{
		___outgoingStream_54 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingStream_54, value);
	}

	inline static int32_t get_offset_of_lastPingResult_55() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___lastPingResult_55)); }
	inline int32_t get_lastPingResult_55() const { return ___lastPingResult_55; }
	inline int32_t* get_address_of_lastPingResult_55() { return &___lastPingResult_55; }
	inline void set_lastPingResult_55(int32_t value)
	{
		___lastPingResult_55 = value;
	}

	inline static int32_t get_offset_of_pingRequest_56() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___pingRequest_56)); }
	inline ByteU5BU5D_t4260760469* get_pingRequest_56() const { return ___pingRequest_56; }
	inline ByteU5BU5D_t4260760469** get_address_of_pingRequest_56() { return &___pingRequest_56; }
	inline void set_pingRequest_56(ByteU5BU5D_t4260760469* value)
	{
		___pingRequest_56 = value;
		Il2CppCodeGenWriteBarrier(&___pingRequest_56, value);
	}

	inline static int32_t get_offset_of_messageHeader_59() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___messageHeader_59)); }
	inline ByteU5BU5D_t4260760469* get_messageHeader_59() const { return ___messageHeader_59; }
	inline ByteU5BU5D_t4260760469** get_address_of_messageHeader_59() { return &___messageHeader_59; }
	inline void set_messageHeader_59(ByteU5BU5D_t4260760469* value)
	{
		___messageHeader_59 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_59, value);
	}

	inline static int32_t get_offset_of_DoFraming_60() { return static_cast<int32_t>(offsetof(TPeer_t3036571928, ___DoFraming_60)); }
	inline bool get_DoFraming_60() const { return ___DoFraming_60; }
	inline bool* get_address_of_DoFraming_60() { return &___DoFraming_60; }
	inline void set_DoFraming_60(bool value)
	{
		___DoFraming_60 = value;
	}
};

struct TPeer_t3036571928_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_t4260760469* ___tcpFramedMessageHead_57;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_t4260760469* ___tcpMsgHead_58;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_57() { return static_cast<int32_t>(offsetof(TPeer_t3036571928_StaticFields, ___tcpFramedMessageHead_57)); }
	inline ByteU5BU5D_t4260760469* get_tcpFramedMessageHead_57() const { return ___tcpFramedMessageHead_57; }
	inline ByteU5BU5D_t4260760469** get_address_of_tcpFramedMessageHead_57() { return &___tcpFramedMessageHead_57; }
	inline void set_tcpFramedMessageHead_57(ByteU5BU5D_t4260760469* value)
	{
		___tcpFramedMessageHead_57 = value;
		Il2CppCodeGenWriteBarrier(&___tcpFramedMessageHead_57, value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_58() { return static_cast<int32_t>(offsetof(TPeer_t3036571928_StaticFields, ___tcpMsgHead_58)); }
	inline ByteU5BU5D_t4260760469* get_tcpMsgHead_58() const { return ___tcpMsgHead_58; }
	inline ByteU5BU5D_t4260760469** get_address_of_tcpMsgHead_58() { return &___tcpMsgHead_58; }
	inline void set_tcpMsgHead_58(ByteU5BU5D_t4260760469* value)
	{
		___tcpMsgHead_58 = value;
		Il2CppCodeGenWriteBarrier(&___tcpMsgHead_58, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
