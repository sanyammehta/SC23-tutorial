#ifndef _DECL_TreeLB_H_
#define _DECL_TreeLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "idm.h"

#include "BaseLB.decl.h"


/* DECLS: group TreeLB: BaseLB{
void TreeLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void sendStatsUp(CkMessage* impl_msg);
void sendDecisionDown(CkMessage* impl_msg);
void recvLoadTokens(CkMessage* impl_msg);
void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
void resumeClients();
void reportLbTime(const double *times, int n);
TreeLB(CkMigrateMessage* impl_msg);
};
 */
 class TreeLB;
 class CkIndex_TreeLB;
 class CProxy_TreeLB;
 class CProxyElement_TreeLB;
 class CProxySection_TreeLB;
/* --------------- index object ------------------ */
class CkIndex_TreeLB:public CkIndex_BaseLB{
  public:
    typedef TreeLB local_t;
    typedef CkIndex_TreeLB index_t;
    typedef CProxy_TreeLB proxy_t;
    typedef CProxyElement_TreeLB element_t;
    typedef CProxySection_TreeLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void TreeLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_TreeLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_TreeLB_marshall1() {
      static int epidx = reg_TreeLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_TreeLB_marshall1(); }
    
    static void _call_TreeLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TreeLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_TreeLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_TreeLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ProcessAtSync();
     */
    // Entry point registration at startup
    
    static int reg_ProcessAtSync_void();
    // Entry point index lookup
    
