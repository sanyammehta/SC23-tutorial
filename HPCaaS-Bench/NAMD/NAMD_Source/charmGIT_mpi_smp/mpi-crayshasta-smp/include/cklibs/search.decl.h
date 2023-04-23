#ifndef _DECL_search_H_
#define _DECL_search_H_
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
/* DECLS: message searchResults;
 */
class searchResults;
class CMessage_searchResults:public CkMessage{
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
    CMessage_searchResults();
    static void *pack(searchResults *p);
    static searchResults* unpack(void* p);
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

/* DECLS: chare idaStarWorker: Chare{
idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
void ChildFinished(int dummy);
};
 */
 class idaStarWorker;
 class CkIndex_idaStarWorker;
 class CProxy_idaStarWorker;
/* --------------- index object ------------------ */
class CkIndex_idaStarWorker:public CkIndex_Chare{
  public:
    typedef idaStarWorker local_t;
    typedef CkIndex_idaStarWorker index_t;
    typedef CProxy_idaStarWorker proxy_t;
    typedef CProxy_idaStarWorker element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
     */
    // Entry point registration at startup
    
    static int reg_idaStarWorker_marshall1();
    // Entry point index lookup
    
    inline static int idx_idaStarWorker_marshall1() {
      static int epidx = reg_idaStarWorker_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist) { return idx_idaStarWorker_marshall1(); }
    
    static void _call_idaStarWorker_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_idaStarWorker_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_idaStarWorker_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_idaStarWorker_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ChildFinished(int dummy);
     */
    // Entry point registration at startup
    
    static int reg_ChildFinished_marshall2();
    // Entry point index lookup
    
    inline static int idx_ChildFinished_marshall2() {
      static int epidx = reg_ChildFinished_marshall2();
      return epidx;
    }

    
    inline static int idx_ChildFinished(void (idaStarWorker::*)(int dummy) ) {
      return idx_ChildFinished_marshall2();
    }


    
    static int ChildFinished(int dummy) { return idx_ChildFinished_marshall2(); }
    
