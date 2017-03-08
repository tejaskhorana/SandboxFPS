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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,ExitGames.Demos.DemoHubManager/DemoData>
struct Transform_1_t3558449677;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_ExitGames_Demos_DemoHubManager_D1781503704.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3076626127_gshared (Transform_1_t3558449677 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3076626127(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3558449677 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3076626127_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,ExitGames.Demos.DemoHubManager/DemoData>::Invoke(TKey,TValue)
extern "C"  DemoData_t1781503704  Transform_1_Invoke_m2964529997_gshared (Transform_1_t3558449677 * __this, Il2CppObject * ___key0, DemoData_t1781503704  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2964529997(__this, ___key0, ___value1, method) ((  DemoData_t1781503704  (*) (Transform_1_t3558449677 *, Il2CppObject *, DemoData_t1781503704 , const MethodInfo*))Transform_1_Invoke_m2964529997_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,ExitGames.Demos.DemoHubManager/DemoData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m976745900_gshared (Transform_1_t3558449677 * __this, Il2CppObject * ___key0, DemoData_t1781503704  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m976745900(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3558449677 *, Il2CppObject *, DemoData_t1781503704 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m976745900_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ExitGames.Demos.DemoHubManager/DemoData,ExitGames.Demos.DemoHubManager/DemoData>::EndInvoke(System.IAsyncResult)
extern "C"  DemoData_t1781503704  Transform_1_EndInvoke_m2518833949_gshared (Transform_1_t3558449677 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2518833949(__this, ___result0, method) ((  DemoData_t1781503704  (*) (Transform_1_t3558449677 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2518833949_gshared)(__this, ___result0, method)
