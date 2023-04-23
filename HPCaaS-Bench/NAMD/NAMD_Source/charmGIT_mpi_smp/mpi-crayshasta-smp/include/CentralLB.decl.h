#ifndef _DECL_CentralLB_H_
#define _DECL_CentralLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "BaseLB.decl.h"

#include "LBManager.decl.h"

#include "CentralLBMsg.h"

/* DECLS: readonly CkGroupID loadbalancer;
 */


/* DECLS: group CentralLB: BaseLB{
void CentralLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void SendStats();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
void ReceiveCounts(const int *counts, int n);
void LoadBalance();
threaded void t_LoadBalance();
void ApplyDecision();
void ResumeClients(int impl_noname_1);
void ResumeClients();
void changeFreq(int impl_noname_2);
void ScatterMigrationResults(LBScatterMsg* impl_msg);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveMigration(LBScatterMsg* impl_msg);
void ProcessReceiveMigration();
void ProcessMigrationDecision();
void MissMigrate(int impl_noname_3);
void CheckForRealloc();
void ResumeFromReallocCheckpoint();
void MigrationDoneImpl(int impl_noname_4);
void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
void StartCleanup();
CentralLB(CkMigrateMessage* impl_msg);
};
 */
 class CentralLB;
 class CkIndex_CentralLB;
 class CProxy_CentralLB;
 class CProxyElement_CentralLB;
 class CProxySection_CentralLB;
/* --------------- index object ------------------ */
class CkIndex_CentralLB:public CkIndex_BaseLB{
  public:
    typedef CentralLB local_t;
    typedef CkIndex_CentralLB index_t;
    typedef CProxy_CentralLB proxy_t;
    typedef CProxyElement_CentralLB element_t;
    typedef CProxySection_CentralLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void CentralLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_CentralLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_CentralLB_marshall1() {
      static int epidx = reg_CentralLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_CentralLB_marshall1(); }
    
    static void _call_CentralLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CentralLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CentralLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CentralLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ProcessAtSync();
     */
    // Entry point registration at startup
    
    static int reg_ProcessAtSync_void();
    // Entry point index lookup
    
    inline static int idx_ProcessAtSync_void() {
      static int epidx = reg_ProcessAtSync_void();
      return epidx;
    }

    
    inline static int idx_ProcessAtSync(void (CentralLB::*)() ) {
      return idx_ProcessAtSync_void();
    }


    
    static int ProcessAtSync() { return idx_ProcessAtSync_void(); }
    
    static void _call_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void SendStats();
     */
    // Entry point registration at startup
    
    static int reg_SendStats_void();
    // Entry point index lookup
    
