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

// WebRpcResponse
struct WebRpcResponse_t2776467826;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C"  void WebRpcResponse__ctor_m1264623099 (WebRpcResponse_t2776467826 * __this, OperationResponse_t1243130602 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C"  String_t* WebRpcResponse_get_Name_m197731570 (WebRpcResponse_t2776467826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
extern "C"  void WebRpcResponse_set_Name_m1693044191 (WebRpcResponse_t2776467826 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C"  int32_t WebRpcResponse_get_ReturnCode_m1698976911 (WebRpcResponse_t2776467826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C"  void WebRpcResponse_set_ReturnCode_m3268296390 (WebRpcResponse_t2776467826 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C"  String_t* WebRpcResponse_get_DebugMessage_m1557900379 (WebRpcResponse_t2776467826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C"  void WebRpcResponse_set_DebugMessage_m1069701654 (WebRpcResponse_t2776467826 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C"  Dictionary_2_t696267445 * WebRpcResponse_get_Parameters_m3707730826 (WebRpcResponse_t2776467826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void WebRpcResponse_set_Parameters_m2593371713 (WebRpcResponse_t2776467826 * __this, Dictionary_2_t696267445 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
extern "C"  String_t* WebRpcResponse_ToStringFull_m3559264761 (WebRpcResponse_t2776467826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
