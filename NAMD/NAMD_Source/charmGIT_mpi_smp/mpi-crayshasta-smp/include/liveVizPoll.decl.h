#ifndef _DECL_liveVizPoll_H_
#define _DECL_liveVizPoll_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_liveVizPollArray myGroupProxy;
 */

/* DECLS: group liveVizPollArray: IrrGroup{
liveVizPollArray();
void combine(CkReductionMsg* impl_msg);
void request(liveVizRequestMsg* impl_msg);
void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
};
 */
 class liveVizPollArray;
 class CkIndex_liveVizPollArray;
 class CProxy_liveVizPollArray;
 class CProxyElement_liveVizPollArray;
 class CProxySection_liveVizPollArray;
/* --------------- index object ------------------ */
class CkIndex_liveVizPollArray:public CkIndex_IrrGroup{
  public:
    typedef liveVizPollArray local_t;
    typedef CkIndex_liveVizPollArray index_t;
    typedef CProxy_liveVizPollArray proxy_t;
    typedef CProxyElement_liveVizPollArray element_t;
    typedef CProxySection_liveVizPollArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: liveVizPollArray();
     */
    // Entry point registration at startup
    
    static int reg_liveVizPollArray_void();
    // Entry point index lookup
    
    inline static int idx_liveVizPollArray_void() {
      static int epidx = reg_liveVizPollArray_void();
      return epidx;
    }

    
    static int ckNew() { return idx_liveVizPollArray_void(); }
    
    static void _call_liveVizPollArray_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizPollArray_void(void* impl_msg, void* impl_obj);
    /* DECLS: void combine(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_combine_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_combine_CkReductionMsg() {
      static int epidx = reg_combine_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_combine(void (liveVizPollArray::*)(CkReductionMsg* impl_msg) ) {
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
    /* DECLS: void request(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_request_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_request_liveVizRequestMsg() {
      static int epidx = reg_request_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_request(void (liveVizPollArray::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_request_liveVizRequestMsg();
    }


    
    static int request(liveVizRequestMsg* impl_msg) { return idx_request_liveVizRequestMsg(); }
    
    static void _call_request_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_request_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
     */
    // Entry point registration at startup
    
    static int reg_liveVizPoll0Deposit_marshall4();
    // Entry point index lookup
    
    inline static int idx_liveVizPoll0Deposit_marshall4() {
      static int epidx = reg_liveVizPoll0Deposit_marshall4();
      return epidx;
    }

    
    inline static int idx_liveVizPoll0Deposit(void (liveVizPollArray::*)(int wid, int ht, int bpp, int len, const byte *imageData) ) {
      return idx_liveVizPoll0Deposit_marshall4();
    }


    
    static int liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData) { return idx_liveVizPoll0Deposit_marshall4(); }
    
    static void _call_liveVizPoll0Deposit_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizPoll0Deposit_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_liveVizPoll0Deposit_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_liveVizPoll0Deposit_marshall4(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_liveVizPollArray: public CProxyElement_IrrGroup{
  public:
    typedef liveVizPollArray local_t;
    typedef CkIndex_liveVizPollArray index_t;
    typedef CProxy_liveVizPollArray proxy_t;
    typedef CProxyElement_liveVizPollArray element_t;
    typedef CProxySection_liveVizPollArray section_t;


    /* TRAM aggregators */

    CProxyElement_liveVizPollArray(void) {
    }
    CProxyElement_liveVizPollArray(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_liveVizPollArray(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_liveVizPollArray(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    liveVizPollArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizPollArray* ckLocalBranch(CkGroupID gID) {
      return (liveVizPollArray*)CkLocalBranch(gID);
    }
/* DECLS: liveVizPollArray();
 */
    

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);

/* DECLS: void request(liveVizRequestMsg* impl_msg);
 */
    
    void request(liveVizRequestMsg* impl_msg);

/* DECLS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
    
    void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_liveVizPollArray: public CProxy_IrrGroup{
  public:
    typedef liveVizPollArray local_t;
    typedef CkIndex_liveVizPollArray index_t;
    typedef CProxy_liveVizPollArray proxy_t;
    typedef CProxyElement_liveVizPollArray element_t;
    typedef CProxySection_liveVizPollArray section_t;

    CProxy_liveVizPollArray(void) {
    }
    CProxy_liveVizPollArray(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_liveVizPollArray(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_liveVizPollArray(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_liveVizPollArray operator[](int onPE) const
      {return CProxyElement_liveVizPollArray(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    liveVizPollArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizPollArray* ckLocalBranch(CkGroupID gID) {
      return (liveVizPollArray*)CkLocalBranch(gID);
    }
/* DECLS: liveVizPollArray();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);
    
    void combine(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void combine(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void request(liveVizRequestMsg* impl_msg);
 */
    
    void request(liveVizRequestMsg* impl_msg);
    
    void request(liveVizRequestMsg* impl_msg, int npes, int *pes);
    
    void request(liveVizRequestMsg* impl_msg, CmiGroup &grp);

/* DECLS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
    
    void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts=NULL);
    
    void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_liveVizPollArray: public CProxySection_IrrGroup{
  public:
    typedef liveVizPollArray local_t;
    typedef CkIndex_liveVizPollArray index_t;
    typedef CProxy_liveVizPollArray proxy_t;
    typedef CProxyElement_liveVizPollArray element_t;
    typedef CProxySection_liveVizPollArray section_t;

    CProxySection_liveVizPollArray(void) {
    }
    CProxySection_liveVizPollArray(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_liveVizPollArray(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_liveVizPollArray(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_liveVizPollArray(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_liveVizPollArray(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    liveVizPollArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static liveVizPollArray* ckLocalBranch(CkGroupID gID) {
      return (liveVizPollArray*)CkLocalBranch(gID);
    }
/* DECLS: liveVizPollArray();
 */
    

/* DECLS: void combine(CkReductionMsg* impl_msg);
 */
    
    void combine(CkReductionMsg* impl_msg);

/* DECLS: void request(liveVizRequestMsg* impl_msg);
 */
    
    void request(liveVizRequestMsg* impl_msg);

/* DECLS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
    
    void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts=NULL);

};
#define liveVizPollArray_SDAG_CODE 
typedef CBaseT1<Group, CProxy_liveVizPollArray>CBase_liveVizPollArray;


/* ---------------- method closures -------------- */
class Closure_liveVizPollArray {
  public:




    struct liveVizPoll0Deposit_4_closure;

};

extern void _registerliveVizPoll(void);
#endif
