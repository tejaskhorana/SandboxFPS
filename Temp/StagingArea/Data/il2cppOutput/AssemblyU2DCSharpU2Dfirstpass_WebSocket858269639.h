#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t1116831938;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocket
struct  WebSocket_t858269639  : public Il2CppObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t1116831938 * ___mUrl_0;
	// System.Int32 WebSocket::m_NativeRef
	int32_t ___m_NativeRef_1;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t858269639, ___mUrl_0)); }
	inline Uri_t1116831938 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t1116831938 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t1116831938 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier(&___mUrl_0, value);
	}

	inline static int32_t get_offset_of_m_NativeRef_1() { return static_cast<int32_t>(offsetof(WebSocket_t858269639, ___m_NativeRef_1)); }
	inline int32_t get_m_NativeRef_1() const { return ___m_NativeRef_1; }
	inline int32_t* get_address_of_m_NativeRef_1() { return &___m_NativeRef_1; }
	inline void set_m_NativeRef_1(int32_t value)
	{
		___m_NativeRef_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
