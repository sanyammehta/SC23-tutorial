#ifndef _DECL_collide_H_
#define _DECL_collide_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "collidecharm.decl.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message threadCollisions{
Collision colls[];
}
;
 */
class threadCollisions;
class CMessage_threadCollisions:public CkMessage{
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
    CMessage_threadCollisions();
    static void *pack(threadCollisions *p);
    static threadCollisions* unpack(void* p);
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


/* DECLS: group threadCollideMgr: collideClient{
threadCollideMgr();
void sendRemote();
void remoteCollisions(threadCollisions* impl_msg);
};
 */
 class threadCollideMgr;
 class CkIndex_threadCollideMgr;
 class CProxy_threadCollideMgr;
 class CProxyElement_threadCollideMgr;
 class CProxySection_threadCollideMgr;
/* --------------- index object ------------------ */
class CkIndex_threadCollideMgr:public CkIndex_collideClient{
  public:
    typedef threadCollideMgr local_t;
    typedef CkIndex_threadCollideMgr index_t;
    typedef CProxy_threadCollideMgr proxy_t;
    typedef CProxyElement_threadCollideMgr element_t;
    typedef CProxySection_threadCollideMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: threadCollideMgr();
     */
    // Entry point registration at startup
    
    static int reg_threadCollideMgr_void();
    // Entry point index lookup
    
    inline static int idx_threadCollideMgr_void() {
      static int epidx = reg_threadCollideMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_threadCollideMgr_void(); }
    
    static void _call_threadCollideMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_threadCollideMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendRemote();
     */
    // Entry point registration at startup
    
    static int reg_sendRemote_void();
    // Entry point index lookup
    
