#ifndef _DECL_LBManager_H_
#define _DECL_LBManager_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CkMarshall.decl.h"

#include "BaseLB.decl.h"

/* DECLS: readonly CkGroupID _lbmgr;
 */

/* DECLS: mainchare LBMgrInit: Chare{
LBMgrInit(CkArgMsg* impl_msg);
};
 */
 class LBMgrInit;
 class CkIndex_LBMgrInit;
 class CProxy_LBMgrInit;
/* --------------- index object ------------------ */
class CkIndex_LBMgrInit:public CkIndex_Chare{
  public:
    typedef LBMgrInit local_t;
    typedef CkIndex_LBMgrInit index_t;
    typedef CProxy_LBMgrInit proxy_t;
    typedef CProxy_LBMgrInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LBMgrInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LBMgrInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_LBMgrInit_CkArgMsg() {
      static int epidx = reg_LBMgrInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_LBMgrInit_CkArgMsg(); }
    
    static void _call_LBMgrInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBMgrInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_LBMgrInit:public CProxy_Chare{
  public:
    typedef LBMgrInit local_t;
    typedef CkIndex_LBMgrInit index_t;
    typedef CProxy_LBMgrInit proxy_t;
    typedef CProxy_LBMgrInit element_t;

    CProxy_LBMgrInit(void) {};
    CProxy_LBMgrInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_LBMgrInit(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    LBMgrInit *ckLocal(void) const
    { return (LBMgrInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: LBMgrInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define LBMgrInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_LBMgrInit>CBase_LBMgrInit;

/* DECLS: group LBManager: IrrGroup{
void LBManager();
void ResumeClients();
  initcall void initnodeFn(void);
LBManager(CkMigrateMessage* impl_msg);
};
 */
 class LBManager;
 class CkIndex_LBManager;
 class CProxy_LBManager;
 class CProxyElement_LBManager;
 class CProxySection_LBManager;
/* --------------- index object ------------------ */
class CkIndex_LBManager:public CkIndex_IrrGroup{
  public:
    typedef LBManager local_t;
    typedef CkIndex_LBManager index_t;
    typedef CProxy_LBManager proxy_t;
    typedef CProxyElement_LBManager element_t;
    typedef CProxySection_LBManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void LBManager();
     */
    // Entry point registration at startup
    
    static int reg_LBManager_void();
    // Entry point index lookup
    
    inline static int idx_LBManager_void() {
      static int epidx = reg_LBManager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LBManager_void(); }
    
    static void _call_LBManager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBManager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeClients();
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_void();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_void() {
      static int epidx = reg_ResumeClients_void();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (LBManager::*)() ) {
      return idx_ResumeClients_void();
    }


    
    static int ResumeClients() { return idx_ResumeClients_void(); }
    
    static void _call_ResumeClients_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_void(void* impl_msg, void* impl_obj);
    /* DECLS: LBManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LBManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_LBManager_CkMigrateMessage() {
      static int epidx = reg_LBManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_LBManager_CkMigrateMessage(); }
    
    static void _call_LBManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LBManager: public CProxyElement_IrrGroup{
  public:
    typedef LBManager local_t;
    typedef CkIndex_LBManager index_t;
    typedef CProxy_LBManager proxy_t;
    typedef CProxyElement_LBManager element_t;
    typedef CProxySection_LBManager section_t;


    /* TRAM aggregators */

    CProxyElement_LBManager(void) {
    }
    CProxyElement_LBManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LBManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LBManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    LBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBManager* ckLocalBranch(CkGroupID gID) {
      return (LBManager*)CkLocalBranch(gID);
    }
/* DECLS: void LBManager();
 */
    

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_LBManager: public CProxy_IrrGroup{
  public:
    typedef LBManager local_t;
    typedef CkIndex_LBManager index_t;
    typedef CProxy_LBManager proxy_t;
    typedef CProxyElement_LBManager element_t;
    typedef CProxySection_LBManager section_t;

    CProxy_LBManager(void) {
    }
    CProxy_LBManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LBManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LBManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LBManager operator[](int onPE) const
      {return CProxyElement_LBManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    LBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBManager* ckLocalBranch(CkGroupID gID) {
      return (LBManager*)CkLocalBranch(gID);
    }
/* DECLS: void LBManager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_LBManager: public CProxySection_IrrGroup{
  public:
    typedef LBManager local_t;
    typedef CkIndex_LBManager index_t;
    typedef CProxy_LBManager proxy_t;
    typedef CProxyElement_LBManager element_t;
    typedef CProxySection_LBManager section_t;

    CProxySection_LBManager(void) {
    }
    CProxySection_LBManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LBManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LBManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LBManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LBManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    LBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBManager* ckLocalBranch(CkGroupID gID) {
      return (LBManager*)CkLocalBranch(gID);
    }
/* DECLS: void LBManager();
 */
    

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBManager(CkMigrateMessage* impl_msg);
 */

};
#define LBManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LBManager>CBase_LBManager;




/* ---------------- method closures -------------- */
class Closure_LBMgrInit {
  public:

};

/* ---------------- method closures -------------- */
class Closure_LBManager {
  public:


    struct ResumeClients_2_closure;



};

extern void _registerLBManager(void);
#endif