    static void _call_ChildFinished_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ChildFinished_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ChildFinished_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ChildFinished_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_idaStarWorker:public CProxy_Chare{
  public:
    typedef idaStarWorker local_t;
    typedef CkIndex_idaStarWorker index_t;
    typedef CProxy_idaStarWorker proxy_t;
    typedef CProxy_idaStarWorker element_t;

    CProxy_idaStarWorker(void) {};
    CProxy_idaStarWorker(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_idaStarWorker(const Chare *c) : CProxy_Chare(c){  }

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
    idaStarWorker *ckLocal(void) const
    { return (idaStarWorker *)CkLocalChare(&ckGetChareID()); }
/* DECLS: idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
 */
    static CkChareID ckNew(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist, CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ChildFinished(int dummy);
 */
    
    void ChildFinished(int dummy, const CkEntryOptions *impl_e_opts=NULL);

};
#define idaStarWorker_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_idaStarWorker>CBase_idaStarWorker;

/* DECLS: group idaStarGroup: IrrGroup{
idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
void ChildFinished(int dummy);
void ReductionResults(CkReductionMsg* impl_msg);
void SolutionFound(const CkPointer<problem> &soln);
void Terminate();
};
 */
 class idaStarGroup;
 class CkIndex_idaStarGroup;
 class CProxy_idaStarGroup;
 class CProxyElement_idaStarGroup;
 class CProxySection_idaStarGroup;
/* --------------- index object ------------------ */
class CkIndex_idaStarGroup:public CkIndex_IrrGroup{
  public:
    typedef idaStarGroup local_t;
    typedef CkIndex_idaStarGroup index_t;
    typedef CProxy_idaStarGroup proxy_t;
    typedef CProxyElement_idaStarGroup element_t;
    typedef CProxySection_idaStarGroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
     */
    // Entry point registration at startup
    
    static int reg_idaStarGroup_marshall1();
    // Entry point index lookup
    
    inline static int idx_idaStarGroup_marshall1() {
      static int epidx = reg_idaStarGroup_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished) { return idx_idaStarGroup_marshall1(); }
    
    static void _call_idaStarGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_idaStarGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_idaStarGroup_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_idaStarGroup_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ChildFinished(int dummy);
     */
    // Entry point registration at startup
    
    static int reg_ChildFinished_marshall2();
    // Entry point index lookup
    
    inline static int idx_ChildFinished_marshall2() {
      static int epidx = reg_ChildFinished_marshall2();
      return epidx;
    }

    
    inline static int idx_ChildFinished(void (idaStarGroup::*)(int dummy) ) {
      return idx_ChildFinished_marshall2();
    }


    
    static int ChildFinished(int dummy) { return idx_ChildFinished_marshall2(); }
    
    static void _call_ChildFinished_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ChildFinished_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ChildFinished_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ChildFinished_marshall2(PUP::er &p,void *msg);
    /* DECLS: void ReductionResults(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReductionResults_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_ReductionResults_CkReductionMsg() {
      static int epidx = reg_ReductionResults_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_ReductionResults(void (idaStarGroup::*)(CkReductionMsg* impl_msg) ) {
      return idx_ReductionResults_CkReductionMsg();
    }


    
    static int ReductionResults(CkReductionMsg* impl_msg) { return idx_ReductionResults_CkReductionMsg(); }
    
    static void _call_ReductionResults_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionResults_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void SolutionFound(const CkPointer<problem> &soln);
     */
    // Entry point registration at startup
    
    static int reg_SolutionFound_marshall4();
    // Entry point index lookup
    
    inline static int idx_SolutionFound_marshall4() {
      static int epidx = reg_SolutionFound_marshall4();
      return epidx;
    }

    
    inline static int idx_SolutionFound(void (idaStarGroup::*)(const CkPointer<problem> &soln) ) {
      return idx_SolutionFound_marshall4();
    }


    
    static int SolutionFound(const CkPointer<problem> &soln) { return idx_SolutionFound_marshall4(); }
    
    static void _call_SolutionFound_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SolutionFound_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_SolutionFound_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_SolutionFound_marshall4(PUP::er &p,void *msg);
    /* DECLS: void Terminate();
     */
    // Entry point registration at startup
    
    static int reg_Terminate_void();
    // Entry point index lookup
    
    inline static int idx_Terminate_void() {
      static int epidx = reg_Terminate_void();
      return epidx;
    }

    
    inline static int idx_Terminate(void (idaStarGroup::*)() ) {
      return idx_Terminate_void();
    }


    
    static int Terminate() { return idx_Terminate_void(); }
    
    static void _call_Terminate_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Terminate_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_idaStarGroup: public CProxyElement_IrrGroup{
  public:
    typedef idaStarGroup local_t;
    typedef CkIndex_idaStarGroup index_t;
    typedef CProxy_idaStarGroup proxy_t;
    typedef CProxyElement_idaStarGroup element_t;
    typedef CProxySection_idaStarGroup section_t;


    /* TRAM aggregators */

    CProxyElement_idaStarGroup(void) {
    }
    CProxyElement_idaStarGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_idaStarGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_idaStarGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    idaStarGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static idaStarGroup* ckLocalBranch(CkGroupID gID) {
      return (idaStarGroup*)CkLocalBranch(gID);
    }
/* DECLS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
    

/* DECLS: void ChildFinished(int dummy);
 */
    
    void ChildFinished(int dummy, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReductionResults(CkReductionMsg* impl_msg);
 */
    
    void ReductionResults(CkReductionMsg* impl_msg);

/* DECLS: void SolutionFound(const CkPointer<problem> &soln);
 */
    
    void SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_idaStarGroup: public CProxy_IrrGroup{
  public:
    typedef idaStarGroup local_t;
    typedef CkIndex_idaStarGroup index_t;
    typedef CProxy_idaStarGroup proxy_t;
    typedef CProxyElement_idaStarGroup element_t;
    typedef CProxySection_idaStarGroup section_t;

    CProxy_idaStarGroup(void) {
    }
    CProxy_idaStarGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_idaStarGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_idaStarGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_idaStarGroup operator[](int onPE) const
      {return CProxyElement_idaStarGroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    idaStarGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static idaStarGroup* ckLocalBranch(CkGroupID gID) {
      return (idaStarGroup*)CkLocalBranch(gID);
    }
/* DECLS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
    
    static CkGroupID ckNew(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ChildFinished(int dummy);
 */
    
    void ChildFinished(int dummy, const CkEntryOptions *impl_e_opts=NULL);
    
    void ChildFinished(int dummy, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ChildFinished(int dummy, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReductionResults(CkReductionMsg* impl_msg);
 */
    
    void ReductionResults(CkReductionMsg* impl_msg);
    
    void ReductionResults(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void ReductionResults(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void SolutionFound(const CkPointer<problem> &soln);
 */
    
    void SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts=NULL);
    
    void SolutionFound(const CkPointer<problem> &soln, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SolutionFound(const CkPointer<problem> &soln, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL);
    
    void Terminate(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void Terminate(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_idaStarGroup: public CProxySection_IrrGroup{
  public:
    typedef idaStarGroup local_t;
    typedef CkIndex_idaStarGroup index_t;
    typedef CProxy_idaStarGroup proxy_t;
    typedef CProxyElement_idaStarGroup element_t;
    typedef CProxySection_idaStarGroup section_t;

    CProxySection_idaStarGroup(void) {
    }
    CProxySection_idaStarGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_idaStarGroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_idaStarGroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_idaStarGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_idaStarGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    idaStarGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static idaStarGroup* ckLocalBranch(CkGroupID gID) {
      return (idaStarGroup*)CkLocalBranch(gID);
    }
/* DECLS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
    

/* DECLS: void ChildFinished(int dummy);
 */
    
    void ChildFinished(int dummy, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReductionResults(CkReductionMsg* impl_msg);
 */
    
    void ReductionResults(CkReductionMsg* impl_msg);

/* DECLS: void SolutionFound(const CkPointer<problem> &soln);
 */
    
    void SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Terminate();
 */
    
    void Terminate(const CkEntryOptions *impl_e_opts=NULL);

};
#define idaStarGroup_SDAG_CODE 
typedef CBaseT1<Group, CProxy_idaStarGroup>CBase_idaStarGroup;


/* ---------------- method closures -------------- */
class Closure_idaStarWorker {
  public:


    struct ChildFinished_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_idaStarGroup {
  public:


    struct ChildFinished_2_closure;



    struct SolutionFound_4_closure;


    struct Terminate_5_closure;

};

extern void _registersearch(void);
#endif
