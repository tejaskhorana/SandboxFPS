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

// ExitGames.Client.Photon.CmdLogReceivedAck
struct CmdLogReceivedAck_t3879478528;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1640975507;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand1640975507.h"

// System.Void ExitGames.Client.Photon.CmdLogReceivedAck::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32)
extern "C"  void CmdLogReceivedAck__ctor_m1147551496 (CmdLogReceivedAck_t3879478528 * __this, NCommand_t1640975507 * ___command0, int32_t ___timeInt1, int32_t ___rtt2, int32_t ___variance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogReceivedAck::ToString()
extern "C"  String_t* CmdLogReceivedAck_ToString_m1237657063 (CmdLogReceivedAck_t3879478528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
