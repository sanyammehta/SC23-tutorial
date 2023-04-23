#ifndef _DECL_ControlPointsNoTrace_H_
#define _DECL_ControlPointsNoTrace_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_controlPointManager controlPointManagerProxy;
 */

/* DECLS: readonly int random_seed;
 */

/* DECLS: readonly long controlPointSamplePeriod;
 */

/* DECLS: readonly int whichTuningScheme;
 */

/* DECLS: readonly bool shouldGatherMemoryUsage;
 */

/* DECLS: readonly bool shouldGatherUtilization;
 */

/* DECLS: readonly bool shouldGatherAll;
 */

/* DECLS: readonly char CPDataFilename[512];
 */

/* DECLS: readonly bool shouldFilterOutputData;
 */

/* DECLS: readonly bool writeDataFileAtShutdown;
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
/* DECLS: message controlPointMsg{
char data[];
}
;
 */
class controlPointMsg;
class CMessage_controlPointMsg:public CkMessage{
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
    CMessage_controlPointMsg();
    static void *pack(controlPointMsg *p);
    static controlPointMsg* unpack(void* p);
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

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message redistributor2DMsg{
double data[];
}
;
 */
class redistributor2DMsg;
class CMessage_redistributor2DMsg:public CkMessage{
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
    CMessage_redistributor2DMsg();
    static void *pack(redistributor2DMsg *p);
    static redistributor2DMsg* unpack(void* p);
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

/* DECLS: mainchare controlPointMain: Chare{
controlPointMain(CkArgMsg* impl_msg);
};
 */
 class controlPointMain;
 class CkIndex_controlPointMain;
 class CProxy_controlPointMain;
/* --------------- index object ------------------ */
class CkIndex_controlPointMain:public CkIndex_Chare{
  public:
    typedef controlPointMain local_t;
    typedef CkIndex_controlPointMain index_t;
    typedef CProxy_controlPointMain proxy_t;
    typedef CProxy_controlPointMain element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: controlPointMain(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_controlPointMain_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_controlPointMain_CkArgMsg() {
      static int epidx = reg_controlPointMain_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_controlPointMain_CkArgMsg(); }
    
    static void _call_controlPointMain_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_controlPointMain_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_controlPointMain:public CProxy_Chare{
  public:
    typedef controlPointMain local_t;
    typedef CkIndex_controlPointMain index_t;
    typedef CProxy_controlPointMain proxy_t;
    typedef CProxy_controlPointMain element_t;

    CProxy_controlPointMain(void) {};
    CProxy_controlPointMain(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_controlPointMain(const Chare *c) : CProxy_Chare(c){  }

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
    controlPointMain *ckLocal(void) const
    { return (controlPointMain *)CkLocalChare(&ckGetChareID()); }
/* DECLS: controlPointMain(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define controlPointMain_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_controlPointMain>CBase_controlPointMain;


/* DECLS: group controlPointManager: IrrGroup{
controlPointManager();
void requestMemoryUsage(const CkCallback &cb);
void gatherMemoryUsage(CkReductionMsg* impl_msg);
void requestIdleTime(const CkCallback &cb);
void gatherIdleTime(CkReductionMsg* impl_msg);
void requestAll(const CkCallback &cb);
void gatherAll(CkReductionMsg* impl_msg);
controlPointManager(CkMigrateMessage* impl_msg);
};
 */
 class controlPointManager;
 class CkIndex_controlPointManager;
 class CProxy_controlPointManager;
 class CProxyElement_controlPointManager;
 class CProxySection_controlPointManager;
/* --------------- index object ------------------ */
class CkIndex_controlPointManager:public CkIndex_IrrGroup{
  public:
    typedef controlPointManager local_t;
    typedef CkIndex_controlPointManager index_t;
    typedef CProxy_controlPointManager proxy_t;
    typedef CProxyElement_controlPointManager element_t;
    typedef CProxySection_controlPointManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: controlPointManager();
     */
    // Entry point registration at startup
    
    static int reg_controlPointManager_void();
    // Entry point index lookup
    
    inline static int idx_controlPointManager_void() {
      static int epidx = reg_controlPointManager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_controlPointManager_void(); }
    
    static void _call_controlPointManager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_controlPointManager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void requestMemoryUsage(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_requestMemoryUsage_marshall2();
    // Entry point index lookup
    
    inline static int idx_requestMemoryUsage_marshall2() {
      static int epidx = reg_requestMemoryUsage_marshall2();
      return epidx;
    }

    
    inline static int idx_requestMemoryUsage(void (controlPointManager::*)(const CkCallback &cb) ) {
      return idx_requestMemoryUsage_marshall2();
    }


    
    static int requestMemoryUsage(const CkCallback &cb) { return idx_requestMemoryUsage_marshall2(); }
    
    static void _call_requestMemoryUsage_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestMemoryUsage_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestMemoryUsage_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestMemoryUsage_marshall2(PUP::er &p,void *msg);
    /* DECLS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_gatherMemoryUsage_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_gatherMemoryUsage_CkReductionMsg() {
      static int epidx = reg_gatherMemoryUsage_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_gatherMemoryUsage(void (controlPointManager::*)(CkReductionMsg* impl_msg) ) {
      return idx_gatherMemoryUsage_CkReductionMsg();
    }


    
    static int gatherMemoryUsage(CkReductionMsg* impl_msg) { return idx_gatherMemoryUsage_CkReductionMsg(); }
    
    static void _call_gatherMemoryUsage_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gatherMemoryUsage_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void requestIdleTime(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_requestIdleTime_marshall4();
    // Entry point index lookup
    
    inline static int idx_requestIdleTime_marshall4() {
      static int epidx = reg_requestIdleTime_marshall4();
      return epidx;
    }

    
    inline static int idx_requestIdleTime(void (controlPointManager::*)(const CkCallback &cb) ) {
      return idx_requestIdleTime_marshall4();
    }


    
    static int requestIdleTime(const CkCallback &cb) { return idx_requestIdleTime_marshall4(); }
    
    static void _call_requestIdleTime_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestIdleTime_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestIdleTime_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestIdleTime_marshall4(PUP::er &p,void *msg);
    /* DECLS: void gatherIdleTime(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_gatherIdleTime_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_gatherIdleTime_CkReductionMsg() {
      static int epidx = reg_gatherIdleTime_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_gatherIdleTime(void (controlPointManager::*)(CkReductionMsg* impl_msg) ) {
      return idx_gatherIdleTime_CkReductionMsg();
    }


    
    static int gatherIdleTime(CkReductionMsg* impl_msg) { return idx_gatherIdleTime_CkReductionMsg(); }
    
    static void _call_gatherIdleTime_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gatherIdleTime_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void requestAll(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_requestAll_marshall6();
    // Entry point index lookup
    
    inline static int idx_requestAll_marshall6() {
      static int epidx = reg_requestAll_marshall6();
      return epidx;
    }

    
    inline static int idx_requestAll(void (controlPointManager::*)(const CkCallback &cb) ) {
      return idx_requestAll_marshall6();
    }


    
    static int requestAll(const CkCallback &cb) { return idx_requestAll_marshall6(); }
    
    static void _call_requestAll_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestAll_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestAll_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestAll_marshall6(PUP::er &p,void *msg);
    /* DECLS: void gatherAll(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_gatherAll_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_gatherAll_CkReductionMsg() {
      static int epidx = reg_gatherAll_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_gatherAll(void (controlPointManager::*)(CkReductionMsg* impl_msg) ) {
      return idx_gatherAll_CkReductionMsg();
    }


    
    static int gatherAll(CkReductionMsg* impl_msg) { return idx_gatherAll_CkReductionMsg(); }
    
    static void _call_gatherAll_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gatherAll_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: controlPointManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_controlPointManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_controlPointManager_CkMigrateMessage() {
      static int epidx = reg_controlPointManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_controlPointManager_CkMigrateMessage(); }
    
    static void _call_controlPointManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_controlPointManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_controlPointManager: public CProxyElement_IrrGroup{
  public:
    typedef controlPointManager local_t;
    typedef CkIndex_controlPointManager index_t;
    typedef CProxy_controlPointManager proxy_t;
    typedef CProxyElement_controlPointManager element_t;
    typedef CProxySection_controlPointManager section_t;


    /* TRAM aggregators */

    CProxyElement_controlPointManager(void) {
    }
    CProxyElement_controlPointManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_controlPointManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_controlPointManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    controlPointManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static controlPointManager* ckLocalBranch(CkGroupID gID) {
      return (controlPointManager*)CkLocalBranch(gID);
    }
/* DECLS: controlPointManager();
 */
    

/* DECLS: void requestMemoryUsage(const CkCallback &cb);
 */
    
    void requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
    
    void gatherMemoryUsage(CkReductionMsg* impl_msg);

/* DECLS: void requestIdleTime(const CkCallback &cb);
 */
    
    void requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
    
    void gatherIdleTime(CkReductionMsg* impl_msg);

/* DECLS: void requestAll(const CkCallback &cb);
 */
    
    void requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherAll(CkReductionMsg* impl_msg);
 */
    
    void gatherAll(CkReductionMsg* impl_msg);

/* DECLS: controlPointManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_controlPointManager: public CProxy_IrrGroup{
  public:
    typedef controlPointManager local_t;
    typedef CkIndex_controlPointManager index_t;
    typedef CProxy_controlPointManager proxy_t;
    typedef CProxyElement_controlPointManager element_t;
    typedef CProxySection_controlPointManager section_t;

    CProxy_controlPointManager(void) {
    }
    CProxy_controlPointManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_controlPointManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_controlPointManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_controlPointManager operator[](int onPE) const
      {return CProxyElement_controlPointManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    controlPointManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static controlPointManager* ckLocalBranch(CkGroupID gID) {
      return (controlPointManager*)CkLocalBranch(gID);
    }
/* DECLS: controlPointManager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void requestMemoryUsage(const CkCallback &cb);
 */
    
    void requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestMemoryUsage(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestMemoryUsage(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
    
    void gatherMemoryUsage(CkReductionMsg* impl_msg);
    
    void gatherMemoryUsage(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void gatherMemoryUsage(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void requestIdleTime(const CkCallback &cb);
 */
    
    void requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestIdleTime(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestIdleTime(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
    
    void gatherIdleTime(CkReductionMsg* impl_msg);
    
    void gatherIdleTime(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void gatherIdleTime(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void requestAll(const CkCallback &cb);
 */
    
    void requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestAll(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestAll(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherAll(CkReductionMsg* impl_msg);
 */
    
    void gatherAll(CkReductionMsg* impl_msg);
    
    void gatherAll(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void gatherAll(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: controlPointManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_controlPointManager: public CProxySection_IrrGroup{
  public:
    typedef controlPointManager local_t;
    typedef CkIndex_controlPointManager index_t;
    typedef CProxy_controlPointManager proxy_t;
    typedef CProxyElement_controlPointManager element_t;
    typedef CProxySection_controlPointManager section_t;

    CProxySection_controlPointManager(void) {
    }
    CProxySection_controlPointManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_controlPointManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_controlPointManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_controlPointManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_controlPointManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    controlPointManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static controlPointManager* ckLocalBranch(CkGroupID gID) {
      return (controlPointManager*)CkLocalBranch(gID);
    }
/* DECLS: controlPointManager();
 */
    

/* DECLS: void requestMemoryUsage(const CkCallback &cb);
 */
    
    void requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
    
    void gatherMemoryUsage(CkReductionMsg* impl_msg);

/* DECLS: void requestIdleTime(const CkCallback &cb);
 */
    
    void requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
    
    void gatherIdleTime(CkReductionMsg* impl_msg);

/* DECLS: void requestAll(const CkCallback &cb);
 */
    
    void requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherAll(CkReductionMsg* impl_msg);
 */
    
    void gatherAll(CkReductionMsg* impl_msg);

/* DECLS: controlPointManager(CkMigrateMessage* impl_msg);
 */

};
#define controlPointManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_controlPointManager>CBase_controlPointManager;

/* DECLS: array redistributor2D: ArrayElement{
redistributor2D();
void startup();
void resizeGranules(int impl_noname_0, int impl_noname_1);
void receiveTransposeData(redistributor2DMsg* impl_msg);
redistributor2D(CkMigrateMessage* impl_msg);
};
 */
 class redistributor2D;
 class CkIndex_redistributor2D;
 class CProxy_redistributor2D;
 class CProxyElement_redistributor2D;
 class CProxySection_redistributor2D;
/* --------------- index object ------------------ */
class CkIndex_redistributor2D:public CkIndex_ArrayElement{
  public:
    typedef redistributor2D local_t;
    typedef CkIndex_redistributor2D index_t;
    typedef CProxy_redistributor2D proxy_t;
    typedef CProxyElement_redistributor2D element_t;
    typedef CProxySection_redistributor2D section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: redistributor2D();
     */
    // Entry point registration at startup
    
    static int reg_redistributor2D_void();
    // Entry point index lookup
    
    inline static int idx_redistributor2D_void() {
      static int epidx = reg_redistributor2D_void();
      return epidx;
    }

    
    static int ckNew() { return idx_redistributor2D_void(); }
    
    static void _call_redistributor2D_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_redistributor2D_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startup();
     */
    // Entry point registration at startup
    
    static int reg_startup_void();
    // Entry point index lookup
    
    inline static int idx_startup_void() {
      static int epidx = reg_startup_void();
      return epidx;
    }

    
    inline static int idx_startup(void (redistributor2D::*)() ) {
      return idx_startup_void();
    }


    
    static int startup() { return idx_startup_void(); }
    
    static void _call_startup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startup_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resizeGranules(int impl_noname_0, int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_resizeGranules_marshall3();
    // Entry point index lookup
    
    inline static int idx_resizeGranules_marshall3() {
      static int epidx = reg_resizeGranules_marshall3();
      return epidx;
    }

    
    inline static int idx_resizeGranules(void (redistributor2D::*)(int impl_noname_0, int impl_noname_1) ) {
      return idx_resizeGranules_marshall3();
    }


    
    static int resizeGranules(int impl_noname_0, int impl_noname_1) { return idx_resizeGranules_marshall3(); }
    
    static void _call_resizeGranules_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resizeGranules_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_resizeGranules_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_resizeGranules_marshall3(PUP::er &p,void *msg);
    /* DECLS: void receiveTransposeData(redistributor2DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveTransposeData_redistributor2DMsg();
    // Entry point index lookup
    
    inline static int idx_receiveTransposeData_redistributor2DMsg() {
      static int epidx = reg_receiveTransposeData_redistributor2DMsg();
      return epidx;
    }

    
    inline static int idx_receiveTransposeData(void (redistributor2D::*)(redistributor2DMsg* impl_msg) ) {
      return idx_receiveTransposeData_redistributor2DMsg();
    }


    
    static int receiveTransposeData(redistributor2DMsg* impl_msg) { return idx_receiveTransposeData_redistributor2DMsg(); }
    
    static void _call_receiveTransposeData_redistributor2DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveTransposeData_redistributor2DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: redistributor2D(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_redistributor2D_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_redistributor2D_CkMigrateMessage() {
      static int epidx = reg_redistributor2D_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_redistributor2D_CkMigrateMessage(); }
    
    static void _call_redistributor2D_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_redistributor2D_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_redistributor2D : public CProxyElement_ArrayElement{
  public:
    typedef redistributor2D local_t;
    typedef CkIndex_redistributor2D index_t;
    typedef CProxy_redistributor2D proxy_t;
    typedef CProxyElement_redistributor2D element_t;
    typedef CProxySection_redistributor2D section_t;

    using array_index_t = CkArrayIndex2D;

    /* TRAM aggregators */

    CProxyElement_redistributor2D(void) {
    }
    CProxyElement_redistributor2D(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    redistributor2D *ckLocal(void) const
    { return (redistributor2D *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_redistributor2D(const CkArrayID &aid,const CkArrayIndex2D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_redistributor2D(const CkArrayID &aid,const CkArrayIndex2D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_redistributor2D(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_redistributor2D(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: redistributor2D();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
    
    void resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
    
    void receiveTransposeData(redistributor2DMsg* impl_msg) ;

/* DECLS: redistributor2D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_redistributor2D : public CProxy_ArrayElement{
  public:
    typedef redistributor2D local_t;
    typedef CkIndex_redistributor2D index_t;
    typedef CProxy_redistributor2D proxy_t;
    typedef CProxyElement_redistributor2D element_t;
    typedef CProxySection_redistributor2D section_t;

    using array_index_t = CkArrayIndex2D;
    CProxy_redistributor2D(void) {
    }
    CProxy_redistributor2D(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_redistributor2D operator [] (const CkArrayIndex2D &idx) const
    { return CProxyElement_redistributor2D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_redistributor2D operator() (const CkArrayIndex2D &idx) const
    { return CProxyElement_redistributor2D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_redistributor2D operator () (int i0,int i1) const 
        {return CProxyElement_redistributor2D(ckGetArrayID(), CkArrayIndex2D(i0,i1), CK_DELCTOR_CALL);}
    CProxyElement_redistributor2D operator () (CkIndex2D idx) const 
        {return CProxyElement_redistributor2D(ckGetArrayID(), CkArrayIndex2D(idx), CK_DELCTOR_CALL);}
    CProxy_redistributor2D(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_redistributor2D(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: redistributor2D();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
    
    void resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
    
    void receiveTransposeData(redistributor2DMsg* impl_msg) ;

/* DECLS: redistributor2D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_redistributor2D : public CProxySection_ArrayElement{
  public:
    typedef redistributor2D local_t;
    typedef CkIndex_redistributor2D index_t;
    typedef CProxy_redistributor2D proxy_t;
    typedef CProxyElement_redistributor2D element_t;
    typedef CProxySection_redistributor2D section_t;

    using array_index_t = CkArrayIndex2D;
    CProxySection_redistributor2D(void) {
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
    CProxyElement_redistributor2D operator [] (const CkArrayIndex2D &idx) const
        {return CProxyElement_redistributor2D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_redistributor2D operator() (const CkArrayIndex2D &idx) const
        {return CProxyElement_redistributor2D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_redistributor2D operator () (int idx) const 
        {return CProxyElement_redistributor2D(ckGetArrayID(), *(CkArrayIndex2D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex2D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex2D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex2D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          al.emplace_back(i, j);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_redistributor2D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_redistributor2D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_redistributor2D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_redistributor2D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_redistributor2D(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_redistributor2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_redistributor2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_redistributor2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_redistributor2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_redistributor2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_redistributor2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: redistributor2D();
 */
    

/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
    
    void resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
    
    void receiveTransposeData(redistributor2DMsg* impl_msg) ;

/* DECLS: redistributor2D(CkMigrateMessage* impl_msg);
 */

};
#define redistributor2D_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex2D>, CProxy_redistributor2D>CBase_redistributor2D;














/* ---------------- method closures -------------- */
class Closure_controlPointMain {
  public:

};


/* ---------------- method closures -------------- */
class Closure_controlPointManager {
  public:


    struct requestMemoryUsage_2_closure;



    struct requestIdleTime_4_closure;



    struct requestAll_6_closure;



};

/* ---------------- method closures -------------- */
class Closure_redistributor2D {
  public:


    struct startup_2_closure;


    struct resizeGranules_3_closure;



};

extern void _registerControlPointsNoTrace(void);
#endif
