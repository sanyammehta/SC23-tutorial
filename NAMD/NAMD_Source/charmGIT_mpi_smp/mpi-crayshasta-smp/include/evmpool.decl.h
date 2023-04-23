#ifndef _DECL_evmpool_H_
#define _DECL_evmpool_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID EvmPoolID;
 */

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message PoolInitMsg;
 */
class PoolInitMsg;
class CMessage_PoolInitMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_PoolInitMsg();
    static void *pack(PoolInitMsg *p);
    static PoolInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group EventMsgPool: IrrGroup{
EventMsgPool(PoolInitMsg* impl_msg);
};
 */
 class EventMsgPool;
 class CkIndex_EventMsgPool;
 class CProxy_EventMsgPool;
 class CProxyElement_EventMsgPool;
 class CProxySection_EventMsgPool;
/* --------------- index object ------------------ */
class CkIndex_EventMsgPool:public CkIndex_IrrGroup{
  public:
    typedef EventMsgPool local_t;
    typedef CkIndex_EventMsgPool index_t;
    typedef CProxy_EventMsgPool proxy_t;
    typedef CProxyElement_EventMsgPool element_t;
    typedef CProxySection_EventMsgPool section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: EventMsgPool(PoolInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_EventMsgPool_PoolInitMsg();
    // Entry point index lookup
    
    inline static int idx_EventMsgPool_PoolInitMsg() {
      static int epidx = reg_EventMsgPool_PoolInitMsg();
      return epidx;
    }

    
    static int ckNew(PoolInitMsg* impl_msg) { return idx_EventMsgPool_PoolInitMsg(); }
    
    static void _call_EventMsgPool_PoolInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_EventMsgPool_PoolInitMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_EventMsgPool: public CProxyElement_IrrGroup{
  public:
    typedef EventMsgPool local_t;
    typedef CkIndex_EventMsgPool index_t;
    typedef CProxy_EventMsgPool proxy_t;
    typedef CProxyElement_EventMsgPool element_t;
    typedef CProxySection_EventMsgPool section_t;


    /* TRAM aggregators */

    CProxyElement_EventMsgPool(void) {
    }
    CProxyElement_EventMsgPool(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_EventMsgPool(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_EventMsgPool(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    EventMsgPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static EventMsgPool* ckLocalBranch(CkGroupID gID) {
      return (EventMsgPool*)CkLocalBranch(gID);
    }
/* DECLS: EventMsgPool(PoolInitMsg* impl_msg);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_EventMsgPool: public CProxy_IrrGroup{
  public:
    typedef EventMsgPool local_t;
    typedef CkIndex_EventMsgPool index_t;
    typedef CProxy_EventMsgPool proxy_t;
    typedef CProxyElement_EventMsgPool element_t;
    typedef CProxySection_EventMsgPool section_t;

    CProxy_EventMsgPool(void) {
    }
    CProxy_EventMsgPool(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_EventMsgPool(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_EventMsgPool(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_EventMsgPool operator[](int onPE) const
      {return CProxyElement_EventMsgPool(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    EventMsgPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static EventMsgPool* ckLocalBranch(CkGroupID gID) {
      return (EventMsgPool*)CkLocalBranch(gID);
    }
/* DECLS: EventMsgPool(PoolInitMsg* impl_msg);
 */
    
    static CkGroupID ckNew(PoolInitMsg* impl_msg);
    CProxy_EventMsgPool(PoolInitMsg* impl_msg);

};
/* ---------------- section proxy -------------- */
class CProxySection_EventMsgPool: public CProxySection_IrrGroup{
  public:
    typedef EventMsgPool local_t;
    typedef CkIndex_EventMsgPool index_t;
    typedef CProxy_EventMsgPool proxy_t;
    typedef CProxyElement_EventMsgPool element_t;
    typedef CProxySection_EventMsgPool section_t;

    CProxySection_EventMsgPool(void) {
    }
    CProxySection_EventMsgPool(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_EventMsgPool(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_EventMsgPool(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_EventMsgPool(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_EventMsgPool(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    EventMsgPool* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static EventMsgPool* ckLocalBranch(CkGroupID gID) {
      return (EventMsgPool*)CkLocalBranch(gID);
    }
/* DECLS: EventMsgPool(PoolInitMsg* impl_msg);
 */
    

};
#define EventMsgPool_SDAG_CODE 
typedef CBaseT1<Group, CProxy_EventMsgPool>CBase_EventMsgPool;



/* ---------------- method closures -------------- */
class Closure_EventMsgPool {
  public:

};

extern void _registerevmpool(void);
#endif
