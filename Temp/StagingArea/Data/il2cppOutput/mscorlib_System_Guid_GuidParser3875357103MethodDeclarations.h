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

// System.Guid/GuidParser
struct GuidParser_t3875357103;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Guid2862754429.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
extern "C"  void GuidParser__ctor_m3946828991 (GuidParser_t3875357103 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
extern "C"  void GuidParser_Reset_m220440016 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
extern "C"  bool GuidParser_AtEnd_m3663612583 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
extern "C"  void GuidParser_ThrowFormatException_m2829966227 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
extern "C"  uint64_t GuidParser_ParseHex_m770923879 (GuidParser_t3875357103 * __this, int32_t ___length0, bool ___strictLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
extern "C"  bool GuidParser_ParseOptChar_m368280836 (GuidParser_t3875357103 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
extern "C"  void GuidParser_ParseChar_m265618931 (GuidParser_t3875357103 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
extern "C"  Guid_t2862754429  GuidParser_ParseGuid1_m242276481 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
extern "C"  void GuidParser_ParseHexPrefix_m2081555291 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
extern "C"  Guid_t2862754429  GuidParser_ParseGuid2_m242277442 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
extern "C"  Guid_t2862754429  GuidParser_Parse_m903613225 (GuidParser_t3875357103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
