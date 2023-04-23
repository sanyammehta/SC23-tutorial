#ifndef _DECL_liveViz_H_
#define _DECL_liveViz_H_
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
/* DECLS: message liveVizRequestMsg{
char data[];
}
;
 */
class liveVizRequestMsg;
class CMessage_liveVizRequestMsg:public CkMessage{
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
    CMessage_liveVizRequestMsg();
    static void *pack(liveVizRequestMsg *p);
    static liveVizRequestMsg* unpack(void* p);
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

#include "liveVizPoll.decl.h"


/* DECLS: readonly CProxy_liveVizGroup lvG;
 */

/* DECLS: group liveVizGroup: IrrGroup{
liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
void initComplete();
void combine(CkReductionMsg* impl_msg);
liveVizGroup(CkMigrateMessage* impl_msg);
};
 */
 class liveVizGroup;
 class CkIndex_liveVizGroup;
 class CProxy_liveVizGroup;
 class CProxyElement_liveVizGroup;
 class CProxySection_liveVizGroup;
/* --------------- index object ------------------ */
class CkIndex_liveVizGroup:public CkIndex_IrrGroup{
  public:
    typedef liveVizGroup local_t;
    typedef CkIndex_liveVizGroup index_t;
    typedef CProxy_liveVizGroup proxy_t;
    typedef CProxyElement_liveVizGroup element_t;
    typedef CProxySection_liveVizGroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
     */
    // Entry point registration at startup
    
    static int reg_liveVizGroup_marshall1();
    // Entry point index lookup
    
    inline static int idx_liveVizGroup_marshall1() {
      static int epidx = reg_liveVizGroup_marshall1();
      return epidx;
    }

    
    static int ckNew(const liveVizConfig &cfg, const CkCallback &c) { return idx_liveVizGroup_marshall1(); }
    
    static void _call_liveVizGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_liveVizGroup_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_liveVizGroup_marshall1(PUP::er &p,void *msg);
    /* DECLS: void initComplete();
     */
    // Entry point registration at startup
    
    static int reg_initComplete_void();
    // Entry point index lookup
    
