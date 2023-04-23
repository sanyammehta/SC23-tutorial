#ifndef _DECL_lv3d0_H_
#define _DECL_lv3d0_H_
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
/* DECLS: message LV3D_ViewpointMsg;
 */
class LV3D_ViewpointMsg;
class CMessage_LV3D_ViewpointMsg:public CkMessage{
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
    CMessage_LV3D_ViewpointMsg();
    static void *pack(LV3D_ViewpointMsg *p);
    static LV3D_ViewpointMsg* unpack(void* p);
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

/* DECLS: readonly int LV3D_disable_ship_prio;
 */

/* DECLS: readonly int LV3D_disable_ship_replace;
 */

/* DECLS: readonly int LV3D_disable_ship_throttle;
 */

/* DECLS: readonly int LV3D_disable_ship;
 */

/* DECLS: readonly int LV3D_dosave_views;
 */

/* DECLS: readonly int LV3D0_toMaster_bytesPer;
 */

/* DECLS: readonly int LV3D0_toMaster_bytesMax;
 */

/* DECLS: readonly int LV3D0_toClient_bytesPer;
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
/* DECLS: message LV3D0_ViewMsg{
unsigned char view[];
}
;
 */
class LV3D0_ViewMsg;
class CMessage_LV3D0_ViewMsg:public CkMessage{
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
    CMessage_LV3D0_ViewMsg();
    static void *pack(LV3D0_ViewMsg *p);
    static LV3D0_ViewMsg* unpack(void* p);
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

/* DECLS: group LV3D0_Manager: IrrGroup{
LV3D0_Manager();
void addView(LV3D0_ViewMsg* impl_msg);
};
 */
 class LV3D0_Manager;
 class CkIndex_LV3D0_Manager;
 class CProxy_LV3D0_Manager;
 class CProxyElement_LV3D0_Manager;
 class CProxySection_LV3D0_Manager;
/* --------------- index object ------------------ */
class CkIndex_LV3D0_Manager:public CkIndex_IrrGroup{
  public:
    typedef LV3D0_Manager local_t;
    typedef CkIndex_LV3D0_Manager index_t;
    typedef CProxy_LV3D0_Manager proxy_t;
    typedef CProxyElement_LV3D0_Manager element_t;
    typedef CProxySection_LV3D0_Manager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LV3D0_Manager();
     */
    // Entry point registration at startup
    
    static int reg_LV3D0_Manager_void();
    // Entry point index lookup
    
    inline static int idx_LV3D0_Manager_void() {
      static int epidx = reg_LV3D0_Manager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LV3D0_Manager_void(); }
    
