#ifndef _DECL_DistributedLB_H_
#define _DECL_DistributedLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "DistBaseLB.decl.h"


/* DECLS: group DistributedLB: DistBaseLB{
void DistributedLB(const CkLBOptions &impl_noname_0);
  initcall void initnodeFn(void);
void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
void LoadReduction(CkReductionMsg* impl_msg);
void AfterLBReduction(CkReductionMsg* impl_msg);
void DoneGossip();
void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
DistributedLB(CkMigrateMessage* impl_msg);
};
 */
 class DistributedLB;
 class CkIndex_DistributedLB;
 class CProxy_DistributedLB;
 class CProxyElement_DistributedLB;
 class CProxySection_DistributedLB;
/* --------------- index object ------------------ */
class CkIndex_DistributedLB:public CkIndex_DistBaseLB{
  public:
    typedef DistributedLB local_t;
    typedef CkIndex_DistributedLB index_t;
    typedef CProxy_DistributedLB proxy_t;
    typedef CProxyElement_DistributedLB element_t;
    typedef CProxySection_DistributedLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void DistributedLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_DistributedLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_DistributedLB_marshall1() {
      static int epidx = reg_DistributedLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_DistributedLB_marshall1(); }
    
    static void _call_DistributedLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DistributedLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DistributedLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DistributedLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
     */
    // Entry point registration at startup
    
    static int reg_GossipLoadInfo_marshall2();
    // Entry point index lookup
    
    inline static int idx_GossipLoadInfo_marshall2() {
      static int epidx = reg_GossipLoadInfo_marshall2();
      return epidx;
    }

    
    inline static int idx_GossipLoadInfo(void (DistributedLB::*)(int pe, int n, const int *pe_no, const double *load) ) {
      return idx_GossipLoadInfo_marshall2();
    }


    
    static int GossipLoadInfo(int pe, int n, const int *pe_no, const double *load) { return idx_GossipLoadInfo_marshall2(); }
    
    static void _call_GossipLoadInfo_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GossipLoadInfo_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_GossipLoadInfo_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_GossipLoadInfo_marshall2(PUP::er &p,void *msg);
    /* DECLS: void LoadReduction(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LoadReduction_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_LoadReduction_CkReductionMsg() {
      static int epidx = reg_LoadReduction_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_LoadReduction(void (DistributedLB::*)(CkReductionMsg* impl_msg) ) {
      return idx_LoadReduction_CkReductionMsg();
    }


    
    static int LoadReduction(CkReductionMsg* impl_msg) { return idx_LoadReduction_CkReductionMsg(); }
    
    static void _call_LoadReduction_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LoadReduction_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void AfterLBReduction(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_AfterLBReduction_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_AfterLBReduction_CkReductionMsg() {
      static int epidx = reg_AfterLBReduction_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_AfterLBReduction(void (DistributedLB::*)(CkReductionMsg* impl_msg) ) {
      return idx_AfterLBReduction_CkReductionMsg();
    }


    
    static int AfterLBReduction(CkReductionMsg* impl_msg) { return idx_AfterLBReduction_CkReductionMsg(); }
    
    static void _call_AfterLBReduction_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_AfterLBReduction_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void DoneGossip();
     */
    // Entry point registration at startup
    
    static int reg_DoneGossip_void();
    // Entry point index lookup
    
    inline static int idx_DoneGossip_void() {
      static int epidx = reg_DoneGossip_void();
      return epidx;
    }

    
    inline static int idx_DoneGossip(void (DistributedLB::*)() ) {
      return idx_DoneGossip_void();
    }


    
    static int DoneGossip() { return idx_DoneGossip_void(); }
    
    static void _call_DoneGossip_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DoneGossip_void(void* impl_msg, void* impl_obj);
    /* DECLS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
     */
    // Entry point registration at startup
    
    static int reg_InformMigration_marshall6();
    // Entry point index lookup
    
    inline static int idx_InformMigration_marshall6() {
      static int epidx = reg_InformMigration_marshall6();
      return epidx;
    }

    
    inline static int idx_InformMigration(void (DistributedLB::*)(int obj_id, int from_pe, double obj_load, const bool &force) ) {
      return idx_InformMigration_marshall6();
    }


    
    static int InformMigration(int obj_id, int from_pe, double obj_load, const bool &force) { return idx_InformMigration_marshall6(); }
    
    static void _call_InformMigration_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_InformMigration_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_InformMigration_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_InformMigration_marshall6(PUP::er &p,void *msg);
    /* DECLS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
     */
    // Entry point registration at startup
    
    static int reg_RecvAck_marshall7();
    // Entry point index lookup
    
    inline static int idx_RecvAck_marshall7() {
      static int epidx = reg_RecvAck_marshall7();
      return epidx;
    }

    
    inline static int idx_RecvAck(void (DistributedLB::*)(int obj_id, int assigned_pe, const bool &can_accept) ) {
      return idx_RecvAck_marshall7();
    }


    
    static int RecvAck(int obj_id, int assigned_pe, const bool &can_accept) { return idx_RecvAck_marshall7(); }
    
