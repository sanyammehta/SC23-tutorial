#ifndef _DECL_DistBaseLB_H_
#define _DECL_DistBaseLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "LBManager.decl.h"

#include "BaseLB.decl.h"

/* DECLS: group DistBaseLB: BaseLB{
void DistBaseLB(const CkLBOptions &impl_noname_0);
void LoadBalance();
void barrierDone();
void ResumeClients();
void ResumeClients(int balancing);
DistBaseLB(CkMigrateMessage* impl_msg);
};
 */
 class DistBaseLB;
 class CkIndex_DistBaseLB;
 class CProxy_DistBaseLB;
 class CProxyElement_DistBaseLB;
 class CProxySection_DistBaseLB;
/* --------------- index object ------------------ */
class CkIndex_DistBaseLB:public CkIndex_BaseLB{
  public:
    typedef DistBaseLB local_t;
    typedef CkIndex_DistBaseLB index_t;
    typedef CProxy_DistBaseLB proxy_t;
    typedef CProxyElement_DistBaseLB element_t;
    typedef CProxySection_DistBaseLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void DistBaseLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_DistBaseLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_DistBaseLB_marshall1() {
      static int epidx = reg_DistBaseLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_DistBaseLB_marshall1(); }
    
    static void _call_DistBaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DistBaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DistBaseLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DistBaseLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void LoadBalance();
     */
    // Entry point registration at startup
    
    static int reg_LoadBalance_void();
    // Entry point index lookup
    
    inline static int idx_LoadBalance_void() {
      static int epidx = reg_LoadBalance_void();
      return epidx;
    }

    
    inline static int idx_LoadBalance(void (DistBaseLB::*)() ) {
      return idx_LoadBalance_void();
    }


    
    static int LoadBalance() { return idx_LoadBalance_void(); }
    
    static void _call_LoadBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LoadBalance_void(void* impl_msg, void* impl_obj);
    /* DECLS: void barrierDone();
     */
    // Entry point registration at startup
    
    static int reg_barrierDone_void();
    // Entry point index lookup
    
    inline static int idx_barrierDone_void() {
      static int epidx = reg_barrierDone_void();
      return epidx;
    }

    
    inline static int idx_barrierDone(void (DistBaseLB::*)() ) {
      return idx_barrierDone_void();
    }


    
    static int barrierDone() { return idx_barrierDone_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_barrierDone_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_barrierDone_void() {
      static int epidx = reg_redn_wrapper_barrierDone_void();
      return epidx;
    }
    
    static int redn_wrapper_barrierDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_barrierDone_void(); }
    
    static void _call_redn_wrapper_barrierDone_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_barrierDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrierDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeClients();
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_void();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_void() {
      static int epidx = reg_ResumeClients_void();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (DistBaseLB::*)() ) {
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
    /* DECLS: void ResumeClients(int balancing);
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_marshall5();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_marshall5() {
      static int epidx = reg_ResumeClients_marshall5();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (DistBaseLB::*)(int balancing) ) {
      return idx_ResumeClients_marshall5();
    }


    
    static int ResumeClients(int balancing) { return idx_ResumeClients_marshall5(); }
    
    static void _call_ResumeClients_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ResumeClients_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ResumeClients_marshall5(PUP::er &p,void *msg);
    /* DECLS: DistBaseLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_DistBaseLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_DistBaseLB_CkMigrateMessage() {
      static int epidx = reg_DistBaseLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_DistBaseLB_CkMigrateMessage(); }
    
    static void _call_DistBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DistBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DistBaseLB: public CProxyElement_BaseLB{
  public:
    typedef DistBaseLB local_t;
    typedef CkIndex_DistBaseLB index_t;
    typedef CProxy_DistBaseLB proxy_t;
    typedef CProxyElement_DistBaseLB element_t;
    typedef CProxySection_DistBaseLB section_t;


    /* TRAM aggregators */

    CProxyElement_DistBaseLB(void) {
    }
    CProxyElement_DistBaseLB(const IrrGroup *g) : CProxyElement_BaseLB(g){
    }
    CProxyElement_DistBaseLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_BaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_DistBaseLB(CkGroupID _gid,int _onPE) : CProxyElement_BaseLB(_gid,_onPE){
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
    DistBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistBaseLB* ckLocalBranch(CkGroupID gID) {
      return (DistBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrierDone();
 */
    
    void barrierDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistBaseLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_DistBaseLB: public CProxy_BaseLB{
  public:
    typedef DistBaseLB local_t;
    typedef CkIndex_DistBaseLB index_t;
    typedef CProxy_DistBaseLB proxy_t;
    typedef CProxyElement_DistBaseLB element_t;
    typedef CProxySection_DistBaseLB section_t;

    CProxy_DistBaseLB(void) {
    }
    CProxy_DistBaseLB(const IrrGroup *g) : CProxy_BaseLB(g){
    }
    CProxy_DistBaseLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_BaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DistBaseLB(CkGroupID _gid) : CProxy_BaseLB(_gid){  }
    CProxyElement_DistBaseLB operator[](int onPE) const
      {return CProxyElement_DistBaseLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    DistBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistBaseLB* ckLocalBranch(CkGroupID gID) {
      return (DistBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_DistBaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrierDone();
 */
    
    void barrierDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void barrierDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void barrierDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int balancing, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int balancing, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistBaseLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_DistBaseLB: public CProxySection_BaseLB{
  public:
    typedef DistBaseLB local_t;
    typedef CkIndex_DistBaseLB index_t;
    typedef CProxy_DistBaseLB proxy_t;
    typedef CProxyElement_DistBaseLB element_t;
    typedef CProxySection_DistBaseLB section_t;

    CProxySection_DistBaseLB(void) {
    }
    CProxySection_DistBaseLB(const IrrGroup *g) : CProxySection_BaseLB(g){
    }
    CProxySection_DistBaseLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DistBaseLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_DistBaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_BaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_DistBaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_BaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    DistBaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DistBaseLB* ckLocalBranch(CkGroupID gID) {
      return (DistBaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void LoadBalance();
 */
    
    void LoadBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrierDone();
 */
    
    void barrierDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients(int balancing);
 */
    
    void ResumeClients(int balancing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DistBaseLB(CkMigrateMessage* impl_msg);
 */

};
#define DistBaseLB_SDAG_CODE 
typedef CBaseT1<BaseLB, CProxy_DistBaseLB>CBase_DistBaseLB;



/* ---------------- method closures -------------- */
class Closure_DistBaseLB {
  public:


    struct LoadBalance_2_closure;


    struct barrierDone_3_closure;


    struct ResumeClients_4_closure;


    struct ResumeClients_5_closure;


};

extern void _registerDistBaseLB(void);
#endif