    inline static int idx_ProcessAtSync_void() {
      static int epidx = reg_ProcessAtSync_void();
      return epidx;
    }

    
    inline static int idx_ProcessAtSync(void (TreeLB::*)() ) {
      return idx_ProcessAtSync_void();
    }


    
    static int ProcessAtSync() { return idx_ProcessAtSync_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ProcessAtSync_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ProcessAtSync_void() {
      static int epidx = reg_redn_wrapper_ProcessAtSync_void();
      return epidx;
    }
    
    static int redn_wrapper_ProcessAtSync(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ProcessAtSync_void(); }
    
    static void _call_redn_wrapper_ProcessAtSync_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProcessAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendStatsUp(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendStatsUp_CkMessage();
    // Entry point index lookup
    
    inline static int idx_sendStatsUp_CkMessage() {
      static int epidx = reg_sendStatsUp_CkMessage();
      return epidx;
    }

    
    inline static int idx_sendStatsUp(void (TreeLB::*)(CkMessage* impl_msg) ) {
      return idx_sendStatsUp_CkMessage();
    }


    
    static int sendStatsUp(CkMessage* impl_msg) { return idx_sendStatsUp_CkMessage(); }
    
    static void _call_sendStatsUp_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendStatsUp_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void sendDecisionDown(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendDecisionDown_CkMessage();
    // Entry point index lookup
    
    inline static int idx_sendDecisionDown_CkMessage() {
      static int epidx = reg_sendDecisionDown_CkMessage();
      return epidx;
    }

    
    inline static int idx_sendDecisionDown(void (TreeLB::*)(CkMessage* impl_msg) ) {
      return idx_sendDecisionDown_CkMessage();
    }


    
    static int sendDecisionDown(CkMessage* impl_msg) { return idx_sendDecisionDown_CkMessage(); }
    
    static void _call_sendDecisionDown_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendDecisionDown_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recvLoadTokens(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvLoadTokens_CkMessage();
    // Entry point index lookup
    
    inline static int idx_recvLoadTokens_CkMessage() {
      static int epidx = reg_recvLoadTokens_CkMessage();
      return epidx;
    }

    
    inline static int idx_recvLoadTokens(void (TreeLB::*)(CkMessage* impl_msg) ) {
      return idx_recvLoadTokens_CkMessage();
    }


    
    static int recvLoadTokens(CkMessage* impl_msg) { return idx_recvLoadTokens_CkMessage(); }
    
    static void _call_recvLoadTokens_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvLoadTokens_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
     */
    // Entry point registration at startup
    
    static int reg_multicastIDM_marshall6();
    // Entry point index lookup
    
    inline static int idx_multicastIDM_marshall6() {
      static int epidx = reg_multicastIDM_marshall6();
      return epidx;
    }

    
    inline static int idx_multicastIDM(void (TreeLB::*)(const IDM &mig_order, int num_pes, const int *_pes) ) {
      return idx_multicastIDM_marshall6();
    }


    
    static int multicastIDM(const IDM &mig_order, int num_pes, const int *_pes) { return idx_multicastIDM_marshall6(); }
    
    static void _call_multicastIDM_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_multicastIDM_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_multicastIDM_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_multicastIDM_marshall6(PUP::er &p,void *msg);
    /* DECLS: void resumeClients();
     */
    // Entry point registration at startup
    
    static int reg_resumeClients_void();
    // Entry point index lookup
    
    inline static int idx_resumeClients_void() {
      static int epidx = reg_resumeClients_void();
      return epidx;
    }

    
    inline static int idx_resumeClients(void (TreeLB::*)() ) {
      return idx_resumeClients_void();
    }


    
    static int resumeClients() { return idx_resumeClients_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_resumeClients_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_resumeClients_void() {
      static int epidx = reg_redn_wrapper_resumeClients_void();
      return epidx;
    }
    
    static int redn_wrapper_resumeClients(CkReductionMsg* impl_msg) { return idx_redn_wrapper_resumeClients_void(); }
    
    static void _call_redn_wrapper_resumeClients_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_resumeClients_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeClients_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reportLbTime(const double *times, int n);
     */
    // Entry point registration at startup
    
    static int reg_reportLbTime_marshall8();
    // Entry point index lookup
    
    inline static int idx_reportLbTime_marshall8() {
      static int epidx = reg_reportLbTime_marshall8();
      return epidx;
    }

    
    inline static int idx_reportLbTime(void (TreeLB::*)(const double *times, int n) ) {
      return idx_reportLbTime_marshall8();
    }


    
    static int reportLbTime(const double *times, int n) { return idx_reportLbTime_marshall8(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reportLbTime_marshall8();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reportLbTime_marshall8() {
      static int epidx = reg_redn_wrapper_reportLbTime_marshall8();
      return epidx;
    }
    
    static int redn_wrapper_reportLbTime(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reportLbTime_marshall8(); }
    
    static void _call_redn_wrapper_reportLbTime_marshall8(void* impl_msg, void* impl_obj_void);
    
    static void _call_reportLbTime_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reportLbTime_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reportLbTime_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reportLbTime_marshall8(PUP::er &p,void *msg);
    /* DECLS: TreeLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TreeLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TreeLB_CkMigrateMessage() {
      static int epidx = reg_TreeLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TreeLB_CkMigrateMessage(); }
    
    static void _call_TreeLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TreeLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TreeLB: public CProxyElement_BaseLB{
  public:
    typedef TreeLB local_t;
    typedef CkIndex_TreeLB index_t;
    typedef CProxy_TreeLB proxy_t;
    typedef CProxyElement_TreeLB element_t;
    typedef CProxySection_TreeLB section_t;


    /* TRAM aggregators */

    CProxyElement_TreeLB(void) {
    }
    CProxyElement_TreeLB(const IrrGroup *g) : CProxyElement_BaseLB(g){
    }
    CProxyElement_TreeLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_BaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TreeLB(CkGroupID _gid,int _onPE) : CProxyElement_BaseLB(_gid,_onPE){
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
    TreeLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TreeLB* ckLocalBranch(CkGroupID gID) {
      return (TreeLB*)CkLocalBranch(gID);
    }
/* DECLS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendStatsUp(CkMessage* impl_msg);
 */
    
    void sendStatsUp(CkMessage* impl_msg);

/* DECLS: void sendDecisionDown(CkMessage* impl_msg);
 */
    
    void sendDecisionDown(CkMessage* impl_msg);

/* DECLS: void recvLoadTokens(CkMessage* impl_msg);
 */
    
    void recvLoadTokens(CkMessage* impl_msg);

/* DECLS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
    
    void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLbTime(const double *times, int n);
 */
    
    void reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TreeLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TreeLB: public CProxy_BaseLB{
  public:
    typedef TreeLB local_t;
    typedef CkIndex_TreeLB index_t;
    typedef CProxy_TreeLB proxy_t;
    typedef CProxyElement_TreeLB element_t;
    typedef CProxySection_TreeLB section_t;

    CProxy_TreeLB(void) {
    }
    CProxy_TreeLB(const IrrGroup *g) : CProxy_BaseLB(g){
    }
    CProxy_TreeLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_BaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TreeLB(CkGroupID _gid) : CProxy_BaseLB(_gid){  }
    CProxyElement_TreeLB operator[](int onPE) const
      {return CProxyElement_TreeLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TreeLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TreeLB* ckLocalBranch(CkGroupID gID) {
      return (TreeLB*)CkLocalBranch(gID);
    }
/* DECLS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_TreeLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendStatsUp(CkMessage* impl_msg);
 */
    
    void sendStatsUp(CkMessage* impl_msg);
    
    void sendStatsUp(CkMessage* impl_msg, int npes, int *pes);
    
    void sendStatsUp(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void sendDecisionDown(CkMessage* impl_msg);
 */
    
    void sendDecisionDown(CkMessage* impl_msg);
    
    void sendDecisionDown(CkMessage* impl_msg, int npes, int *pes);
    
    void sendDecisionDown(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recvLoadTokens(CkMessage* impl_msg);
 */
    
    void recvLoadTokens(CkMessage* impl_msg);
    
    void recvLoadTokens(CkMessage* impl_msg, int npes, int *pes);
    
    void recvLoadTokens(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
    
    void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void resumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLbTime(const double *times, int n);
 */
    
    void reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLbTime(const double *times, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reportLbTime(const double *times, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TreeLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TreeLB: public CProxySection_BaseLB{
  public:
    typedef TreeLB local_t;
    typedef CkIndex_TreeLB index_t;
    typedef CProxy_TreeLB proxy_t;
    typedef CProxyElement_TreeLB element_t;
    typedef CProxySection_TreeLB section_t;

    CProxySection_TreeLB(void) {
    }
    CProxySection_TreeLB(const IrrGroup *g) : CProxySection_BaseLB(g){
    }
    CProxySection_TreeLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TreeLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_TreeLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TreeLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TreeLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TreeLB* ckLocalBranch(CkGroupID gID) {
      return (TreeLB*)CkLocalBranch(gID);
    }
/* DECLS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void ProcessAtSync();
 */
    
    void ProcessAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendStatsUp(CkMessage* impl_msg);
 */
    
    void sendStatsUp(CkMessage* impl_msg);

/* DECLS: void sendDecisionDown(CkMessage* impl_msg);
 */
    
    void sendDecisionDown(CkMessage* impl_msg);

/* DECLS: void recvLoadTokens(CkMessage* impl_msg);
 */
    
    void recvLoadTokens(CkMessage* impl_msg);

/* DECLS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
    
    void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reportLbTime(const double *times, int n);
 */
    
    void reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TreeLB(CkMigrateMessage* impl_msg);
 */

};
#define TreeLB_SDAG_CODE 
typedef CBaseT1<BaseLB, CProxy_TreeLB>CBase_TreeLB;




/* ---------------- method closures -------------- */
class Closure_TreeLB {
  public:


    struct ProcessAtSync_2_closure;





    struct multicastIDM_6_closure;


    struct resumeClients_7_closure;


    struct reportLbTime_8_closure;


};

extern void _registerTreeLB(void);
#endif
