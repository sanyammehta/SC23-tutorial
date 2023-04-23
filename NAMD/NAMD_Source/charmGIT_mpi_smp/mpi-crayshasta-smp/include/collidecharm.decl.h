#ifndef _DECL_collidecharm_H_
#define _DECL_collidecharm_H_
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
/* DECLS: message objListMsg;
 */
class objListMsg;
class CMessage_objListMsg:public CkMessage{
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
    CMessage_objListMsg();
    static void *pack(objListMsg *p);
    static objListMsg* unpack(void* p);
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

/* DECLS: group collideClient: IrrGroup;
 */
 class collideClient;
 class CkIndex_collideClient;
 class CProxy_collideClient;
 class CProxyElement_collideClient;
 class CProxySection_collideClient;
/* --------------- index object ------------------ */
class CkIndex_collideClient:public CkIndex_IrrGroup{
  public:
    typedef collideClient local_t;
    typedef CkIndex_collideClient index_t;
    typedef CProxy_collideClient proxy_t;
    typedef CProxyElement_collideClient element_t;
    typedef CProxySection_collideClient section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
};
/* --------------- element proxy ------------------ */
class CProxyElement_collideClient: public CProxyElement_IrrGroup{
  public:
    typedef collideClient local_t;
    typedef CkIndex_collideClient index_t;
    typedef CProxy_collideClient proxy_t;
    typedef CProxyElement_collideClient element_t;
    typedef CProxySection_collideClient section_t;


    /* TRAM aggregators */