    inline static int idx_SendStats_void() {
      static int epidx = reg_SendStats_void();
      return epidx;
    }

    
    inline static int idx_SendStats(void (CentralLB::*)() ) {
      return idx_SendStats_void();
    }


    
    static int SendStats() { return idx_SendStats_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_SendStats_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_SendStats_void() {
      static int epidx = reg_redn_wrapper_SendStats_void();
      return epidx;
    }
    
    static int redn_wrapper_SendStats(CkReductionMsg* impl_msg) { return idx_redn_wrapper_SendStats_void(); }
    
    static void _call_redn_wrapper_SendStats_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_SendStats_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SendStats_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveStats_marshall4();
    // Entry point index lookup
    
    inline static int idx_ReceiveStats_marshall4() {
      static int epidx = reg_ReceiveStats_marshall4();
      return epidx;
    }

    
    inline static int idx_ReceiveStats(void (CentralLB::*)(const CkMarshalledCLBStatsMessage &data) ) {
      return idx_ReceiveStats_marshall4();
    }


    
    static int ReceiveStats(const CkMarshalledCLBStatsMessage &data) { return idx_ReceiveStats_marshall4(); }
    
    static void _call_ReceiveStats_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveStats_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveStats_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveStats_marshall4(PUP::er &p,void *msg);
    /* DECLS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveStatsViaTree_marshall5();
    // Entry point index lookup
    
    inline static int idx_ReceiveStatsViaTree_marshall5() {
      static int epidx = reg_ReceiveStatsViaTree_marshall5();
      return epidx;
    }

    
    inline static int idx_ReceiveStatsViaTree(void (CentralLB::*)(const CkMarshalledCLBStatsMessage &data) ) {
      return idx_ReceiveStatsViaTree_marshall5();
    }


    
    static int ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data) { return idx_ReceiveStatsViaTree_marshall5(); }
    
    static void _call_ReceiveStatsViaTree_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveStatsViaTree_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveStatsViaTree_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveStatsViaTree_marshall5(PUP::er &p,void *msg);
    /* DECLS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveStatsFromRoot_marshall6();
    // Entry point index lookup
    
    inline static int idx_ReceiveStatsFromRoot_marshall6() {
      static int epidx = reg_ReceiveStatsFromRoot_marshall6();
      return epidx;
    }

    
    inline static int idx_ReceiveStatsFromRoot(void (CentralLB::*)(const CkMarshalledCLBStatsMessage &data) ) {
      return idx_ReceiveStatsFromRoot_marshall6();
    }


    
    static int ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data) { return idx_ReceiveStatsFromRoot_marshall6(); }
    
    static void _call_ReceiveStatsFromRoot_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveStatsFromRoot_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveStatsFromRoot_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveStatsFromRoot_marshall6(PUP::er &p,void *msg);
    /* DECLS: void ReceiveCounts(const int *counts, int n);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveCounts_marshall7();
    // Entry point index lookup
    
    inline static int idx_ReceiveCounts_marshall7() {
      static int epidx = reg_ReceiveCounts_marshall7();
      return epidx;
    }

    
    inline static int idx_ReceiveCounts(void (CentralLB::*)(const int *counts, int n) ) {
      return idx_ReceiveCounts_marshall7();
    }


    
    static int ReceiveCounts(const int *counts, int n) { return idx_ReceiveCounts_marshall7(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ReceiveCounts_marshall7();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ReceiveCounts_marshall7() {
      static int epidx = reg_redn_wrapper_ReceiveCounts_marshall7();
      return epidx;
    }
    
    static int redn_wrapper_ReceiveCounts(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ReceiveCounts_marshall7(); }
    
    static void _call_redn_wrapper_ReceiveCounts_marshall7(void* impl_msg, void* impl_obj_void);
    
    static void _call_ReceiveCounts_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveCounts_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveCounts_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveCounts_marshall7(PUP::er &p,void *msg);
    /* DECLS: void LoadBalance();
     */
    // Entry point registration at startup
    
    static int reg_LoadBalance_void();
    // Entry point index lookup
    
    inline static int idx_LoadBalance_void() {
      static int epidx = reg_LoadBalance_void();
      return epidx;
    }

    
    inline static int idx_LoadBalance(void (CentralLB::*)() ) {
      return idx_LoadBalance_void();
    }


    
    static int LoadBalance() { return idx_LoadBalance_void(); }
    
    static void _call_LoadBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LoadBalance_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void t_LoadBalance();
     */
    // Entry point registration at startup
    
    static int reg_t_LoadBalance_void();
    // Entry point index lookup
    
    inline static int idx_t_LoadBalance_void() {
      static int epidx = reg_t_LoadBalance_void();
      return epidx;
    }

    
    inline static int idx_t_LoadBalance(void (CentralLB::*)() ) {
      return idx_t_LoadBalance_void();
    }


    
    static int t_LoadBalance() { return idx_t_LoadBalance_void(); }
    
    static void _call_t_LoadBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_t_LoadBalance_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_t_LoadBalance_void(CkThrCallArg *);
    /* DECLS: void ApplyDecision();
     */
    // Entry point registration at startup
    
    static int reg_ApplyDecision_void();
    // Entry point index lookup
    
    inline static int idx_ApplyDecision_void() {
      static int epidx = reg_ApplyDecision_void();
      return epidx;
    }

    
    inline static int idx_ApplyDecision(void (CentralLB::*)() ) {
      return idx_ApplyDecision_void();
    }


    
    static int ApplyDecision() { return idx_ApplyDecision_void(); }
    
    static void _call_ApplyDecision_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ApplyDecision_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeClients(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_marshall11();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_marshall11() {
      static int epidx = reg_ResumeClients_marshall11();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (CentralLB::*)(int impl_noname_1) ) {
      return idx_ResumeClients_marshall11();
    }


    
    static int ResumeClients(int impl_noname_1) { return idx_ResumeClients_marshall11(); }
    
    static void _call_ResumeClients_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ResumeClients_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ResumeClients_marshall11(PUP::er &p,void *msg);
    /* DECLS: void ResumeClients();
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_void();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_void() {
      static int epidx = reg_ResumeClients_void();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (CentralLB::*)() ) {
      return idx_ResumeClients_void();
    }


    
    static int ResumeClients() { return idx_ResumeClients_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ResumeClients_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ResumeClients_void() {
      static int epidx = reg_redn_wrapper_ResumeClients_void();
      return epidx;
    }
    
    static int redn_wrapper_ResumeClients(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ResumeClients_void(); }
    
    static void _call_redn_wrapper_ResumeClients_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ResumeClients_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_void(void* impl_msg, void* impl_obj);
    /* DECLS: void changeFreq(int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_changeFreq_marshall13();
    // Entry point index lookup
    
    inline static int idx_changeFreq_marshall13() {
      static int epidx = reg_changeFreq_marshall13();
      return epidx;
    }

    
    inline static int idx_changeFreq(void (CentralLB::*)(int impl_noname_2) ) {
      return idx_changeFreq_marshall13();
    }


    
    static int changeFreq(int impl_noname_2) { return idx_changeFreq_marshall13(); }
    
    static void _call_changeFreq_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_changeFreq_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_changeFreq_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_changeFreq_marshall13(PUP::er &p,void *msg);
    /* DECLS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ScatterMigrationResults_LBScatterMsg();
    // Entry point index lookup
    
    inline static int idx_ScatterMigrationResults_LBScatterMsg() {
      static int epidx = reg_ScatterMigrationResults_LBScatterMsg();
      return epidx;
    }

    
    inline static int idx_ScatterMigrationResults(void (CentralLB::*)(LBScatterMsg* impl_msg) ) {
      return idx_ScatterMigrationResults_LBScatterMsg();
    }


    
    static int ScatterMigrationResults(LBScatterMsg* impl_msg) { return idx_ScatterMigrationResults_LBScatterMsg(); }
    
    static void _call_ScatterMigrationResults_LBScatterMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ScatterMigrationResults_LBScatterMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveMigration_LBMigrateMsg();
    // Entry point index lookup
    
    inline static int idx_ReceiveMigration_LBMigrateMsg() {
      static int epidx = reg_ReceiveMigration_LBMigrateMsg();
      return epidx;
    }

    
    inline static int idx_ReceiveMigration(void (CentralLB::*)(LBMigrateMsg* impl_msg) ) {
      return idx_ReceiveMigration_LBMigrateMsg();
    }


    
    static int ReceiveMigration(LBMigrateMsg* impl_msg) { return idx_ReceiveMigration_LBMigrateMsg(); }
    
    static void _call_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveMigration(LBScatterMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveMigration_LBScatterMsg();
    // Entry point index lookup
    
    inline static int idx_ReceiveMigration_LBScatterMsg() {
      static int epidx = reg_ReceiveMigration_LBScatterMsg();
      return epidx;
    }

    
    inline static int idx_ReceiveMigration(void (CentralLB::*)(LBScatterMsg* impl_msg) ) {
      return idx_ReceiveMigration_LBScatterMsg();
    }


    
    static int ReceiveMigration(LBScatterMsg* impl_msg) { return idx_ReceiveMigration_LBScatterMsg(); }
    
    static void _call_ReceiveMigration_LBScatterMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveMigration_LBScatterMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ProcessReceiveMigration();
     */
    // Entry point registration at startup
    
    static int reg_ProcessReceiveMigration_void();
    // Entry point index lookup
    
    inline static int idx_ProcessReceiveMigration_void() {
      static int epidx = reg_ProcessReceiveMigration_void();
      return epidx;
    }

    
    inline static int idx_ProcessReceiveMigration(void (CentralLB::*)() ) {
      return idx_ProcessReceiveMigration_void();
    }


    
    static int ProcessReceiveMigration() { return idx_ProcessReceiveMigration_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ProcessReceiveMigration_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ProcessReceiveMigration_void() {
      static int epidx = reg_redn_wrapper_ProcessReceiveMigration_void();
      return epidx;
    }
    
    static int redn_wrapper_ProcessReceiveMigration(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ProcessReceiveMigration_void(); }
    
    static void _call_redn_wrapper_ProcessReceiveMigration_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ProcessReceiveMigration_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProcessReceiveMigration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ProcessMigrationDecision();
     */
    // Entry point registration at startup
    
    static int reg_ProcessMigrationDecision_void();
    // Entry point index lookup
    
    inline static int idx_ProcessMigrationDecision_void() {
      static int epidx = reg_ProcessMigrationDecision_void();
      return epidx;
    }

    
    inline static int idx_ProcessMigrationDecision(void (CentralLB::*)() ) {
      return idx_ProcessMigrationDecision_void();
    }


    
    static int ProcessMigrationDecision() { return idx_ProcessMigrationDecision_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ProcessMigrationDecision_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ProcessMigrationDecision_void() {
      static int epidx = reg_redn_wrapper_ProcessMigrationDecision_void();
      return epidx;
    }
    
    static int redn_wrapper_ProcessMigrationDecision(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ProcessMigrationDecision_void(); }
    
    static void _call_redn_wrapper_ProcessMigrationDecision_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ProcessMigrationDecision_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProcessMigrationDecision_void(void* impl_msg, void* impl_obj);
    /* DECLS: void MissMigrate(int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_MissMigrate_marshall19();
    // Entry point index lookup
    
    inline static int idx_MissMigrate_marshall19() {
      static int epidx = reg_MissMigrate_marshall19();
      return epidx;
    }

    
    inline static int idx_MissMigrate(void (CentralLB::*)(int impl_noname_3) ) {
      return idx_MissMigrate_marshall19();
    }


    
    static int MissMigrate(int impl_noname_3) { return idx_MissMigrate_marshall19(); }
    
    static void _call_MissMigrate_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MissMigrate_marshall19(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MissMigrate_marshall19(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MissMigrate_marshall19(PUP::er &p,void *msg);
    /* DECLS: void CheckForRealloc();
     */
    // Entry point registration at startup
    
    static int reg_CheckForRealloc_void();
    // Entry point index lookup
    
    inline static int idx_CheckForRealloc_void() {
      static int epidx = reg_CheckForRealloc_void();
      return epidx;
    }

    
    inline static int idx_CheckForRealloc(void (CentralLB::*)() ) {
      return idx_CheckForRealloc_void();
    }


    
    static int CheckForRealloc() { return idx_CheckForRealloc_void(); }
    
    static void _call_CheckForRealloc_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CheckForRealloc_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeFromReallocCheckpoint();
     */
    // Entry point registration at startup
    
    static int reg_ResumeFromReallocCheckpoint_void();
    // Entry point index lookup
    
    inline static int idx_ResumeFromReallocCheckpoint_void() {
      static int epidx = reg_ResumeFromReallocCheckpoint_void();
      return epidx;
    }

    
    inline static int idx_ResumeFromReallocCheckpoint(void (CentralLB::*)() ) {
      return idx_ResumeFromReallocCheckpoint_void();
    }


    
    static int ResumeFromReallocCheckpoint() { return idx_ResumeFromReallocCheckpoint_void(); }
    
    static void _call_ResumeFromReallocCheckpoint_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeFromReallocCheckpoint_void(void* impl_msg, void* impl_obj);
    /* DECLS: void MigrationDoneImpl(int impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_MigrationDoneImpl_marshall22();
    // Entry point index lookup
    
    inline static int idx_MigrationDoneImpl_marshall22() {
      static int epidx = reg_MigrationDoneImpl_marshall22();
      return epidx;
    }

    
    inline static int idx_MigrationDoneImpl(void (CentralLB::*)(int impl_noname_4) ) {
      return idx_MigrationDoneImpl_marshall22();
    }


    
    static int MigrationDoneImpl(int impl_noname_4) { return idx_MigrationDoneImpl_marshall22(); }
    
    static void _call_MigrationDoneImpl_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MigrationDoneImpl_marshall22(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MigrationDoneImpl_marshall22(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MigrationDoneImpl_marshall22(PUP::er &p,void *msg);
    /* DECLS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
     */
    // Entry point registration at startup
    
    static int reg_WillIbekilled_marshall23();
    // Entry point index lookup
    
    inline static int idx_WillIbekilled_marshall23() {
      static int epidx = reg_WillIbekilled_marshall23();
      return epidx;
    }

    
    inline static int idx_WillIbekilled(void (CentralLB::*)(const std::vector<char> &avail, int impl_noname_5) ) {
      return idx_WillIbekilled_marshall23();
    }


    
    static int WillIbekilled(const std::vector<char> &avail, int impl_noname_5) { return idx_WillIbekilled_marshall23(); }
    
    static void _call_WillIbekilled_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_WillIbekilled_marshall23(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_WillIbekilled_marshall23(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_WillIbekilled_marshall23(PUP::er &p,void *msg);
    /* DECLS: void StartCleanup();
     */
    // Entry point registration at startup
    
    static int reg_StartCleanup_void();
    // Entry point index lookup
    
    inline static int idx_StartCleanup_void() {
      static int epidx = reg_StartCleanup_void();
      return epidx;
    }

    
    inline static int idx_StartCleanup(void (CentralLB::*)() ) {
      return idx_StartCleanup_void();
    }


    
    static int StartCleanup() { return idx_StartCleanup_void(); }
    
    static void _call_StartCleanup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_StartCleanup_void(void* impl_msg, void* impl_obj);
    /* DECLS: CentralLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CentralLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CentralLB_CkMigrateMessage() {
      static int epidx = reg_CentralLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CentralLB_CkMigrateMessage(); }
    
    static void _call_CentralLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CentralLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CentralLB: public CProxyElement_BaseLB{
  public:
    typedef CentralLB local_t;
    typedef CkIndex_CentralLB index_t;
    typedef CProxy_CentralLB proxy_t;
    typedef CProxyElement_CentralLB element_t;
    typedef CProxySection_CentralLB section_t;


    /* TRAM aggregators */

    CProxyElement_CentralLB(void) {
    }
    CProxyElement_CentralLB(const IrrGroup *g) : CProxyElement_BaseLB(g){
    }
    CProxyElement_CentralLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_BaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CentralLB(CkGroupID _gid,int _onPE) : CProxyElement_BaseLB(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_BaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_BaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_BaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_BaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_BaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_BaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_BaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_BaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_BaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_BaseLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_BaseLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_BaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_BaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_BaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_BaseLB::ckSetGroupID(g);
    }
    CentralLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CentralLB* ckLocalBranch(CkGroupID gID) {
      return (CentralLB*)CkLocalBranch(gID);
    }
/* DECLS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveCounts(const int *counts, int n);
 */
    
    void ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void t_LoadBalance();
 */
    
    void t_LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ApplyDecision();
 */
    
    void ApplyDecision(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int impl_noname_1);
 */
    
    void ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void changeFreq(int impl_noname_2);
 */
    
    void changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
    
    void ScatterMigrationResults(LBScatterMsg* impl_msg);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);

/* DECLS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
    
    void ReceiveMigration(LBScatterMsg* impl_msg);

/* DECLS: void ProcessReceiveMigration();
 */
    
    void ProcessReceiveMigration(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessMigrationDecision();
 */
    
    void ProcessMigrationDecision(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MissMigrate(int impl_noname_3);
 */
    
    void MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CheckForRealloc();
 */
    
    void CheckForRealloc(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeFromReallocCheckpoint();
 */
    
    void ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MigrationDoneImpl(int impl_noname_4);
 */
    
    void MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
    
    void WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCleanup();
 */
    
    void StartCleanup(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CentralLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_CentralLB: public CProxy_BaseLB{
  public:
    typedef CentralLB local_t;
    typedef CkIndex_CentralLB index_t;
    typedef CProxy_CentralLB proxy_t;
    typedef CProxyElement_CentralLB element_t;
    typedef CProxySection_CentralLB section_t;

    CProxy_CentralLB(void) {
    }
    CProxy_CentralLB(const IrrGroup *g) : CProxy_BaseLB(g){
    }
    CProxy_CentralLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_BaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CentralLB(CkGroupID _gid) : CProxy_BaseLB(_gid){  }
    CProxyElement_CentralLB operator[](int onPE) const
      {return CProxyElement_CentralLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_BaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_BaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_BaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_BaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_BaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_BaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_BaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_BaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_BaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_BaseLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_BaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_BaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_BaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_BaseLB::ckSetGroupID(g);
    }
    CentralLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CentralLB* ckLocalBranch(CkGroupID gID) {
      return (CentralLB*)CkLocalBranch(gID);
    }
/* DECLS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CentralLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);
    
    void SendStats(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SendStats(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveCounts(const int *counts, int n);
 */
    
    void ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveCounts(const int *counts, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveCounts(const int *counts, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void t_LoadBalance();
 */
    
    void t_LoadBalance(const CkEntryOptions *impl_e_opts=NULL);
    
    void t_LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void t_LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ApplyDecision();
 */
    
    void ApplyDecision(const CkEntryOptions *impl_e_opts=NULL);
    
    void ApplyDecision(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ApplyDecision(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int impl_noname_1);
 */
    
    void ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void changeFreq(int impl_noname_2);
 */
    
    void changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void changeFreq(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void changeFreq(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
    
    void ScatterMigrationResults(LBScatterMsg* impl_msg);
    
    void ScatterMigrationResults(LBScatterMsg* impl_msg, int npes, int *pes);
    
    void ScatterMigrationResults(LBScatterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);
    
    void ReceiveMigration(LBMigrateMsg* impl_msg, int npes, int *pes);
    
    void ReceiveMigration(LBMigrateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
    
    void ReceiveMigration(LBScatterMsg* impl_msg);
    
    void ReceiveMigration(LBScatterMsg* impl_msg, int npes, int *pes);
    
    void ReceiveMigration(LBScatterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ProcessReceiveMigration();
 */
    
    void ProcessReceiveMigration(const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessReceiveMigration(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessReceiveMigration(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessMigrationDecision();
 */
    
    void ProcessMigrationDecision(const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessMigrationDecision(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessMigrationDecision(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MissMigrate(int impl_noname_3);
 */
    
    void MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);
    
    void MissMigrate(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void MissMigrate(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CheckForRealloc();
 */
    
    void CheckForRealloc(const CkEntryOptions *impl_e_opts=NULL);
    
    void CheckForRealloc(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void CheckForRealloc(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeFromReallocCheckpoint();
 */
    
    void ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeFromReallocCheckpoint(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeFromReallocCheckpoint(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MigrationDoneImpl(int impl_noname_4);
 */
    
    void MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    
    void MigrationDoneImpl(int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void MigrationDoneImpl(int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
    
    void WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);
    
    void WillIbekilled(const std::vector<char> &avail, int impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void WillIbekilled(const std::vector<char> &avail, int impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCleanup();
 */
    
    void StartCleanup(const CkEntryOptions *impl_e_opts=NULL);
    
    void StartCleanup(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void StartCleanup(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CentralLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_CentralLB: public CProxySection_BaseLB{
  public:
    typedef CentralLB local_t;
    typedef CkIndex_CentralLB index_t;
    typedef CProxy_CentralLB proxy_t;
    typedef CProxyElement_CentralLB element_t;
    typedef CProxySection_CentralLB section_t;

    CProxySection_CentralLB(void) {
    }
    CProxySection_CentralLB(const IrrGroup *g) : CProxySection_BaseLB(g){
    }
    CProxySection_CentralLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CentralLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_CentralLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CentralLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_BaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_BaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_BaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_BaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_BaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_BaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_BaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_BaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_BaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_BaseLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_BaseLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_BaseLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_BaseLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_BaseLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_BaseLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_BaseLB::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_BaseLB::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_BaseLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_BaseLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_BaseLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_BaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_BaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_BaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_BaseLB::ckSetGroupID(g);
    }
    CentralLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CentralLB* ckLocalBranch(CkGroupID gID) {
      return (CentralLB*)CkLocalBranch(gID);
    }
/* DECLS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
    
    void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveCounts(const int *counts, int n);
 */
    
    void ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void t_LoadBalance();
 */
    
    void t_LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ApplyDecision();
 */
    
    void ApplyDecision(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int impl_noname_1);
 */
    
    void ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void changeFreq(int impl_noname_2);
 */
    
    void changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
    
    void ScatterMigrationResults(LBScatterMsg* impl_msg);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);

/* DECLS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
    
    void ReceiveMigration(LBScatterMsg* impl_msg);

/* DECLS: void ProcessReceiveMigration();
 */
    
    void ProcessReceiveMigration(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessMigrationDecision();
 */
    
    void ProcessMigrationDecision(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MissMigrate(int impl_noname_3);
 */
    
    void MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CheckForRealloc();
 */
    
    void CheckForRealloc(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeFromReallocCheckpoint();
 */
    
    void ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MigrationDoneImpl(int impl_noname_4);
 */
    
    void MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
    
    void WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCleanup();
 */
    
    void StartCleanup(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CentralLB(CkMigrateMessage* impl_msg);
 */

};
#define CentralLB_SDAG_CODE 
typedef CBaseT1<BaseLB, CProxy_CentralLB>CBase_CentralLB;






/* ---------------- method closures -------------- */
class Closure_CentralLB {
  public:


    struct ProcessAtSync_2_closure;


    struct SendStats_3_closure;


    struct ReceiveStats_4_closure;


    struct ReceiveStatsViaTree_5_closure;


    struct ReceiveStatsFromRoot_6_closure;


    struct ReceiveCounts_7_closure;


    struct LoadBalance_8_closure;


    struct t_LoadBalance_9_closure;


    struct ApplyDecision_10_closure;


    struct ResumeClients_11_closure;


    struct ResumeClients_12_closure;


    struct changeFreq_13_closure;





    struct ProcessReceiveMigration_17_closure;


    struct ProcessMigrationDecision_18_closure;


    struct MissMigrate_19_closure;


    struct CheckForRealloc_20_closure;


    struct ResumeFromReallocCheckpoint_21_closure;


    struct MigrationDoneImpl_22_closure;


    struct WillIbekilled_23_closure;


    struct StartCleanup_24_closure;


};

extern void _registerCentralLB(void);
#endif
