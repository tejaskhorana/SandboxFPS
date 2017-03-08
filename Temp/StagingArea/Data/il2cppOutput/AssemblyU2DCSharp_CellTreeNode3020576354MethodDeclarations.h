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

// CellTreeNode
struct CellTreeNode_t3020576354;
// System.Collections.Generic.List`1<CellTreeNode>
struct List_1_t93794610;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CellTreeNode_ENodeType2581346388.h"
#include "AssemblyU2DCSharp_CellTreeNode3020576354.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void CellTreeNode::.ctor()
extern "C"  void CellTreeNode__ctor_m4011567737 (CellTreeNode_t3020576354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::.ctor(System.Int32,CellTreeNode/ENodeType,CellTreeNode)
extern "C"  void CellTreeNode__ctor_m1217020540 (CellTreeNode_t3020576354 * __this, int32_t ___id0, int32_t ___nodeType1, CellTreeNode_t3020576354 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::AddChild(CellTreeNode)
extern "C"  void CellTreeNode_AddChild_m1344643908 (CellTreeNode_t3020576354 * __this, CellTreeNode_t3020576354 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::Draw()
extern "C"  void CellTreeNode_Draw_m3404938223 (CellTreeNode_t3020576354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetAllLeafNodes(System.Collections.Generic.List`1<CellTreeNode>)
extern "C"  void CellTreeNode_GetAllLeafNodes_m376775381 (CellTreeNode_t3020576354 * __this, List_1_t93794610 * ___leafNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetInsideCells(System.Collections.Generic.List`1<System.Int32>,System.Boolean,UnityEngine.Vector3)
extern "C"  void CellTreeNode_GetInsideCells_m1365526105 (CellTreeNode_t3020576354 * __this, List_1_t2522024052 * ___insideCells0, bool ___yIsUpAxis1, Vector3_t4282066566  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetNearbyCells(System.Collections.Generic.List`1<System.Int32>,System.Boolean,UnityEngine.Vector3)
extern "C"  void CellTreeNode_GetNearbyCells_m1909214518 (CellTreeNode_t3020576354 * __this, List_1_t2522024052 * ___nearbyCells0, bool ___yIsUpAxis1, Vector3_t4282066566  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellTreeNode::IsPointInsideCell(System.Boolean,UnityEngine.Vector3)
extern "C"  bool CellTreeNode_IsPointInsideCell_m1907282897 (CellTreeNode_t3020576354 * __this, bool ___yIsUpAxis0, Vector3_t4282066566  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellTreeNode::IsPointNearCell(System.Boolean,UnityEngine.Vector3)
extern "C"  bool CellTreeNode_IsPointNearCell_m28348925 (CellTreeNode_t3020576354 * __this, bool ___yIsUpAxis0, Vector3_t4282066566  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
