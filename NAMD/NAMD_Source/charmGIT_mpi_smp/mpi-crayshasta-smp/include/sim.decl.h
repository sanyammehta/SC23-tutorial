#ifndef _DECL_sim_H_
#define _DECL_sim_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "ldbal.decl.h"

#include "poseMsgs.decl.h"

#include "gvt.decl.h"

#include "mempool.decl.h"

#include "memory_temporal.decl.h"

#include "stats.decl.h"

/* DECLS: readonly CProxy_sim POSE_Objects;
 */

/* DECLS: readonly CProxy_sim POSE_Objects_RO;
 */

/* DECLS: readonly CkChareID POSE_Coordinator_ID;
 */

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message destMsg;
 */
class destMsg;
class CMessage_destMsg:public CkMessage{
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
    CMessage_destMsg();
    static void *pack(destMsg *p);
    static destMsg* unpack(void* p);
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

/* DECLS: array sim: ArrayElement{
sim();
void Step();
void Step(prioMsg* impl_msg);
void CheckpointStep(eventMsg* impl_msg);
void Status();
void Commit();
void CheckpointCommit();
void ReportLBdata();
void Migrate(destMsg* impl_msg);
void Terminate();
void Cancel(cancelMsg* impl_msg);
void SeqBeginCheckpoint();
void SeqResumeAfterCheckpoint();
void invokeStopEvent();
void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
sim(CkMigrateMessage* impl_msg);
};
 */
 class sim;
 class CkIndex_sim;
 class CProxy_sim;
 class CProxyElement_sim;
 class CProxySection_sim;
/* --------------- index object ------------------ */
class CkIndex_sim:public CkIndex_ArrayElement{
  public:
    typedef sim local_t;
    typedef CkIndex_sim index_t;
    typedef CProxy_sim proxy_t;
    typedef CProxyElement_sim element_t;
    typedef CProxySection_sim section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: sim();
     */
    // Entry point registration at startup
    
    static int reg_sim_void();
    // Entry point index lookup
    
    inline static int idx_sim_void() {
      static int epidx = reg_sim_void();
      return epidx;
    }

    
    static int ckNew() { return idx_sim_void(); }
    
    static void _call_sim_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sim_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Step();
     */
    // Entry point registration at startup
    
    static int reg_Step_void();
    // Entry point index lookup
    
    inline static int idx_Step_void() {
      static int epidx = reg_Step_void();
      return epidx;
    }

    
    inline static int idx_Step(void (sim::*)() ) {
      return idx_Step_void();
    }


    
    static int Step() { return idx_Step_void(); }
    
