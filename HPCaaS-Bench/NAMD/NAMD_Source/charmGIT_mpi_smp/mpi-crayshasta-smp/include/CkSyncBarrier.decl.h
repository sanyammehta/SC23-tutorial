#ifndef _DECL_CkSyncBarrier_H_
#define _DECL_CkSyncBarrier_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID _syncBarrier;
 */

/* DECLS: mainchare CkSyncBarrierInit: Chare{
CkSyncBarrierInit(CkArgMsg* impl_msg);
};
 */
 class CkSyncBarrierInit;
 class CkIndex_CkSyncBarrierInit;
 class CProxy_CkSyncBarrierInit;
/* --------------- index object ------------------ */
class CkIndex_CkSyncBarrierInit:public CkIndex_Chare{
  public:
    typedef CkSyncBarrierInit local_t;
    typedef CkIndex_CkSyncBarrierInit index_t;
    typedef CProxy_CkSyncBarrierInit proxy_t;
    typedef CProxy_CkSyncBarrierInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkSyncBarrierInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkSyncBarrierInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CkSyncBarrierInit_CkArgMsg() {
      static int epidx = reg_CkSyncBarrierInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CkSyncBarrierInit_CkArgMsg(); }
    
    static void _call_CkSyncBarrierInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkSyncBarrierInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CkSyncBarrierInit:public CProxy_Chare{
  public:
    typedef CkSyncBarrierInit local_t;
    typedef CkIndex_CkSyncBarrierInit index_t;
    typedef CProxy_CkSyncBarrierInit proxy_t;
    typedef CProxy_CkSyncBarrierInit element_t;

    CProxy_CkSyncBarrierInit(void) {};
    CProxy_CkSyncBarrierInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CkSyncBarrierInit(const Chare *c) : CProxy_Chare(c){  }

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
    CkSyncBarrierInit *ckLocal(void) const
    { return (CkSyncBarrierInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CkSyncBarrierInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define CkSyncBarrierInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CkSyncBarrierInit>CBase_CkSyncBarrierInit;

/* DECLS: group CkSyncBarrier: IrrGroup{
void CkSyncBarrier();
void resumeClients();
void kick(int kickStep, int sourceNode, int sourcePe);
void checkBarrier();
CkSyncBarrier(CkMigrateMessage* impl_msg);
};
 */
 class CkSyncBarrier;
 class CkIndex_CkSyncBarrier;
 class CProxy_CkSyncBarrier;
 class CProxyElement_CkSyncBarrier;
 class CProxySection_CkSyncBarrier;
/* --------------- index object ------------------ */
class CkIndex_CkSyncBarrier:public CkIndex_IrrGroup{
  public:
    typedef CkSyncBarrier local_t;
    typedef CkIndex_CkSyncBarrier index_t;
    typedef CProxy_CkSyncBarrier proxy_t;
    typedef CProxyElement_CkSyncBarrier element_t;
    typedef CProxySection_CkSyncBarrier section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void CkSyncBarrier();
     */
    // Entry point registration at startup
    
    static int reg_CkSyncBarrier_void();
    // Entry point index lookup
    
    inline static int idx_CkSyncBarrier_void() {
      static int epidx = reg_CkSyncBarrier_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkSyncBarrier_void(); }
    
    static void _call_CkSyncBarrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkSyncBarrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeClients();
     */
    // Entry point registration at startup
    
    static int reg_resumeClients_void();
    // Entry point index lookup
    
    inline static int idx_resumeClients_void() {
      static int epidx = reg_resumeClients_void();
      return epidx;
    }

    
    inline static int idx_resumeClients(void (CkSyncBarrier::*)() ) {
      return idx_resumeClients_void();
    }


    
    static int resumeClients() { return idx_resumeClients_void(); }
    
    static void _call_resumeClients_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeClients_void(void* impl_msg, void* impl_obj);
    /* DECLS: void kick(int kickStep, int sourceNode, int sourcePe);
     */
    // Entry point registration at startup
    
    static int reg_kick_marshall3();
    // Entry point index lookup
    
    inline static int idx_kick_marshall3() {
      static int epidx = reg_kick_marshall3();
      return epidx;
    }

    
    inline static int idx_kick(void (CkSyncBarrier::*)(int kickStep, int sourceNode, int sourcePe) ) {
      return idx_kick_marshall3();
    }


    
    static int kick(int kickStep, int sourceNode, int sourcePe) { return idx_kick_marshall3(); }
    
    static void _call_kick_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kick_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_kick_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_kick_marshall3(PUP::er &p,void *msg);
    /* DECLS: void checkBarrier();
     */
    // Entry point registration at startup
    
    static int reg_checkBarrier_void();
    // Entry point index lookup
    
    inline static int idx_checkBarrier_void() {
      static int epidx = reg_checkBarrier_void();
      return epidx;
    }

    
    inline static int idx_checkBarrier(void (CkSyncBarrier::*)() ) {
      return idx_checkBarrier_void();
    }


    
    static int checkBarrier() { return idx_checkBarrier_void(); }
    
    static void _call_checkBarrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkBarrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkSyncBarrier(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkSyncBarrier_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkSyncBarrier_CkMigrateMessage() {
      static int epidx = reg_CkSyncBarrier_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkSyncBarrier_CkMigrateMessage(); }
    
    static void _call_CkSyncBarrier_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkSyncBarrier_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkSyncBarrier: public CProxyElement_IrrGroup{
  public:
    typedef CkSyncBarrier local_t;
    typedef CkIndex_CkSyncBarrier index_t;
    typedef CProxy_CkSyncBarrier proxy_t;
    typedef CProxyElement_CkSyncBarrier element_t;
    typedef CProxySection_CkSyncBarrier section_t;


    /* TRAM aggregators */

    CProxyElement_CkSyncBarrier(void) {
    }
    CProxyElement_CkSyncBarrier(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkSyncBarrier(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkSyncBarrier(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkSyncBarrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkSyncBarrier* ckLocalBranch(CkGroupID gID) {
      return (CkSyncBarrier*)CkLocalBranch(gID);
    }
/* DECLS: void CkSyncBarrier();
 */
    

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
    
    void kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void checkBarrier();
 */
    
    void checkBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_CkSyncBarrier: public CProxy_IrrGroup{
  public:
    typedef CkSyncBarrier local_t;
    typedef CkIndex_CkSyncBarrier index_t;
    typedef CProxy_CkSyncBarrier proxy_t;
    typedef CProxyElement_CkSyncBarrier element_t;
    typedef CProxySection_CkSyncBarrier section_t;

    CProxy_CkSyncBarrier(void) {
    }
    CProxy_CkSyncBarrier(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkSyncBarrier(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkSyncBarrier(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkSyncBarrier operator[](int onPE) const
      {return CProxyElement_CkSyncBarrier(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkSyncBarrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkSyncBarrier* ckLocalBranch(CkGroupID gID) {
      return (CkSyncBarrier*)CkLocalBranch(gID);
    }
/* DECLS: void CkSyncBarrier();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void resumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
    
    void kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);
    
    void kick(int kickStep, int sourceNode, int sourcePe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void kick(int kickStep, int sourceNode, int sourcePe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void checkBarrier();
 */
    
    void checkBarrier(const CkEntryOptions *impl_e_opts=NULL);
    
    void checkBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void checkBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_CkSyncBarrier: public CProxySection_IrrGroup{
  public:
    typedef CkSyncBarrier local_t;
    typedef CkIndex_CkSyncBarrier index_t;
    typedef CProxy_CkSyncBarrier proxy_t;
    typedef CProxyElement_CkSyncBarrier element_t;
    typedef CProxySection_CkSyncBarrier section_t;

    CProxySection_CkSyncBarrier(void) {
    }
    CProxySection_CkSyncBarrier(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkSyncBarrier(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkSyncBarrier(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CkSyncBarrier(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CkSyncBarrier(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkSyncBarrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkSyncBarrier* ckLocalBranch(CkGroupID gID) {
      return (CkSyncBarrier*)CkLocalBranch(gID);
    }
/* DECLS: void CkSyncBarrier();
 */
    

/* DECLS: void resumeClients();
 */
    
    void resumeClients(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
    
    void kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void checkBarrier();
 */
    
    void checkBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */

};
#define CkSyncBarrier_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkSyncBarrier>CBase_CkSyncBarrier;


/* ---------------- method closures -------------- */
class Closure_CkSyncBarrierInit {
  public:

};

/* ---------------- method closures -------------- */
class Closure_CkSyncBarrier {
  public:


    struct resumeClients_2_closure;


    struct kick_3_closure;


    struct checkBarrier_4_closure;


};

extern void _registerCkSyncBarrier(void);
#endif
