#ifndef _DECL_MetisLB_H_
#define _DECL_MetisLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CentralLB.decl.h"


/* DECLS: group MetisLB: CentralLB{
void MetisLB(const CkLBOptions &impl_noname_0);
MetisLB(CkMigrateMessage* impl_msg);
};
 */
 class MetisLB;
 class CkIndex_MetisLB;
 class CProxy_MetisLB;
 class CProxyElement_MetisLB;
 class CProxySection_MetisLB;
/* --------------- index object ------------------ */
class CkIndex_MetisLB:public CkIndex_CentralLB{
  public:
    typedef MetisLB local_t;
    typedef CkIndex_MetisLB index_t;
    typedef CProxy_MetisLB proxy_t;
    typedef CProxyElement_MetisLB element_t;
    typedef CProxySection_MetisLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void MetisLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_MetisLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_MetisLB_marshall1() {
      static int epidx = reg_MetisLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_MetisLB_marshall1(); }
    
    static void _call_MetisLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetisLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MetisLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MetisLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: MetisLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MetisLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MetisLB_CkMigrateMessage() {
      static int epidx = reg_MetisLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MetisLB_CkMigrateMessage(); }
    
    static void _call_MetisLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetisLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MetisLB: public CProxyElement_CentralLB{
  public:
    typedef MetisLB local_t;
    typedef CkIndex_MetisLB index_t;
    typedef CProxy_MetisLB proxy_t;
    typedef CProxyElement_MetisLB element_t;
    typedef CProxySection_MetisLB section_t;


    /* TRAM aggregators */

    CProxyElement_MetisLB(void) {
    }
    CProxyElement_MetisLB(const IrrGroup *g) : CProxyElement_CentralLB(g){
    }
    CProxyElement_MetisLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CentralLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MetisLB(CkGroupID _gid,int _onPE) : CProxyElement_CentralLB(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CentralLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CentralLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CentralLB::ckSetGroupID(g);
    }
    MetisLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetisLB* ckLocalBranch(CkGroupID gID) {
      return (MetisLB*)CkLocalBranch(gID);
    }
/* DECLS: void MetisLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: MetisLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_MetisLB: public CProxy_CentralLB{
  public:
    typedef MetisLB local_t;
    typedef CkIndex_MetisLB index_t;
    typedef CProxy_MetisLB proxy_t;
    typedef CProxyElement_MetisLB element_t;
    typedef CProxySection_MetisLB section_t;

    CProxy_MetisLB(void) {
    }
    CProxy_MetisLB(const IrrGroup *g) : CProxy_CentralLB(g){
    }
    CProxy_MetisLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CentralLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MetisLB(CkGroupID _gid) : CProxy_CentralLB(_gid){  }
    CProxyElement_MetisLB operator[](int onPE) const
      {return CProxyElement_MetisLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CentralLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CentralLB::ckSetGroupID(g);
    }
    MetisLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetisLB* ckLocalBranch(CkGroupID gID) {
      return (MetisLB*)CkLocalBranch(gID);
    }
/* DECLS: void MetisLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_MetisLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetisLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_MetisLB: public CProxySection_CentralLB{
  public:
    typedef MetisLB local_t;
    typedef CkIndex_MetisLB index_t;
    typedef CProxy_MetisLB proxy_t;
    typedef CProxyElement_MetisLB element_t;
    typedef CProxySection_MetisLB section_t;

    CProxySection_MetisLB(void) {
    }
    CProxySection_MetisLB(const IrrGroup *g) : CProxySection_CentralLB(g){
    }
    CProxySection_MetisLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CentralLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MetisLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CentralLB(_gid,_pelist,_npes,factor){  }
    CProxySection_MetisLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CentralLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MetisLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CentralLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CentralLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CentralLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CentralLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CentralLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CentralLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CentralLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CentralLB::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CentralLB::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CentralLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CentralLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CentralLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CentralLB::ckSetGroupID(g);
    }
    MetisLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetisLB* ckLocalBranch(CkGroupID gID) {
      return (MetisLB*)CkLocalBranch(gID);
    }
/* DECLS: void MetisLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: MetisLB(CkMigrateMessage* impl_msg);
 */

};
#define MetisLB_SDAG_CODE 
typedef CBaseT1<CentralLB, CProxy_MetisLB>CBase_MetisLB;



/* ---------------- method closures -------------- */
class Closure_MetisLB {
  public:


};

extern void _registerMetisLB(void);
#endif