    static void _call_LV3D0_Manager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D0_Manager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void addView(LV3D0_ViewMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addView_LV3D0_ViewMsg();
    // Entry point index lookup
    
    inline static int idx_addView_LV3D0_ViewMsg() {
      static int epidx = reg_addView_LV3D0_ViewMsg();
      return epidx;
    }

    
    inline static int idx_addView(void (LV3D0_Manager::*)(LV3D0_ViewMsg* impl_msg) ) {
      return idx_addView_LV3D0_ViewMsg();
    }


    
    static int addView(LV3D0_ViewMsg* impl_msg) { return idx_addView_LV3D0_ViewMsg(); }
    
    static void _call_addView_LV3D0_ViewMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addView_LV3D0_ViewMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LV3D0_Manager: public CProxyElement_IrrGroup{
  public:
    typedef LV3D0_Manager local_t;
    typedef CkIndex_LV3D0_Manager index_t;
    typedef CProxy_LV3D0_Manager proxy_t;
    typedef CProxyElement_LV3D0_Manager element_t;
    typedef CProxySection_LV3D0_Manager section_t;


    /* TRAM aggregators */

    CProxyElement_LV3D0_Manager(void) {
    }
    CProxyElement_LV3D0_Manager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LV3D0_Manager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LV3D0_Manager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LV3D0_Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D0_Manager* ckLocalBranch(CkGroupID gID) {
      return (LV3D0_Manager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D0_Manager();
 */
    

/* DECLS: void addView(LV3D0_ViewMsg* impl_msg);
 */
    
    void addView(LV3D0_ViewMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_LV3D0_Manager: public CProxy_IrrGroup{
  public:
    typedef LV3D0_Manager local_t;
    typedef CkIndex_LV3D0_Manager index_t;
    typedef CProxy_LV3D0_Manager proxy_t;
    typedef CProxyElement_LV3D0_Manager element_t;
    typedef CProxySection_LV3D0_Manager section_t;

    CProxy_LV3D0_Manager(void) {
    }
    CProxy_LV3D0_Manager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LV3D0_Manager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LV3D0_Manager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LV3D0_Manager operator[](int onPE) const
      {return CProxyElement_LV3D0_Manager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LV3D0_Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D0_Manager* ckLocalBranch(CkGroupID gID) {
      return (LV3D0_Manager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D0_Manager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void addView(LV3D0_ViewMsg* impl_msg);
 */
    
    void addView(LV3D0_ViewMsg* impl_msg);
    
    void addView(LV3D0_ViewMsg* impl_msg, int npes, int *pes);
    
    void addView(LV3D0_ViewMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_LV3D0_Manager: public CProxySection_IrrGroup{
  public:
    typedef LV3D0_Manager local_t;
    typedef CkIndex_LV3D0_Manager index_t;
    typedef CProxy_LV3D0_Manager proxy_t;
    typedef CProxyElement_LV3D0_Manager element_t;
    typedef CProxySection_LV3D0_Manager section_t;

    CProxySection_LV3D0_Manager(void) {
    }
    CProxySection_LV3D0_Manager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LV3D0_Manager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LV3D0_Manager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D0_Manager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D0_Manager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LV3D0_Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D0_Manager* ckLocalBranch(CkGroupID gID) {
      return (LV3D0_Manager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D0_Manager();
 */
    

/* DECLS: void addView(LV3D0_ViewMsg* impl_msg);
 */
    
    void addView(LV3D0_ViewMsg* impl_msg);

};
#define LV3D0_Manager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LV3D0_Manager>CBase_LV3D0_Manager;

/* DECLS: group LV3D_PerfManager: IrrGroup{
LV3D_PerfManager();
void zero();
void collect();
void traceOn();
void startBalance();
void doneBalance();
void throttle(int throttleOn);
};
 */
 class LV3D_PerfManager;
 class CkIndex_LV3D_PerfManager;
 class CProxy_LV3D_PerfManager;
 class CProxyElement_LV3D_PerfManager;
 class CProxySection_LV3D_PerfManager;
/* --------------- index object ------------------ */
class CkIndex_LV3D_PerfManager:public CkIndex_IrrGroup{
  public:
    typedef LV3D_PerfManager local_t;
    typedef CkIndex_LV3D_PerfManager index_t;
    typedef CProxy_LV3D_PerfManager proxy_t;
    typedef CProxyElement_LV3D_PerfManager element_t;
    typedef CProxySection_LV3D_PerfManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LV3D_PerfManager();
     */
    // Entry point registration at startup
    
    static int reg_LV3D_PerfManager_void();
    // Entry point index lookup
    
    inline static int idx_LV3D_PerfManager_void() {
      static int epidx = reg_LV3D_PerfManager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LV3D_PerfManager_void(); }
    
    static void _call_LV3D_PerfManager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LV3D_PerfManager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void zero();
     */
    // Entry point registration at startup
    
    static int reg_zero_void();
    // Entry point index lookup
    
    inline static int idx_zero_void() {
      static int epidx = reg_zero_void();
      return epidx;
    }

    
    inline static int idx_zero(void (LV3D_PerfManager::*)() ) {
      return idx_zero_void();
    }


    
    static int zero() { return idx_zero_void(); }
    
    static void _call_zero_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_zero_void(void* impl_msg, void* impl_obj);
    /* DECLS: void collect();
     */
    // Entry point registration at startup
    
    static int reg_collect_void();
    // Entry point index lookup
    
    inline static int idx_collect_void() {
      static int epidx = reg_collect_void();
      return epidx;
    }

    
    inline static int idx_collect(void (LV3D_PerfManager::*)() ) {
      return idx_collect_void();
    }


    
    static int collect() { return idx_collect_void(); }
    
    static void _call_collect_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collect_void(void* impl_msg, void* impl_obj);
    /* DECLS: void traceOn();
     */
    // Entry point registration at startup
    
    static int reg_traceOn_void();
    // Entry point index lookup
    
    inline static int idx_traceOn_void() {
      static int epidx = reg_traceOn_void();
      return epidx;
    }

    
    inline static int idx_traceOn(void (LV3D_PerfManager::*)() ) {
      return idx_traceOn_void();
    }


    
    static int traceOn() { return idx_traceOn_void(); }
    
    static void _call_traceOn_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_traceOn_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startBalance();
     */
    // Entry point registration at startup
    
    static int reg_startBalance_void();
    // Entry point index lookup
    
    inline static int idx_startBalance_void() {
      static int epidx = reg_startBalance_void();
      return epidx;
    }

    
    inline static int idx_startBalance(void (LV3D_PerfManager::*)() ) {
      return idx_startBalance_void();
    }


    
    static int startBalance() { return idx_startBalance_void(); }
    
    static void _call_startBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startBalance_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doneBalance();
     */
    // Entry point registration at startup
    
    static int reg_doneBalance_void();
    // Entry point index lookup
    
    inline static int idx_doneBalance_void() {
      static int epidx = reg_doneBalance_void();
      return epidx;
    }

    
    inline static int idx_doneBalance(void (LV3D_PerfManager::*)() ) {
      return idx_doneBalance_void();
    }


    
    static int doneBalance() { return idx_doneBalance_void(); }
    
    static void _call_doneBalance_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneBalance_void(void* impl_msg, void* impl_obj);
    /* DECLS: void throttle(int throttleOn);
     */
    // Entry point registration at startup
    
    static int reg_throttle_marshall7();
    // Entry point index lookup
    
    inline static int idx_throttle_marshall7() {
      static int epidx = reg_throttle_marshall7();
      return epidx;
    }

    
    inline static int idx_throttle(void (LV3D_PerfManager::*)(int throttleOn) ) {
      return idx_throttle_marshall7();
    }


    
    static int throttle(int throttleOn) { return idx_throttle_marshall7(); }
    
    static void _call_throttle_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_throttle_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_throttle_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_throttle_marshall7(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LV3D_PerfManager: public CProxyElement_IrrGroup{
  public:
    typedef LV3D_PerfManager local_t;
    typedef CkIndex_LV3D_PerfManager index_t;
    typedef CProxy_LV3D_PerfManager proxy_t;
    typedef CProxyElement_LV3D_PerfManager element_t;
    typedef CProxySection_LV3D_PerfManager section_t;


    /* TRAM aggregators */

    CProxyElement_LV3D_PerfManager(void) {
    }
    CProxyElement_LV3D_PerfManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LV3D_PerfManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LV3D_PerfManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LV3D_PerfManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D_PerfManager* ckLocalBranch(CkGroupID gID) {
      return (LV3D_PerfManager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D_PerfManager();
 */
    

/* DECLS: void zero();
 */
    
    void zero(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collect();
 */
    
    void collect(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceOn();
 */
    
    void traceOn(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startBalance();
 */
    
    void startBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneBalance();
 */
    
    void doneBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void throttle(int throttleOn);
 */
    
    void throttle(int throttleOn, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_LV3D_PerfManager: public CProxy_IrrGroup{
  public:
    typedef LV3D_PerfManager local_t;
    typedef CkIndex_LV3D_PerfManager index_t;
    typedef CProxy_LV3D_PerfManager proxy_t;
    typedef CProxyElement_LV3D_PerfManager element_t;
    typedef CProxySection_LV3D_PerfManager section_t;

    CProxy_LV3D_PerfManager(void) {
    }
    CProxy_LV3D_PerfManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LV3D_PerfManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LV3D_PerfManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LV3D_PerfManager operator[](int onPE) const
      {return CProxyElement_LV3D_PerfManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LV3D_PerfManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D_PerfManager* ckLocalBranch(CkGroupID gID) {
      return (LV3D_PerfManager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D_PerfManager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void zero();
 */
    
    void zero(const CkEntryOptions *impl_e_opts=NULL);
    
    void zero(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void zero(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collect();
 */
    
    void collect(const CkEntryOptions *impl_e_opts=NULL);
    
    void collect(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void collect(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceOn();
 */
    
    void traceOn(const CkEntryOptions *impl_e_opts=NULL);
    
    void traceOn(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceOn(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startBalance();
 */
    
    void startBalance(const CkEntryOptions *impl_e_opts=NULL);
    
    void startBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneBalance();
 */
    
    void doneBalance(const CkEntryOptions *impl_e_opts=NULL);
    
    void doneBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void doneBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void throttle(int throttleOn);
 */
    
    void throttle(int throttleOn, const CkEntryOptions *impl_e_opts=NULL);
    
    void throttle(int throttleOn, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void throttle(int throttleOn, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_LV3D_PerfManager: public CProxySection_IrrGroup{
  public:
    typedef LV3D_PerfManager local_t;
    typedef CkIndex_LV3D_PerfManager index_t;
    typedef CProxy_LV3D_PerfManager proxy_t;
    typedef CProxyElement_LV3D_PerfManager element_t;
    typedef CProxySection_LV3D_PerfManager section_t;

    CProxySection_LV3D_PerfManager(void) {
    }
    CProxySection_LV3D_PerfManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LV3D_PerfManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LV3D_PerfManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D_PerfManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LV3D_PerfManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LV3D_PerfManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LV3D_PerfManager* ckLocalBranch(CkGroupID gID) {
      return (LV3D_PerfManager*)CkLocalBranch(gID);
    }
/* DECLS: LV3D_PerfManager();
 */
    

/* DECLS: void zero();
 */
    
    void zero(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collect();
 */
    
    void collect(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceOn();
 */
    
    void traceOn(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startBalance();
 */
    
    void startBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneBalance();
 */
    
    void doneBalance(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void throttle(int throttleOn);
 */
    
    void throttle(int throttleOn, const CkEntryOptions *impl_e_opts=NULL);

};
#define LV3D_PerfManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LV3D_PerfManager>CBase_LV3D_PerfManager;













/* ---------------- method closures -------------- */
class Closure_LV3D0_Manager {
  public:


};

/* ---------------- method closures -------------- */
class Closure_LV3D_PerfManager {
  public:


    struct zero_2_closure;


    struct collect_3_closure;


    struct traceOn_4_closure;


    struct startBalance_5_closure;


    struct doneBalance_6_closure;


    struct throttle_7_closure;

};



extern void _registerlv3d0(void);
#endif
