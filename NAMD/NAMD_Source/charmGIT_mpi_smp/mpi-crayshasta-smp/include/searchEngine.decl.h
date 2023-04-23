#ifndef _DECL_searchEngine_H_
#define _DECL_searchEngine_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_SearchConductor searchEngineProxy;
 */

/* DECLS: readonly CProxy_SearchGroup groupProxy;
 */

/* DECLS: readonly int se_statesize;
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
/* DECLS: message countMsg;
 */
class countMsg;
class CMessage_countMsg:public CkMessage{
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
    CMessage_countMsg();
    static void *pack(countMsg *p);
    static countMsg* unpack(void* p);
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

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message SearchNodeMsg{
char objectDump[];
}
;
 */
class SearchNodeMsg;
class CMessage_SearchNodeMsg:public CkMessage{
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
    CMessage_SearchNodeMsg();
    static void *pack(SearchNodeMsg *p);
    static SearchNodeMsg* unpack(void* p);
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


/* DECLS: mainchare SearchConductor: Chare{
SearchConductor(CkArgMsg* impl_msg);
threaded void allSearchNodeDone(CkQdMsg* impl_msg);
void start();
void groupInitComplete();
void foundSolution();
};
 */
 class SearchConductor;
 class CkIndex_SearchConductor;
 class CProxy_SearchConductor;
/* --------------- index object ------------------ */
class CkIndex_SearchConductor:public CkIndex_Chare{
  public:
    typedef SearchConductor local_t;
    typedef CkIndex_SearchConductor index_t;
    typedef CProxy_SearchConductor proxy_t;
    typedef CProxy_SearchConductor element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: SearchConductor(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SearchConductor_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_SearchConductor_CkArgMsg() {
      static int epidx = reg_SearchConductor_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_SearchConductor_CkArgMsg(); }
    
    static void _call_SearchConductor_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SearchConductor_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void allSearchNodeDone(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_allSearchNodeDone_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_allSearchNodeDone_CkQdMsg() {
      static int epidx = reg_allSearchNodeDone_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_allSearchNodeDone(void (SearchConductor::*)(CkQdMsg* impl_msg) ) {
      return idx_allSearchNodeDone_CkQdMsg();
    }


    
    static int allSearchNodeDone(CkQdMsg* impl_msg) { return idx_allSearchNodeDone_CkQdMsg(); }
    
    static void _call_allSearchNodeDone_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_allSearchNodeDone_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_allSearchNodeDone_CkQdMsg(CkThrCallArg *);
    /* DECLS: void start();
     */
    // Entry point registration at startup
    
    static int reg_start_void();
    // Entry point index lookup
    
    inline static int idx_start_void() {
      static int epidx = reg_start_void();
      return epidx;
    }

    
    inline static int idx_start(void (SearchConductor::*)() ) {
      return idx_start_void();
    }


    
    static int start() { return idx_start_void(); }
    
    static void _call_start_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_void(void* impl_msg, void* impl_obj);
    /* DECLS: void groupInitComplete();
     */
    // Entry point registration at startup
    
    static int reg_groupInitComplete_void();
    // Entry point index lookup
    
    inline static int idx_groupInitComplete_void() {
      static int epidx = reg_groupInitComplete_void();
      return epidx;
    }

    
    inline static int idx_groupInitComplete(void (SearchConductor::*)() ) {
      return idx_groupInitComplete_void();
    }


    
    static int groupInitComplete() { return idx_groupInitComplete_void(); }
    
    static void _call_groupInitComplete_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_groupInitComplete_void(void* impl_msg, void* impl_obj);
    /* DECLS: void foundSolution();
     */
    // Entry point registration at startup
    
    static int reg_foundSolution_void();
    // Entry point index lookup
    
    inline static int idx_foundSolution_void() {
      static int epidx = reg_foundSolution_void();
      return epidx;
    }

    
    inline static int idx_foundSolution(void (SearchConductor::*)() ) {
      return idx_foundSolution_void();
    }


    
    static int foundSolution() { return idx_foundSolution_void(); }
    
    static void _call_foundSolution_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_foundSolution_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_SearchConductor:public CProxy_Chare{
  public:
    typedef SearchConductor local_t;
    typedef CkIndex_SearchConductor index_t;
    typedef CProxy_SearchConductor proxy_t;
    typedef CProxy_SearchConductor element_t;

    CProxy_SearchConductor(void) {};
    CProxy_SearchConductor(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_SearchConductor(const Chare *c) : CProxy_Chare(c){  }

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
    SearchConductor *ckLocal(void) const
    { return (SearchConductor *)CkLocalChare(&ckGetChareID()); }
/* DECLS: SearchConductor(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: threaded void allSearchNodeDone(CkQdMsg* impl_msg);
 */
    
    void allSearchNodeDone(CkQdMsg* impl_msg);

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void groupInitComplete();
 */
    
    void groupInitComplete(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void foundSolution();
 */
    
    void foundSolution(const CkEntryOptions *impl_e_opts=NULL);

};
#define SearchConductor_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_SearchConductor>CBase_SearchConductor;

/* DECLS: group SearchGroup: IrrGroup{
SearchGroup();
void sendCounts();
void childCount(countMsg* impl_msg);
void init();
void setParallelLevel(int impl_noname_0);
void searchDepthChange(int impl_noname_1);
void killSearch();
};
 */
 class SearchGroup;
 class CkIndex_SearchGroup;
 class CProxy_SearchGroup;
 class CProxyElement_SearchGroup;
 class CProxySection_SearchGroup;
/* --------------- index object ------------------ */
class CkIndex_SearchGroup:public CkIndex_IrrGroup{
  public:
    typedef SearchGroup local_t;
    typedef CkIndex_SearchGroup index_t;
    typedef CProxy_SearchGroup proxy_t;
    typedef CProxyElement_SearchGroup element_t;
    typedef CProxySection_SearchGroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: SearchGroup();
     */
    // Entry point registration at startup
    
    static int reg_SearchGroup_void();
    // Entry point index lookup
    
    inline static int idx_SearchGroup_void() {
      static int epidx = reg_SearchGroup_void();
      return epidx;
    }

    
    static int ckNew() { return idx_SearchGroup_void(); }
    
    static void _call_SearchGroup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SearchGroup_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendCounts();
     */
    // Entry point registration at startup
    
    static int reg_sendCounts_void();
    // Entry point index lookup
    
    inline static int idx_sendCounts_void() {
      static int epidx = reg_sendCounts_void();
      return epidx;
    }

    
    inline static int idx_sendCounts(void (SearchGroup::*)() ) {
      return idx_sendCounts_void();
    }


    
    static int sendCounts() { return idx_sendCounts_void(); }
    
    static void _call_sendCounts_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendCounts_void(void* impl_msg, void* impl_obj);
    /* DECLS: void childCount(countMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_childCount_countMsg();
    // Entry point index lookup
    
    inline static int idx_childCount_countMsg() {
      static int epidx = reg_childCount_countMsg();
      return epidx;
    }

    
    inline static int idx_childCount(void (SearchGroup::*)(countMsg* impl_msg) ) {
      return idx_childCount_countMsg();
    }


    
    static int childCount(countMsg* impl_msg) { return idx_childCount_countMsg(); }
    
    static void _call_childCount_countMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_childCount_countMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void init();
     */
    // Entry point registration at startup
    
    static int reg_init_void();
    // Entry point index lookup
    
    inline static int idx_init_void() {
      static int epidx = reg_init_void();
      return epidx;
    }

    
    inline static int idx_init(void (SearchGroup::*)() ) {
      return idx_init_void();
    }


    
    static int init() { return idx_init_void(); }
    
    static void _call_init_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setParallelLevel(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_setParallelLevel_marshall5();
    // Entry point index lookup
    
    inline static int idx_setParallelLevel_marshall5() {
      static int epidx = reg_setParallelLevel_marshall5();
      return epidx;
    }

    
    inline static int idx_setParallelLevel(void (SearchGroup::*)(int impl_noname_0) ) {
      return idx_setParallelLevel_marshall5();
    }


    
    static int setParallelLevel(int impl_noname_0) { return idx_setParallelLevel_marshall5(); }
    
    static void _call_setParallelLevel_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setParallelLevel_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setParallelLevel_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setParallelLevel_marshall5(PUP::er &p,void *msg);
    /* DECLS: void searchDepthChange(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_searchDepthChange_marshall6();
    // Entry point index lookup
    
    inline static int idx_searchDepthChange_marshall6() {
      static int epidx = reg_searchDepthChange_marshall6();
      return epidx;
    }

    
    inline static int idx_searchDepthChange(void (SearchGroup::*)(int impl_noname_1) ) {
      return idx_searchDepthChange_marshall6();
    }


    
    static int searchDepthChange(int impl_noname_1) { return idx_searchDepthChange_marshall6(); }
    
    static void _call_searchDepthChange_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_searchDepthChange_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_searchDepthChange_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_searchDepthChange_marshall6(PUP::er &p,void *msg);
    /* DECLS: void killSearch();
     */
    // Entry point registration at startup
    
    static int reg_killSearch_void();
    // Entry point index lookup
    
    inline static int idx_killSearch_void() {
      static int epidx = reg_killSearch_void();
      return epidx;
    }

    
    inline static int idx_killSearch(void (SearchGroup::*)() ) {
      return idx_killSearch_void();
    }


    
    static int killSearch() { return idx_killSearch_void(); }
    
    static void _call_killSearch_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_killSearch_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_SearchGroup: public CProxyElement_IrrGroup{
  public:
    typedef SearchGroup local_t;
    typedef CkIndex_SearchGroup index_t;
    typedef CProxy_SearchGroup proxy_t;
    typedef CProxyElement_SearchGroup element_t;
    typedef CProxySection_SearchGroup section_t;


    /* TRAM aggregators */

    CProxyElement_SearchGroup(void) {
    }
    CProxyElement_SearchGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_SearchGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_SearchGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    SearchGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SearchGroup* ckLocalBranch(CkGroupID gID) {
      return (SearchGroup*)CkLocalBranch(gID);
    }
/* DECLS: SearchGroup();
 */
    

/* DECLS: void sendCounts();
 */
    
    void sendCounts(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void childCount(countMsg* impl_msg);
 */
    
    void childCount(countMsg* impl_msg);

/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setParallelLevel(int impl_noname_0);
 */
    
    void setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void searchDepthChange(int impl_noname_1);
 */
    
    void searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void killSearch();
 */
    
    void killSearch(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_SearchGroup: public CProxy_IrrGroup{
  public:
    typedef SearchGroup local_t;
    typedef CkIndex_SearchGroup index_t;
    typedef CProxy_SearchGroup proxy_t;
    typedef CProxyElement_SearchGroup element_t;
    typedef CProxySection_SearchGroup section_t;

    CProxy_SearchGroup(void) {
    }
    CProxy_SearchGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_SearchGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_SearchGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_SearchGroup operator[](int onPE) const
      {return CProxyElement_SearchGroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    SearchGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SearchGroup* ckLocalBranch(CkGroupID gID) {
      return (SearchGroup*)CkLocalBranch(gID);
    }
/* DECLS: SearchGroup();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendCounts();
 */
    
    void sendCounts(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendCounts(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendCounts(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void childCount(countMsg* impl_msg);
 */
    
    void childCount(countMsg* impl_msg);
    
    void childCount(countMsg* impl_msg, int npes, int *pes);
    
    void childCount(countMsg* impl_msg, CmiGroup &grp);

/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL);
    
    void init(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setParallelLevel(int impl_noname_0);
 */
    
    void setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void setParallelLevel(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setParallelLevel(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void searchDepthChange(int impl_noname_1);
 */
    
    void searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void searchDepthChange(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void searchDepthChange(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void killSearch();
 */
    
    void killSearch(const CkEntryOptions *impl_e_opts=NULL);
    
    void killSearch(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void killSearch(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_SearchGroup: public CProxySection_IrrGroup{
  public:
    typedef SearchGroup local_t;
    typedef CkIndex_SearchGroup index_t;
    typedef CProxy_SearchGroup proxy_t;
    typedef CProxyElement_SearchGroup element_t;
    typedef CProxySection_SearchGroup section_t;

    CProxySection_SearchGroup(void) {
    }
    CProxySection_SearchGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_SearchGroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_SearchGroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_SearchGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_SearchGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    SearchGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SearchGroup* ckLocalBranch(CkGroupID gID) {
      return (SearchGroup*)CkLocalBranch(gID);
    }
/* DECLS: SearchGroup();
 */
    

/* DECLS: void sendCounts();
 */
    
    void sendCounts(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void childCount(countMsg* impl_msg);
 */
    
    void childCount(countMsg* impl_msg);

/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setParallelLevel(int impl_noname_0);
 */
    
    void setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void searchDepthChange(int impl_noname_1);
 */
    
    void searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void killSearch();
 */
    
    void killSearch(const CkEntryOptions *impl_e_opts=NULL);

};
#define SearchGroup_SDAG_CODE 
typedef CBaseT1<Group, CProxy_SearchGroup>CBase_SearchGroup;

/* DECLS: chare SearchNode: Chare{
SearchNode(SearchNodeMsg* impl_msg);
};
 */
 class SearchNode;
 class CkIndex_SearchNode;
 class CProxy_SearchNode;
/* --------------- index object ------------------ */
class CkIndex_SearchNode:public CkIndex_Chare{
  public:
    typedef SearchNode local_t;
    typedef CkIndex_SearchNode index_t;
    typedef CProxy_SearchNode proxy_t;
    typedef CProxy_SearchNode element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: SearchNode(SearchNodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SearchNode_SearchNodeMsg();
    // Entry point index lookup
    
    inline static int idx_SearchNode_SearchNodeMsg() {
      static int epidx = reg_SearchNode_SearchNodeMsg();
      return epidx;
    }

    
    static int ckNew(SearchNodeMsg* impl_msg) { return idx_SearchNode_SearchNodeMsg(); }
    
    static void _call_SearchNode_SearchNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SearchNode_SearchNodeMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_SearchNode:public CProxy_Chare{
  public:
    typedef SearchNode local_t;
    typedef CkIndex_SearchNode index_t;
    typedef CProxy_SearchNode proxy_t;
    typedef CProxy_SearchNode element_t;

    CProxy_SearchNode(void) {};
    CProxy_SearchNode(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_SearchNode(const Chare *c) : CProxy_Chare(c){  }

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
    SearchNode *ckLocal(void) const
    { return (SearchNode *)CkLocalChare(&ckGetChareID()); }
/* DECLS: SearchNode(SearchNodeMsg* impl_msg);
 */
    static CkChareID ckNew(SearchNodeMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(SearchNodeMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define SearchNode_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_SearchNode>CBase_SearchNode;







/* ---------------- method closures -------------- */
class Closure_SearchConductor {
  public:



    struct start_3_closure;


    struct groupInitComplete_4_closure;


    struct foundSolution_5_closure;

};

/* ---------------- method closures -------------- */
class Closure_SearchGroup {
  public:


    struct sendCounts_2_closure;



    struct init_4_closure;


    struct setParallelLevel_5_closure;


    struct searchDepthChange_6_closure;


    struct killSearch_7_closure;

};

/* ---------------- method closures -------------- */
class Closure_SearchNode {
  public:

};

extern void _registersearchEngine(void);
#endif