    inline static int idx_sendRemote_void() {
      static int epidx = reg_sendRemote_void();
      return epidx;
    }

    
    inline static int idx_sendRemote(void (threadCollideMgr::*)() ) {
      return idx_sendRemote_void();
    }


    
    static int sendRemote() { return idx_sendRemote_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_sendRemote_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_sendRemote_void() {
      static int epidx = reg_redn_wrapper_sendRemote_void();
      return epidx;
    }
    
    static int redn_wrapper_sendRemote(CkReductionMsg* impl_msg) { return idx_redn_wrapper_sendRemote_void(); }
    
    static void _call_redn_wrapper_sendRemote_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_sendRemote_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendRemote_void(void* impl_msg, void* impl_obj);
    /* DECLS: void remoteCollisions(threadCollisions* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_remoteCollisions_threadCollisions();
    // Entry point index lookup
    
    inline static int idx_remoteCollisions_threadCollisions() {
      static int epidx = reg_remoteCollisions_threadCollisions();
      return epidx;
    }

    
    inline static int idx_remoteCollisions(void (threadCollideMgr::*)(threadCollisions* impl_msg) ) {
      return idx_remoteCollisions_threadCollisions();
    }


    
    static int remoteCollisions(threadCollisions* impl_msg) { return idx_remoteCollisions_threadCollisions(); }
    
    static void _call_remoteCollisions_threadCollisions(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteCollisions_threadCollisions(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_threadCollideMgr: public CProxyElement_collideClient{
  public:
    typedef threadCollideMgr local_t;
    typedef CkIndex_threadCollideMgr index_t;
    typedef CProxy_threadCollideMgr proxy_t;
    typedef CProxyElement_threadCollideMgr element_t;
    typedef CProxySection_threadCollideMgr section_t;


    /* TRAM aggregators */

    CProxyElement_threadCollideMgr(void) {
    }
    CProxyElement_threadCollideMgr(const IrrGroup *g) : CProxyElement_collideClient(g){
    }
    CProxyElement_threadCollideMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_collideClient(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_threadCollideMgr(CkGroupID _gid,int _onPE) : CProxyElement_collideClient(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_collideClient::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_collideClient::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_collideClient::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_collideClient::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_collideClient::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_collideClient::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_collideClient::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_collideClient::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_collideClient::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_collideClient::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_collideClient::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_collideClient::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_collideClient::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_collideClient::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_collideClient::ckSetGroupID(g);
    }
    threadCollideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static threadCollideMgr* ckLocalBranch(CkGroupID gID) {
      return (threadCollideMgr*)CkLocalBranch(gID);
    }
/* DECLS: threadCollideMgr();
 */
    

/* DECLS: void sendRemote();
 */
    
    void sendRemote(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteCollisions(threadCollisions* impl_msg);
 */
    
    void remoteCollisions(threadCollisions* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_threadCollideMgr: public CProxy_collideClient{
  public:
    typedef threadCollideMgr local_t;
    typedef CkIndex_threadCollideMgr index_t;
    typedef CProxy_threadCollideMgr proxy_t;
    typedef CProxyElement_threadCollideMgr element_t;
    typedef CProxySection_threadCollideMgr section_t;

    CProxy_threadCollideMgr(void) {
    }
    CProxy_threadCollideMgr(const IrrGroup *g) : CProxy_collideClient(g){
    }
    CProxy_threadCollideMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_collideClient(_gid,CK_DELCTOR_ARGS){  }
    CProxy_threadCollideMgr(CkGroupID _gid) : CProxy_collideClient(_gid){  }
    CProxyElement_threadCollideMgr operator[](int onPE) const
      {return CProxyElement_threadCollideMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_collideClient::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_collideClient::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_collideClient::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_collideClient::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_collideClient::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_collideClient::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_collideClient::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_collideClient::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_collideClient::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_collideClient::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_collideClient::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_collideClient::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_collideClient::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_collideClient::ckSetGroupID(g);
    }
    threadCollideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static threadCollideMgr* ckLocalBranch(CkGroupID gID) {
      return (threadCollideMgr*)CkLocalBranch(gID);
    }
/* DECLS: threadCollideMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendRemote();
 */
    
    void sendRemote(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendRemote(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendRemote(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteCollisions(threadCollisions* impl_msg);
 */
    
    void remoteCollisions(threadCollisions* impl_msg);
    
    void remoteCollisions(threadCollisions* impl_msg, int npes, int *pes);
    
    void remoteCollisions(threadCollisions* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_threadCollideMgr: public CProxySection_collideClient{
  public:
    typedef threadCollideMgr local_t;
    typedef CkIndex_threadCollideMgr index_t;
    typedef CProxy_threadCollideMgr proxy_t;
    typedef CProxyElement_threadCollideMgr element_t;
    typedef CProxySection_threadCollideMgr section_t;

    CProxySection_threadCollideMgr(void) {
    }
    CProxySection_threadCollideMgr(const IrrGroup *g) : CProxySection_collideClient(g){
    }
    CProxySection_threadCollideMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_threadCollideMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(_gid,_pelist,_npes,factor){  }
    CProxySection_threadCollideMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(n,_gid,_pelist,_npes,factor){  }
    CProxySection_threadCollideMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_collideClient::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_collideClient::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_collideClient::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_collideClient::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_collideClient::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_collideClient::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_collideClient::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_collideClient::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_collideClient::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_collideClient::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_collideClient::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_collideClient::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_collideClient::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_collideClient::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_collideClient::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_collideClient::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_collideClient::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_collideClient::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_collideClient::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_collideClient::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_collideClient::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_collideClient::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_collideClient::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_collideClient::ckSetGroupID(g);
    }
    threadCollideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static threadCollideMgr* ckLocalBranch(CkGroupID gID) {
      return (threadCollideMgr*)CkLocalBranch(gID);
    }
/* DECLS: threadCollideMgr();
 */
    

/* DECLS: void sendRemote();
 */
    
    void sendRemote(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteCollisions(threadCollisions* impl_msg);
 */
    
    void remoteCollisions(threadCollisions* impl_msg);

};
#define threadCollideMgr_SDAG_CODE 
typedef CBaseT1<collideClient, CProxy_threadCollideMgr>CBase_threadCollideMgr;

/* DECLS: array threadCollide: ArrayElement{
threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
void resultsDone();
threadCollide(CkMigrateMessage* impl_msg);
};
 */
 class threadCollide;
 class CkIndex_threadCollide;
 class CProxy_threadCollide;
 class CProxyElement_threadCollide;
 class CProxySection_threadCollide;
/* --------------- index object ------------------ */
class CkIndex_threadCollide:public CkIndex_ArrayElement{
  public:
    typedef threadCollide local_t;
    typedef CkIndex_threadCollide index_t;
    typedef CProxy_threadCollide proxy_t;
    typedef CProxyElement_threadCollide element_t;
    typedef CProxySection_threadCollide section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
     */
    // Entry point registration at startup
    
    static int reg_threadCollide_marshall1();
    // Entry point index lookup
    
    inline static int idx_threadCollide_marshall1() {
      static int epidx = reg_threadCollide_marshall1();
      return epidx;
    }

    
    static int ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr) { return idx_threadCollide_marshall1(); }
    
    static void _call_threadCollide_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_threadCollide_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_threadCollide_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_threadCollide_marshall1(PUP::er &p,void *msg);
    /* DECLS: void resultsDone();
     */
    // Entry point registration at startup
    
    static int reg_resultsDone_void();
    // Entry point index lookup
    
    inline static int idx_resultsDone_void() {
      static int epidx = reg_resultsDone_void();
      return epidx;
    }

    
    inline static int idx_resultsDone(void (threadCollide::*)() ) {
      return idx_resultsDone_void();
    }


    
    static int resultsDone() { return idx_resultsDone_void(); }
    
    static void _call_resultsDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resultsDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: threadCollide(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_threadCollide_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_threadCollide_CkMigrateMessage() {
      static int epidx = reg_threadCollide_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_threadCollide_CkMigrateMessage(); }
    
    static void _call_threadCollide_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_threadCollide_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_threadCollide : public CProxyElement_ArrayElement{
  public:
    typedef threadCollide local_t;
    typedef CkIndex_threadCollide index_t;
    typedef CProxy_threadCollide proxy_t;
    typedef CProxyElement_threadCollide element_t;
    typedef CProxySection_threadCollide section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_threadCollide(void) {
    }
    CProxyElement_threadCollide(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    threadCollide *ckLocal(void) const
    { return (threadCollide *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_threadCollide(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_threadCollide(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_threadCollide(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_threadCollide(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
    
    void insert(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void resultsDone();
 */
    
    void resultsDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threadCollide(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_threadCollide : public CProxy_ArrayElement{
  public:
    typedef threadCollide local_t;
    typedef CkIndex_threadCollide index_t;
    typedef CProxy_threadCollide proxy_t;
    typedef CProxyElement_threadCollide element_t;
    typedef CProxySection_threadCollide section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_threadCollide(void) {
    }
    CProxy_threadCollide(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_threadCollide operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_threadCollide(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_threadCollide operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_threadCollide(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_threadCollide operator [] (int idx) const 
        {return CProxyElement_threadCollide(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_threadCollide operator () (int idx) const 
        {return CProxyElement_threadCollide(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_threadCollide(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_threadCollide(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
    
    static CkArrayID ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resultsDone();
 */
    
    void resultsDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threadCollide(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_threadCollide : public CProxySection_ArrayElement{
  public:
    typedef threadCollide local_t;
    typedef CkIndex_threadCollide index_t;
    typedef CProxy_threadCollide proxy_t;
    typedef CProxyElement_threadCollide element_t;
    typedef CProxySection_threadCollide section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_threadCollide(void) {
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
    CProxyElement_threadCollide operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_threadCollide(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_threadCollide operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_threadCollide(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_threadCollide operator [] (int idx) const 
        {return CProxyElement_threadCollide(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_threadCollide operator () (int idx) const 
        {return CProxyElement_threadCollide(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_threadCollide(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_threadCollide(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_threadCollide(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_threadCollide(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_threadCollide(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_threadCollide(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_threadCollide(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_threadCollide(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_threadCollide(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_threadCollide(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_threadCollide(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
    

/* DECLS: void resultsDone();
 */
    
    void resultsDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threadCollide(CkMigrateMessage* impl_msg);
 */

};
#define threadCollide_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_threadCollide>CBase_threadCollide;




/* ---------------- method closures -------------- */
class Closure_threadCollideMgr {
  public:


    struct sendRemote_2_closure;


};

/* ---------------- method closures -------------- */
class Closure_threadCollide {
  public:


    struct resultsDone_2_closure;


};

extern void _registercollide(void);
#endif
