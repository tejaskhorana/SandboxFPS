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

// System.Reflection.Assembly/ResourceCloseHandler
struct ResourceCloseHandler_t4012403781;
// System.Reflection.Module
struct Module_t1394482686;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void System.Reflection.Assembly/ResourceCloseHandler::.ctor(System.Reflection.Module)
extern "C"  void ResourceCloseHandler__ctor_m322742687 (ResourceCloseHandler_t4012403781 * __this, Module_t1394482686 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly/ResourceCloseHandler::OnClose(System.Object,System.EventArgs)
extern "C"  void ResourceCloseHandler_OnClose_m3659689696 (ResourceCloseHandler_t4012403781 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
