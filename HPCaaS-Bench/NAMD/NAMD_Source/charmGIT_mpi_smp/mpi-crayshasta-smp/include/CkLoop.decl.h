#ifndef _DECL_CkLoop_H_
#define _DECL_CkLoop_H_
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
/* DECLS: message CharmNotifyMsg;
 */
class CharmNotifyMsg;
class CMessage_CharmNotifyMsg:public CkMessage{
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
    CMessage_CharmNotifyMsg();
    static void *pack(CharmNotifyMsg *p);
    static CharmNotifyMsg* unpack(void* p);
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
/* DECLS: message HelperNotifyMsg;
 */
class HelperNotifyMsg;
class CMessage_HelperNotifyMsg:public CkMessage{
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
    CMessage_HelperNotifyMsg();
    static void *pack(HelperNotifyMsg *p);
    static HelperNotifyMsg* unpack(void* p);
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
/* DECLS: message DestroyNotifyMsg;
 */
class DestroyNotifyMsg;
class CMessage_DestroyNotifyMsg:public CkMessage{
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
    CMessage_DestroyNotifyMsg();
    static void *pack(DestroyNotifyMsg *p);
    static DestroyNotifyMsg* unpack(void* p);
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

/* DECLS: nodegroup FuncCkLoop: NodeGroup{
FuncCkLoop(int mode, int numThreads);
void registerHelper(HelperNotifyMsg* impl_msg);
void exit();
FuncCkLoop(CkMigrateMessage* impl_msg);
};
 */
 class FuncCkLoop;
 class CkIndex_FuncCkLoop;
 class CProxy_FuncCkLoop;
 class CProxyElement_FuncCkLoop;
 class CProxySection_FuncCkLoop;
/* --------------- index object ------------------ */
class CkIndex_FuncCkLoop:public CkIndex_NodeGroup{
  public:
    typedef FuncCkLoop local_t;
    typedef CkIndex_FuncCkLoop index_t;
    typedef CProxy_FuncCkLoop proxy_t;
    typedef CProxyElement_FuncCkLoop element_t;
    typedef CProxySection_FuncCkLoop section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: FuncCkLoop(int mode, int numThreads);
     */
    // Entry point registration at startup
    
    static int reg_FuncCkLoop_marshall1();
    // Entry point index lookup
    
    inline static int idx_FuncCkLoop_marshall1() {
      static int epidx = reg_FuncCkLoop_marshall1();
      return epidx;
    }

    
    static int ckNew(int mode, int numThreads) { return idx_FuncCkLoop_marshall1(); }
    
    static void _call_FuncCkLoop_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FuncCkLoop_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_FuncCkLoop_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_FuncCkLoop_marshall1(PUP::er &p,void *msg);
    /* DECLS: void registerHelper(HelperNotifyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_registerHelper_HelperNotifyMsg();
    // Entry point index lookup
    
    inline static int idx_registerHelper_HelperNotifyMsg() {
      static int epidx = reg_registerHelper_HelperNotifyMsg();
      return epidx;
    }

    
    inline static int idx_registerHelper(void (FuncCkLoop::*)(HelperNotifyMsg* impl_msg) ) {
      return idx_registerHelper_HelperNotifyMsg();
    }


    
    static int registerHelper(HelperNotifyMsg* impl_msg) { return idx_registerHelper_HelperNotifyMsg(); }
    
    static void _call_registerHelper_HelperNotifyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerHelper_HelperNotifyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void exit();
     */
    // Entry point registration at startup
    
    static int reg_exit_void();
    // Entry point index lookup
    
    inline static int idx_exit_void() {
      static int epidx = reg_exit_void();
      return epidx;
    }

    
    inline static int idx_exit(void (FuncCkLoop::*)() ) {
      return idx_exit_void();
    }


    
    static int exit() { return idx_exit_void(); }
    
    static void _call_exit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exit_void(void* impl_msg, void* impl_obj);
    /* DECLS: FuncCkLoop(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FuncCkLoop_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_FuncCkLoop_CkMigrateMessage() {
      static int epidx = reg_FuncCkLoop_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_FuncCkLoop_CkMigrateMessage(); }
    
    static void _call_FuncCkLoop_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FuncCkLoop_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_FuncCkLoop: public CProxyElement_NodeGroup{
  public:
    typedef FuncCkLoop local_t;
    typedef CkIndex_FuncCkLoop index_t;
    typedef CProxy_FuncCkLoop proxy_t;
    typedef CProxyElement_FuncCkLoop element_t;
    typedef CProxySection_FuncCkLoop section_t;


    /* TRAM aggregators */

