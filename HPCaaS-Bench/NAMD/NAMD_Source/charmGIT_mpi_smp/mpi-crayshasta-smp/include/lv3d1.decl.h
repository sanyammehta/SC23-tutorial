#ifndef _DECL_lv3d1_H_
#define _DECL_lv3d1_H_
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
/* DECLS: message LV3D_RenderMsg;
 */
class LV3D_RenderMsg;
class CMessage_LV3D_RenderMsg:public CkMessage{
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
    CMessage_LV3D_RenderMsg();
    static void *pack(LV3D_RenderMsg *p);
    static LV3D_RenderMsg* unpack(void* p);
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

/* DECLS: readonly int LV3D_Disable_Render_Prio;
 */

/* DECLS: readonly int LV3D_Verbosity;
 */

/* DECLS: array LV3D_Array: ArrayElement{
void LV3D_NewClient(int clientID);
void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
void LV3D_Render(LV3D_RenderMsg* impl_msg);
void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
void LV3D_DoBalance();
LV3D_Array(CkMigrateMessage* impl_msg);
};
 */
 class LV3D_Array;
 class CkIndex_LV3D_Array;
 class CProxy_LV3D_Array;
 class CProxyElement_LV3D_Array;
 class CProxySection_LV3D_Array;
/* --------------- index object ------------------ */
class CkIndex_LV3D_Array:public CkIndex_ArrayElement{
  public:
    typedef LV3D_Array local_t;
    typedef CkIndex_LV3D_Array index_t;
    typedef CProxy_LV3D_Array proxy_t;
    typedef CProxyElement_LV3D_Array element_t;
    typedef CProxySection_LV3D_Array section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void LV3D_NewClient(int clientID);
     */
    // Entry point registration at startup
    
    static int reg_LV3D_NewClient_marshall1();
    // Entry point index lookup
    
    inline static int idx_LV3D_NewClient_marshall1() {
      static int epidx = reg_LV3D_NewClient_marshall1();
      return epidx;
    }

    
    inline static int idx_LV3D_NewClient(void (LV3D_Array::*)(int clientID) ) {
      return idx_LV3D_NewClient_marshall1();
    }


    
    static int LV3D_NewClient(int clientID) { return idx_LV3D_NewClient_marshall1(); }
    
    static void _call_LV3D_NewClient_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_NewClient_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_LV3D_NewClient_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_LV3D_NewClient_marshall1(PUP::er &p,void *msg);
    /* DECLS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LV3D_Viewpoint_LV3D_ViewpointMsg();
    // Entry point index lookup
    
    inline static int idx_LV3D_Viewpoint_LV3D_ViewpointMsg() {
      static int epidx = reg_LV3D_Viewpoint_LV3D_ViewpointMsg();
      return epidx;
    }

    
    inline static int idx_LV3D_Viewpoint(void (LV3D_Array::*)(LV3D_ViewpointMsg* impl_msg) ) {
      return idx_LV3D_Viewpoint_LV3D_ViewpointMsg();
    }


    
    static int LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) { return idx_LV3D_Viewpoint_LV3D_ViewpointMsg(); }
    
    static void _call_LV3D_Viewpoint_LV3D_ViewpointMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_Viewpoint_LV3D_ViewpointMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LV3D_Render_LV3D_RenderMsg();
    // Entry point index lookup
    
    inline static int idx_LV3D_Render_LV3D_RenderMsg() {
      static int epidx = reg_LV3D_Render_LV3D_RenderMsg();
      return epidx;
    }

    
    inline static int idx_LV3D_Render(void (LV3D_Array::*)(LV3D_RenderMsg* impl_msg) ) {
      return idx_LV3D_Render_LV3D_RenderMsg();
    }


    
    static int LV3D_Render(LV3D_RenderMsg* impl_msg) { return idx_LV3D_Render_LV3D_RenderMsg(); }
    
    static void _call_LV3D_Render_LV3D_RenderMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_Render_LV3D_RenderMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LV3D_FlatRender_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_LV3D_FlatRender_liveVizRequestMsg() {
      static int epidx = reg_LV3D_FlatRender_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_LV3D_FlatRender(void (LV3D_Array::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_LV3D_FlatRender_liveVizRequestMsg();
    }


    
    static int LV3D_FlatRender(liveVizRequestMsg* impl_msg) { return idx_LV3D_FlatRender_liveVizRequestMsg(); }
    
    static void _call_LV3D_FlatRender_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_FlatRender_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void LV3D_DoBalance();
     */
    // Entry point registration at startup
    
