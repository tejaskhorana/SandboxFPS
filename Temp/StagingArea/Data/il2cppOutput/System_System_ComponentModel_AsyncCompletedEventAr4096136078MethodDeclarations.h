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

// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t4096136078;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.AsyncCompletedEventArgs::.ctor(System.Exception,System.Boolean,System.Object)
extern "C"  void AsyncCompletedEventArgs__ctor_m3203700022 (AsyncCompletedEventArgs_t4096136078 * __this, Exception_t3991598821 * ___error0, bool ___cancelled1, Il2CppObject * ___userState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventArgs::RaiseExceptionIfNecessary()
extern "C"  void AsyncCompletedEventArgs_RaiseExceptionIfNecessary_m2734996754 (AsyncCompletedEventArgs_t4096136078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::get_Cancelled()
extern "C"  bool AsyncCompletedEventArgs_get_Cancelled_m2829673121 (AsyncCompletedEventArgs_t4096136078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.AsyncCompletedEventArgs::get_Error()
extern "C"  Exception_t3991598821 * AsyncCompletedEventArgs_get_Error_m2268773201 (AsyncCompletedEventArgs_t4096136078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncCompletedEventArgs::get_UserState()
extern "C"  Il2CppObject * AsyncCompletedEventArgs_get_UserState_m3094010805 (AsyncCompletedEventArgs_t4096136078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
