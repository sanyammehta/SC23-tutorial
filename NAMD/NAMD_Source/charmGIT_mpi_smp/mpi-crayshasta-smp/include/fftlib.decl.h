#ifndef _DECL_fftlib_H_
#define _DECL_fftlib_H_
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
/* DECLS: message SendFFTMsg{
complex data[];
}
;
 */
class SendFFTMsg;
class CMessage_SendFFTMsg:public CkMessage{
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
    CMessage_SendFFTMsg();
    static void *pack(SendFFTMsg *p);
    static SendFFTMsg* unpack(void* p);
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

/* DECLS: array SlabArray: ArrayElement;
 */
 class SlabArray;
 class CkIndex_SlabArray;
 class CProxy_SlabArray;
 class CProxyElement_SlabArray;
 class CProxySection_SlabArray;
/* --------------- index object ------------------ */
class CkIndex_SlabArray:public CkIndex_ArrayElement{
  public:
    typedef SlabArray local_t;
    typedef CkIndex_SlabArray index_t;
    typedef CProxy_SlabArray proxy_t;
    typedef CProxyElement_SlabArray element_t;
    typedef CProxySection_SlabArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_SlabArray : public CProxyElement_ArrayElement{
  public:
    typedef SlabArray local_t;
    typedef CkIndex_SlabArray index_t;
    typedef CProxy_SlabArray proxy_t;
    typedef CProxyElement_SlabArray element_t;
    typedef CProxySection_SlabArray section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_SlabArray(void) {
    }
    CProxyElement_SlabArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    SlabArray *ckLocal(void) const
    { return (SlabArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_SlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_SlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_SlabArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_SlabArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
};
/* ---------------- collective proxy -------------- */
 class CProxy_SlabArray : public CProxy_ArrayElement{
  public:
    typedef SlabArray local_t;
    typedef CkIndex_SlabArray index_t;
    typedef CProxy_SlabArray proxy_t;
    typedef CProxyElement_SlabArray element_t;
    typedef CProxySection_SlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_SlabArray(void) {
    }
    CProxy_SlabArray(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_SlabArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_SlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_SlabArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_SlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_SlabArray operator [] (int idx) const 
        {return CProxyElement_SlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_SlabArray operator () (int idx) const 
        {return CProxyElement_SlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_SlabArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_SlabArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
};
/* ---------------- section proxy -------------- */
 class CProxySection_SlabArray : public CProxySection_ArrayElement{
  public:
    typedef SlabArray local_t;
    typedef CkIndex_SlabArray index_t;
    typedef CProxy_SlabArray proxy_t;
    typedef CProxyElement_SlabArray element_t;
    typedef CProxySection_SlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_SlabArray(void) {
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
    CProxyElement_SlabArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_SlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_SlabArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_SlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_SlabArray operator [] (int idx) const 
        {return CProxyElement_SlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_SlabArray operator () (int idx) const 
        {return CProxyElement_SlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_SlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_SlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_SlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_SlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_SlabArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_SlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_SlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_SlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_SlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_SlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_SlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
};
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_SlabArray>CBase_SlabArray;

/* DECLS: array NormalSlabArray: SlabArray{
NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalSlabArray(CkMigrateMessage* impl_msg);
};
 */
 class NormalSlabArray;
 class CkIndex_NormalSlabArray;
 class CProxy_NormalSlabArray;
 class CProxyElement_NormalSlabArray;
 class CProxySection_NormalSlabArray;
/* --------------- index object ------------------ */
class CkIndex_NormalSlabArray:public CkIndex_SlabArray{
  public:
    typedef NormalSlabArray local_t;
    typedef CkIndex_NormalSlabArray index_t;
    typedef CProxy_NormalSlabArray proxy_t;
    typedef CProxyElement_NormalSlabArray element_t;
    typedef CProxySection_NormalSlabArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
     */
    // Entry point registration at startup
    
    static int reg_NormalSlabArray_marshall1();
    // Entry point index lookup
    
    inline static int idx_NormalSlabArray_marshall1() {
      static int epidx = reg_NormalSlabArray_marshall1();
      return epidx;
    }

    
    static int ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest) { return idx_NormalSlabArray_marshall1(); }
    
    static void _call_NormalSlabArray_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NormalSlabArray_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_NormalSlabArray_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_NormalSlabArray_marshall1(PUP::er &p,void *msg);
    /* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
     */
    // Entry point registration at startup
    
    static int reg_acceptDataForFFT_marshall2();
    // Entry point index lookup
    
    inline static int idx_acceptDataForFFT_marshall2() {
      static int epidx = reg_acceptDataForFFT_marshall2();
      return epidx;
    }

    
    inline static int idx_acceptDataForFFT(void (NormalSlabArray::*)(int numPoints, const complex *points, int posn, int info_id) ) {
      return idx_acceptDataForFFT_marshall2();
    }


    
    static int acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id) { return idx_acceptDataForFFT_marshall2(); }
    
    static void _call_acceptDataForFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptDataForFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptDataForFFT_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptDataForFFT_marshall2(PUP::er &p,void *msg);
    /* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
     */
    // Entry point registration at startup
    
    static int reg_acceptDataForIFFT_marshall3();
    // Entry point index lookup
    
    inline static int idx_acceptDataForIFFT_marshall3() {
      static int epidx = reg_acceptDataForIFFT_marshall3();
      return epidx;
    }

    
    inline static int idx_acceptDataForIFFT(void (NormalSlabArray::*)(int numPoints, const complex *points, int posn, int info_id) ) {
      return idx_acceptDataForIFFT_marshall3();
    }


    
    static int acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id) { return idx_acceptDataForIFFT_marshall3(); }
    
    static void _call_acceptDataForIFFT_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptDataForIFFT_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptDataForIFFT_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptDataForIFFT_marshall3(PUP::er &p,void *msg);
    /* DECLS: NormalSlabArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_NormalSlabArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_NormalSlabArray_CkMigrateMessage() {
      static int epidx = reg_NormalSlabArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_NormalSlabArray_CkMigrateMessage(); }
    
    static void _call_NormalSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NormalSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_NormalSlabArray : public CProxyElement_SlabArray{
  public:
    typedef NormalSlabArray local_t;
    typedef CkIndex_NormalSlabArray index_t;
    typedef CProxy_NormalSlabArray proxy_t;
    typedef CProxyElement_NormalSlabArray element_t;
    typedef CProxySection_NormalSlabArray section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_NormalSlabArray(void) {
    }
    CProxyElement_NormalSlabArray(const ArrayElement *e) : CProxyElement_SlabArray(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_SlabArray::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_SlabArray::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_SlabArray::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_SlabArray::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_SlabArray::ckGetIndex(); }

    NormalSlabArray *ckLocal(void) const
    { return (NormalSlabArray *)CProxyElement_SlabArray::ckLocal(); }

    CProxyElement_NormalSlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_SlabArray(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalSlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_SlabArray(aid,idx)
    {
}

    CProxyElement_NormalSlabArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_SlabArray(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalSlabArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_SlabArray(aid,idx)
    {
}
/* DECLS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
    
    void insert(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_NormalSlabArray : public CProxy_SlabArray{
  public:
    typedef NormalSlabArray local_t;
    typedef CkIndex_NormalSlabArray index_t;
    typedef CProxy_NormalSlabArray proxy_t;
    typedef CProxyElement_NormalSlabArray element_t;
    typedef CProxySection_NormalSlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_NormalSlabArray(void) {
    }
    CProxy_NormalSlabArray(const ArrayElement *e) : CProxy_SlabArray(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_SlabArray::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_NormalSlabArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_NormalSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalSlabArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_NormalSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalSlabArray operator [] (int idx) const 
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_NormalSlabArray operator () (int idx) const 
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_NormalSlabArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_SlabArray(aid,CK_DELCTOR_ARGS) {}
    CProxy_NormalSlabArray(const CkArrayID &aid) 
        :CProxy_SlabArray(aid) {}
/* DECLS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
    
    static CkArrayID ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_NormalSlabArray : public CProxySection_SlabArray{
  public:
    typedef NormalSlabArray local_t;
    typedef CkIndex_NormalSlabArray index_t;
    typedef CProxy_NormalSlabArray proxy_t;
    typedef CProxyElement_NormalSlabArray element_t;
    typedef CProxySection_NormalSlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_NormalSlabArray(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_SlabArray::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_SlabArray::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_SlabArray::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_SlabArray::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_SlabArray::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_SlabArray::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_SlabArray::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_SlabArray::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_SlabArray::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_SlabArray::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_SlabArray::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_NormalSlabArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalSlabArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalSlabArray operator [] (int idx) const 
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_NormalSlabArray operator () (int idx) const 
        {return CProxyElement_NormalSlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_NormalSlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalSlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalSlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_SlabArray(aid,elems,nElems, factor) {}
    CProxySection_NormalSlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_SlabArray(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_NormalSlabArray(const CkSectionID &sid)  
        :CProxySection_SlabArray(sid) { ckAutoDelegate(); }
    CProxySection_NormalSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_SlabArray(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_NormalSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_SlabArray(aid,elems) { ckAutoDelegate(); }
    CProxySection_NormalSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_SlabArray(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_NormalSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_SlabArray(aid,elems, factor) { ckAutoDelegate(); }
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
      CProxySection_SlabArray::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_SlabArray::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_SlabArray::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
    

/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */

};
#define NormalSlabArray_SDAG_CODE 
typedef CBaseT1<SlabArray, CProxy_NormalSlabArray>CBase_NormalSlabArray;

/* DECLS: array NormalRealSlabArray: SlabArray{
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalRealSlabArray(CkMigrateMessage* impl_msg);
};
 */
 class NormalRealSlabArray;
 class CkIndex_NormalRealSlabArray;
 class CProxy_NormalRealSlabArray;
 class CProxyElement_NormalRealSlabArray;
 class CProxySection_NormalRealSlabArray;
/* --------------- index object ------------------ */
class CkIndex_NormalRealSlabArray:public CkIndex_SlabArray{
  public:
    typedef NormalRealSlabArray local_t;
    typedef CkIndex_NormalRealSlabArray index_t;
    typedef CProxy_NormalRealSlabArray proxy_t;
    typedef CProxyElement_NormalRealSlabArray element_t;
    typedef CProxySection_NormalRealSlabArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
     */
    // Entry point registration at startup
    
    static int reg_acceptDataForFFT_marshall1();
    // Entry point index lookup
    
    inline static int idx_acceptDataForFFT_marshall1() {
      static int epidx = reg_acceptDataForFFT_marshall1();
      return epidx;
    }

    
    inline static int idx_acceptDataForFFT(void (NormalRealSlabArray::*)(int numPoints, const complex *points, int posn, int info_id) ) {
      return idx_acceptDataForFFT_marshall1();
    }


    
    static int acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id) { return idx_acceptDataForFFT_marshall1(); }
    
    static void _call_acceptDataForFFT_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptDataForFFT_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptDataForFFT_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptDataForFFT_marshall1(PUP::er &p,void *msg);
    /* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
     */
    // Entry point registration at startup
    
    static int reg_acceptDataForIFFT_marshall2();
    // Entry point index lookup
    
    inline static int idx_acceptDataForIFFT_marshall2() {
      static int epidx = reg_acceptDataForIFFT_marshall2();
      return epidx;
    }

    
    inline static int idx_acceptDataForIFFT(void (NormalRealSlabArray::*)(int numPoints, const complex *points, int posn, int info_id) ) {
      return idx_acceptDataForIFFT_marshall2();
    }


    
    static int acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id) { return idx_acceptDataForIFFT_marshall2(); }
    
    static void _call_acceptDataForIFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptDataForIFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptDataForIFFT_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptDataForIFFT_marshall2(PUP::er &p,void *msg);
    /* DECLS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_NormalRealSlabArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_NormalRealSlabArray_CkMigrateMessage() {
      static int epidx = reg_NormalRealSlabArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_NormalRealSlabArray_CkMigrateMessage(); }
    
    static void _call_NormalRealSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NormalRealSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_NormalRealSlabArray : public CProxyElement_SlabArray{
  public:
    typedef NormalRealSlabArray local_t;
    typedef CkIndex_NormalRealSlabArray index_t;
    typedef CProxy_NormalRealSlabArray proxy_t;
    typedef CProxyElement_NormalRealSlabArray element_t;
    typedef CProxySection_NormalRealSlabArray section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_NormalRealSlabArray(void) {
    }
    CProxyElement_NormalRealSlabArray(const ArrayElement *e) : CProxyElement_SlabArray(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_SlabArray::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_SlabArray::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_SlabArray::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_SlabArray::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_SlabArray::ckGetIndex(); }

    NormalRealSlabArray *ckLocal(void) const
    { return (NormalRealSlabArray *)CProxyElement_SlabArray::ckLocal(); }

    CProxyElement_NormalRealSlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_SlabArray(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalRealSlabArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_SlabArray(aid,idx)
    {
}

    CProxyElement_NormalRealSlabArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_SlabArray(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalRealSlabArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_SlabArray(aid,idx)
    {
}
/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_NormalRealSlabArray : public CProxy_SlabArray{
  public:
    typedef NormalRealSlabArray local_t;
    typedef CkIndex_NormalRealSlabArray index_t;
    typedef CProxy_NormalRealSlabArray proxy_t;
    typedef CProxyElement_NormalRealSlabArray element_t;
    typedef CProxySection_NormalRealSlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_NormalRealSlabArray(void) {
    }
    CProxy_NormalRealSlabArray(const ArrayElement *e) : CProxy_SlabArray(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_SlabArray::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_NormalRealSlabArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_NormalRealSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalRealSlabArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_NormalRealSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalRealSlabArray operator [] (int idx) const 
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_NormalRealSlabArray operator () (int idx) const 
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_NormalRealSlabArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_SlabArray(aid,CK_DELCTOR_ARGS) {}
    CProxy_NormalRealSlabArray(const CkArrayID &aid) 
        :CProxy_SlabArray(aid) {}
/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_NormalRealSlabArray : public CProxySection_SlabArray{
  public:
    typedef NormalRealSlabArray local_t;
    typedef CkIndex_NormalRealSlabArray index_t;
    typedef CProxy_NormalRealSlabArray proxy_t;
    typedef CProxyElement_NormalRealSlabArray element_t;
    typedef CProxySection_NormalRealSlabArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_NormalRealSlabArray(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_SlabArray::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_SlabArray::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_SlabArray::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_SlabArray::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_SlabArray::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_SlabArray::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_SlabArray::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_SlabArray::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_SlabArray::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_SlabArray::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_SlabArray::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_SlabArray::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_SlabArray::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_SlabArray::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_SlabArray::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_SlabArray::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_SlabArray::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_SlabArray::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_SlabArray::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_SlabArray::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_SlabArray::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_SlabArray::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_SlabArray::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_SlabArray::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_SlabArray::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_SlabArray::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_SlabArray::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_SlabArray::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_SlabArray::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_SlabArray::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_NormalRealSlabArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalRealSlabArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalRealSlabArray operator [] (int idx) const 
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_NormalRealSlabArray operator () (int idx) const 
        {return CProxyElement_NormalRealSlabArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_NormalRealSlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalRealSlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalRealSlabArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_SlabArray(aid,elems,nElems, factor) {}
    CProxySection_NormalRealSlabArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_SlabArray(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_NormalRealSlabArray(const CkSectionID &sid)  
        :CProxySection_SlabArray(sid) { ckAutoDelegate(); }
    CProxySection_NormalRealSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalRealSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_SlabArray(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalRealSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_SlabArray(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_NormalRealSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_SlabArray(aid,elems) { ckAutoDelegate(); }
    CProxySection_NormalRealSlabArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_SlabArray(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_NormalRealSlabArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_SlabArray(aid,elems, factor) { ckAutoDelegate(); }
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
      CProxySection_SlabArray::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_SlabArray::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_SlabArray::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
    
    void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */

};
#define NormalRealSlabArray_SDAG_CODE 
typedef CBaseT1<SlabArray, CProxy_NormalRealSlabArray>CBase_NormalRealSlabArray;

/* DECLS: array NormalLineArray: ArrayElement{
NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
void doFirstFFT(int id, int direction);
void doSecondFFT(SendFFTMsg* impl_msg);
void doThirdFFT(SendFFTMsg* impl_msg);
NormalLineArray(CkMigrateMessage* impl_msg);
};
 */
 class NormalLineArray;
 class CkIndex_NormalLineArray;
 class CProxy_NormalLineArray;
 class CProxyElement_NormalLineArray;
 class CProxySection_NormalLineArray;
/* --------------- index object ------------------ */
class CkIndex_NormalLineArray:public CkIndex_ArrayElement{
  public:
    typedef NormalLineArray local_t;
    typedef CkIndex_NormalLineArray index_t;
    typedef CProxy_NormalLineArray proxy_t;
    typedef CProxyElement_NormalLineArray element_t;
    typedef CProxySection_NormalLineArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
     */
    // Entry point registration at startup
    
    static int reg_NormalLineArray_marshall1();
    // Entry point index lookup
    
    inline static int idx_NormalLineArray_marshall1() {
      static int epidx = reg_NormalLineArray_marshall1();
      return epidx;
    }

    
    static int ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy) { return idx_NormalLineArray_marshall1(); }
    
    static void _call_NormalLineArray_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NormalLineArray_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_NormalLineArray_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_NormalLineArray_marshall1(PUP::er &p,void *msg);
    /* DECLS: void doFirstFFT(int id, int direction);
     */
    // Entry point registration at startup
    
    static int reg_doFirstFFT_marshall2();
    // Entry point index lookup
    
    inline static int idx_doFirstFFT_marshall2() {
      static int epidx = reg_doFirstFFT_marshall2();
      return epidx;
    }

    
    inline static int idx_doFirstFFT(void (NormalLineArray::*)(int id, int direction) ) {
      return idx_doFirstFFT_marshall2();
    }


    
    static int doFirstFFT(int id, int direction) { return idx_doFirstFFT_marshall2(); }
    
    static void _call_doFirstFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doFirstFFT_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_doFirstFFT_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_doFirstFFT_marshall2(PUP::er &p,void *msg);
    /* DECLS: void doSecondFFT(SendFFTMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_doSecondFFT_SendFFTMsg();
    // Entry point index lookup
    
    inline static int idx_doSecondFFT_SendFFTMsg() {
      static int epidx = reg_doSecondFFT_SendFFTMsg();
      return epidx;
    }

    
    inline static int idx_doSecondFFT(void (NormalLineArray::*)(SendFFTMsg* impl_msg) ) {
      return idx_doSecondFFT_SendFFTMsg();
    }


    
    static int doSecondFFT(SendFFTMsg* impl_msg) { return idx_doSecondFFT_SendFFTMsg(); }
    
    static void _call_doSecondFFT_SendFFTMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doSecondFFT_SendFFTMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void doThirdFFT(SendFFTMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_doThirdFFT_SendFFTMsg();
    // Entry point index lookup
    
    inline static int idx_doThirdFFT_SendFFTMsg() {
      static int epidx = reg_doThirdFFT_SendFFTMsg();
      return epidx;
    }

    
    inline static int idx_doThirdFFT(void (NormalLineArray::*)(SendFFTMsg* impl_msg) ) {
      return idx_doThirdFFT_SendFFTMsg();
    }


    
    static int doThirdFFT(SendFFTMsg* impl_msg) { return idx_doThirdFFT_SendFFTMsg(); }
    
    static void _call_doThirdFFT_SendFFTMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doThirdFFT_SendFFTMsg(void* impl_msg, void* impl_obj);
    /* DECLS: NormalLineArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_NormalLineArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_NormalLineArray_CkMigrateMessage() {
      static int epidx = reg_NormalLineArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_NormalLineArray_CkMigrateMessage(); }
    
    static void _call_NormalLineArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NormalLineArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_NormalLineArray : public CProxyElement_ArrayElement{
  public:
    typedef NormalLineArray local_t;
    typedef CkIndex_NormalLineArray index_t;
    typedef CProxy_NormalLineArray proxy_t;
    typedef CProxyElement_NormalLineArray element_t;
    typedef CProxySection_NormalLineArray section_t;

    using array_index_t = CkArrayIndex2D;

    /* TRAM aggregators */

    CProxyElement_NormalLineArray(void) {
    }
    CProxyElement_NormalLineArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    NormalLineArray *ckLocal(void) const
    { return (NormalLineArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_NormalLineArray(const CkArrayID &aid,const CkArrayIndex2D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalLineArray(const CkArrayID &aid,const CkArrayIndex2D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_NormalLineArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_NormalLineArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
    
    void insert(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void doFirstFFT(int id, int direction);
 */
    
    void doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
    
    void doSecondFFT(SendFFTMsg* impl_msg) ;

/* DECLS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
    
    void doThirdFFT(SendFFTMsg* impl_msg) ;

/* DECLS: NormalLineArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_NormalLineArray : public CProxy_ArrayElement{
  public:
    typedef NormalLineArray local_t;
    typedef CkIndex_NormalLineArray index_t;
    typedef CProxy_NormalLineArray proxy_t;
    typedef CProxyElement_NormalLineArray element_t;
    typedef CProxySection_NormalLineArray section_t;

    using array_index_t = CkArrayIndex2D;
    CProxy_NormalLineArray(void) {
    }
    CProxy_NormalLineArray(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_NormalLineArray operator [] (const CkArrayIndex2D &idx) const
    { return CProxyElement_NormalLineArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalLineArray operator() (const CkArrayIndex2D &idx) const
    { return CProxyElement_NormalLineArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_NormalLineArray operator () (int i0,int i1) const 
        {return CProxyElement_NormalLineArray(ckGetArrayID(), CkArrayIndex2D(i0,i1), CK_DELCTOR_CALL);}
    CProxyElement_NormalLineArray operator () (CkIndex2D idx) const 
        {return CProxyElement_NormalLineArray(ckGetArrayID(), CkArrayIndex2D(idx), CK_DELCTOR_CALL);}
    CProxy_NormalLineArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_NormalLineArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
    
    static CkArrayID ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const int s1, const int s2, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doFirstFFT(int id, int direction);
 */
    
    void doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
    
    void doSecondFFT(SendFFTMsg* impl_msg) ;

/* DECLS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
    
    void doThirdFFT(SendFFTMsg* impl_msg) ;

/* DECLS: NormalLineArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_NormalLineArray : public CProxySection_ArrayElement{
  public:
    typedef NormalLineArray local_t;
    typedef CkIndex_NormalLineArray index_t;
    typedef CProxy_NormalLineArray proxy_t;
    typedef CProxyElement_NormalLineArray element_t;
    typedef CProxySection_NormalLineArray section_t;

    using array_index_t = CkArrayIndex2D;
    CProxySection_NormalLineArray(void) {
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
    CProxyElement_NormalLineArray operator [] (const CkArrayIndex2D &idx) const
        {return CProxyElement_NormalLineArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalLineArray operator() (const CkArrayIndex2D &idx) const
        {return CProxyElement_NormalLineArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_NormalLineArray operator () (int idx) const 
        {return CProxyElement_NormalLineArray(ckGetArrayID(), *(CkArrayIndex2D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex2D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex2D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex2D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          al.emplace_back(i, j);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_NormalLineArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalLineArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalLineArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_NormalLineArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_NormalLineArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_NormalLineArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalLineArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_NormalLineArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_NormalLineArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_NormalLineArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_NormalLineArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
    

/* DECLS: void doFirstFFT(int id, int direction);
 */
    
    void doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
    
    void doSecondFFT(SendFFTMsg* impl_msg) ;

/* DECLS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
    
    void doThirdFFT(SendFFTMsg* impl_msg) ;

/* DECLS: NormalLineArray(CkMigrateMessage* impl_msg);
 */

};
#define NormalLineArray_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex2D>, CProxy_NormalLineArray>CBase_NormalLineArray;


/* ---------------- method closures -------------- */
class Closure_SlabArray {
  public:
};

/* ---------------- method closures -------------- */
class Closure_NormalSlabArray {
  public:


    struct acceptDataForFFT_2_closure;


    struct acceptDataForIFFT_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_NormalRealSlabArray {
  public:

    struct acceptDataForFFT_1_closure;


    struct acceptDataForIFFT_2_closure;


};

/* ---------------- method closures -------------- */
class Closure_NormalLineArray {
  public:


    struct doFirstFFT_2_closure;




};

extern void _registerfftlib(void);
#endif