    static void _call_Step_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Step_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Step(prioMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Step_prioMsg();
    // Entry point index lookup
    
    inline static int idx_Step_prioMsg() {
      static int epidx = reg_Step_prioMsg();
      return epidx;
    }

    
    inline static int idx_Step(void (sim::*)(prioMsg* impl_msg) ) {
      return idx_Step_prioMsg();
    }


    
    static int Step(prioMsg* impl_msg) { return idx_Step_prioMsg(); }
    
    static void _call_Step_prioMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Step_prioMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void CheckpointStep(eventMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CheckpointStep_eventMsg();
    // Entry point index lookup
    
    inline static int idx_CheckpointStep_eventMsg() {
      static int epidx = reg_CheckpointStep_eventMsg();
      return epidx;
    }

    
    inline static int idx_CheckpointStep(void (sim::*)(eventMsg* impl_msg) ) {
      return idx_CheckpointStep_eventMsg();
    }


    
    static int CheckpointStep(eventMsg* impl_msg) { return idx_CheckpointStep_eventMsg(); }
    
    static void _call_CheckpointStep_eventMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CheckpointStep_eventMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void Status();
     */
    // Entry point registration at startup
    
    static int reg_Status_void();
    // Entry point index lookup
    
    inline static int idx_Status_void() {
      static int epidx = reg_Status_void();
      return epidx;
    }

    
    inline static int idx_Status(void (sim::*)() ) {
      return idx_Status_void();
    }


    
    static int Status() { return idx_Status_void(); }
    
    static void _call_Status_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Status_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Commit();
     */
    // Entry point registration at startup
    
    static int reg_Commit_void();
    // Entry point index lookup
    
    inline static int idx_Commit_void() {
      static int epidx = reg_Commit_void();
      return epidx;
    }

    
    inline static int idx_Commit(void (sim::*)() ) {
      return idx_Commit_void();
    }


    
    static int Commit() { return idx_Commit_void(); }
    
    static void _call_Commit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Commit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void CheckpointCommit();
     */
    // Entry point registration at startup
    
    static int reg_CheckpointCommit_void();
    // Entry point index lookup
    
    inline static int idx_CheckpointCommit_void() {
      static int epidx = reg_CheckpointCommit_void();
      return epidx;
    }

    
    inline static int idx_CheckpointCommit(void (sim::*)() ) {
      return idx_CheckpointCommit_void();
    }


    
    static int CheckpointCommit() { return idx_CheckpointCommit_void(); }
    
    static void _call_CheckpointCommit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CheckpointCommit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReportLBdata();
     */
    // Entry point registration at startup
    
    static int reg_ReportLBdata_void();
    // Entry point index lookup
    
    inline static int idx_ReportLBdata_void() {
      static int epidx = reg_ReportLBdata_void();
      return epidx;
    }

    
    inline static int idx_ReportLBdata(void (sim::*)() ) {
      return idx_ReportLBdata_void();
    }


    
    static int ReportLBdata() { return idx_ReportLBdata_void(); }
    
    static void _call_ReportLBdata_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReportLBdata_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Migrate(destMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Migrate_destMsg();
    // Entry point index lookup
    
    inline static int idx_Migrate_destMsg() {
      static int epidx = reg_Migrate_destMsg();
      return epidx;
    }

    
    inline static int idx_Migrate(void (sim::*)(destMsg* impl_msg) ) {
      return idx_Migrate_destMsg();
    }


    
    static int Migrate(destMsg* impl_msg) { return idx_Migrate_destMsg(); }
    
    static void _call_Migrate_destMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Migrate_destMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void Terminate();
     */
    // Entry point registration at startup
    
    static int reg_Terminate_void();
    // Entry point index lookup
    
    inline static int idx_Terminate_void() {
      static int epidx = reg_Terminate_void();
      return epidx;
    }

    
    inline static int idx_Terminate(void (sim::*)() ) {
      return idx_Terminate_void();
    }


    
    static int Terminate() { return idx_Terminate_void(); }
    
    static void _call_Terminate_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Terminate_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Cancel(cancelMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cancel_cancelMsg();
    // Entry point index lookup
    
    inline static int idx_Cancel_cancelMsg() {
      static int epidx = reg_Cancel_cancelMsg();
      return epidx;
    }

    
    inline static int idx_Cancel(void (sim::*)(cancelMsg* impl_msg) ) {
      return idx_Cancel_cancelMsg();
    }


    
    static int Cancel(cancelMsg* impl_msg) { return idx_Cancel_cancelMsg(); }
    
    static void _call_Cancel_cancelMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cancel_cancelMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void SeqBeginCheckpoint();
     */
    // Entry point registration at startup
    
    static int reg_SeqBeginCheckpoint_void();
    // Entry point index lookup
    
    inline static int idx_SeqBeginCheckpoint_void() {
      static int epidx = reg_SeqBeginCheckpoint_void();
      return epidx;
    }

    
    inline static int idx_SeqBeginCheckpoint(void (sim::*)() ) {
      return idx_SeqBeginCheckpoint_void();
    }


    
    static int SeqBeginCheckpoint() { return idx_SeqBeginCheckpoint_void(); }
    
    static void _call_SeqBeginCheckpoint_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SeqBeginCheckpoint_void(void* impl_msg, void* impl_obj);
    /* DECLS: void SeqResumeAfterCheckpoint();
     */
    // Entry point registration at startup
    
    static int reg_SeqResumeAfterCheckpoint_void();
    // Entry point index lookup
    
    inline static int idx_SeqResumeAfterCheckpoint_void() {
      static int epidx = reg_SeqResumeAfterCheckpoint_void();
      return epidx;
    }

    
    inline static int idx_SeqResumeAfterCheckpoint(void (sim::*)() ) {
      return idx_SeqResumeAfterCheckpoint_void();
    }


    
    static int SeqResumeAfterCheckpoint() { return idx_SeqResumeAfterCheckpoint_void(); }
    
    static void _call_SeqResumeAfterCheckpoint_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SeqResumeAfterCheckpoint_void(void* impl_msg, void* impl_obj);
    /* DECLS: void invokeStopEvent();
     */
    // Entry point registration at startup
    
    static int reg_invokeStopEvent_void();
    // Entry point index lookup
    
    inline static int idx_invokeStopEvent_void() {
      static int epidx = reg_invokeStopEvent_void();
      return epidx;
    }

    
    inline static int idx_invokeStopEvent(void (sim::*)() ) {
      return idx_invokeStopEvent_void();
    }


    
    static int invokeStopEvent() { return idx_invokeStopEvent_void(); }
    
    static void _call_invokeStopEvent_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_invokeStopEvent_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_setSimulationStartGVT_marshall15();
    // Entry point index lookup
    
    inline static int idx_setSimulationStartGVT_marshall15() {
      static int epidx = reg_setSimulationStartGVT_marshall15();
      return epidx;
    }

    
    inline static int idx_setSimulationStartGVT(void (sim::*)(const POSE_TimeType &impl_noname_0) ) {
      return idx_setSimulationStartGVT_marshall15();
    }


    
    static int setSimulationStartGVT(const POSE_TimeType &impl_noname_0) { return idx_setSimulationStartGVT_marshall15(); }
    
    static void _call_setSimulationStartGVT_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setSimulationStartGVT_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setSimulationStartGVT_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setSimulationStartGVT_marshall15(PUP::er &p,void *msg);
    /* DECLS: sim(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sim_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_sim_CkMigrateMessage() {
      static int epidx = reg_sim_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_sim_CkMigrateMessage(); }
    
    static void _call_sim_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sim_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_sim : public CProxyElement_ArrayElement{
  public:
    typedef sim local_t;
    typedef CkIndex_sim index_t;
    typedef CProxy_sim proxy_t;
    typedef CProxyElement_sim element_t;
    typedef CProxySection_sim section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_sim(void) {
    }
    CProxyElement_sim(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    sim *ckLocal(void) const
    { return (sim *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_sim(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_sim(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_sim(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_sim(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: sim();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void Step();
 */
    
    void Step(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Step(prioMsg* impl_msg);
 */
    
    void Step(prioMsg* impl_msg) ;

/* DECLS: void CheckpointStep(eventMsg* impl_msg);
 */
    
    void CheckpointStep(eventMsg* impl_msg) ;

/* DECLS: void Status();
 */
    
    void Status(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Commit();
 */
    
    void Commit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void CheckpointCommit();
 */
    
    void CheckpointCommit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ReportLBdata();
 */
    
    void ReportLBdata(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Migrate(destMsg* impl_msg);
 */
    
    void Migrate(destMsg* impl_msg) ;

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Cancel(cancelMsg* impl_msg);
 */
    
    void Cancel(cancelMsg* impl_msg) ;

/* DECLS: void SeqBeginCheckpoint();
 */
    
    void SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void SeqResumeAfterCheckpoint();
 */
    
    void SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void invokeStopEvent();
 */
    
    void invokeStopEvent(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
    
    void setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sim(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_sim : public CProxy_ArrayElement{
  public:
    typedef sim local_t;
    typedef CkIndex_sim index_t;
    typedef CProxy_sim proxy_t;
    typedef CProxyElement_sim element_t;
    typedef CProxySection_sim section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_sim(void) {
    }
    CProxy_sim(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_sim operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_sim(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_sim operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_sim(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_sim operator [] (int idx) const 
        {return CProxyElement_sim(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_sim operator () (int idx) const 
        {return CProxyElement_sim(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_sim(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_sim(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: sim();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Step();
 */
    
    void Step(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Step(prioMsg* impl_msg);
 */
    
    void Step(prioMsg* impl_msg) ;

/* DECLS: void CheckpointStep(eventMsg* impl_msg);
 */
    
    void CheckpointStep(eventMsg* impl_msg) ;

/* DECLS: void Status();
 */
    
    void Status(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Commit();
 */
    
    void Commit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void CheckpointCommit();
 */
    
    void CheckpointCommit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ReportLBdata();
 */
    
    void ReportLBdata(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Migrate(destMsg* impl_msg);
 */
    
    void Migrate(destMsg* impl_msg) ;

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Cancel(cancelMsg* impl_msg);
 */
    
    void Cancel(cancelMsg* impl_msg) ;

/* DECLS: void SeqBeginCheckpoint();
 */
    
    void SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void SeqResumeAfterCheckpoint();
 */
    
    void SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void invokeStopEvent();
 */
    
    void invokeStopEvent(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
    
    void setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sim(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_sim : public CProxySection_ArrayElement{
  public:
    typedef sim local_t;
    typedef CkIndex_sim index_t;
    typedef CProxy_sim proxy_t;
    typedef CProxyElement_sim element_t;
    typedef CProxySection_sim section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_sim(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_sim operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_sim(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_sim operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_sim(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_sim operator [] (int idx) const 
        {return CProxyElement_sim(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_sim operator () (int idx) const 
        {return CProxyElement_sim(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_sim(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_sim(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_sim(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_sim(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_sim(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_sim(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_sim(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_sim(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_sim(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_sim(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_sim(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: sim();
 */
    

/* DECLS: void Step();
 */
    
    void Step(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Step(prioMsg* impl_msg);
 */
    
    void Step(prioMsg* impl_msg) ;

/* DECLS: void CheckpointStep(eventMsg* impl_msg);
 */
    
    void CheckpointStep(eventMsg* impl_msg) ;

/* DECLS: void Status();
 */
    
    void Status(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Commit();
 */
    
    void Commit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void CheckpointCommit();
 */
    
    void CheckpointCommit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ReportLBdata();
 */
    
    void ReportLBdata(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Migrate(destMsg* impl_msg);
 */
    
    void Migrate(destMsg* impl_msg) ;

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Cancel(cancelMsg* impl_msg);
 */
    
    void Cancel(cancelMsg* impl_msg) ;

/* DECLS: void SeqBeginCheckpoint();
 */
    
    void SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void SeqResumeAfterCheckpoint();
 */
    
    void SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void invokeStopEvent();
 */
    
    void invokeStopEvent(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
    
    void setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sim(CkMigrateMessage* impl_msg);
 */

};
#define sim_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_sim>CBase_sim;











/* ---------------- method closures -------------- */
class Closure_sim {
  public:


    struct Step_2_closure;




    struct Status_5_closure;


    struct Commit_6_closure;


    struct CheckpointCommit_7_closure;


    struct ReportLBdata_8_closure;



    struct Terminate_10_closure;



    struct SeqBeginCheckpoint_12_closure;


    struct SeqResumeAfterCheckpoint_13_closure;


    struct invokeStopEvent_14_closure;


    struct setSimulationStartGVT_15_closure;


};

extern void _registersim(void);
#endif
