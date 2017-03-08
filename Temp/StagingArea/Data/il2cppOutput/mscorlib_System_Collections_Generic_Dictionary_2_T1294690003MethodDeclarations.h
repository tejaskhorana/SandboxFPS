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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct Transform_1_t1294690003;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_801805668.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2618518894_gshared (Transform_1_t1294690003 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2618518894(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1294690003 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2618518894_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t801805668  Transform_1_Invoke_m1235636938_gshared (Transform_1_t1294690003 * __this, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1235636938(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t801805668  (*) (Transform_1_t1294690003 *, uint8_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1235636938_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1417805173_gshared (Transform_1_t1294690003 * __this, uint8_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1417805173(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1294690003 *, uint8_t, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1417805173_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t801805668  Transform_1_EndInvoke_m1449757568_gshared (Transform_1_t1294690003 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1449757568(__this, ___result0, method) ((  KeyValuePair_2_t801805668  (*) (Transform_1_t1294690003 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1449757568_gshared)(__this, ___result0, method)
