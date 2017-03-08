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

// System.TimeSpan/Parser
struct Parser_t818488280;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2785526312 (Parser_t818488280 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C"  bool Parser_get_AtEnd_m4226495541 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C"  void Parser_ParseWhiteSpace_m3759079656 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C"  bool Parser_ParseSign_m4182815110 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C"  int32_t Parser_ParseInt_m3072221881 (Parser_t818488280 * __this, bool ___optional0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C"  bool Parser_ParseOptDot_m3467762975 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C"  void Parser_ParseOptColon_m3296642487 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C"  int64_t Parser_ParseTicks_m2032431114 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C"  TimeSpan_t413522987  Parser_Execute_m800979088 (Parser_t818488280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
