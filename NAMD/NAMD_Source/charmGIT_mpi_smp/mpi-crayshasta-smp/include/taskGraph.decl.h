#ifndef _DECL_taskGraph_H_
#define _DECL_taskGraph_H_
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
/* DECLS: message callbackMsg;
 */
class callbackMsg;
class CMessage_callbackMsg:public CkMessage{
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
    CMessage_callbackMsg();
    static void *pack(callbackMsg *p);
    static callbackMsg* unpack(void* p);
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

/* DECLS: array taskGraphArray: ArrayElement{
taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
void requestData(const CkArrayIndex &from);
void depositData(const CkPointer<taskGraphSolver> &data);
void deleteElement();
taskGraphArray(CkMigrateMessage* impl_msg);
};
 */
 class taskGraphArray;
 class CkIndex_taskGraphArray;
 class CProxy_taskGraphArray;
 class CProxyElement_taskGraphArray;
 class CProxySection_taskGraphArray;
/* --------------- index object ------------------ */
class CkIndex_taskGraphArray:public CkIndex_ArrayElement{
  public:
    typedef taskGraphArray local_t;
    typedef CkIndex_taskGraphArray index_t;
    typedef CProxy_taskGraphArray proxy_t;
    typedef CProxyElement_taskGraphArray element_t;
    typedef CProxySection_taskGraphArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
     */
    // Entry point registration at startup
    
    static int reg_taskGraphArray_marshall1();
    // Entry point index lookup
    
    inline static int idx_taskGraphArray_marshall1() {
      static int epidx = reg_taskGraphArray_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults) { return idx_taskGraphArray_marshall1(); }
    
    static void _call_taskGraphArray_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_taskGraphArray_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_taskGraphArray_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_taskGraphArray_marshall1(PUP::er &p,void *msg);
    /* DECLS: void requestData(const CkArrayIndex &from);
     */
    // Entry point registration at startup
    
    static int reg_requestData_marshall2();
    // Entry point index lookup
    
    inline static int idx_requestData_marshall2() {
      static int epidx = reg_requestData_marshall2();
      return epidx;
    }

    
    inline static int idx_requestData(void (taskGraphArray::*)(const CkArrayIndex &from) ) {
      return idx_requestData_marshall2();
    }


    
    static int requestData(const CkArrayIndex &from) { return idx_requestData_marshall2(); }
    
    static void _call_requestData_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestData_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestData_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestData_marshall2(PUP::er &p,void *msg);
    /* DECLS: void depositData(const CkPointer<taskGraphSolver> &data);
     */
    // Entry point registration at startup
    
    static int reg_depositData_marshall3();
    // Entry point index lookup
    
    inline static int idx_depositData_marshall3() {
      static int epidx = reg_depositData_marshall3();
      return epidx;
    }

    
    inline static int idx_depositData(void (taskGraphArray::*)(const CkPointer<taskGraphSolver> &data) ) {
      return idx_depositData_marshall3();
    }


    
    static int depositData(const CkPointer<taskGraphSolver> &data) { return idx_depositData_marshall3(); }
    
    static void _call_depositData_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_depositData_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_depositData_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_depositData_marshall3(PUP::er &p,void *msg);
    /* DECLS: void deleteElement();
     */
    // Entry point registration at startup
    
    static int reg_deleteElement_void();
    // Entry point index lookup
    
    inline static int idx_deleteElement_void() {
      static int epidx = reg_deleteElement_void();
      return epidx;
    }

    
    inline static int idx_deleteElement(void (taskGraphArray::*)() ) {
      return idx_deleteElement_void();
    }


    
    static int deleteElement() { return idx_deleteElement_void(); }
    
    static void _call_deleteElement_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_deleteElement_void(void* impl_msg, void* impl_obj);
    /* DECLS: taskGraphArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_taskGraphArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_taskGraphArray_CkMigrateMessage() {
      static int epidx = reg_taskGraphArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_taskGraphArray_CkMigrateMessage(); }
    
    static void _call_taskGraphArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_taskGraphArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_taskGraphArray : public CProxyElement_ArrayElement{
  public:
    typedef taskGraphArray local_t;
    typedef CkIndex_taskGraphArray index_t;
    typedef CProxy_taskGraphArray proxy_t;
    typedef CProxyElement_taskGraphArray element_t;
    typedef CProxySection_taskGraphArray section_t;

    using array_index_t = CkArrayIndexMax;

    /* TRAM aggregators */

    CProxyElement_taskGraphArray(void) {
    }
    CProxyElement_taskGraphArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    taskGraphArray *ckLocal(void) const
    { return (taskGraphArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_taskGraphArray(const CkArrayID &aid,const CkArrayIndexMax &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_taskGraphArray(const CkArrayID &aid,const CkArrayIndexMax &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
    
    void insert(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void requestData(const CkArrayIndex &from);
 */
    
    void requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
    
    void depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void deleteElement();
 */
    
    void deleteElement(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: taskGraphArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_taskGraphArray : public CProxy_ArrayElement{
  public:
    typedef taskGraphArray local_t;
    typedef CkIndex_taskGraphArray index_t;
    typedef CProxy_taskGraphArray proxy_t;
    typedef CProxyElement_taskGraphArray element_t;
    typedef CProxySection_taskGraphArray section_t;

    using array_index_t = CkArrayIndexMax;
    CProxy_taskGraphArray(void) {
    }
    CProxy_taskGraphArray(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_taskGraphArray operator [] (const CkArrayIndexMax &idx) const
    { return CProxyElement_taskGraphArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_taskGraphArray operator() (const CkArrayIndexMax &idx) const
    { return CProxyElement_taskGraphArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_taskGraphArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_taskGraphArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
    
    static CkArrayID ckNew(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void requestData(const CkArrayIndex &from);
 */
    
    void requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
    
    void depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void deleteElement();
 */
    
    void deleteElement(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: taskGraphArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_taskGraphArray : public CProxySection_ArrayElement{
  public:
    typedef taskGraphArray local_t;
    typedef CkIndex_taskGraphArray index_t;
    typedef CProxy_taskGraphArray proxy_t;
    typedef CProxyElement_taskGraphArray element_t;
    typedef CProxySection_taskGraphArray section_t;

    using array_index_t = CkArrayIndexMax;
    CProxySection_taskGraphArray(void) {
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
    CProxyElement_taskGraphArray operator [] (const CkArrayIndexMax &idx) const
        {return CProxyElement_taskGraphArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_taskGraphArray operator() (const CkArrayIndexMax &idx) const
        {return CProxyElement_taskGraphArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_taskGraphArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_taskGraphArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_taskGraphArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_taskGraphArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_taskGraphArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_taskGraphArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_taskGraphArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_taskGraphArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_taskGraphArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_taskGraphArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_taskGraphArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
    

/* DECLS: void requestData(const CkArrayIndex &from);
 */
    
    void requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
    
    void depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void deleteElement();
 */
    
    void deleteElement(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: taskGraphArray(CkMigrateMessage* impl_msg);
 */

};
#define taskGraphArray_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndexMax>, CProxy_taskGraphArray>CBase_taskGraphArray;


/* ---------------- method closures -------------- */
class Closure_taskGraphArray {
  public:


    struct requestData_2_closure;


    struct depositData_3_closure;


    struct deleteElement_4_closure;


};

extern void _registertaskGraph(void);
#endif
