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

// WorkerMenu
struct WorkerMenu_t1608960541;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WorkerMenu::.ctor()
extern "C"  void WorkerMenu__ctor_m1580850974 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::.cctor()
extern "C"  void WorkerMenu__cctor_m1279643727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WorkerMenu::get_ErrorDialog()
extern "C"  String_t* WorkerMenu_get_ErrorDialog_m1626468224 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::set_ErrorDialog(System.String)
extern "C"  void WorkerMenu_set_ErrorDialog_m1363774611 (WorkerMenu_t1608960541 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::Awake()
extern "C"  void WorkerMenu_Awake_m1818456193 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnGUI()
extern "C"  void WorkerMenu_OnGUI_m1076249624 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnJoinedRoom()
extern "C"  void WorkerMenu_OnJoinedRoom_m3578288041 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonCreateRoomFailed()
extern "C"  void WorkerMenu_OnPhotonCreateRoomFailed_m680091285 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonJoinRoomFailed(System.Object[])
extern "C"  void WorkerMenu_OnPhotonJoinRoomFailed_m3088527247 (WorkerMenu_t1608960541 * __this, ObjectU5BU5D_t1108656482* ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonRandomJoinFailed()
extern "C"  void WorkerMenu_OnPhotonRandomJoinFailed_m4114795819 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnCreatedRoom()
extern "C"  void WorkerMenu_OnCreatedRoom_m1217269952 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnDisconnectedFromPhoton()
extern "C"  void WorkerMenu_OnDisconnectedFromPhoton_m2118066182 (WorkerMenu_t1608960541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnFailedToConnectToPhoton(System.Object)
extern "C"  void WorkerMenu_OnFailedToConnectToPhoton_m3646086862 (WorkerMenu_t1608960541 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
