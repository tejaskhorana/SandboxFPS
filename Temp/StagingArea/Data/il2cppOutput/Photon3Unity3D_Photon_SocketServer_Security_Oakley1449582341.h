#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.OakleyGroups
struct  OakleyGroups_t1449582341  : public Il2CppObject
{
public:

public:
};

struct OakleyGroups_t1449582341_StaticFields
{
public:
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_t4260760469* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_t4260760469* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_t4260760469* ___OakleyPrime1536_3;

public:
	inline static int32_t get_offset_of_Generator_0() { return static_cast<int32_t>(offsetof(OakleyGroups_t1449582341_StaticFields, ___Generator_0)); }
	inline int32_t get_Generator_0() const { return ___Generator_0; }
	inline int32_t* get_address_of_Generator_0() { return &___Generator_0; }
	inline void set_Generator_0(int32_t value)
	{
		___Generator_0 = value;
	}

	inline static int32_t get_offset_of_OakleyPrime768_1() { return static_cast<int32_t>(offsetof(OakleyGroups_t1449582341_StaticFields, ___OakleyPrime768_1)); }
	inline ByteU5BU5D_t4260760469* get_OakleyPrime768_1() const { return ___OakleyPrime768_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_OakleyPrime768_1() { return &___OakleyPrime768_1; }
	inline void set_OakleyPrime768_1(ByteU5BU5D_t4260760469* value)
	{
		___OakleyPrime768_1 = value;
		Il2CppCodeGenWriteBarrier(&___OakleyPrime768_1, value);
	}

	inline static int32_t get_offset_of_OakleyPrime1024_2() { return static_cast<int32_t>(offsetof(OakleyGroups_t1449582341_StaticFields, ___OakleyPrime1024_2)); }
	inline ByteU5BU5D_t4260760469* get_OakleyPrime1024_2() const { return ___OakleyPrime1024_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_OakleyPrime1024_2() { return &___OakleyPrime1024_2; }
	inline void set_OakleyPrime1024_2(ByteU5BU5D_t4260760469* value)
	{
		___OakleyPrime1024_2 = value;
		Il2CppCodeGenWriteBarrier(&___OakleyPrime1024_2, value);
	}

	inline static int32_t get_offset_of_OakleyPrime1536_3() { return static_cast<int32_t>(offsetof(OakleyGroups_t1449582341_StaticFields, ___OakleyPrime1536_3)); }
	inline ByteU5BU5D_t4260760469* get_OakleyPrime1536_3() const { return ___OakleyPrime1536_3; }
	inline ByteU5BU5D_t4260760469** get_address_of_OakleyPrime1536_3() { return &___OakleyPrime1536_3; }
	inline void set_OakleyPrime1536_3(ByteU5BU5D_t4260760469* value)
	{
		___OakleyPrime1536_3 = value;
		Il2CppCodeGenWriteBarrier(&___OakleyPrime1536_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
