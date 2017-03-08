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

// System.Random
struct Random_t4255898871;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m2490522898 (Random_t4255898871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C"  void Random__ctor_m4002613091 (Random_t4255898871 * __this, int32_t ___Seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C"  double Random_Sample_m3542077785 (Random_t4255898871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next()
extern "C"  int32_t Random_Next_m2107657609 (Random_t4255898871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32)
extern "C"  int32_t Random_Next_m826342746 (Random_t4255898871 * __this, int32_t ___maxValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::NextDouble()
extern "C"  double Random_NextDouble_m194244307 (Random_t4255898871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
