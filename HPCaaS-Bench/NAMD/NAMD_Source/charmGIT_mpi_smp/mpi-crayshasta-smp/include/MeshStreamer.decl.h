#ifndef _DECL_MeshStreamer_H_
#define _DECL_MeshStreamer_H_
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
/* DECLS: template <class dtype> message MeshStreamerMessage{
int destinationPes[];
dtype data[];
}
;
 */
template <class dtype> class MeshStreamerMessage;
template <class dtype> class CMessage_MeshStreamerMessage:public CkMessage{
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
    CMessage_MeshStreamerMessage <dtype> ();
    static void *pack(MeshStreamerMessage <dtype>  *p);
    static MeshStreamerMessage <dtype> * unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
    void *operator new(size_t, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: template <class dtype> group MeshStreamerClient: IrrGroup{
void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
};
 */
template <class dtype>  class MeshStreamerClient;
template <class dtype>  class CkIndex_MeshStreamerClient;
template <class dtype>  class CProxy_MeshStreamerClient;
template <class dtype>  class CProxyElement_MeshStreamerClient;
template <class dtype>  class CProxySection_MeshStreamerClient;
/* --------------- index object ------------------ */
template <class dtype> class CkIndex_MeshStreamerClient:public CkIndex_IrrGroup{
  public:
    typedef MeshStreamerClient <dtype>  local_t;
    typedef CkIndex_MeshStreamerClient <dtype>  index_t;
    typedef CProxy_MeshStreamerClient <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamerClient <dtype>  element_t;
    typedef CProxySection_MeshStreamerClient <dtype>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveCombinedData_MeshStreamerMessage();
    // Entry point index lookup
    
    inline static int idx_receiveCombinedData_MeshStreamerMessage() {
      static int epidx = reg_receiveCombinedData_MeshStreamerMessage();
      return epidx;
    }

    
    inline static int idx_receiveCombinedData(void (MeshStreamerClient <dtype> ::*)(MeshStreamerMessage<dtype>* impl_msg) ) {
      return idx_receiveCombinedData_MeshStreamerMessage();
    }


    
    static int receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg) { return idx_receiveCombinedData_MeshStreamerMessage(); }
    
    static void _call_receiveCombinedData_MeshStreamerMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveCombinedData_MeshStreamerMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class dtype> class CProxyElement_MeshStreamerClient: public CProxyElement_IrrGroup{
  public:
    typedef MeshStreamerClient <dtype>  local_t;
    typedef CkIndex_MeshStreamerClient <dtype>  index_t;
    typedef CProxy_MeshStreamerClient <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamerClient <dtype>  element_t;
    typedef CProxySection_MeshStreamerClient <dtype>  section_t;


    /* TRAM aggregators */

    CProxyElement_MeshStreamerClient(void) {
    }
    CProxyElement_MeshStreamerClient(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MeshStreamerClient(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MeshStreamerClient(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MeshStreamerClient <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamerClient <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamerClient <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);

};
/* ---------------- collective proxy -------------- */
template <class dtype> class CProxy_MeshStreamerClient: public CProxy_IrrGroup{
  public:
    typedef MeshStreamerClient <dtype>  local_t;
    typedef CkIndex_MeshStreamerClient <dtype>  index_t;
    typedef CProxy_MeshStreamerClient <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamerClient <dtype>  element_t;
    typedef CProxySection_MeshStreamerClient <dtype>  section_t;

    CProxy_MeshStreamerClient(void) {
    }
    CProxy_MeshStreamerClient(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MeshStreamerClient(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MeshStreamerClient(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MeshStreamerClient <dtype>  operator[](int onPE) const
      {return CProxyElement_MeshStreamerClient <dtype> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MeshStreamerClient <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamerClient <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamerClient <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
    
    void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg, int npes, int *pes);
    
    void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
template <class dtype> class CProxySection_MeshStreamerClient: public CProxySection_IrrGroup{
  public:
    typedef MeshStreamerClient <dtype>  local_t;
    typedef CkIndex_MeshStreamerClient <dtype>  index_t;
    typedef CProxy_MeshStreamerClient <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamerClient <dtype>  element_t;
    typedef CProxySection_MeshStreamerClient <dtype>  section_t;

    CProxySection_MeshStreamerClient(void) {
    }
    CProxySection_MeshStreamerClient(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MeshStreamerClient(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MeshStreamerClient(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamerClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamerClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MeshStreamerClient <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamerClient <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamerClient <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);

};
#define MeshStreamerClient_SDAG_CODE 
template <class dtype> 
struct CBase_MeshStreamerClient;

/* DECLS: template <class dtype> group MeshStreamer: IrrGroup{
MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
void flushDirect();
void finish(CkReductionMsg* impl_msg);
};
 */
template <class dtype>  class MeshStreamer;
template <class dtype>  class CkIndex_MeshStreamer;
template <class dtype>  class CProxy_MeshStreamer;
template <class dtype>  class CProxyElement_MeshStreamer;
template <class dtype>  class CProxySection_MeshStreamer;
/* --------------- index object ------------------ */
template <class dtype> class CkIndex_MeshStreamer:public CkIndex_IrrGroup{
  public:
    typedef MeshStreamer <dtype>  local_t;
    typedef CkIndex_MeshStreamer <dtype>  index_t;
    typedef CProxy_MeshStreamer <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype>  element_t;
    typedef CProxySection_MeshStreamer <dtype>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
     */
    // Entry point registration at startup
    
    static int reg_MeshStreamer_marshall1();
    // Entry point index lookup
    
    inline static int idx_MeshStreamer_marshall1() {
      static int epidx = reg_MeshStreamer_marshall1();
      return epidx;
    }

    
    static int ckNew(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag = 0, double progressPeriodInMs = -1.0) { return idx_MeshStreamer_marshall1(); }
    
    static void _call_MeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MeshStreamer_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MeshStreamer_marshall1(PUP::er &p,void *msg);
    /* DECLS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveAggregateData_MeshStreamerMessage();
    // Entry point index lookup
    
    inline static int idx_receiveAggregateData_MeshStreamerMessage() {
      static int epidx = reg_receiveAggregateData_MeshStreamerMessage();
      return epidx;
    }

    
    inline static int idx_receiveAggregateData(void (MeshStreamer <dtype> ::*)(MeshStreamerMessage<dtype>* impl_msg) ) {
      return idx_receiveAggregateData_MeshStreamerMessage();
    }


    
    static int receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg) { return idx_receiveAggregateData_MeshStreamerMessage(); }
    
    static void _call_receiveAggregateData_MeshStreamerMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveAggregateData_MeshStreamerMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void flushDirect();
     */
    // Entry point registration at startup
    
    static int reg_flushDirect_void();
    // Entry point index lookup
    
    inline static int idx_flushDirect_void() {
      static int epidx = reg_flushDirect_void();
      return epidx;
    }

    
    inline static int idx_flushDirect(void (MeshStreamer <dtype> ::*)() ) {
      return idx_flushDirect_void();
    }


    
    static int flushDirect() { return idx_flushDirect_void(); }
    
    static void _call_flushDirect_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flushDirect_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finish(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finish_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_finish_CkReductionMsg() {
      static int epidx = reg_finish_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_finish(void (MeshStreamer <dtype> ::*)(CkReductionMsg* impl_msg) ) {
      return idx_finish_CkReductionMsg();
    }


    
    static int finish(CkReductionMsg* impl_msg) { return idx_finish_CkReductionMsg(); }
    
    static void _call_finish_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finish_CkReductionMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class dtype> class CProxyElement_MeshStreamer: public CProxyElement_IrrGroup{
  public:
    typedef MeshStreamer <dtype>  local_t;
    typedef CkIndex_MeshStreamer <dtype>  index_t;
    typedef CProxy_MeshStreamer <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype>  element_t;
    typedef CProxySection_MeshStreamer <dtype>  section_t;


    /* TRAM aggregators */

    CProxyElement_MeshStreamer(void) {
    }
    CProxyElement_MeshStreamer(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MeshStreamer(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MeshStreamer(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MeshStreamer <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
    

/* DECLS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);

/* DECLS: void flushDirect();
 */
    
    void flushDirect(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish(CkReductionMsg* impl_msg);
 */
    
    void finish(CkReductionMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
template <class dtype> class CProxy_MeshStreamer: public CProxy_IrrGroup{
  public:
    typedef MeshStreamer <dtype>  local_t;
    typedef CkIndex_MeshStreamer <dtype>  index_t;
    typedef CProxy_MeshStreamer <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype>  element_t;
    typedef CProxySection_MeshStreamer <dtype>  section_t;

    CProxy_MeshStreamer(void) {
    }
    CProxy_MeshStreamer(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MeshStreamer(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MeshStreamer(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MeshStreamer <dtype>  operator[](int onPE) const
      {return CProxyElement_MeshStreamer <dtype> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MeshStreamer <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
    
    static CkGroupID ckNew(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag = 0, double progressPeriodInMs = -1.0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag = 0, double progressPeriodInMs = -1.0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
    
    void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg, int npes, int *pes);
    
    void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg, CmiGroup &grp);

/* DECLS: void flushDirect();
 */
    
    void flushDirect(const CkEntryOptions *impl_e_opts=NULL);
    
    void flushDirect(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void flushDirect(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish(CkReductionMsg* impl_msg);
 */
    
    void finish(CkReductionMsg* impl_msg);
    
    void finish(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void finish(CkReductionMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
template <class dtype> class CProxySection_MeshStreamer: public CProxySection_IrrGroup{
  public:
    typedef MeshStreamer <dtype>  local_t;
    typedef CkIndex_MeshStreamer <dtype>  index_t;
    typedef CProxy_MeshStreamer <dtype>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype>  element_t;
    typedef CProxySection_MeshStreamer <dtype>  section_t;

    CProxySection_MeshStreamer(void) {
    }
    CProxySection_MeshStreamer(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MeshStreamer <dtype> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype> *)CkLocalBranch(gID);
    }
/* DECLS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
    

/* DECLS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
    
    void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);

/* DECLS: void flushDirect();
 */
    
    void flushDirect(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish(CkReductionMsg* impl_msg);
 */
    
    void finish(CkReductionMsg* impl_msg);

};
#define MeshStreamer_SDAG_CODE 
template <class dtype> 
struct CBase_MeshStreamer;


/* ---------------- method closures -------------- */
template <class dtype> class Closure_MeshStreamerClient {
  public:

};

/* ---------------- method closures -------------- */
template <class dtype> class Closure_MeshStreamer {
  public:



    struct flushDirect_3_closure;


};

extern void _registerMeshStreamer(void);
#endif
