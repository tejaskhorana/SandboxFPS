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

// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t1862307544;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t139609976;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t3522160029;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t3413286430;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2333945751;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t364171432;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t3914683425;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t1382019100;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3373723451;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_DoWorkEventHandler139609976.h"
#include "System_System_ComponentModel_ProgressChangedEventH3522160029.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve3413286430.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_ComponentModel_AsyncOperation2333945751.h"
#include "mscorlib_System_Threading_SendOrPostCallback364171432.h"
#include "System_System_ComponentModel_DoWorkEventArgs3914683425.h"
#include "System_System_ComponentModel_ProgressChangedEventA1382019100.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve3373723451.h"

// System.Void System.ComponentModel.BackgroundWorker::.ctor()
extern "C"  void BackgroundWorker__ctor_m440969357 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_add_DoWork_m2703562946 (BackgroundWorker_t1862307544 * __this, DoWorkEventHandler_t139609976 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_remove_DoWork_m3596774547 (BackgroundWorker_t1862307544 * __this, DoWorkEventHandler_t139609976 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_add_ProgressChanged_m1381624106 (BackgroundWorker_t1862307544 * __this, ProgressChangedEventHandler_t3522160029 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_remove_ProgressChanged_m3089255099 (BackgroundWorker_t1862307544 * __this, ProgressChangedEventHandler_t3522160029 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_add_RunWorkerCompleted_m4294877314 (BackgroundWorker_t1862307544 * __this, RunWorkerCompletedEventHandler_t3413286430 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_remove_RunWorkerCompleted_m581030227 (BackgroundWorker_t1862307544 * __this, RunWorkerCompletedEventHandler_t3413286430 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_CancellationPending()
extern "C"  bool BackgroundWorker_get_CancellationPending_m543184704 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_IsBusy()
extern "C"  bool BackgroundWorker_get_IsBusy_m3983670393 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerReportsProgress()
extern "C"  bool BackgroundWorker_get_WorkerReportsProgress_m2755607706 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerReportsProgress(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerReportsProgress_m509516403 (BackgroundWorker_t1862307544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerSupportsCancellation()
extern "C"  bool BackgroundWorker_get_WorkerSupportsCancellation_m1337841531 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerSupportsCancellation(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerSupportsCancellation_m2557344016 (BackgroundWorker_t1862307544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CancelAsync()
extern "C"  void BackgroundWorker_CancelAsync_m3750610381 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32)
extern "C"  void BackgroundWorker_ReportProgress_m3081599017 (BackgroundWorker_t1862307544 * __this, int32_t ___percentProgress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32,System.Object)
extern "C"  void BackgroundWorker_ReportProgress_m2694170423 (BackgroundWorker_t1862307544 * __this, int32_t ___percentProgress0, Il2CppObject * ___userState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync()
extern "C"  void BackgroundWorker_RunWorkerAsync_m10983658 (BackgroundWorker_t1862307544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ProcessWorker(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void BackgroundWorker_ProcessWorker_m301374595 (BackgroundWorker_t1862307544 * __this, Il2CppObject * ___argument0, AsyncOperation_t2333945751 * ___async1, SendOrPostCallback_t364171432 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CompleteWorker(System.Object)
extern "C"  void BackgroundWorker_CompleteWorker_m3575005286 (BackgroundWorker_t1862307544 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync(System.Object)
extern "C"  void BackgroundWorker_RunWorkerAsync_m2395501802 (BackgroundWorker_t1862307544 * __this, Il2CppObject * ___argument0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnDoWork(System.ComponentModel.DoWorkEventArgs)
extern "C"  void BackgroundWorker_OnDoWork_m1248075048 (BackgroundWorker_t1862307544 * __this, DoWorkEventArgs_t3914683425 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnProgressChanged(System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void BackgroundWorker_OnProgressChanged_m278496256 (BackgroundWorker_t1862307544 * __this, ProgressChangedEventArgs_t1382019100 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnRunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void BackgroundWorker_OnRunWorkerCompleted_m1699962984 (BackgroundWorker_t1862307544 * __this, RunWorkerCompletedEventArgs_t3373723451 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<ReportProgress>m__0(System.Object)
extern "C"  void BackgroundWorker_U3CReportProgressU3Em__0_m2666626617 (BackgroundWorker_t1862307544 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<CompleteWorker>m__1(System.Object)
extern "C"  void BackgroundWorker_U3CCompleteWorkerU3Em__1_m559681454 (BackgroundWorker_t1862307544 * __this, Il2CppObject * ___darg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
