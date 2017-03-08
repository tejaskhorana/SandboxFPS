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

// ExitGames.Client.Photon.NCommand
struct NCommand_t1640975507;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2362817072;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EnetPeer2362817072.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand1640975507.h"

// System.Int32 ExitGames.Client.Photon.NCommand::get_SizeOfPayload()
extern "C"  int32_t NCommand_get_SizeOfPayload_m3675985696 (NCommand_t1640975507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C"  void NCommand__ctor_m3294593470 (NCommand_t1640975507 * __this, EnetPeer_t2362817072 * ___peer0, uint8_t ___commandType1, ByteU5BU5D_t4260760469* ___payload2, uint8_t ___channel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C"  NCommand_t1640975507 * NCommand_CreateAck_m2365736060 (Il2CppObject * __this /* static, unused */, EnetPeer_t2362817072 * ___peer0, NCommand_t1640975507 * ___commandToAck1, int32_t ___sentTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C"  void NCommand__ctor_m4058016265 (NCommand_t1640975507 * __this, EnetPeer_t2362817072 * ___peer0, ByteU5BU5D_t4260760469* ___inBuff1, int32_t* ___readingOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::SerializeHeader()
extern "C"  ByteU5BU5D_t4260760469* NCommand_SerializeHeader_m1281700582 (NCommand_t1640975507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C"  ByteU5BU5D_t4260760469* NCommand_Serialize_m3770979705 (NCommand_t1640975507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C"  int32_t NCommand_CompareTo_m3967483804 (NCommand_t1640975507 * __this, NCommand_t1640975507 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C"  String_t* NCommand_ToString_m3839616398 (NCommand_t1640975507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
