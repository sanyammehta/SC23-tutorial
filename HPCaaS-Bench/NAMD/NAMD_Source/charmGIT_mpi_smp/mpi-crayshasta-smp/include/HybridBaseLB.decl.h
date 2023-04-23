#ifndef _DECL_HybridBaseLB_H_
#define _DECL_HybridBaseLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "LBManager.decl.h"

#include "BaseLB.decl.h"

#include "CentralLBMsg.h"

#include "HybridLBMsg.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message DummyMsg;
 */
class DummyMsg;
class CMessage_DummyMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_DummyMsg();
    static void *pack(DummyMsg *p);
    static DummyMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};


/* DECLS: group HybridBaseLB: BaseLB{
void HybridBaseLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
void ResumeClients(double result);
void ResumeClients(int balancing);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
void TotalObjMigrated(int count, int level);
void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
void Loadbalancing(int level);
void NotifyObjectMigrationDone(int impl_noname_1);
void StartCollectInfo(DummyMsg* impl_msg);
void CollectInfo(const Location *loc, int n, int fromlevel);
void PropagateInfo(const Location *loc, int n, int fromlevel);
void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
void reportLBMem(double impl_noname_7);
HybridBaseLB(CkMigrateMessage* impl_msg);
};
 */
 class HybridBaseLB;
 class CkIndex_HybridBaseLB;
 class CProxy_HybridBaseLB;
 class CProxyElement_HybridBaseLB;
 class CProxySection_HybridBaseLB;
/* --------------- index object ------------------ */
class CkIndex_HybridBaseLB:public CkIndex_BaseLB{
  public:
    typedef HybridBaseLB local_t;
    typedef CkIndex_HybridBaseLB index_t;
    typedef CProxy_HybridBaseLB proxy_t;
    typedef CProxyElement_HybridBaseLB element_t;
    typedef CProxySection_HybridBaseLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_HybridBaseLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_HybridBaseLB_marshall1() {
      static int epidx = reg_HybridBaseLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_HybridBaseLB_marshall1(); }
    
    static void _call_HybridBaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HybridBaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_HybridBaseLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_HybridBaseLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ProcessAtSync();
     */
    // Entry point registration at startup
    
    static int reg_ProcessAtSync_void();
    // Entry point index lookup
    
    inline static int idx_ProcessAtSync_void() {
      static int epidx = reg_ProcessAtSync_void();
      return epidx;
    }

    
    inline static int idx_ProcessAtSync(void (HybridBaseLB::*)() ) {
      return idx_ProcessAtSync_void();
    }


    
    static int ProcessAtSync() { return idx_ProcessAtSync_void(); }
    
    static void _call_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveStats_marshall3();
    // Entry point index lookup
    
