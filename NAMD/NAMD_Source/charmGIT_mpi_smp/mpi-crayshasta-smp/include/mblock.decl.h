#ifndef _DECL_mblock_H_
#define _DECL_mblock_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MBlockDataMsg{
unsigned char data[];
}
;
 */
class MBlockDataMsg;
class CMessage_MBlockDataMsg:public CkMessage{
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
    CMessage_MBlockDataMsg();
    static void *pack(MBlockDataMsg *p);
    static MBlockDataMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};



/* DECLS: array MBlockChunk: ArrayElement{
MBlockChunk(const CkArrayID &threads);
void recv(MBlockDataMsg* impl_msg);
void reductionResult(CkReductionMsg* impl_msg);
MBlockChunk(CkMigrateMessage* impl_msg);
};
 */
 class MBlockChunk;
 class CkIndex_MBlockChunk;
 class CProxy_MBlockChunk;
 class CProxyElement_MBlockChunk;
 class CProxySection_MBlockChunk;
/* --------------- index object ------------------ */
class CkIndex_MBlockChunk:public CkIndex_ArrayElement{
  public:
    typedef MBlockChunk local_t;
    typedef CkIndex_MBlockChunk index_t;
    typedef CProxy_MBlockChunk proxy_t;
    typedef CProxyElement_MBlockChunk element_t;
    typedef CProxySection_MBlockChunk section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MBlockChunk(const CkArrayID &threads);
     */
    // Entry point registration at startup
    
    static int reg_MBlockChunk_marshall1();
    // Entry point index lookup
    
    inline static int idx_MBlockChunk_marshall1() {
      static int epidx = reg_MBlockChunk_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkArrayID &threads) { return idx_MBlockChunk_marshall1(); }
    
    static void _call_MBlockChunk_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MBlockChunk_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MBlockChunk_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MBlockChunk_marshall1(PUP::er &p,void *msg);
    /* DECLS: void recv(MBlockDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recv_MBlockDataMsg();
    // Entry point index lookup
    
    inline static int idx_recv_MBlockDataMsg() {
      static int epidx = reg_recv_MBlockDataMsg();
      return epidx;
    }

    
    inline static int idx_recv(void (MBlockChunk::*)(MBlockDataMsg* impl_msg) ) {
      return idx_recv_MBlockDataMsg();
    }


    
    static int recv(MBlockDataMsg* impl_msg) { return idx_recv_MBlockDataMsg(); }
    
    static void _call_recv_MBlockDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_MBlockDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void reductionResult(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_reductionResult_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_reductionResult_CkReductionMsg() {
      static int epidx = reg_reductionResult_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_reductionResult(void (MBlockChunk::*)(CkReductionMsg* impl_msg) ) {
      return idx_reductionResult_CkReductionMsg();
    }


    
    static int reductionResult(CkReductionMsg* impl_msg) { return idx_reductionResult_CkReductionMsg(); }
    
    static void _call_reductionResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reductionResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: MBlockChunk(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MBlockChunk_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MBlockChunk_CkMigrateMessage() {
      static int epidx = reg_MBlockChunk_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MBlockChunk_CkMigrateMessage(); }
    
    static void _call_MBlockChunk_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MBlockChunk_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MBlockChunk : public CProxyElement_ArrayElement{
  public:
    typedef MBlockChunk local_t;
    typedef CkIndex_MBlockChunk index_t;
    typedef CProxy_MBlockChunk proxy_t;
    typedef CProxyElement_MBlockChunk element_t;
    typedef CProxySection_MBlockChunk section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_MBlockChunk(void) {
    }
    CProxyElement_MBlockChunk(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    MBlockChunk *ckLocal(void) const
    { return (MBlockChunk *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MBlockChunk(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MBlockChunk(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MBlockChunk(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MBlockChunk(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MBlockChunk(const CkArrayID &threads);
 */
    
    void insert(const CkArrayID &threads, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void recv(MBlockDataMsg* impl_msg);
 */
    
    void recv(MBlockDataMsg* impl_msg) ;

/* DECLS: void reductionResult(CkReductionMsg* impl_msg);
 */
    
    void reductionResult(CkReductionMsg* impl_msg) ;

/* DECLS: MBlockChunk(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MBlockChunk : public CProxy_ArrayElement{
  public:
    typedef MBlockChunk local_t;
    typedef CkIndex_MBlockChunk index_t;
    typedef CProxy_MBlockChunk proxy_t;
    typedef CProxyElement_MBlockChunk element_t;
    typedef CProxySection_MBlockChunk section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_MBlockChunk(void) {
    }
    CProxy_MBlockChunk(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_MBlockChunk operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_MBlockChunk(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MBlockChunk operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_MBlockChunk(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MBlockChunk operator [] (int idx) const 
        {return CProxyElement_MBlockChunk(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MBlockChunk operator () (int idx) const 
        {return CProxyElement_MBlockChunk(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MBlockChunk(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MBlockChunk(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MBlockChunk(const CkArrayID &threads);
 */
    
    static CkArrayID ckNew(const CkArrayID &threads, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayID &threads, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CkArrayID &threads, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CkArrayID &threads, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv(MBlockDataMsg* impl_msg);
 */
    
    void recv(MBlockDataMsg* impl_msg) ;

/* DECLS: void reductionResult(CkReductionMsg* impl_msg);
 */
    
    void reductionResult(CkReductionMsg* impl_msg) ;

/* DECLS: MBlockChunk(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MBlockChunk : public CProxySection_ArrayElement{
  public:
    typedef MBlockChunk local_t;
    typedef CkIndex_MBlockChunk index_t;
    typedef CProxy_MBlockChunk proxy_t;
    typedef CProxyElement_MBlockChunk element_t;
    typedef CProxySection_MBlockChunk section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_MBlockChunk(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_MBlockChunk operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MBlockChunk(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MBlockChunk operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MBlockChunk(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MBlockChunk operator [] (int idx) const 
        {return CProxyElement_MBlockChunk(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MBlockChunk operator () (int idx) const 
        {return CProxyElement_MBlockChunk(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_MBlockChunk(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MBlockChunk(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MBlockChunk(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MBlockChunk(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MBlockChunk(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MBlockChunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MBlockChunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MBlockChunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MBlockChunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MBlockChunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MBlockChunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: MBlockChunk(const CkArrayID &threads);
 */
    

/* DECLS: void recv(MBlockDataMsg* impl_msg);
 */
    
    void recv(MBlockDataMsg* impl_msg) ;

/* DECLS: void reductionResult(CkReductionMsg* impl_msg);
 */
    
    void reductionResult(CkReductionMsg* impl_msg) ;

/* DECLS: MBlockChunk(CkMigrateMessage* impl_msg);
 */

};
#define MBlockChunk_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_MBlockChunk>CBase_MBlockChunk;




/* ---------------- method closures -------------- */
class Closure_MBlockChunk {
  public:




};

extern void _registermblock(void);
#endif
