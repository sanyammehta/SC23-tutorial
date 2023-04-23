#ifndef _DECL_TraceControlPoints_H_
#define _DECL_TraceControlPoints_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TraceControlPointsInit: Chare{
TraceControlPointsInit(CkArgMsg* impl_msg);
};
 */
 class TraceControlPointsInit;
 class CkIndex_TraceControlPointsInit;
 class CProxy_TraceControlPointsInit;
/* --------------- index object ------------------ */
class CkIndex_TraceControlPointsInit:public CkIndex_Chare{
  public:
    typedef TraceControlPointsInit local_t;
    typedef CkIndex_TraceControlPointsInit index_t;
    typedef CProxy_TraceControlPointsInit proxy_t;
    typedef CProxy_TraceControlPointsInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceControlPointsInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceControlPointsInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceControlPointsInit_CkArgMsg() {
      static int epidx = reg_TraceControlPointsInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceControlPointsInit_CkArgMsg(); }
    
    static void _call_TraceControlPointsInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceControlPointsInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceControlPointsInit:public CProxy_Chare{
  public:
    typedef TraceControlPointsInit local_t;
    typedef CkIndex_TraceControlPointsInit index_t;
    typedef CProxy_TraceControlPointsInit proxy_t;
    typedef CProxy_TraceControlPointsInit element_t;

    CProxy_TraceControlPointsInit(void) {};
    CProxy_TraceControlPointsInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceControlPointsInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceControlPointsInit *ckLocal(void) const
    { return (TraceControlPointsInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceControlPointsInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceControlPointsInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceControlPointsInit>CBase_TraceControlPointsInit;


/* DECLS: readonly CkGroupID traceControlPointsGID;
 */

/* DECLS: group TraceControlPointsBOC: IrrGroup{
TraceControlPointsBOC();
TraceControlPointsBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceControlPointsBOC;
 class CkIndex_TraceControlPointsBOC;
 class CProxy_TraceControlPointsBOC;
 class CProxyElement_TraceControlPointsBOC;
 class CProxySection_TraceControlPointsBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceControlPointsBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceControlPointsBOC local_t;
    typedef CkIndex_TraceControlPointsBOC index_t;
    typedef CProxy_TraceControlPointsBOC proxy_t;
    typedef CProxyElement_TraceControlPointsBOC element_t;
    typedef CProxySection_TraceControlPointsBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceControlPointsBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceControlPointsBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceControlPointsBOC_void() {
      static int epidx = reg_TraceControlPointsBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceControlPointsBOC_void(); }
    
    static void _call_TraceControlPointsBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceControlPointsBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceControlPointsBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceControlPointsBOC_CkMigrateMessage() {
      static int epidx = reg_TraceControlPointsBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceControlPointsBOC_CkMigrateMessage(); }
    
    static void _call_TraceControlPointsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceControlPointsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceControlPointsBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceControlPointsBOC local_t;
    typedef CkIndex_TraceControlPointsBOC index_t;
    typedef CProxy_TraceControlPointsBOC proxy_t;
    typedef CProxyElement_TraceControlPointsBOC element_t;
    typedef CProxySection_TraceControlPointsBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceControlPointsBOC(void) {
    }
    CProxyElement_TraceControlPointsBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceControlPointsBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceControlPointsBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceControlPointsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceControlPointsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceControlPointsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceControlPointsBOC();
 */
    

/* DECLS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceControlPointsBOC: public CProxy_IrrGroup{
  public:
    typedef TraceControlPointsBOC local_t;
    typedef CkIndex_TraceControlPointsBOC index_t;
    typedef CProxy_TraceControlPointsBOC proxy_t;
    typedef CProxyElement_TraceControlPointsBOC element_t;
    typedef CProxySection_TraceControlPointsBOC section_t;

    CProxy_TraceControlPointsBOC(void) {
    }
    CProxy_TraceControlPointsBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceControlPointsBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceControlPointsBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceControlPointsBOC operator[](int onPE) const
      {return CProxyElement_TraceControlPointsBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceControlPointsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceControlPointsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceControlPointsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceControlPointsBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceControlPointsBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceControlPointsBOC local_t;
    typedef CkIndex_TraceControlPointsBOC index_t;
    typedef CProxy_TraceControlPointsBOC proxy_t;
    typedef CProxyElement_TraceControlPointsBOC element_t;
    typedef CProxySection_TraceControlPointsBOC section_t;

    CProxySection_TraceControlPointsBOC(void) {
    }
    CProxySection_TraceControlPointsBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceControlPointsBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceControlPointsBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceControlPointsBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceControlPointsBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceControlPointsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceControlPointsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceControlPointsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceControlPointsBOC();
 */
    

/* DECLS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceControlPointsBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceControlPointsBOC>CBase_TraceControlPointsBOC;

/* ---------------- method closures -------------- */
class Closure_TraceControlPointsInit {
  public:

};



/* ---------------- method closures -------------- */
class Closure_TraceControlPointsBOC {
  public:


};

extern void _registerTraceControlPoints(void);
#endif
