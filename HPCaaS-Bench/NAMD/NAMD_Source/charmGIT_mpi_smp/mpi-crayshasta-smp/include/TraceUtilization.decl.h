#ifndef _DECL_TraceUtilization_H_
#define _DECL_TraceUtilization_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TraceUtilizationInit: Chare{
TraceUtilizationInit(CkArgMsg* impl_msg);
};
 */
 class TraceUtilizationInit;
 class CkIndex_TraceUtilizationInit;
 class CProxy_TraceUtilizationInit;
/* --------------- index object ------------------ */
class CkIndex_TraceUtilizationInit:public CkIndex_Chare{
  public:
    typedef TraceUtilizationInit local_t;
    typedef CkIndex_TraceUtilizationInit index_t;
    typedef CProxy_TraceUtilizationInit proxy_t;
    typedef CProxy_TraceUtilizationInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceUtilizationInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceUtilizationInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceUtilizationInit_CkArgMsg() {
      static int epidx = reg_TraceUtilizationInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceUtilizationInit_CkArgMsg(); }
    
    static void _call_TraceUtilizationInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceUtilizationInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceUtilizationInit:public CProxy_Chare{
  public:
    typedef TraceUtilizationInit local_t;
    typedef CkIndex_TraceUtilizationInit index_t;
    typedef CProxy_TraceUtilizationInit proxy_t;
    typedef CProxy_TraceUtilizationInit element_t;

    CProxy_TraceUtilizationInit(void) {};
    CProxy_TraceUtilizationInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceUtilizationInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceUtilizationInit *ckLocal(void) const
    { return (TraceUtilizationInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceUtilizationInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceUtilizationInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceUtilizationInit>CBase_TraceUtilizationInit;

/* DECLS: group TraceUtilizationBOC: IrrGroup{
TraceUtilizationBOC();
void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
void collectSumDetailData();
void sumDetailDataCollected(CkReductionMsg* impl_msg);
TraceUtilizationBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceUtilizationBOC;
 class CkIndex_TraceUtilizationBOC;
 class CProxy_TraceUtilizationBOC;
 class CProxyElement_TraceUtilizationBOC;
 class CProxySection_TraceUtilizationBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceUtilizationBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceUtilizationBOC local_t;
    typedef CkIndex_TraceUtilizationBOC index_t;
    typedef CProxy_TraceUtilizationBOC proxy_t;
    typedef CProxyElement_TraceUtilizationBOC element_t;
    typedef CProxySection_TraceUtilizationBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceUtilizationBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceUtilizationBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceUtilizationBOC_void() {
      static int epidx = reg_TraceUtilizationBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceUtilizationBOC_void(); }
    
    static void _call_TraceUtilizationBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceUtilizationBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ccsRequestSumDetailCompressed_CkCcsRequestMsg();
    // Entry point index lookup
    
    inline static int idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg() {
      static int epidx = reg_ccsRequestSumDetailCompressed_CkCcsRequestMsg();
      return epidx;
    }

    
    inline static int idx_ccsRequestSumDetailCompressed(void (TraceUtilizationBOC::*)(CkCcsRequestMsg* impl_msg) ) {
      return idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg();
    }


    
    static int ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg) { return idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(); }
    
    static void _call_ccsRequestSumDetailCompressed_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ccsRequestSumDetailCompressed_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void collectSumDetailData();
     */
    // Entry point registration at startup
    
    static int reg_collectSumDetailData_void();
    // Entry point index lookup
    
    inline static int idx_collectSumDetailData_void() {
      static int epidx = reg_collectSumDetailData_void();
      return epidx;
    }

    
    inline static int idx_collectSumDetailData(void (TraceUtilizationBOC::*)() ) {
      return idx_collectSumDetailData_void();
    }


    
    static int collectSumDetailData() { return idx_collectSumDetailData_void(); }
    
    static void _call_collectSumDetailData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectSumDetailData_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sumDetailDataCollected_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_sumDetailDataCollected_CkReductionMsg() {
      static int epidx = reg_sumDetailDataCollected_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_sumDetailDataCollected(void (TraceUtilizationBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_sumDetailDataCollected_CkReductionMsg();
    }


    
    static int sumDetailDataCollected(CkReductionMsg* impl_msg) { return idx_sumDetailDataCollected_CkReductionMsg(); }
    
    static void _call_sumDetailDataCollected_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sumDetailDataCollected_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceUtilizationBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceUtilizationBOC_CkMigrateMessage() {
      static int epidx = reg_TraceUtilizationBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceUtilizationBOC_CkMigrateMessage(); }
    
    static void _call_TraceUtilizationBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceUtilizationBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceUtilizationBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceUtilizationBOC local_t;
    typedef CkIndex_TraceUtilizationBOC index_t;
    typedef CProxy_TraceUtilizationBOC proxy_t;
    typedef CProxyElement_TraceUtilizationBOC element_t;
    typedef CProxySection_TraceUtilizationBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceUtilizationBOC(void) {
    }
    CProxyElement_TraceUtilizationBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceUtilizationBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceUtilizationBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceUtilizationBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceUtilizationBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceUtilizationBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceUtilizationBOC();
 */
    

/* DECLS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);

/* DECLS: void collectSumDetailData();
 */
    
    void collectSumDetailData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
    
    void sumDetailDataCollected(CkReductionMsg* impl_msg);

/* DECLS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceUtilizationBOC: public CProxy_IrrGroup{
  public:
    typedef TraceUtilizationBOC local_t;
    typedef CkIndex_TraceUtilizationBOC index_t;
    typedef CProxy_TraceUtilizationBOC proxy_t;
    typedef CProxyElement_TraceUtilizationBOC element_t;
    typedef CProxySection_TraceUtilizationBOC section_t;

    CProxy_TraceUtilizationBOC(void) {
    }
    CProxy_TraceUtilizationBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceUtilizationBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceUtilizationBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceUtilizationBOC operator[](int onPE) const
      {return CProxyElement_TraceUtilizationBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceUtilizationBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceUtilizationBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceUtilizationBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceUtilizationBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
    
    void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg, int npes, int *pes);
    
    void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg, CmiGroup &grp);

/* DECLS: void collectSumDetailData();
 */
    
    void collectSumDetailData(const CkEntryOptions *impl_e_opts=NULL);
    
    void collectSumDetailData(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectSumDetailData(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
    
    void sumDetailDataCollected(CkReductionMsg* impl_msg);
    
    void sumDetailDataCollected(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void sumDetailDataCollected(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceUtilizationBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceUtilizationBOC local_t;
    typedef CkIndex_TraceUtilizationBOC index_t;
    typedef CProxy_TraceUtilizationBOC proxy_t;
    typedef CProxyElement_TraceUtilizationBOC element_t;
    typedef CProxySection_TraceUtilizationBOC section_t;

    CProxySection_TraceUtilizationBOC(void) {
    }
    CProxySection_TraceUtilizationBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceUtilizationBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceUtilizationBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceUtilizationBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceUtilizationBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceUtilizationBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceUtilizationBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceUtilizationBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceUtilizationBOC();
 */
    

/* DECLS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);

/* DECLS: void collectSumDetailData();
 */
    
    void collectSumDetailData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
    
    void sumDetailDataCollected(CkReductionMsg* impl_msg);

/* DECLS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceUtilizationBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceUtilizationBOC>CBase_TraceUtilizationBOC;

/* DECLS: readonly CProxy_TraceUtilizationBOC traceUtilizationGroupProxy;
 */

/* ---------------- method closures -------------- */
class Closure_TraceUtilizationInit {
  public:

};

/* ---------------- method closures -------------- */
class Closure_TraceUtilizationBOC {
  public:



    struct collectSumDetailData_3_closure;



};


extern void _registerTraceUtilization(void);
#endif
