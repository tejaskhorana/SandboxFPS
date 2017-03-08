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

// System.Func`1<System.Boolean>
struct Func_1_t1601960292;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m1262699013_gshared (Func_1_t1601960292 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m1262699013(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t1601960292 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m1262699013_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C"  bool Func_1_Invoke_m865577103_gshared (Func_1_t1601960292 * __this, const MethodInfo* method);
#define Func_1_Invoke_m865577103(__this, method) ((  bool (*) (Func_1_t1601960292 *, const MethodInfo*))Func_1_Invoke_m865577103_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m3591134397_gshared (Func_1_t1601960292 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m3591134397(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t1601960292 *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m3591134397_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_1_EndInvoke_m3823601762_gshared (Func_1_t1601960292 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m3823601762(__this, ___result0, method) ((  bool (*) (Func_1_t1601960292 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m3823601762_gshared)(__this, ___result0, method)
