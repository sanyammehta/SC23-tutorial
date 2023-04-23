#ifndef _DECL_barrier_H_
#define _DECL_barrier_H_
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
/* DECLS: message FP;
 */
class FP;
class CMessage_FP:public CkMessage{
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
    CMessage_FP();
    static void *pack(FP *p);
    static FP* unpack(void* p);
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

/* DECLS: group Barrier: IrrGroup{
Barrier();
void notify();
void callFP();
void reset();
void atBarrier(FP* impl_msg);
};
 */
 class Barrier;
 class CkIndex_Barrier;
 class CProxy_Barrier;
 class CProxyElement_Barrier;
 class CProxySection_Barrier;
/* --------------- index object ------------------ */
class CkIndex_Barrier:public CkIndex_IrrGroup{
  public:
    typedef Barrier local_t;
    typedef CkIndex_Barrier index_t;
    typedef CProxy_Barrier proxy_t;
    typedef CProxyElement_Barrier element_t;
    typedef CProxySection_Barrier section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Barrier();
     */
    // Entry point registration at startup
    
    static int reg_Barrier_void();
    // Entry point index lookup
    
    inline static int idx_Barrier_void() {
      static int epidx = reg_Barrier_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Barrier_void(); }
    
    static void _call_Barrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Barrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void notify();
     */
    // Entry point registration at startup
    
    static int reg_notify_void();
    // Entry point index lookup
    
    inline static int idx_notify_void() {
      static int epidx = reg_notify_void();
      return epidx;
    }

    
    inline static int idx_notify(void (Barrier::*)() ) {
      return idx_notify_void();
    }


    
    static int notify() { return idx_notify_void(); }
    
    static void _call_notify_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_notify_void(void* impl_msg, void* impl_obj);
    /* DECLS: void callFP();
     */
    // Entry point registration at startup
    
    static int reg_callFP_void();
    // Entry point index lookup
    
    inline static int idx_callFP_void() {
      static int epidx = reg_callFP_void();
      return epidx;
    }

    
    inline static int idx_callFP(void (Barrier::*)() ) {
      return idx_callFP_void();
    }


    
    static int callFP() { return idx_callFP_void(); }
    
    static void _call_callFP_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_callFP_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reset();
     */
    // Entry point registration at startup
    
    static int reg_reset_void();
    // Entry point index lookup
    
    inline static int idx_reset_void() {
      static int epidx = reg_reset_void();
      return epidx;
    }

    
    inline static int idx_reset(void (Barrier::*)() ) {
      return idx_reset_void();
    }


    
    static int reset() { return idx_reset_void(); }
    
    static void _call_reset_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reset_void(void* impl_msg, void* impl_obj);
    /* DECLS: void atBarrier(FP* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_atBarrier_FP();
    // Entry point index lookup
    
    inline static int idx_atBarrier_FP() {
      static int epidx = reg_atBarrier_FP();
      return epidx;
    }

    
    inline static int idx_atBarrier(void (Barrier::*)(FP* impl_msg) ) {
      return idx_atBarrier_FP();
    }


    
    static int atBarrier(FP* impl_msg) { return idx_atBarrier_FP(); }
    
    static void _call_atBarrier_FP(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_atBarrier_FP(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Barrier: public CProxyElement_IrrGroup{
  public:
    typedef Barrier local_t;
    typedef CkIndex_Barrier index_t;
    typedef CProxy_Barrier proxy_t;
    typedef CProxyElement_Barrier element_t;
    typedef CProxySection_Barrier section_t;


    /* TRAM aggregators */

    CProxyElement_Barrier(void) {
    }
    CProxyElement_Barrier(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_Barrier(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Barrier(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    Barrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Barrier* ckLocalBranch(CkGroupID gID) {
      return (Barrier*)CkLocalBranch(gID);
    }
/* DECLS: Barrier();
 */
    

/* DECLS: void notify();
 */
    
    void notify(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void callFP();
 */
    
    void callFP(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void atBarrier(FP* impl_msg);
 */
    
    void atBarrier(FP* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_Barrier: public CProxy_IrrGroup{
  public:
    typedef Barrier local_t;
    typedef CkIndex_Barrier index_t;
    typedef CProxy_Barrier proxy_t;
    typedef CProxyElement_Barrier element_t;
    typedef CProxySection_Barrier section_t;

    CProxy_Barrier(void) {
    }
    CProxy_Barrier(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_Barrier(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Barrier(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Barrier operator[](int onPE) const
      {return CProxyElement_Barrier(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    Barrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Barrier* ckLocalBranch(CkGroupID gID) {
      return (Barrier*)CkLocalBranch(gID);
    }
/* DECLS: Barrier();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void notify();
 */
    
    void notify(const CkEntryOptions *impl_e_opts=NULL);
    
    void notify(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void notify(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void callFP();
 */
    
    void callFP(const CkEntryOptions *impl_e_opts=NULL);
    
    void callFP(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void callFP(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL);
    
    void reset(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reset(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void atBarrier(FP* impl_msg);
 */
    
    void atBarrier(FP* impl_msg);
    
    void atBarrier(FP* impl_msg, int npes, int *pes);
    
    void atBarrier(FP* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_Barrier: public CProxySection_IrrGroup{
  public:
    typedef Barrier local_t;
    typedef CkIndex_Barrier index_t;
    typedef CProxy_Barrier proxy_t;
    typedef CProxyElement_Barrier element_t;
    typedef CProxySection_Barrier section_t;

    CProxySection_Barrier(void) {
    }
    CProxySection_Barrier(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_Barrier(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Barrier(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_Barrier(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Barrier(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    Barrier* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Barrier* ckLocalBranch(CkGroupID gID) {
      return (Barrier*)CkLocalBranch(gID);
    }
/* DECLS: Barrier();
 */
    

/* DECLS: void notify();
 */
    
    void notify(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void callFP();
 */
    
    void callFP(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void atBarrier(FP* impl_msg);
 */
    
    void atBarrier(FP* impl_msg);

};
#define Barrier_SDAG_CODE 
typedef CBaseT1<Group, CProxy_Barrier>CBase_Barrier;


/* ---------------- method closures -------------- */
class Closure_Barrier {
  public:


    struct notify_2_closure;


    struct callFP_3_closure;


    struct reset_4_closure;


};

extern void _registerbarrier(void);
#endif
