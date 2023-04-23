#ifndef _DECL_mempool_H_
#define _DECL_mempool_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID MemPoolID;
 */

/* DECLS: group MemoryPool: IrrGroup{
MemoryPool();
MemoryPool(CkMigrateMessage* impl_msg);
};
 */
 class MemoryPool;
 class CkIndex_MemoryPool;
 class CProxy_MemoryPool;
 class CProxyElement_MemoryPool;
 class CProxySection_MemoryPool;
/* --------------- index object ------------------ */
class CkIndex_MemoryPool:public CkIndex_IrrGroup{
  public:
    typedef MemoryPool local_t;
    typedef CkIndex_MemoryPool index_t;
    typedef CProxy_MemoryPool proxy_t;
    typedef CProxyElement_MemoryPool element_t;
    typedef CProxySection_MemoryPool section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MemoryPool();
     */
    // Entry point registration at startup
    
    static int reg_MemoryPool_void();
    // Entry point index lookup
    
    inline static int idx_MemoryPool_void() {
      static int epidx = reg_MemoryPool_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MemoryPool_void(); }
    
    static void _call_MemoryPool_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MemoryPool_void(void* impl_msg, void* impl_obj);
    /* DECLS: MemoryPool(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MemoryPool_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MemoryPool_CkMigrateMessage() {
      static int epidx = reg_MemoryPool_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MemoryPool_CkMigrateMessage(); }
    
    static void _call_MemoryPool_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MemoryPool_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MemoryPool: public CProxyElement_IrrGroup{
  public:
    typedef MemoryPool local_t;
    typedef CkIndex_MemoryPool index_t;
    typedef CProxy_MemoryPool proxy_t;
    typedef CProxyElement_MemoryPool element_t;
    typedef CProxySection_MemoryPool section_t;


    /* TRAM aggregators */

    CProxyElement_MemoryPool(void) {
    }
    CProxyElement_MemoryPool(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MemoryPool(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MemoryPool(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MemoryPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MemoryPool* ckLocalBranch(CkGroupID gID) {
      return (MemoryPool*)CkLocalBranch(gID);
    }
/* DECLS: MemoryPool();
 */
    

/* DECLS: MemoryPool(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_MemoryPool: public CProxy_IrrGroup{
  public:
    typedef MemoryPool local_t;
    typedef CkIndex_MemoryPool index_t;
    typedef CProxy_MemoryPool proxy_t;
    typedef CProxyElement_MemoryPool element_t;
    typedef CProxySection_MemoryPool section_t;

    CProxy_MemoryPool(void) {
    }
    CProxy_MemoryPool(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MemoryPool(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MemoryPool(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MemoryPool operator[](int onPE) const
      {return CProxyElement_MemoryPool(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MemoryPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MemoryPool* ckLocalBranch(CkGroupID gID) {
      return (MemoryPool*)CkLocalBranch(gID);
    }
/* DECLS: MemoryPool();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MemoryPool(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_MemoryPool: public CProxySection_IrrGroup{
  public:
    typedef MemoryPool local_t;
    typedef CkIndex_MemoryPool index_t;
    typedef CProxy_MemoryPool proxy_t;
    typedef CProxyElement_MemoryPool element_t;
    typedef CProxySection_MemoryPool section_t;

    CProxySection_MemoryPool(void) {
    }
    CProxySection_MemoryPool(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MemoryPool(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MemoryPool(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_MemoryPool(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MemoryPool(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MemoryPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MemoryPool* ckLocalBranch(CkGroupID gID) {
      return (MemoryPool*)CkLocalBranch(gID);
    }
/* DECLS: MemoryPool();
 */
    

/* DECLS: MemoryPool(CkMigrateMessage* impl_msg);
 */

};
#define MemoryPool_SDAG_CODE 
typedef CBaseT1<Group, CProxy_MemoryPool>CBase_MemoryPool;


/* ---------------- method closures -------------- */
class Closure_MemoryPool {
  public:


};

extern void _registermempool(void);
#endif
