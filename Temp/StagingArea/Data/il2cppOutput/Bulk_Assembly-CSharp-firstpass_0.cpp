#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// WebSocket
struct WebSocket_t858269639;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket858269639.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket858269639MethodDeclarations.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "System_System_Uri1116831938MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_ArgumentException928607144MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_ArgumentException928607144.h"
#include "mscorlib_System_Text_Encoding2012439129MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2862609660.h"
#include "mscorlib_System_Int321153838500.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocket::.ctor(System.Uri)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t928607144_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3804;
extern Il2CppCodeGenString* _stringLiteral118039;
extern Il2CppCodeGenString* _stringLiteral4187500201;
extern const uint32_t WebSocket__ctor_m4270359811_MetadataUsageId;
extern "C"  void WebSocket__ctor_m4270359811 (WebSocket_t858269639 * __this, Uri_t1116831938 * ___url0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebSocket__ctor_m4270359811_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		Uri_t1116831938 * L_0 = ___url0;
		__this->set_mUrl_0(L_0);
		Uri_t1116831938 * L_1 = __this->get_mUrl_0();
		String_t* L_2 = Uri_get_Scheme_m2606456870(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4 = String_Equals_m3541721061(L_3, _stringLiteral3804, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6 = String_Equals_m3541721061(L_5, _stringLiteral118039, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral4187500201, L_7, /*hidden argument*/NULL);
		ArgumentException_t928607144 * L_9 = (ArgumentException_t928607144 *)il2cpp_codegen_object_new(ArgumentException_t928607144_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_004a:
	{
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_SendString_m1763859701_MetadataUsageId;
extern "C"  void WebSocket_SendString_m1763859701 (WebSocket_t858269639 * __this, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_SendString_m1763859701_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
		Encoding_t2012439129 * L_0 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_m301167053(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String WebSocket::RecvString()
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_RecvString_m1559646472_MetadataUsageId;
extern "C"  String_t* WebSocket_RecvString_m1559646472 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_RecvString_m1559646472_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		ByteU5BU5D_t4260760469* L_0 = WebSocket_Recv_m2885548976(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4260760469* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
		Encoding_t2012439129 * L_2 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_3 = V_0;
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4260760469* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
extern "C" int32_t DEFAULT_CALL SocketCreate(char*);
// System.Int32 WebSocket::SocketCreate(System.String)
extern "C"  int32_t WebSocket_SocketCreate_m3121182677 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL SocketState(int32_t);
// System.Int32 WebSocket::SocketState(System.Int32)
extern "C"  int32_t WebSocket_SocketState_m3594308691 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
extern "C" void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketSend_m4138639188 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	____ptr1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___ptr1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
extern "C" void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketRecv_m123459254 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	____ptr1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___ptr1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
extern "C" int32_t DEFAULT_CALL SocketRecvLength(int32_t);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
extern "C"  int32_t WebSocket_SocketRecvLength_m3888604558 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
extern "C" void DEFAULT_CALL SocketClose(int32_t);
// System.Void WebSocket::SocketClose(System.Int32)
extern "C"  void WebSocket_SocketClose_m184179332 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
extern "C" int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t WebSocket_SocketError_m3005148394 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t4260760469* ___ptr1, int32_t ___length2, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	____ptr1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___ptr1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m301167053 (WebSocket_t858269639 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_NativeRef_1();
		ByteU5BU5D_t4260760469* L_1 = ___buffer0;
		ByteU5BU5D_t4260760469* L_2 = ___buffer0;
		WebSocket_SocketSend_m4138639188(NULL /*static, unused*/, L_0, L_1, (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] WebSocket::Recv()
extern Il2CppClass* ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_Recv_m2885548976_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WebSocket_Recv_m2885548976 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Recv_m2885548976_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4260760469* V_1 = NULL;
	{
		int32_t L_0 = __this->get_m_NativeRef_1();
		int32_t L_1 = WebSocket_SocketRecvLength_m3888604558(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (ByteU5BU5D_t4260760469*)NULL;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_1 = ((ByteU5BU5D_t4260760469*)SZArrayNew(ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var, (uint32_t)L_3));
		int32_t L_4 = __this->get_m_NativeRef_1();
		ByteU5BU5D_t4260760469* L_5 = V_1;
		int32_t L_6 = V_0;
		WebSocket_SocketRecv_m123459254(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_7 = V_1;
		return L_7;
	}
}
// System.Void WebSocket::Connect()
extern "C"  void WebSocket_Connect_m1535663512 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	{
		Uri_t1116831938 * L_0 = __this->get_mUrl_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_0);
		int32_t L_2 = WebSocket_SocketCreate_m3121182677(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_m_NativeRef_1(L_2);
		return;
	}
}
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m1360354918 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_NativeRef_1();
		WebSocket_SocketClose_m184179332(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocket::get_Connected()
extern "C"  bool WebSocket_get_Connected_m3769431402 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_NativeRef_1();
		int32_t L_1 = WebSocket_SocketState_m3594308691(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String WebSocket::get_Error()
extern Il2CppClass* ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_get_Error_m1219586800_MetadataUsageId;
extern "C"  String_t* WebSocket_get_Error_m1219586800 (WebSocket_t858269639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_get_Error_m1219586800_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4260760469* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_1 = ((ByteU5BU5D_t4260760469*)SZArrayNew(ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024)));
		int32_t L_0 = __this->get_m_NativeRef_1();
		ByteU5BU5D_t4260760469* L_1 = V_1;
		int32_t L_2 = WebSocket_SocketError_m3005148394(NULL /*static, unused*/, L_0, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
		Encoding_t2012439129 * L_4 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_5 = V_1;
		String_t* L_6 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4260760469* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
