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

// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C"  void Stopwatch__ctor_m435104496 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C"  void Stopwatch__cctor_m121241277 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C"  int64_t Stopwatch_GetTimestamp_m930365925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C"  TimeSpan_t413522987  Stopwatch_get_Elapsed_m892540484 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C"  int64_t Stopwatch_get_ElapsedMilliseconds_m23977474 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C"  int64_t Stopwatch_get_ElapsedTicks_m1015444840 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
extern "C"  bool Stopwatch_get_IsRunning_m1574745796 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C"  void Stopwatch_Reset_m2376504733 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C"  void Stopwatch_Start_m3677209584 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C"  void Stopwatch_Stop_m2612884438 (Stopwatch_t3420517611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