    CProxyElement_FuncCkLoop(void) {
    }
    CProxyElement_FuncCkLoop(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_FuncCkLoop(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_FuncCkLoop(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    FuncCkLoop* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FuncCkLoop* ckLocalBranch(CkGroupID gID) {
      return (FuncCkLoop*)CkLocalNodeBranch(gID);
    }
/* DECLS: FuncCkLoop(int mode, int numThreads);
 */
    

/* DECLS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
    
    void registerHelper(HelperNotifyMsg* impl_msg);

/* DECLS: void exit();
 */
    
    void exit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_FuncCkLoop: public CProxy_NodeGroup{
  public:
    typedef FuncCkLoop local_t;
    typedef CkIndex_FuncCkLoop index_t;
    typedef CProxy_FuncCkLoop proxy_t;
    typedef CProxyElement_FuncCkLoop element_t;
    typedef CProxySection_FuncCkLoop section_t;

    CProxy_FuncCkLoop(void) {
    }
    CProxy_FuncCkLoop(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_FuncCkLoop(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_FuncCkLoop(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_FuncCkLoop operator[](int onPE) const
      {return CProxyElement_FuncCkLoop(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    FuncCkLoop* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FuncCkLoop* ckLocalBranch(CkGroupID gID) {
      return (FuncCkLoop*)CkLocalNodeBranch(gID);
    }
/* DECLS: FuncCkLoop(int mode, int numThreads);
 */
    
    static CkGroupID ckNew(int mode, int numThreads, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_FuncCkLoop(int mode, int numThreads, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
    
    void registerHelper(HelperNotifyMsg* impl_msg);

/* DECLS: void exit();
 */
    
    void exit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_FuncCkLoop: public CProxySection_NodeGroup{
  public:
    typedef FuncCkLoop local_t;
    typedef CkIndex_FuncCkLoop index_t;
    typedef CProxy_FuncCkLoop proxy_t;
    typedef CProxyElement_FuncCkLoop element_t;
    typedef CProxySection_FuncCkLoop section_t;

    CProxySection_FuncCkLoop(void) {
    }
    CProxySection_FuncCkLoop(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_FuncCkLoop(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_FuncCkLoop(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_FuncCkLoop(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_FuncCkLoop(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    FuncCkLoop* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FuncCkLoop* ckLocalBranch(CkGroupID gID) {
      return (FuncCkLoop*)CkLocalNodeBranch(gID);
    }
/* DECLS: FuncCkLoop(int mode, int numThreads);
 */
    

/* DECLS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
    
    void registerHelper(HelperNotifyMsg* impl_msg);

/* DECLS: void exit();
 */
    
    void exit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */

};
#define FuncCkLoop_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_FuncCkLoop>CBase_FuncCkLoop;

/* DECLS: chare FuncSingleHelper: Chare{
FuncSingleHelper();
void stealWork(CharmNotifyMsg* impl_msg);
void destroyMyself();
FuncSingleHelper(CkMigrateMessage* impl_msg);
};
 */
 class FuncSingleHelper;
 class CkIndex_FuncSingleHelper;
 class CProxy_FuncSingleHelper;
/* --------------- index object ------------------ */
class CkIndex_FuncSingleHelper:public CkIndex_Chare{
  public:
    typedef FuncSingleHelper local_t;
    typedef CkIndex_FuncSingleHelper index_t;
    typedef CProxy_FuncSingleHelper proxy_t;
    typedef CProxy_FuncSingleHelper element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: FuncSingleHelper();
     */
    // Entry point registration at startup
    
    static int reg_FuncSingleHelper_void();
    // Entry point index lookup
    
    inline static int idx_FuncSingleHelper_void() {
      static int epidx = reg_FuncSingleHelper_void();
      return epidx;
    }

    
    static int ckNew() { return idx_FuncSingleHelper_void(); }
    
    static void _call_FuncSingleHelper_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FuncSingleHelper_void(void* impl_msg, void* impl_obj);
    /* DECLS: void stealWork(CharmNotifyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_stealWork_CharmNotifyMsg();
    // Entry point index lookup
    
    inline static int idx_stealWork_CharmNotifyMsg() {
      static int epidx = reg_stealWork_CharmNotifyMsg();
      return epidx;
    }

    
    inline static int idx_stealWork(void (FuncSingleHelper::*)(CharmNotifyMsg* impl_msg) ) {
      return idx_stealWork_CharmNotifyMsg();
    }


    
    static int stealWork(CharmNotifyMsg* impl_msg) { return idx_stealWork_CharmNotifyMsg(); }
    
    static void _call_stealWork_CharmNotifyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_stealWork_CharmNotifyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void destroyMyself();
     */
    // Entry point registration at startup
    
    static int reg_destroyMyself_void();
    // Entry point index lookup
    
    inline static int idx_destroyMyself_void() {
      static int epidx = reg_destroyMyself_void();
      return epidx;
    }

    
    inline static int idx_destroyMyself(void (FuncSingleHelper::*)() ) {
      return idx_destroyMyself_void();
    }


    
    static int destroyMyself() { return idx_destroyMyself_void(); }
    
    static void _call_destroyMyself_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_destroyMyself_void(void* impl_msg, void* impl_obj);
    /* DECLS: FuncSingleHelper(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FuncSingleHelper_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_FuncSingleHelper_CkMigrateMessage() {
      static int epidx = reg_FuncSingleHelper_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_FuncSingleHelper_CkMigrateMessage(); }
    
    static void _call_FuncSingleHelper_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FuncSingleHelper_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_FuncSingleHelper:public CProxy_Chare{
  public:
    typedef FuncSingleHelper local_t;
    typedef CkIndex_FuncSingleHelper index_t;
    typedef CProxy_FuncSingleHelper proxy_t;
    typedef CProxy_FuncSingleHelper element_t;

    CProxy_FuncSingleHelper(void) {};
    CProxy_FuncSingleHelper(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_FuncSingleHelper(const Chare *c) : CProxy_Chare(c){  }

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
    FuncSingleHelper *ckLocal(void) const
    { return (FuncSingleHelper *)CkLocalChare(&ckGetChareID()); }
/* DECLS: FuncSingleHelper();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void stealWork(CharmNotifyMsg* impl_msg);
 */
    
    void stealWork(CharmNotifyMsg* impl_msg);

/* DECLS: void destroyMyself();
 */
    
    void destroyMyself(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: FuncSingleHelper(CkMigrateMessage* impl_msg);
 */

};
#define FuncSingleHelper_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_FuncSingleHelper>CBase_FuncSingleHelper;





/* ---------------- method closures -------------- */
class Closure_FuncCkLoop {
  public:



    struct exit_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_FuncSingleHelper {
  public:



    struct destroyMyself_3_closure;


};

extern void _registerCkLoop(void);
#endif
