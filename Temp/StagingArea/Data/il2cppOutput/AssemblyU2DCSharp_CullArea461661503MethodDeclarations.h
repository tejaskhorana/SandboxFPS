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

// CullArea
struct CullArea_t461661503;
// CellTree
struct CellTree_t3442037824;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3671945244;
// CellTreeNode
struct CellTreeNode_t3020576354;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CellTree3442037824.h"
#include "AssemblyU2DCSharp_CellTreeNode3020576354.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void CullArea::.ctor()
extern "C"  void CullArea__ctor_m3106983996 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CullArea::get_CellCount()
extern "C"  int32_t CullArea_get_CellCount_m3672860720 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_CellCount(System.Int32)
extern "C"  void CullArea_set_CellCount_m3402395611 (CullArea_t461661503 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CellTree CullArea::get_CellTree()
extern "C"  CellTree_t3442037824 * CullArea_get_CellTree_m1405047982 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_CellTree(CellTree)
extern "C"  void CullArea_set_CellTree_m3577103973 (CullArea_t461661503 * __this, CellTree_t3442037824 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> CullArea::get_Map()
extern "C"  Dictionary_2_t3671945244 * CullArea_get_Map_m1651962222 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_Map(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
extern "C"  void CullArea_set_Map_m4115976347 (CullArea_t461661503 * __this, Dictionary_2_t3671945244 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::Awake()
extern "C"  void CullArea_Awake_m3344589215 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::OnDrawGizmos()
extern "C"  void CullArea_OnDrawGizmos_m3323315556 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::CreateCellHierarchy()
extern "C"  void CullArea_CreateCellHierarchy_m742083377 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::CreateChildCells(CellTreeNode,System.Int32)
extern "C"  void CullArea_CreateChildCells_m1816544 (CullArea_t461661503 * __this, CellTreeNode_t3020576354 * ___parent0, int32_t ___cellLevelInHierarchy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::DrawCells()
extern "C"  void CullArea_DrawCells_m657861127 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CullArea::IsCellCountAllowed()
extern "C"  bool CullArea_IsCellCountAllowed_m3861234977 (CullArea_t461661503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> CullArea::GetActiveCells(UnityEngine.Vector3)
extern "C"  List_1_t2522024052 * CullArea_GetActiveCells_m4227159066 (CullArea_t461661503 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
