#ifndef _DECL_TraceTau_H_
#define _DECL_TraceTau_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TraceTauInit: Chare{
TraceTauInit(CkArgMsg* impl_msg);
};
 */
 class TraceTauInit;
 class CkIndex_TraceTauInit;
 class CProxy_TraceTauInit;
/* --------------- index object ------------------ */
class CkIndex_TraceTauInit:public CkIndex_Chare{
  public:
    typedef TraceTauInit local_t;
    typedef CkIndex_TraceTauInit index_t;
    typedef CProxy_TraceTauInit proxy_t;
    typedef CProxy_TraceTauInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceTauInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceTauInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceTauInit_CkArgMsg() {
      static int epidx = reg_TraceTauInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceTauInit_CkArgMsg(); }
    
    static void _call_TraceTauInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceTauInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceTauInit:public CProxy_Chare{
  public:
    typedef TraceTauInit local_t;
    typedef CkIndex_TraceTauInit index_t;
    typedef CProxy_TraceTauInit proxy_t;
    typedef CProxy_TraceTauInit element_t;

    CProxy_TraceTauInit(void) {};
    CProxy_TraceTauInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceTauInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceTauInit *ckLocal(void) const
    { return (TraceTauInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceTauInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceTauInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceTauInit>CBase_TraceTauInit;


/* DECLS: readonly CkGroupID traceTauGID;
 */

/* DECLS: group TraceTauBOC: IrrGroup{
TraceTauBOC();
TraceTauBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceTauBOC;
 class CkIndex_TraceTauBOC;
 class CProxy_TraceTauBOC;
 class CProxyElement_TraceTauBOC;
 class CProxySection_TraceTauBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceTauBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceTauBOC local_t;
    typedef CkIndex_TraceTauBOC index_t;
    typedef CProxy_TraceTauBOC proxy_t;
    typedef CProxyElement_TraceTauBOC element_t;
    typedef CProxySection_TraceTauBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceTauBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceTauBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceTauBOC_void() {
      static int epidx = reg_TraceTauBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceTauBOC_void(); }
    
    static void _call_TraceTauBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceTauBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: TraceTauBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceTauBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceTauBOC_CkMigrateMessage() {
      static int epidx = reg_TraceTauBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceTauBOC_CkMigrateMessage(); }
    
    static void _call_TraceTauBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceTauBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceTauBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceTauBOC local_t;
    typedef CkIndex_TraceTauBOC index_t;
    typedef CProxy_TraceTauBOC proxy_t;
    typedef CProxyElement_TraceTauBOC element_t;
    typedef CProxySection_TraceTauBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceTauBOC(void) {
    }
    CProxyElement_TraceTauBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceTauBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceTauBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceTauBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceTauBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceTauBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceTauBOC();
 */
    

/* DECLS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceTauBOC: public CProxy_IrrGroup{
  public:
    typedef TraceTauBOC local_t;
    typedef CkIndex_TraceTauBOC index_t;
    typedef CProxy_TraceTauBOC proxy_t;
    typedef CProxyElement_TraceTauBOC element_t;
    typedef CProxySection_TraceTauBOC section_t;

    CProxy_TraceTauBOC(void) {
    }
    CProxy_TraceTauBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceTauBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceTauBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceTauBOC operator[](int onPE) const
      {return CProxyElement_TraceTauBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceTauBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceTauBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceTauBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceTauBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceTauBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceTauBOC local_t;
    typedef CkIndex_TraceTauBOC index_t;
    typedef CProxy_TraceTauBOC proxy_t;
    typedef CProxyElement_TraceTauBOC element_t;
    typedef CProxySection_TraceTauBOC section_t;

    CProxySection_TraceTauBOC(void) {
    }
    CProxySection_TraceTauBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceTauBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceTauBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceTauBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceTauBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceTauBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceTauBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceTauBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceTauBOC();
 */
    

/* DECLS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceTauBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceTauBOC>CBase_TraceTauBOC;

/* ---------------- method closures -------------- */
class Closure_TraceTauInit {
  public:

};



/* ---------------- method closures -------------- */
class Closure_TraceTauBOC {
  public:


};

extern void _registerTraceTau(void);
#endif
