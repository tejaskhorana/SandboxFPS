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

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t1847717741;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1640975507;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
extern "C"  void EnetChannel__ctor_m855530181 (EnetChannel_t1847717741 * __this, uint8_t ___channelNumber0, int32_t ___commandBufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsUnreliableSequenceNumber_m2495635986 (EnetChannel_t1847717741 * __this, int32_t ___unreliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsReliableSequenceNumber_m1136395449 (EnetChannel_t1847717741 * __this, int32_t ___reliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
extern "C"  NCommand_t1640975507 * EnetChannel_FetchReliableSequenceNumber_m3720668286 (EnetChannel_t1847717741 * __this, int32_t ___reliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
extern "C"  void EnetChannel_clearAll_m2381641119 (EnetChannel_t1847717741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
