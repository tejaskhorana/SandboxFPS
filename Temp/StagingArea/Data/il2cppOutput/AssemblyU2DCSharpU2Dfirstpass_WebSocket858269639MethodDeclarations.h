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

// WebSocket
struct WebSocket_t858269639;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocket::.ctor(System.Uri)
extern "C"  void WebSocket__ctor_m4270359811 (WebSocket_t858269639 * __this, Uri_t1116831938 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SendString(System.String)
extern "C"  void WebSocket_SendString_m1763859701 (WebSocket_t858269639 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::RecvString()
extern "C"  String_t* WebSocket_RecvString_m1559646472 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketCreate(System.String)
extern "C"  int32_t WebSocket_SocketCreate_m3121182677 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketState(System.Int32)
extern "C"  int32_t WebSocket_SocketState_m3594308691 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketSend_m4138639188 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketRecv_m123459254 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
extern "C"  int32_t WebSocket_SocketRecvLength_m3888604558 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketClose(System.Int32)
extern "C"  void WebSocket_SocketClose_m184179332 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t WebSocket_SocketError_m3005148394 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m301167053 (WebSocket_t858269639 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocket::Recv()
extern "C"  ByteU5BU5D_t4260760469* WebSocket_Recv_m2885548976 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Connect()
extern "C"  void WebSocket_Connect_m1535663512 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m1360354918 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocket::get_Connected()
extern "C"  bool WebSocket_get_Connected_m3769431402 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::get_Error()
extern "C"  String_t* WebSocket_get_Error_m1219586800 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
