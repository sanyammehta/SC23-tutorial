#ifndef _DECL_TraceSimple_H_
#define _DECL_TraceSimple_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TraceSimpleInit: Chare{
TraceSimpleInit(CkArgMsg* impl_msg);
};
 */
 class TraceSimpleInit;
 class CkIndex_TraceSimpleInit;
 class CProxy_TraceSimpleInit;
/* --------------- index object ------------------ */
class CkIndex_TraceSimpleInit:public CkIndex_Chare{
  public:
    typedef TraceSimpleInit local_t;
    typedef CkIndex_TraceSimpleInit index_t;
    typedef CProxy_TraceSimpleInit proxy_t;
    typedef CProxy_TraceSimpleInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceSimpleInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceSimpleInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceSimpleInit_CkArgMsg() {
      static int epidx = reg_TraceSimpleInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceSimpleInit_CkArgMsg(); }
    
    static void _call_TraceSimpleInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSimpleInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceSimpleInit:public CProxy_Chare{
  public:
    typedef TraceSimpleInit local_t;
    typedef CkIndex_TraceSimpleInit index_t;
    typedef CProxy_TraceSimpleInit proxy_t;
    typedef CProxy_TraceSimpleInit element_t;

    CProxy_TraceSimpleInit(void) {};
    CProxy_TraceSimpleInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceSimpleInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceSimpleInit *ckLocal(void) const
    { return (TraceSimpleInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceSimpleInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceSimpleInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceSimpleInit>CBase_TraceSimpleInit;


/* DECLS: readonly CkGroupID traceSimpleGID;
 */

/* DECLS: group TraceSimpleBOC: IrrGroup{
TraceSimpleBOC();
TraceSimpleBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceSimpleBOC;
 class CkIndex_TraceSimpleBOC;
 class CProxy_TraceSimpleBOC;
 class CProxyElement_TraceSimpleBOC;
 class CProxySection_TraceSimpleBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceSimpleBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceSimpleBOC local_t;
    typedef CkIndex_TraceSimpleBOC index_t;
    typedef CProxy_TraceSimpleBOC proxy_t;
    typedef CProxyElement_TraceSimpleBOC element_t;
    typedef CProxySection_TraceSimpleBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceSimpleBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceSimpleBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceSimpleBOC_void() {
      static int epidx = reg_TraceSimpleBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceSimpleBOC_void(); }
    
    static void _call_TraceSimpleBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSimpleBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceSimpleBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceSimpleBOC_CkMigrateMessage() {
      static int epidx = reg_TraceSimpleBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceSimpleBOC_CkMigrateMessage(); }
    
    static void _call_TraceSimpleBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSimpleBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceSimpleBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceSimpleBOC local_t;
    typedef CkIndex_TraceSimpleBOC index_t;
    typedef CProxy_TraceSimpleBOC proxy_t;
    typedef CProxyElement_TraceSimpleBOC element_t;
    typedef CProxySection_TraceSimpleBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceSimpleBOC(void) {
    }
    CProxyElement_TraceSimpleBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceSimpleBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceSimpleBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceSimpleBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSimpleBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSimpleBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSimpleBOC();
 */
    

/* DECLS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceSimpleBOC: public CProxy_IrrGroup{
  public:
    typedef TraceSimpleBOC local_t;
    typedef CkIndex_TraceSimpleBOC index_t;
    typedef CProxy_TraceSimpleBOC proxy_t;
    typedef CProxyElement_TraceSimpleBOC element_t;
    typedef CProxySection_TraceSimpleBOC section_t;

    CProxy_TraceSimpleBOC(void) {
    }
    CProxy_TraceSimpleBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceSimpleBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceSimpleBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceSimpleBOC operator[](int onPE) const
      {return CProxyElement_TraceSimpleBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceSimpleBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSimpleBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSimpleBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSimpleBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceSimpleBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceSimpleBOC local_t;
    typedef CkIndex_TraceSimpleBOC index_t;
    typedef CProxy_TraceSimpleBOC proxy_t;
    typedef CProxyElement_TraceSimpleBOC element_t;
    typedef CProxySection_TraceSimpleBOC section_t;

    CProxySection_TraceSimpleBOC(void) {
    }
    CProxySection_TraceSimpleBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceSimpleBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceSimpleBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceSimpleBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceSimpleBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceSimpleBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSimpleBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSimpleBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSimpleBOC();
 */
    

/* DECLS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceSimpleBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceSimpleBOC>CBase_TraceSimpleBOC;

/* ---------------- method closures -------------- */
class Closure_TraceSimpleInit {
  public:

};



/* ---------------- method closures -------------- */
class Closure_TraceSimpleBOC {
  public:


};

extern void _registerTraceSimple(void);
#endif
