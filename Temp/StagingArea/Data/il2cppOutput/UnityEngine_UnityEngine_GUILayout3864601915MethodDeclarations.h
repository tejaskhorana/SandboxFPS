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

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.GUIContent
struct GUIContent_t2094828418;
// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t3588725815;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2749288659;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t331591504;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction2749288659.h"

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1657324111 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___image0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1421013860 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3812046522 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Box_m140695724 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoBox(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoBox_m2769828355 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m3370910503 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m2367652128 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m3824368015 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___maxLength1, bool ___multiline2, GUIStyle_t2990928826 * ___style3, GUILayoutOptionU5BU5D_t2977405297* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Toggle_m3179746328 (Il2CppObject * __this /* static, unused */, bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoToggle_m2344914223 (Il2CppObject * __this /* static, unused */, bool ___value0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1048546399 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, StringU5BU5D_t4054002952* ___texts1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1916473871 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, GUIContentU5BU5D_t3588725815* ___contents1, GUIStyle_t2990928826 * ___style2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_HorizontalSlider_m2607521747 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_DoHorizontalSlider_m3518318248 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUIStyle_t2990928826 * ___slider3, GUIStyle_t2990928826 * ___thumb4, GUILayoutOptionU5BU5D_t2977405297* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739 (Il2CppObject * __this /* static, unused */, float ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m3316706189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m722450062 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2977405297* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m2423643318 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m556624369 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m2155819644 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2977405297* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m3125652388 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m3685530563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m4120101869 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m3882119276 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, GUIStyle_t2990928826 * ___style1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m2566106901 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m755663130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t4282066565  GUILayout_BeginScrollView_m247627737 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___scrollPosition0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t4282066565  GUILayout_BeginScrollView_m3507871150 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___scrollPosition0, bool ___alwaysShowHorizontal1, bool ___alwaysShowVertical2, GUIStyle_t2990928826 * ___horizontalScrollbar3, GUIStyle_t2990928826 * ___verticalScrollbar4, GUIStyle_t2990928826 * ___background5, GUILayoutOptionU5BU5D_t2977405297* ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m2116108639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m3241059478 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayout_Window_m3742951272 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t4241904616  ___screenRect1, WindowFunction_t2749288659 * ___func2, String_t* ___text3, GUILayoutOptionU5BU5D_t2977405297* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayout_DoWindow_m1233349823 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t4241904616  ___screenRect1, WindowFunction_t2749288659 * ___func2, GUIContent_t2094828418 * ___content3, GUIStyle_t2990928826 * ___style4, GUILayoutOptionU5BU5D_t2977405297* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_Width_m2259621411 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_Height_m3774802884 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t331591504 * GUILayout_ExpandWidth_m1724891333 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t331591504 * GUILayout_ExpandHeight_m2691143288 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