    static int reg_LV3D_DoBalance_void();
    // Entry point index lookup
    
    inline static int idx_LV3D_DoBalance_void() {
      static int epidx = reg_LV3D_DoBalance_void();
      return epidx;
    }

    
    inline static int idx_LV3D_DoBalance(void (LV3D_Array::*)() ) {
      return idx_LV3D_DoBalance_void();
    }


    
    static int LV3D_DoBalance() { return idx_LV3D_DoBalance_void(); }
    
    static void _call_LV3D_DoBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_DoBalance_void(void* impl_msg, void* impl_obj);
    /* DECLS: LV3D_Array(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LV3D_Array_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_LV3D_Array_CkMigrateMessage() {
      static int epidx = reg_LV3D_Array_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_LV3D_Array_CkMigrateMessage(); }
    
    static void _call_LV3D_Array_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_Array_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_LV3D_Array : public CProxyElement_ArrayElement{
  public:
    typedef LV3D_Array local_t;
    typedef CkIndex_LV3D_Array index_t;
    typedef CProxy_LV3D_Array proxy_t;
    typedef CProxyElement_LV3D_Array element_t;
    typedef CProxySection_LV3D_Array section_t;

    using array_index_t = CkArrayIndexMax;

    /* TRAM aggregators */

    CProxyElement_LV3D_Array(void) {
    }
    CProxyElement_LV3D_Array(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    LV3D_Array *ckLocal(void) const
    { return (LV3D_Array *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_LV3D_Array(const CkArrayID &aid,const CkArrayIndexMax &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_LV3D_Array(const CkArrayID &aid,const CkArrayIndexMax &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: void LV3D_NewClient(int clientID);
 */
    
    void LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
    
    void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) ;

/* DECLS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
    
    void LV3D_Render(LV3D_RenderMsg* impl_msg) ;

/* DECLS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
    
    void LV3D_FlatRender(liveVizRequestMsg* impl_msg) ;

/* DECLS: void LV3D_DoBalance();
 */
    
    void LV3D_DoBalance(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: LV3D_Array(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_LV3D_Array : public CProxy_ArrayElement{
  public:
    typedef LV3D_Array local_t;
    typedef CkIndex_LV3D_Array index_t;
    typedef CProxy_LV3D_Array proxy_t;
    typedef CProxyElement_LV3D_Array element_t;
    typedef CProxySection_LV3D_Array section_t;

    using array_index_t = CkArrayIndexMax;
    CProxy_LV3D_Array(void) {
    }
    CProxy_LV3D_Array(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_LV3D_Array operator [] (const CkArrayIndexMax &idx) const
    { return CProxyElement_LV3D_Array(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_LV3D_Array operator() (const CkArrayIndexMax &idx) const
    { return CProxyElement_LV3D_Array(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_LV3D_Array(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_LV3D_Array(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: void LV3D_NewClient(int clientID);
 */
    
    void LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
    
    void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) ;

/* DECLS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
    
    void LV3D_Render(LV3D_RenderMsg* impl_msg) ;

/* DECLS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
    
    void LV3D_FlatRender(liveVizRequestMsg* impl_msg) ;

/* DECLS: void LV3D_DoBalance();
 */
    
    void LV3D_DoBalance(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: LV3D_Array(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_LV3D_Array : public CProxySection_ArrayElement{
  public:
    typedef LV3D_Array local_t;
    typedef CkIndex_LV3D_Array index_t;
    typedef CProxy_LV3D_Array proxy_t;
    typedef CProxyElement_LV3D_Array element_t;
    typedef CProxySection_LV3D_Array section_t;

    using array_index_t = CkArrayIndexMax;
    CProxySection_LV3D_Array(void) {
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
    CProxyElement_LV3D_Array operator [] (const CkArrayIndexMax &idx) const
        {return CProxyElement_LV3D_Array(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_LV3D_Array operator() (const CkArrayIndexMax &idx) const
        {return CProxyElement_LV3D_Array(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_LV3D_Array(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LV3D_Array(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_LV3D_Array(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_LV3D_Array(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_LV3D_Array(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_LV3D_Array(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LV3D_Array(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_LV3D_Array(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_LV3D_Array(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_LV3D_Array(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_LV3D_Array(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: void LV3D_NewClient(int clientID);
 */
    
    void LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
    
    void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) ;

/* DECLS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
    
    void LV3D_Render(LV3D_RenderMsg* impl_msg) ;

/* DECLS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
    
    void LV3D_FlatRender(liveVizRequestMsg* impl_msg) ;

/* DECLS: void LV3D_DoBalance();
 */
    
    void LV3D_DoBalance(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: LV3D_Array(CkMigrateMessage* impl_msg);
 */

};
#define LV3D_Array_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndexMax>, CProxy_LV3D_Array>CBase_LV3D_Array;

/* DECLS: group LV3D1_Map: IrrGroup{
LV3D1_Map();
};
 */
 class LV3D1_Map;
 class CkIndex_LV3D1_Map;
 class CProxy_LV3D1_Map;
 class CProxyElement_LV3D1_Map;
 class CProxySection_LV3D1_Map;
/* --------------- index object ------------------ */
class CkIndex_LV3D1_Map:public CkIndex_IrrGroup{
  public:
    typedef LV3D1_Map local_t;
    typedef CkIndex_LV3D1_Map index_t;
    typedef CProxy_LV3D1_Map proxy_t;
    typedef CProxyElement_LV3D1_Map element_t;
    typedef CProxySection_LV3D1_Map section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LV3D1_Map();
     */
    // Entry point registration at startup
    
    static int reg_LV3D1_Map_void();
    // Entry point index lookup
    
    inline static int idx_LV3D1_Map_void() {
      static int epidx = reg_LV3D1_Map_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LV3D1_Map_void(); }
    
    static void _call_LV3D1_Map_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D1_Map_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LV3D1_Map: public CProxyElement_IrrGroup{
  public:
    typedef LV3D1_Map local_t;
    typedef CkIndex_LV3D1_Map index_t;
    typedef CProxy_LV3D1_Map proxy_t;
    typedef CProxyElement_LV3D1_Map element_t;
    typedef CProxySection_LV3D1_Map section_t;


    /* TRAM aggregators */

    CProxyElement_LV3D1_Map(void) {
    }
    CProxyElement_LV3D1_Map(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LV3D1_Map(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LV3D1_Map(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LV3D1_Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D1_Map* ckLocalBranch(CkGroupID gID) {
      return (LV3D1_Map*)CkLocalBranch(gID);
    }
/* DECLS: LV3D1_Map();
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_LV3D1_Map: public CProxy_IrrGroup{
  public:
    typedef LV3D1_Map local_t;
    typedef CkIndex_LV3D1_Map index_t;
    typedef CProxy_LV3D1_Map proxy_t;
    typedef CProxyElement_LV3D1_Map element_t;
    typedef CProxySection_LV3D1_Map section_t;

    CProxy_LV3D1_Map(void) {
    }
    CProxy_LV3D1_Map(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LV3D1_Map(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LV3D1_Map(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LV3D1_Map operator[](int onPE) const
      {return CProxyElement_LV3D1_Map(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LV3D1_Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D1_Map* ckLocalBranch(CkGroupID gID) {
      return (LV3D1_Map*)CkLocalBranch(gID);
    }
/* DECLS: LV3D1_Map();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_LV3D1_Map: public CProxySection_IrrGroup{
  public:
    typedef LV3D1_Map local_t;
    typedef CkIndex_LV3D1_Map index_t;
    typedef CProxy_LV3D1_Map proxy_t;
    typedef CProxyElement_LV3D1_Map element_t;
    typedef CProxySection_LV3D1_Map section_t;

    CProxySection_LV3D1_Map(void) {
    }
    CProxySection_LV3D1_Map(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LV3D1_Map(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LV3D1_Map(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D1_Map(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D1_Map(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LV3D1_Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D1_Map* ckLocalBranch(CkGroupID gID) {
      return (LV3D1_Map*)CkLocalBranch(gID);
    }
/* DECLS: LV3D1_Map();
 */
    

};
#define LV3D1_Map_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LV3D1_Map>CBase_LV3D1_Map;




/* ---------------- method closures -------------- */
class Closure_LV3D_Array {
  public:

    struct LV3D_NewClient_1_closure;





    struct LV3D_DoBalance_5_closure;


};

/* ---------------- method closures -------------- */
class Closure_LV3D1_Map {
  public:

};

extern void _registerlv3d1(void);
#endif