    inline static int idx_initComplete_void() {
      static int epidx = reg_initComplete_void();
      return epidx;
    }

    
    inline static int idx_initComplete(void (liveVizGroup::*)() ) {
      return idx_initComplete_void();
    }


    
    static int initComplete() { return idx_initComplete_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_initComplete_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_initComplete_void() {
      static int epidx = reg_redn_wrapper_initComplete_void();
      return epidx;
    }
    
    static int redn_wrapper_initComplete(CkReductionMsg* impl_msg) { return idx_redn_wrapper_initComplete_void(); }
    
    static void _call_redn_wrapper_initComplete_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_initComplete_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initComplete_void(void* impl_msg, void* impl_obj);
    /* DECLS: void combine(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_combine_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_combine_CkReductionMsg() {
      static int epidx = reg_combine_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_combine(void (liveVizGroup::*)(CkReductionMsg* impl_msg) ) {
      return idx_combine_CkReductionMsg();
    }


    
    static int combine(CkReductionMsg* impl_msg) { return idx_combine_CkReductionMsg(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_combine_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_combine_CkReductionMsg() {
      static int epidx = reg_redn_wrapper_combine_CkReductionMsg();
      return epidx;
    }
    
    static int redn_wrapper_combine(CkReductionMsg* impl_msg) { return idx_redn_wrapper_combine_CkReductionMsg(); }
    
    static void _call_redn_wrapper_combine_CkReductionMsg(void* impl_msg, void* impl_obj_void);
    
    static void _call_combine_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_combine_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: liveVizGroup(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_liveVizGroup_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_liveVizGroup_CkMigrateMessage() {
      static int epidx = reg_liveVizGroup_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_liveVizGroup_CkMigrateMessage(); }
    
    static void _call_liveVizGroup_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizGroup_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_liveVizGroup: public CProxyElement_IrrGroup{
  public:
    typedef liveVizGroup local_t;
    typedef CkIndex_liveVizGroup index_t;
    typedef CProxy_liveVizGroup proxy_t;
    typedef CProxyElement_liveVizGroup element_t;
    typedef CProxySection_liveVizGroup section_t;


    /* TRAM aggregators */

    CProxyElement_liveVizGroup(void) {
    }
    CProxyElement_liveVizGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_liveVizGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_liveVizGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    liveVizGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizGroup* ckLocalBranch(CkGroupID gID) {
      return (liveVizGroup*)CkLocalBranch(gID);
    }
/* DECLS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
    

/* DECLS: void initComplete();
 */
    
    void initComplete(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);

/* DECLS: liveVizGroup(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_liveVizGroup: public CProxy_IrrGroup{
  public:
    typedef liveVizGroup local_t;
    typedef CkIndex_liveVizGroup index_t;
    typedef CProxy_liveVizGroup proxy_t;
    typedef CProxyElement_liveVizGroup element_t;
    typedef CProxySection_liveVizGroup section_t;

    CProxy_liveVizGroup(void) {
    }
    CProxy_liveVizGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_liveVizGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_liveVizGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_liveVizGroup operator[](int onPE) const
      {return CProxyElement_liveVizGroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    liveVizGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizGroup* ckLocalBranch(CkGroupID gID) {
      return (liveVizGroup*)CkLocalBranch(gID);
    }
/* DECLS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
    
    static CkGroupID ckNew(const liveVizConfig &cfg, const CkCallback &c, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_liveVizGroup(const liveVizConfig &cfg, const CkCallback &c, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initComplete();
 */
    
    void initComplete(const CkEntryOptions *impl_e_opts=NULL);
    
    void initComplete(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void initComplete(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);
    
    void combine(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void combine(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: liveVizGroup(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_liveVizGroup: public CProxySection_IrrGroup{
  public:
    typedef liveVizGroup local_t;
    typedef CkIndex_liveVizGroup index_t;
    typedef CProxy_liveVizGroup proxy_t;
    typedef CProxyElement_liveVizGroup element_t;
    typedef CProxySection_liveVizGroup section_t;

    CProxySection_liveVizGroup(void) {
    }
    CProxySection_liveVizGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_liveVizGroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_liveVizGroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_liveVizGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_liveVizGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    liveVizGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizGroup* ckLocalBranch(CkGroupID gID) {
      return (liveVizGroup*)CkLocalBranch(gID);
    }
/* DECLS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
    

/* DECLS: void initComplete();
 */
    
    void initComplete(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);

/* DECLS: liveVizGroup(CkMigrateMessage* impl_msg);
 */

};
#define liveVizGroup_SDAG_CODE 
typedef CBaseT1<Group, CProxy_liveVizGroup>CBase_liveVizGroup;

/* DECLS: readonly CProxy_LiveVizBoundElement lvBoundArray;
 */

/* DECLS: readonly bool usingBoundArray;
 */

/* DECLS: array LiveVizBoundElement: ArrayElement{
LiveVizBoundElement();
void deposit(CkReductionMsg* impl_msg);
LiveVizBoundElement(CkMigrateMessage* impl_msg);
};
 */
 class LiveVizBoundElement;
 class CkIndex_LiveVizBoundElement;
 class CProxy_LiveVizBoundElement;
 class CProxyElement_LiveVizBoundElement;
 class CProxySection_LiveVizBoundElement;
/* --------------- index object ------------------ */
class CkIndex_LiveVizBoundElement:public CkIndex_ArrayElement{
  public:
    typedef LiveVizBoundElement local_t;
    typedef CkIndex_LiveVizBoundElement index_t;
    typedef CProxy_LiveVizBoundElement proxy_t;
    typedef CProxyElement_LiveVizBoundElement element_t;
    typedef CProxySection_LiveVizBoundElement section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LiveVizBoundElement();
     */
    // Entry point registration at startup
    
    static int reg_LiveVizBoundElement_void();
    // Entry point index lookup
    
    inline static int idx_LiveVizBoundElement_void() {
      static int epidx = reg_LiveVizBoundElement_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LiveVizBoundElement_void(); }
    
    static void _call_LiveVizBoundElement_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LiveVizBoundElement_void(void* impl_msg, void* impl_obj);
    /* DECLS: void deposit(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_deposit_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_deposit_CkReductionMsg() {
      static int epidx = reg_deposit_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_deposit(void (LiveVizBoundElement::*)(CkReductionMsg* impl_msg) ) {
      return idx_deposit_CkReductionMsg();
    }


    
    static int deposit(CkReductionMsg* impl_msg) { return idx_deposit_CkReductionMsg(); }
    
    static void _call_deposit_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_deposit_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LiveVizBoundElement_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_LiveVizBoundElement_CkMigrateMessage() {
      static int epidx = reg_LiveVizBoundElement_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_LiveVizBoundElement_CkMigrateMessage(); }
    
    static void _call_LiveVizBoundElement_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LiveVizBoundElement_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_LiveVizBoundElement : public CProxyElement_ArrayElement{
  public:
    typedef LiveVizBoundElement local_t;
    typedef CkIndex_LiveVizBoundElement index_t;
    typedef CProxy_LiveVizBoundElement proxy_t;
    typedef CProxyElement_LiveVizBoundElement element_t;
    typedef CProxySection_LiveVizBoundElement section_t;

    using array_index_t = CkArrayIndexMax;

    /* TRAM aggregators */

    CProxyElement_LiveVizBoundElement(void) {
    }
    CProxyElement_LiveVizBoundElement(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    LiveVizBoundElement *ckLocal(void) const
    { return (LiveVizBoundElement *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_LiveVizBoundElement(const CkArrayID &aid,const CkArrayIndexMax &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_LiveVizBoundElement(const CkArrayID &aid,const CkArrayIndexMax &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: LiveVizBoundElement();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void deposit(CkReductionMsg* impl_msg);
 */
    void deposit(CkReductionMsg* impl_msg) ;

/* DECLS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_LiveVizBoundElement : public CProxy_ArrayElement{
  public:
    typedef LiveVizBoundElement local_t;
    typedef CkIndex_LiveVizBoundElement index_t;
    typedef CProxy_LiveVizBoundElement proxy_t;
    typedef CProxyElement_LiveVizBoundElement element_t;
    typedef CProxySection_LiveVizBoundElement section_t;

    using array_index_t = CkArrayIndexMax;
    CProxy_LiveVizBoundElement(void) {
    }
    CProxy_LiveVizBoundElement(const ArrayElement *e) : CProxy_ArrayElement(e){
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

    // Generalized array indexing:
    CProxyElement_LiveVizBoundElement operator [] (const CkArrayIndexMax &idx) const
    { return CProxyElement_LiveVizBoundElement(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_LiveVizBoundElement operator() (const CkArrayIndexMax &idx) const
    { return CProxyElement_LiveVizBoundElement(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_LiveVizBoundElement(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_LiveVizBoundElement(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: LiveVizBoundElement();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void deposit(CkReductionMsg* impl_msg);
 */

/* DECLS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_LiveVizBoundElement : public CProxySection_ArrayElement{
  public:
    typedef LiveVizBoundElement local_t;
    typedef CkIndex_LiveVizBoundElement index_t;
    typedef CProxy_LiveVizBoundElement proxy_t;
    typedef CProxyElement_LiveVizBoundElement element_t;
    typedef CProxySection_LiveVizBoundElement section_t;

    using array_index_t = CkArrayIndexMax;
    CProxySection_LiveVizBoundElement(void) {
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
    CProxyElement_LiveVizBoundElement operator [] (const CkArrayIndexMax &idx) const
        {return CProxyElement_LiveVizBoundElement(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_LiveVizBoundElement operator() (const CkArrayIndexMax &idx) const
        {return CProxyElement_LiveVizBoundElement(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_LiveVizBoundElement(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LiveVizBoundElement(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_LiveVizBoundElement(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_LiveVizBoundElement(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_LiveVizBoundElement(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_LiveVizBoundElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LiveVizBoundElement(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_LiveVizBoundElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_LiveVizBoundElement(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_LiveVizBoundElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_LiveVizBoundElement(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: LiveVizBoundElement();
 */
    

/* DECLS: void deposit(CkReductionMsg* impl_msg);
 */

/* DECLS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */

};
#define LiveVizBoundElement_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndexMax>, CProxy_LiveVizBoundElement>CBase_LiveVizBoundElement;





/* ---------------- method closures -------------- */
class Closure_liveVizGroup {
  public:


    struct initComplete_2_closure;



};



/* ---------------- method closures -------------- */
class Closure_LiveVizBoundElement {
  public:



};

extern void _registerliveViz(void);
#endif
