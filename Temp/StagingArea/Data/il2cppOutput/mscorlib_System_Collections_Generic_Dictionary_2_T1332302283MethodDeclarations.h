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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>>
struct Transform_1_t1332302283;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23850323606.h"
#include "AssemblyU2DCSharp_ExitGames_Demos_DemoHubManager_D1781503704.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1837560912_gshared (Transform_1_t1332302283 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1837560912(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1332302283 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1837560912_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3850323606  Transform_1_Invoke_m3328725544_gshared (Transform_1_t1332302283 * __this, Il2CppObject * ___key0, DemoData_t1781503704  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3328725544(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3850323606  (*) (Transform_1_t1332302283 *, Il2CppObject *, DemoData_t1781503704 , const MethodInfo*))Transform_1_Invoke_m3328725544_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2950642899_gshared (Transform_1_t1332302283 * __this, Il2CppObject * ___key0, DemoData_t1781503704  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2950642899(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1332302283 *, Il2CppObject *, DemoData_t1781503704 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2950642899_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3850323606  Transform_1_EndInvoke_m3455903074_gshared (Transform_1_t1332302283 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3455903074(__this, ___result0, method) ((  KeyValuePair_2_t3850323606  (*) (Transform_1_t1332302283 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3455903074_gshared)(__this, ___result0, method)
