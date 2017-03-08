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

// System.ComponentModel.DesignerAttribute
struct DesignerAttribute_t1894265111;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String)
extern "C"  void DesignerAttribute__ctor_m559147750 (DesignerAttribute_t1894265111 * __this, String_t* ___designerTypeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.Type)
extern "C"  void DesignerAttribute__ctor_m3331257437 (DesignerAttribute_t1894265111 * __this, Type_t * ___designerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern "C"  void DesignerAttribute__ctor_m904679705 (DesignerAttribute_t1894265111 * __this, String_t* ___designerTypeName0, Type_t * ___designerBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.Type,System.Type)
extern "C"  void DesignerAttribute__ctor_m1422516240 (DesignerAttribute_t1894265111 * __this, Type_t * ___designerType0, Type_t * ___designerBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.String)
extern "C"  void DesignerAttribute__ctor_m785189026 (DesignerAttribute_t1894265111 * __this, String_t* ___designerTypeName0, String_t* ___designerBaseTypeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerBaseTypeName()
extern "C"  String_t* DesignerAttribute_get_DesignerBaseTypeName_m4099457423 (DesignerAttribute_t1894265111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerTypeName()
extern "C"  String_t* DesignerAttribute_get_DesignerTypeName_m1197657054 (DesignerAttribute_t1894265111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern "C"  Il2CppObject * DesignerAttribute_get_TypeId_m660129937 (DesignerAttribute_t1894265111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern "C"  bool DesignerAttribute_Equals_m906809507 (DesignerAttribute_t1894265111 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern "C"  int32_t DesignerAttribute_GetHashCode_m2241054075 (DesignerAttribute_t1894265111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