    static void _call_RecvAck_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RecvAck_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_RecvAck_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_RecvAck_marshall7(PUP::er &p,void *msg);
    /* DECLS: DistributedLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_DistributedLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_DistributedLB_CkMigrateMessage() {
      static int epidx = reg_DistributedLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_DistributedLB_CkMigrateMessage(); }
    
    static void _call_DistributedLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DistributedLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DistributedLB: public CProxyElement_DistBaseLB{
  public:
    typedef DistributedLB local_t;
    typedef CkIndex_DistributedLB index_t;
    typedef CProxy_DistributedLB proxy_t;
    typedef CProxyElement_DistributedLB element_t;
    typedef CProxySection_DistributedLB section_t;


    /* TRAM aggregators */

    CProxyElement_DistributedLB(void) {
    }
    CProxyElement_DistributedLB(const IrrGroup *g) : CProxyElement_DistBaseLB(g){
    }
    CProxyElement_DistributedLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_DistBaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_DistributedLB(CkGroupID _gid,int _onPE) : CProxyElement_DistBaseLB(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_DistBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_DistBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_DistBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_DistBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_DistBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_DistBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_DistBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DistBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DistBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_DistBaseLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_DistBaseLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_DistBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_DistBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_DistBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_DistBaseLB::ckSetGroupID(g);
    }
    DistributedLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistributedLB* ckLocalBranch(CkGroupID gID) {
      return (DistributedLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
    


/* DECLS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
    
    void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadReduction(CkReductionMsg* impl_msg);
 */
    
    void LoadReduction(CkReductionMsg* impl_msg);

/* DECLS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
    
    void AfterLBReduction(CkReductionMsg* impl_msg);

/* DECLS: void DoneGossip();
 */
    
    void DoneGossip(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
    
    void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
    
    void RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistributedLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_DistributedLB: public CProxy_DistBaseLB{
  public:
    typedef DistributedLB local_t;
    typedef CkIndex_DistributedLB index_t;
    typedef CProxy_DistributedLB proxy_t;
    typedef CProxyElement_DistributedLB element_t;
    typedef CProxySection_DistributedLB section_t;

    CProxy_DistributedLB(void) {
    }
    CProxy_DistributedLB(const IrrGroup *g) : CProxy_DistBaseLB(g){
    }
    CProxy_DistributedLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_DistBaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DistributedLB(CkGroupID _gid) : CProxy_DistBaseLB(_gid){  }
    CProxyElement_DistributedLB operator[](int onPE) const
      {return CProxyElement_DistributedLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_DistBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_DistBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_DistBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_DistBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_DistBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_DistBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_DistBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DistBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DistBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_DistBaseLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_DistBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_DistBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_DistBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_DistBaseLB::ckSetGroupID(g);
    }
    DistributedLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistributedLB* ckLocalBranch(CkGroupID gID) {
      return (DistributedLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_DistributedLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
    
    void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts=NULL);
    
    void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadReduction(CkReductionMsg* impl_msg);
 */
    
    void LoadReduction(CkReductionMsg* impl_msg);
    
    void LoadReduction(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void LoadReduction(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
    
    void AfterLBReduction(CkReductionMsg* impl_msg);
    
    void AfterLBReduction(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void AfterLBReduction(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void DoneGossip();
 */
    
    void DoneGossip(const CkEntryOptions *impl_e_opts=NULL);
    
    void DoneGossip(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void DoneGossip(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
    
    void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts=NULL);
    
    void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
    
    void RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts=NULL);
    
    void RecvAck(int obj_id, int assigned_pe, const bool &can_accept, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void RecvAck(int obj_id, int assigned_pe, const bool &can_accept, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistributedLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_DistributedLB: public CProxySection_DistBaseLB{
  public:
    typedef DistributedLB local_t;
    typedef CkIndex_DistributedLB index_t;
    typedef CProxy_DistributedLB proxy_t;
    typedef CProxyElement_DistributedLB element_t;
    typedef CProxySection_DistributedLB section_t;

    CProxySection_DistributedLB(void) {
    }
    CProxySection_DistributedLB(const IrrGroup *g) : CProxySection_DistBaseLB(g){
    }
    CProxySection_DistributedLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_DistBaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DistributedLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_DistBaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_DistributedLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_DistBaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_DistributedLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_DistBaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_DistBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_DistBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_DistBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_DistBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_DistBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_DistBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_DistBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DistBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DistBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_DistBaseLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_DistBaseLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_DistBaseLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_DistBaseLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_DistBaseLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_DistBaseLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_DistBaseLB::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_DistBaseLB::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_DistBaseLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_DistBaseLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_DistBaseLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_DistBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_DistBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_DistBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_DistBaseLB::ckSetGroupID(g);
    }
    DistributedLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistributedLB* ckLocalBranch(CkGroupID gID) {
      return (DistributedLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
    


/* DECLS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
    
    void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadReduction(CkReductionMsg* impl_msg);
 */
    
    void LoadReduction(CkReductionMsg* impl_msg);

/* DECLS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
    
    void AfterLBReduction(CkReductionMsg* impl_msg);

/* DECLS: void DoneGossip();
 */
    
    void DoneGossip(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
    
    void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
    
    void RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistributedLB(CkMigrateMessage* impl_msg);
 */

};
#define DistributedLB_SDAG_CODE 
typedef CBaseT1<DistBaseLB, CProxy_DistributedLB>CBase_DistributedLB;



/* ---------------- method closures -------------- */
class Closure_DistributedLB {
  public:



    struct GossipLoadInfo_2_closure;




    struct DoneGossip_5_closure;


    struct InformMigration_6_closure;


    struct RecvAck_7_closure;


};

extern void _registerDistributedLB(void);
#endif