    inline static int idx_ReceiveStats_marshall3() {
      static int epidx = reg_ReceiveStats_marshall3();
      return epidx;
    }

    
    inline static int idx_ReceiveStats(void (HybridBaseLB::*)(const CkMarshalledCLBStatsMessage &data, int level) ) {
      return idx_ReceiveStats_marshall3();
    }


    
    static int ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level) { return idx_ReceiveStats_marshall3(); }
    
    static void _call_ReceiveStats_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveStats_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveStats_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveStats_marshall3(PUP::er &p,void *msg);
    /* DECLS: void ResumeClients(double result);
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_marshall4();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_marshall4() {
      static int epidx = reg_ResumeClients_marshall4();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (HybridBaseLB::*)(double result) ) {
      return idx_ResumeClients_marshall4();
    }


    
    static int ResumeClients(double result) { return idx_ResumeClients_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ResumeClients_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ResumeClients_marshall4() {
      static int epidx = reg_redn_wrapper_ResumeClients_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_ResumeClients(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ResumeClients_marshall4(); }
    
    static void _call_redn_wrapper_ResumeClients_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_ResumeClients_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ResumeClients_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ResumeClients_marshall4(PUP::er &p,void *msg);
    /* DECLS: void ResumeClients(int balancing);
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_marshall5();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_marshall5() {
      static int epidx = reg_ResumeClients_marshall5();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (HybridBaseLB::*)(int balancing) ) {
      return idx_ResumeClients_marshall5();
    }


    
    static int ResumeClients(int balancing) { return idx_ResumeClients_marshall5(); }
    
    static void _call_ResumeClients_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ResumeClients_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ResumeClients_marshall5(PUP::er &p,void *msg);
    /* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveMigration_LBMigrateMsg();
    // Entry point index lookup
    
    inline static int idx_ReceiveMigration_LBMigrateMsg() {
      static int epidx = reg_ReceiveMigration_LBMigrateMsg();
      return epidx;
    }

    
    inline static int idx_ReceiveMigration(void (HybridBaseLB::*)(LBMigrateMsg* impl_msg) ) {
      return idx_ReceiveMigration_LBMigrateMsg();
    }


    
    static int ReceiveMigration(LBMigrateMsg* impl_msg) { return idx_ReceiveMigration_LBMigrateMsg(); }
    
    static void _call_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveVectorMigration_LBVectorMigrateMsg();
    // Entry point index lookup
    
    inline static int idx_ReceiveVectorMigration_LBVectorMigrateMsg() {
      static int epidx = reg_ReceiveVectorMigration_LBVectorMigrateMsg();
      return epidx;
    }

    
    inline static int idx_ReceiveVectorMigration(void (HybridBaseLB::*)(LBVectorMigrateMsg* impl_msg) ) {
      return idx_ReceiveVectorMigration_LBVectorMigrateMsg();
    }


    
    static int ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg) { return idx_ReceiveVectorMigration_LBVectorMigrateMsg(); }
    
    static void _call_ReceiveVectorMigration_LBVectorMigrateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveVectorMigration_LBVectorMigrateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void TotalObjMigrated(int count, int level);
     */
    // Entry point registration at startup
    
    static int reg_TotalObjMigrated_marshall8();
    // Entry point index lookup
    
    inline static int idx_TotalObjMigrated_marshall8() {
      static int epidx = reg_TotalObjMigrated_marshall8();
      return epidx;
    }

    
    inline static int idx_TotalObjMigrated(void (HybridBaseLB::*)(int count, int level) ) {
      return idx_TotalObjMigrated_marshall8();
    }


    
    static int TotalObjMigrated(int count, int level) { return idx_TotalObjMigrated_marshall8(); }
    
    static void _call_TotalObjMigrated_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TotalObjMigrated_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_TotalObjMigrated_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_TotalObjMigrated_marshall8(PUP::er &p,void *msg);
    /* DECLS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
     */
    // Entry point registration at startup
    
    static int reg_ObjMigrated_marshall9();
    // Entry point index lookup
    
    inline static int idx_ObjMigrated_marshall9() {
      static int epidx = reg_ObjMigrated_marshall9();
      return epidx;
    }

    
    inline static int idx_ObjMigrated(void (HybridBaseLB::*)(const LDObjData &data, const LDCommData *cdata, int n, int level) ) {
      return idx_ObjMigrated_marshall9();
    }


    
    static int ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level) { return idx_ObjMigrated_marshall9(); }
    
    static void _call_ObjMigrated_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ObjMigrated_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ObjMigrated_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ObjMigrated_marshall9(PUP::er &p,void *msg);
    /* DECLS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
     */
    // Entry point registration at startup
    
    static int reg_ObjsMigrated_marshall10();
    // Entry point index lookup
    
    inline static int idx_ObjsMigrated_marshall10() {
      static int epidx = reg_ObjsMigrated_marshall10();
      return epidx;
    }

    
    inline static int idx_ObjsMigrated(void (HybridBaseLB::*)(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level) ) {
      return idx_ObjsMigrated_marshall10();
    }


    
    static int ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level) { return idx_ObjsMigrated_marshall10(); }
    
    static void _call_ObjsMigrated_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ObjsMigrated_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ObjsMigrated_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ObjsMigrated_marshall10(PUP::er &p,void *msg);
    /* DECLS: void Loadbalancing(int level);
     */
    // Entry point registration at startup
    
    static int reg_Loadbalancing_marshall11();
    // Entry point index lookup
    
    inline static int idx_Loadbalancing_marshall11() {
      static int epidx = reg_Loadbalancing_marshall11();
      return epidx;
    }

    
    inline static int idx_Loadbalancing(void (HybridBaseLB::*)(int level) ) {
      return idx_Loadbalancing_marshall11();
    }


    
    static int Loadbalancing(int level) { return idx_Loadbalancing_marshall11(); }
    
    static void _call_Loadbalancing_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Loadbalancing_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Loadbalancing_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Loadbalancing_marshall11(PUP::er &p,void *msg);
    /* DECLS: void NotifyObjectMigrationDone(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_NotifyObjectMigrationDone_marshall12();
    // Entry point index lookup
    
    inline static int idx_NotifyObjectMigrationDone_marshall12() {
      static int epidx = reg_NotifyObjectMigrationDone_marshall12();
      return epidx;
    }

    
    inline static int idx_NotifyObjectMigrationDone(void (HybridBaseLB::*)(int impl_noname_1) ) {
      return idx_NotifyObjectMigrationDone_marshall12();
    }


    
    static int NotifyObjectMigrationDone(int impl_noname_1) { return idx_NotifyObjectMigrationDone_marshall12(); }
    
    static void _call_NotifyObjectMigrationDone_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NotifyObjectMigrationDone_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_NotifyObjectMigrationDone_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_NotifyObjectMigrationDone_marshall12(PUP::er &p,void *msg);
    /* DECLS: void StartCollectInfo(DummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_StartCollectInfo_DummyMsg();
    // Entry point index lookup
    
    inline static int idx_StartCollectInfo_DummyMsg() {
      static int epidx = reg_StartCollectInfo_DummyMsg();
      return epidx;
    }

    
    inline static int idx_StartCollectInfo(void (HybridBaseLB::*)(DummyMsg* impl_msg) ) {
      return idx_StartCollectInfo_DummyMsg();
    }


    
    static int StartCollectInfo(DummyMsg* impl_msg) { return idx_StartCollectInfo_DummyMsg(); }
    
    static void _call_StartCollectInfo_DummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_StartCollectInfo_DummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void CollectInfo(const Location *loc, int n, int fromlevel);
     */
    // Entry point registration at startup
    
    static int reg_CollectInfo_marshall14();
    // Entry point index lookup
    
    inline static int idx_CollectInfo_marshall14() {
      static int epidx = reg_CollectInfo_marshall14();
      return epidx;
    }

    
    inline static int idx_CollectInfo(void (HybridBaseLB::*)(const Location *loc, int n, int fromlevel) ) {
      return idx_CollectInfo_marshall14();
    }


    
    static int CollectInfo(const Location *loc, int n, int fromlevel) { return idx_CollectInfo_marshall14(); }
    
    static void _call_CollectInfo_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CollectInfo_marshall14(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CollectInfo_marshall14(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CollectInfo_marshall14(PUP::er &p,void *msg);
    /* DECLS: void PropagateInfo(const Location *loc, int n, int fromlevel);
     */
    // Entry point registration at startup
    
    static int reg_PropagateInfo_marshall15();
    // Entry point index lookup
    
    inline static int idx_PropagateInfo_marshall15() {
      static int epidx = reg_PropagateInfo_marshall15();
      return epidx;
    }

    
    inline static int idx_PropagateInfo(void (HybridBaseLB::*)(const Location *loc, int n, int fromlevel) ) {
      return idx_PropagateInfo_marshall15();
    }


    
    static int PropagateInfo(const Location *loc, int n, int fromlevel) { return idx_PropagateInfo_marshall15(); }
    
    static void _call_PropagateInfo_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PropagateInfo_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PropagateInfo_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PropagateInfo_marshall15(PUP::er &p,void *msg);
    /* DECLS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
     */
    // Entry point registration at startup
    
    static int reg_reportLBQulity_marshall16();
    // Entry point index lookup
    
    inline static int idx_reportLBQulity_marshall16() {
      static int epidx = reg_reportLBQulity_marshall16();
      return epidx;
    }

    
    inline static int idx_reportLBQulity(void (HybridBaseLB::*)(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6) ) {
      return idx_reportLBQulity_marshall16();
    }


    
    static int reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6) { return idx_reportLBQulity_marshall16(); }
    
    static void _call_reportLBQulity_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reportLBQulity_marshall16(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reportLBQulity_marshall16(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reportLBQulity_marshall16(PUP::er &p,void *msg);
    /* DECLS: void reportLBMem(double impl_noname_7);
     */
    // Entry point registration at startup
    
    static int reg_reportLBMem_marshall17();
    // Entry point index lookup
    
    inline static int idx_reportLBMem_marshall17() {
      static int epidx = reg_reportLBMem_marshall17();
      return epidx;
    }

    
    inline static int idx_reportLBMem(void (HybridBaseLB::*)(double impl_noname_7) ) {
      return idx_reportLBMem_marshall17();
    }


    
    static int reportLBMem(double impl_noname_7) { return idx_reportLBMem_marshall17(); }
    
    static void _call_reportLBMem_marshall17(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reportLBMem_marshall17(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reportLBMem_marshall17(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reportLBMem_marshall17(PUP::er &p,void *msg);
    /* DECLS: HybridBaseLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_HybridBaseLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_HybridBaseLB_CkMigrateMessage() {
      static int epidx = reg_HybridBaseLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_HybridBaseLB_CkMigrateMessage(); }
    
    static void _call_HybridBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HybridBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HybridBaseLB: public CProxyElement_BaseLB{
  public:
    typedef HybridBaseLB local_t;
    typedef CkIndex_HybridBaseLB index_t;
    typedef CProxy_HybridBaseLB proxy_t;
    typedef CProxyElement_HybridBaseLB element_t;
    typedef CProxySection_HybridBaseLB section_t;


    /* TRAM aggregators */

    CProxyElement_HybridBaseLB(void) {
    }
    CProxyElement_HybridBaseLB(const IrrGroup *g) : CProxyElement_BaseLB(g){
    }
    CProxyElement_HybridBaseLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_BaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_HybridBaseLB(CkGroupID _gid,int _onPE) : CProxyElement_BaseLB(_gid,_onPE){
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
    HybridBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HybridBaseLB* ckLocalBranch(CkGroupID gID) {
      return (HybridBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(double result);
 */
    
    void ResumeClients(double result, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);

/* DECLS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
    
    void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);

/* DECLS: void TotalObjMigrated(int count, int level);
 */
    
    void TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
    
    void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
    
    void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Loadbalancing(int level);
 */
    
    void Loadbalancing(int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
    
    void NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCollectInfo(DummyMsg* impl_msg);
 */
    
    void StartCollectInfo(DummyMsg* impl_msg);

/* DECLS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
    
    void CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
    
    void PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
    
    void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBMem(double impl_noname_7);
 */
    
    void reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_HybridBaseLB: public CProxy_BaseLB{
  public:
    typedef HybridBaseLB local_t;
    typedef CkIndex_HybridBaseLB index_t;
    typedef CProxy_HybridBaseLB proxy_t;
    typedef CProxyElement_HybridBaseLB element_t;
    typedef CProxySection_HybridBaseLB section_t;

    CProxy_HybridBaseLB(void) {
    }
    CProxy_HybridBaseLB(const IrrGroup *g) : CProxy_BaseLB(g){
    }
    CProxy_HybridBaseLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_BaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HybridBaseLB(CkGroupID _gid) : CProxy_BaseLB(_gid){  }
    CProxyElement_HybridBaseLB operator[](int onPE) const
      {return CProxyElement_HybridBaseLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    HybridBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HybridBaseLB* ckLocalBranch(CkGroupID gID) {
      return (HybridBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_HybridBaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(double result);
 */
    
    void ResumeClients(double result, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(double result, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(double result, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int balancing, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int balancing, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);
    
    void ReceiveMigration(LBMigrateMsg* impl_msg, int npes, int *pes);
    
    void ReceiveMigration(LBMigrateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
    
    void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
    
    void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg, int npes, int *pes);
    
    void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void TotalObjMigrated(int count, int level);
 */
    
    void TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts=NULL);
    
    void TotalObjMigrated(int count, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void TotalObjMigrated(int count, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
    
    void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);
    
    void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
    
    void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);
    
    void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Loadbalancing(int level);
 */
    
    void Loadbalancing(int level, const CkEntryOptions *impl_e_opts=NULL);
    
    void Loadbalancing(int level, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void Loadbalancing(int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
    
    void NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void NotifyObjectMigrationDone(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void NotifyObjectMigrationDone(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCollectInfo(DummyMsg* impl_msg);
 */
    
    void StartCollectInfo(DummyMsg* impl_msg);
    
    void StartCollectInfo(DummyMsg* impl_msg, int npes, int *pes);
    
    void StartCollectInfo(DummyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
    
    void CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);
    
    void CollectInfo(const Location *loc, int n, int fromlevel, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void CollectInfo(const Location *loc, int n, int fromlevel, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
    
    void PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);
    
    void PropagateInfo(const Location *loc, int n, int fromlevel, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void PropagateInfo(const Location *loc, int n, int fromlevel, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
    
    void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBMem(double impl_noname_7);
 */
    
    void reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLBMem(double impl_noname_7, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLBMem(double impl_noname_7, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_HybridBaseLB: public CProxySection_BaseLB{
  public:
    typedef HybridBaseLB local_t;
    typedef CkIndex_HybridBaseLB index_t;
    typedef CProxy_HybridBaseLB proxy_t;
    typedef CProxyElement_HybridBaseLB element_t;
    typedef CProxySection_HybridBaseLB section_t;

    CProxySection_HybridBaseLB(void) {
    }
    CProxySection_HybridBaseLB(const IrrGroup *g) : CProxySection_BaseLB(g){
    }
    CProxySection_HybridBaseLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HybridBaseLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_HybridBaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_HybridBaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    HybridBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HybridBaseLB* ckLocalBranch(CkGroupID gID) {
      return (HybridBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
    
    void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(double result);
 */
    
    void ResumeClients(double result, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
    
    void ReceiveMigration(LBMigrateMsg* impl_msg);

/* DECLS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
    
    void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);

/* DECLS: void TotalObjMigrated(int count, int level);
 */
    
    void TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
    
    void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
    
    void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Loadbalancing(int level);
 */
    
    void Loadbalancing(int level, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
    
    void NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void StartCollectInfo(DummyMsg* impl_msg);
 */
    
    void StartCollectInfo(DummyMsg* impl_msg);

/* DECLS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
    
    void CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
    
    void PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
    
    void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLBMem(double impl_noname_7);
 */
    
    void reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */

};
#define HybridBaseLB_SDAG_CODE 
typedef CBaseT1<BaseLB, CProxy_HybridBaseLB>CBase_HybridBaseLB;







/* ---------------- method closures -------------- */
class Closure_HybridBaseLB {
  public:


    struct ProcessAtSync_2_closure;


    struct ReceiveStats_3_closure;


    struct ResumeClients_4_closure;


    struct ResumeClients_5_closure;




    struct TotalObjMigrated_8_closure;


    struct ObjMigrated_9_closure;


    struct ObjsMigrated_10_closure;


    struct Loadbalancing_11_closure;


    struct NotifyObjectMigrationDone_12_closure;



    struct CollectInfo_14_closure;


    struct PropagateInfo_15_closure;


    struct reportLBQulity_16_closure;


    struct reportLBMem_17_closure;


};

extern void _registerHybridBaseLB(void);
#endif