    CProxyElement_collideClient(void) {
    }
    CProxyElement_collideClient(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_collideClient(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_collideClient(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    collideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideClient* ckLocalBranch(CkGroupID gID) {
      return (collideClient*)CkLocalBranch(gID);
    }
};
/* ---------------- collective proxy -------------- */
class CProxy_collideClient: public CProxy_IrrGroup{
  public:
    typedef collideClient local_t;
    typedef CkIndex_collideClient index_t;
    typedef CProxy_collideClient proxy_t;
    typedef CProxyElement_collideClient element_t;
    typedef CProxySection_collideClient section_t;

    CProxy_collideClient(void) {
    }
    CProxy_collideClient(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_collideClient(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_collideClient(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_collideClient operator[](int onPE) const
      {return CProxyElement_collideClient(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    collideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideClient* ckLocalBranch(CkGroupID gID) {
      return (collideClient*)CkLocalBranch(gID);
    }
};
/* ---------------- section proxy -------------- */
class CProxySection_collideClient: public CProxySection_IrrGroup{
  public:
    typedef collideClient local_t;
    typedef CkIndex_collideClient index_t;
    typedef CProxy_collideClient proxy_t;
    typedef CProxyElement_collideClient element_t;
    typedef CProxySection_collideClient section_t;

    CProxySection_collideClient(void) {
    }
    CProxySection_collideClient(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_collideClient(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_collideClient(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_collideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_collideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    collideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideClient* ckLocalBranch(CkGroupID gID) {
      return (collideClient*)CkLocalBranch(gID);
    }
};
typedef CBaseT1<Group, CProxy_collideClient>CBase_collideClient;

/* DECLS: group serialCollideClient: collideClient{
serialCollideClient();
serialCollideClient(const CkCallback &clientCb_);
void reductionDone(CkReductionMsg* impl_msg);
};
 */
 class serialCollideClient;
 class CkIndex_serialCollideClient;
 class CProxy_serialCollideClient;
 class CProxyElement_serialCollideClient;
 class CProxySection_serialCollideClient;
/* --------------- index object ------------------ */
class CkIndex_serialCollideClient:public CkIndex_collideClient{
  public:
    typedef serialCollideClient local_t;
    typedef CkIndex_serialCollideClient index_t;
    typedef CProxy_serialCollideClient proxy_t;
    typedef CProxyElement_serialCollideClient element_t;
    typedef CProxySection_serialCollideClient section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: serialCollideClient();
     */
    // Entry point registration at startup
    
    static int reg_serialCollideClient_void();
    // Entry point index lookup
    
    inline static int idx_serialCollideClient_void() {
      static int epidx = reg_serialCollideClient_void();
      return epidx;
    }

    
    static int ckNew() { return idx_serialCollideClient_void(); }
    
    static void _call_serialCollideClient_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_serialCollideClient_void(void* impl_msg, void* impl_obj);
    /* DECLS: serialCollideClient(const CkCallback &clientCb_);
     */
    // Entry point registration at startup
    
    static int reg_serialCollideClient_marshall2();
    // Entry point index lookup
    
    inline static int idx_serialCollideClient_marshall2() {
      static int epidx = reg_serialCollideClient_marshall2();
      return epidx;
    }

    
    static int ckNew(const CkCallback &clientCb_) { return idx_serialCollideClient_marshall2(); }
    
    static void _call_serialCollideClient_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_serialCollideClient_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_serialCollideClient_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_serialCollideClient_marshall2(PUP::er &p,void *msg);
    /* DECLS: void reductionDone(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_reductionDone_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_reductionDone_CkReductionMsg() {
      static int epidx = reg_reductionDone_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_reductionDone(void (serialCollideClient::*)(CkReductionMsg* impl_msg) ) {
      return idx_reductionDone_CkReductionMsg();
    }


    
    static int reductionDone(CkReductionMsg* impl_msg) { return idx_reductionDone_CkReductionMsg(); }
    
    static void _call_reductionDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reductionDone_CkReductionMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_serialCollideClient: public CProxyElement_collideClient{
  public:
    typedef serialCollideClient local_t;
    typedef CkIndex_serialCollideClient index_t;
    typedef CProxy_serialCollideClient proxy_t;
    typedef CProxyElement_serialCollideClient element_t;
    typedef CProxySection_serialCollideClient section_t;


    /* TRAM aggregators */

    CProxyElement_serialCollideClient(void) {
    }
    CProxyElement_serialCollideClient(const IrrGroup *g) : CProxyElement_collideClient(g){
    }
    CProxyElement_serialCollideClient(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_collideClient(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_serialCollideClient(CkGroupID _gid,int _onPE) : CProxyElement_collideClient(_gid,_onPE){
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
    serialCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static serialCollideClient* ckLocalBranch(CkGroupID gID) {
      return (serialCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: serialCollideClient();
 */
    

/* DECLS: serialCollideClient(const CkCallback &clientCb_);
 */
    

/* DECLS: void reductionDone(CkReductionMsg* impl_msg);
 */
    
    void reductionDone(CkReductionMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_serialCollideClient: public CProxy_collideClient{
  public:
    typedef serialCollideClient local_t;
    typedef CkIndex_serialCollideClient index_t;
    typedef CProxy_serialCollideClient proxy_t;
    typedef CProxyElement_serialCollideClient element_t;
    typedef CProxySection_serialCollideClient section_t;

    CProxy_serialCollideClient(void) {
    }
    CProxy_serialCollideClient(const IrrGroup *g) : CProxy_collideClient(g){
    }
    CProxy_serialCollideClient(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_collideClient(_gid,CK_DELCTOR_ARGS){  }
    CProxy_serialCollideClient(CkGroupID _gid) : CProxy_collideClient(_gid){  }
    CProxyElement_serialCollideClient operator[](int onPE) const
      {return CProxyElement_serialCollideClient(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    serialCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static serialCollideClient* ckLocalBranch(CkGroupID gID) {
      return (serialCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: serialCollideClient();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: serialCollideClient(const CkCallback &clientCb_);
 */
    
    static CkGroupID ckNew(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_serialCollideClient(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reductionDone(CkReductionMsg* impl_msg);
 */
    
    void reductionDone(CkReductionMsg* impl_msg);
    
    void reductionDone(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void reductionDone(CkReductionMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_serialCollideClient: public CProxySection_collideClient{
  public:
    typedef serialCollideClient local_t;
    typedef CkIndex_serialCollideClient index_t;
    typedef CProxy_serialCollideClient proxy_t;
    typedef CProxyElement_serialCollideClient element_t;
    typedef CProxySection_serialCollideClient section_t;

    CProxySection_serialCollideClient(void) {
    }
    CProxySection_serialCollideClient(const IrrGroup *g) : CProxySection_collideClient(g){
    }
    CProxySection_serialCollideClient(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_serialCollideClient(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(_gid,_pelist,_npes,factor){  }
    CProxySection_serialCollideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(n,_gid,_pelist,_npes,factor){  }
    CProxySection_serialCollideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    serialCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static serialCollideClient* ckLocalBranch(CkGroupID gID) {
      return (serialCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: serialCollideClient();
 */
    

/* DECLS: serialCollideClient(const CkCallback &clientCb_);
 */
    

/* DECLS: void reductionDone(CkReductionMsg* impl_msg);
 */
    
    void reductionDone(CkReductionMsg* impl_msg);

};
#define serialCollideClient_SDAG_CODE 
typedef CBaseT1<collideClient, CProxy_serialCollideClient>CBase_serialCollideClient;

/* DECLS: group distributedCollideClient: collideClient{
distributedCollideClient(const CkCallback &clientCb_);
};
 */
 class distributedCollideClient;
 class CkIndex_distributedCollideClient;
 class CProxy_distributedCollideClient;
 class CProxyElement_distributedCollideClient;
 class CProxySection_distributedCollideClient;
/* --------------- index object ------------------ */
class CkIndex_distributedCollideClient:public CkIndex_collideClient{
  public:
    typedef distributedCollideClient local_t;
    typedef CkIndex_distributedCollideClient index_t;
    typedef CProxy_distributedCollideClient proxy_t;
    typedef CProxyElement_distributedCollideClient element_t;
    typedef CProxySection_distributedCollideClient section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: distributedCollideClient(const CkCallback &clientCb_);
     */
    // Entry point registration at startup
    
    static int reg_distributedCollideClient_marshall1();
    // Entry point index lookup
    
    inline static int idx_distributedCollideClient_marshall1() {
      static int epidx = reg_distributedCollideClient_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkCallback &clientCb_) { return idx_distributedCollideClient_marshall1(); }
    
    static void _call_distributedCollideClient_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_distributedCollideClient_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_distributedCollideClient_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_distributedCollideClient_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_distributedCollideClient: public CProxyElement_collideClient{
  public:
    typedef distributedCollideClient local_t;
    typedef CkIndex_distributedCollideClient index_t;
    typedef CProxy_distributedCollideClient proxy_t;
    typedef CProxyElement_distributedCollideClient element_t;
    typedef CProxySection_distributedCollideClient section_t;


    /* TRAM aggregators */

    CProxyElement_distributedCollideClient(void) {
    }
    CProxyElement_distributedCollideClient(const IrrGroup *g) : CProxyElement_collideClient(g){
    }
    CProxyElement_distributedCollideClient(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_collideClient(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_distributedCollideClient(CkGroupID _gid,int _onPE) : CProxyElement_collideClient(_gid,_onPE){
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
    distributedCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static distributedCollideClient* ckLocalBranch(CkGroupID gID) {
      return (distributedCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: distributedCollideClient(const CkCallback &clientCb_);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_distributedCollideClient: public CProxy_collideClient{
  public:
    typedef distributedCollideClient local_t;
    typedef CkIndex_distributedCollideClient index_t;
    typedef CProxy_distributedCollideClient proxy_t;
    typedef CProxyElement_distributedCollideClient element_t;
    typedef CProxySection_distributedCollideClient section_t;

    CProxy_distributedCollideClient(void) {
    }
    CProxy_distributedCollideClient(const IrrGroup *g) : CProxy_collideClient(g){
    }
    CProxy_distributedCollideClient(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_collideClient(_gid,CK_DELCTOR_ARGS){  }
    CProxy_distributedCollideClient(CkGroupID _gid) : CProxy_collideClient(_gid){  }
    CProxyElement_distributedCollideClient operator[](int onPE) const
      {return CProxyElement_distributedCollideClient(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    distributedCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static distributedCollideClient* ckLocalBranch(CkGroupID gID) {
      return (distributedCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: distributedCollideClient(const CkCallback &clientCb_);
 */
    
    static CkGroupID ckNew(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_distributedCollideClient(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_distributedCollideClient: public CProxySection_collideClient{
  public:
    typedef distributedCollideClient local_t;
    typedef CkIndex_distributedCollideClient index_t;
    typedef CProxy_distributedCollideClient proxy_t;
    typedef CProxyElement_distributedCollideClient element_t;
    typedef CProxySection_distributedCollideClient section_t;

    CProxySection_distributedCollideClient(void) {
    }
    CProxySection_distributedCollideClient(const IrrGroup *g) : CProxySection_collideClient(g){
    }
    CProxySection_distributedCollideClient(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_distributedCollideClient(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(_gid,_pelist,_npes,factor){  }
    CProxySection_distributedCollideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_collideClient(n,_gid,_pelist,_npes,factor){  }
    CProxySection_distributedCollideClient(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_collideClient(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    distributedCollideClient* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static distributedCollideClient* ckLocalBranch(CkGroupID gID) {
      return (distributedCollideClient*)CkLocalBranch(gID);
    }
/* DECLS: distributedCollideClient(const CkCallback &clientCb_);
 */
    

};
#define distributedCollideClient_SDAG_CODE 
typedef CBaseT1<collideClient, CProxy_distributedCollideClient>CBase_distributedCollideClient;

/* DECLS: group collideMgr: IrrGroup{
collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
void voxelMessageRecvd();
void determineNumVoxels();
void reductionFinished();
};
 */
 class collideMgr;
 class CkIndex_collideMgr;
 class CProxy_collideMgr;
 class CProxyElement_collideMgr;
 class CProxySection_collideMgr;
/* --------------- index object ------------------ */
class CkIndex_collideMgr:public CkIndex_IrrGroup{
  public:
    typedef collideMgr local_t;
    typedef CkIndex_collideMgr index_t;
    typedef CProxy_collideMgr proxy_t;
    typedef CProxyElement_collideMgr element_t;
    typedef CProxySection_collideMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
     */
    // Entry point registration at startup
    
    static int reg_collideMgr_marshall1();
    // Entry point index lookup
    
    inline static int idx_collideMgr_marshall1() {
      static int epidx = reg_collideMgr_marshall1();
      return epidx;
    }

    
    static int ckNew(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells) { return idx_collideMgr_marshall1(); }
    
    static void _call_collideMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collideMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collideMgr_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collideMgr_marshall1(PUP::er &p,void *msg);
    /* DECLS: void voxelMessageRecvd();
     */
    // Entry point registration at startup
    
    static int reg_voxelMessageRecvd_void();
    // Entry point index lookup
    
    inline static int idx_voxelMessageRecvd_void() {
      static int epidx = reg_voxelMessageRecvd_void();
      return epidx;
    }

    
    inline static int idx_voxelMessageRecvd(void (collideMgr::*)() ) {
      return idx_voxelMessageRecvd_void();
    }


    
    static int voxelMessageRecvd() { return idx_voxelMessageRecvd_void(); }
    
    static void _call_voxelMessageRecvd_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_voxelMessageRecvd_void(void* impl_msg, void* impl_obj);
    /* DECLS: void determineNumVoxels();
     */
    // Entry point registration at startup
    
    static int reg_determineNumVoxels_void();
    // Entry point index lookup
    
    inline static int idx_determineNumVoxels_void() {
      static int epidx = reg_determineNumVoxels_void();
      return epidx;
    }

    
    inline static int idx_determineNumVoxels(void (collideMgr::*)() ) {
      return idx_determineNumVoxels_void();
    }


    
    static int determineNumVoxels() { return idx_determineNumVoxels_void(); }
    
    static void _call_determineNumVoxels_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_determineNumVoxels_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reductionFinished();
     */
    // Entry point registration at startup
    
    static int reg_reductionFinished_void();
    // Entry point index lookup
    
    inline static int idx_reductionFinished_void() {
      static int epidx = reg_reductionFinished_void();
      return epidx;
    }

    
    inline static int idx_reductionFinished(void (collideMgr::*)() ) {
      return idx_reductionFinished_void();
    }


    
    static int reductionFinished() { return idx_reductionFinished_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reductionFinished_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reductionFinished_void() {
      static int epidx = reg_redn_wrapper_reductionFinished_void();
      return epidx;
    }
    
    static int redn_wrapper_reductionFinished(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reductionFinished_void(); }
    
    static void _call_redn_wrapper_reductionFinished_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_reductionFinished_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reductionFinished_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_collideMgr: public CProxyElement_IrrGroup{
  public:
    typedef collideMgr local_t;
    typedef CkIndex_collideMgr index_t;
    typedef CProxy_collideMgr proxy_t;
    typedef CProxyElement_collideMgr element_t;
    typedef CProxySection_collideMgr section_t;


    /* TRAM aggregators */

    CProxyElement_collideMgr(void) {
    }
    CProxyElement_collideMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_collideMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_collideMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    collideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideMgr* ckLocalBranch(CkGroupID gID) {
      return (collideMgr*)CkLocalBranch(gID);
    }
/* DECLS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
    

/* DECLS: void voxelMessageRecvd();
 */
    
    void voxelMessageRecvd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void determineNumVoxels();
 */
    
    void determineNumVoxels(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reductionFinished();
 */
    
    void reductionFinished(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_collideMgr: public CProxy_IrrGroup{
  public:
    typedef collideMgr local_t;
    typedef CkIndex_collideMgr index_t;
    typedef CProxy_collideMgr proxy_t;
    typedef CProxyElement_collideMgr element_t;
    typedef CProxySection_collideMgr section_t;

    CProxy_collideMgr(void) {
    }
    CProxy_collideMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_collideMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_collideMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_collideMgr operator[](int onPE) const
      {return CProxyElement_collideMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    collideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideMgr* ckLocalBranch(CkGroupID gID) {
      return (collideMgr*)CkLocalBranch(gID);
    }
/* DECLS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
    
    static CkGroupID ckNew(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void voxelMessageRecvd();
 */
    
    void voxelMessageRecvd(const CkEntryOptions *impl_e_opts=NULL);
    
    void voxelMessageRecvd(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void voxelMessageRecvd(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void determineNumVoxels();
 */
    
    void determineNumVoxels(const CkEntryOptions *impl_e_opts=NULL);
    
    void determineNumVoxels(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void determineNumVoxels(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reductionFinished();
 */
    
    void reductionFinished(const CkEntryOptions *impl_e_opts=NULL);
    
    void reductionFinished(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reductionFinished(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_collideMgr: public CProxySection_IrrGroup{
  public:
    typedef collideMgr local_t;
    typedef CkIndex_collideMgr index_t;
    typedef CProxy_collideMgr proxy_t;
    typedef CProxyElement_collideMgr element_t;
    typedef CProxySection_collideMgr section_t;

    CProxySection_collideMgr(void) {
    }
    CProxySection_collideMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_collideMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_collideMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_collideMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_collideMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    collideMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static collideMgr* ckLocalBranch(CkGroupID gID) {
      return (collideMgr*)CkLocalBranch(gID);
    }
/* DECLS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
    

/* DECLS: void voxelMessageRecvd();
 */
    
    void voxelMessageRecvd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void determineNumVoxels();
 */
    
    void determineNumVoxels(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reductionFinished();
 */
    
    void reductionFinished(const CkEntryOptions *impl_e_opts=NULL);

};
#define collideMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_collideMgr>CBase_collideMgr;

/* DECLS: array collideVoxel: ArrayElement{
collideVoxel();
void add(objListMsg* impl_msg);
void initiateCollision(const CProxy_collideMgr &mg);
collideVoxel(CkMigrateMessage* impl_msg);
};
 */
 class collideVoxel;
 class CkIndex_collideVoxel;
 class CProxy_collideVoxel;
 class CProxyElement_collideVoxel;
 class CProxySection_collideVoxel;
/* --------------- index object ------------------ */
class CkIndex_collideVoxel:public CkIndex_ArrayElement{
  public:
    typedef collideVoxel local_t;
    typedef CkIndex_collideVoxel index_t;
    typedef CProxy_collideVoxel proxy_t;
    typedef CProxyElement_collideVoxel element_t;
    typedef CProxySection_collideVoxel section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: collideVoxel();
     */
    // Entry point registration at startup
    
    static int reg_collideVoxel_void();
    // Entry point index lookup
    
    inline static int idx_collideVoxel_void() {
      static int epidx = reg_collideVoxel_void();
      return epidx;
    }

    
    static int ckNew() { return idx_collideVoxel_void(); }
    
    static void _call_collideVoxel_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collideVoxel_void(void* impl_msg, void* impl_obj);
    /* DECLS: void add(objListMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_add_objListMsg();
    // Entry point index lookup
    
    inline static int idx_add_objListMsg() {
      static int epidx = reg_add_objListMsg();
      return epidx;
    }

    
    inline static int idx_add(void (collideVoxel::*)(objListMsg* impl_msg) ) {
      return idx_add_objListMsg();
    }


    
    static int add(objListMsg* impl_msg) { return idx_add_objListMsg(); }
    
    static void _call_add_objListMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_add_objListMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initiateCollision(const CProxy_collideMgr &mg);
     */
    // Entry point registration at startup
    
    static int reg_initiateCollision_marshall3();
    // Entry point index lookup
    
    inline static int idx_initiateCollision_marshall3() {
      static int epidx = reg_initiateCollision_marshall3();
      return epidx;
    }

    
    inline static int idx_initiateCollision(void (collideVoxel::*)(const CProxy_collideMgr &mg) ) {
      return idx_initiateCollision_marshall3();
    }


    
    static int initiateCollision(const CProxy_collideMgr &mg) { return idx_initiateCollision_marshall3(); }
    
    static void _call_initiateCollision_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initiateCollision_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initiateCollision_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initiateCollision_marshall3(PUP::er &p,void *msg);
    /* DECLS: collideVoxel(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_collideVoxel_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_collideVoxel_CkMigrateMessage() {
      static int epidx = reg_collideVoxel_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_collideVoxel_CkMigrateMessage(); }
    
    static void _call_collideVoxel_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collideVoxel_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_collideVoxel : public CProxyElement_ArrayElement{
  public:
    typedef collideVoxel local_t;
    typedef CkIndex_collideVoxel index_t;
    typedef CProxy_collideVoxel proxy_t;
    typedef CProxyElement_collideVoxel element_t;
    typedef CProxySection_collideVoxel section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_collideVoxel(void) {
    }
    CProxyElement_collideVoxel(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    collideVoxel *ckLocal(void) const
    { return (collideVoxel *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_collideVoxel(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_collideVoxel(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_collideVoxel(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_collideVoxel(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: collideVoxel();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void add(objListMsg* impl_msg);
 */
    
    void add(objListMsg* impl_msg) ;

/* DECLS: void initiateCollision(const CProxy_collideMgr &mg);
 */
    
    void initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: collideVoxel(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_collideVoxel : public CProxy_ArrayElement{
  public:
    typedef collideVoxel local_t;
    typedef CkIndex_collideVoxel index_t;
    typedef CProxy_collideVoxel proxy_t;
    typedef CProxyElement_collideVoxel element_t;
    typedef CProxySection_collideVoxel section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_collideVoxel(void) {
    }
    CProxy_collideVoxel(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_collideVoxel operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_collideVoxel(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_collideVoxel operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_collideVoxel(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_collideVoxel operator () (int i0,int i1,int i2) const 
        {return CProxyElement_collideVoxel(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_collideVoxel operator () (CkIndex3D idx) const 
        {return CProxyElement_collideVoxel(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_collideVoxel(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_collideVoxel(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: collideVoxel();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void add(objListMsg* impl_msg);
 */
    
    void add(objListMsg* impl_msg) ;

/* DECLS: void initiateCollision(const CProxy_collideMgr &mg);
 */
    
    void initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: collideVoxel(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_collideVoxel : public CProxySection_ArrayElement{
  public:
    typedef collideVoxel local_t;
    typedef CkIndex_collideVoxel index_t;
    typedef CProxy_collideVoxel proxy_t;
    typedef CProxyElement_collideVoxel element_t;
    typedef CProxySection_collideVoxel section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_collideVoxel(void) {
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
    CProxyElement_collideVoxel operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_collideVoxel(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_collideVoxel operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_collideVoxel(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_collideVoxel operator () (int idx) const 
        {return CProxyElement_collideVoxel(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_collideVoxel(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_collideVoxel(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_collideVoxel(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_collideVoxel(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_collideVoxel(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_collideVoxel(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_collideVoxel(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_collideVoxel(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_collideVoxel(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_collideVoxel(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_collideVoxel(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: collideVoxel();
 */
    

/* DECLS: void add(objListMsg* impl_msg);
 */
    
    void add(objListMsg* impl_msg) ;

/* DECLS: void initiateCollision(const CProxy_collideMgr &mg);
 */
    
    void initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: collideVoxel(CkMigrateMessage* impl_msg);
 */

};
#define collideVoxel_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_collideVoxel>CBase_collideVoxel;


/* ---------------- method closures -------------- */
class Closure_collideClient {
  public:
};

/* ---------------- method closures -------------- */
class Closure_serialCollideClient {
  public:



};

/* ---------------- method closures -------------- */
class Closure_distributedCollideClient {
  public:

};

/* ---------------- method closures -------------- */
class Closure_collideMgr {
  public:


    struct voxelMessageRecvd_2_closure;


    struct determineNumVoxels_3_closure;


    struct reductionFinished_4_closure;

};

/* ---------------- method closures -------------- */
class Closure_collideVoxel {
  public:



    struct initiateCollision_3_closure;


};

extern void _registercollidecharm(void);
#endif
