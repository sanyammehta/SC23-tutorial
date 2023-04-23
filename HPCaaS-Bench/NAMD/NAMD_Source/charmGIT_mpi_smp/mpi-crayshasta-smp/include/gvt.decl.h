#ifndef _DECL_gvt_H_
#define _DECL_gvt_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "poseMsgs.decl.h"

/* DECLS: readonly CkGroupID ThePVT;
 */

/* DECLS: readonly CkGroupID TheGVT;
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
/* DECLS: message UpdateMsg{
SRentry SRs[];
}
;
 */
class UpdateMsg;
class CMessage_UpdateMsg:public CkMessage{
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
    CMessage_UpdateMsg();
    static void *pack(UpdateMsg *p);
    static UpdateMsg* unpack(void* p);
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
/* DECLS: message GVTMsg;
 */
class GVTMsg;
class CMessage_GVTMsg:public CkMessage{
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
    CMessage_GVTMsg();
    static void *pack(GVTMsg *p);
    static GVTMsg* unpack(void* p);
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
/* DECLS: message prioBcMsg;
 */
class prioBcMsg;
class CMessage_prioBcMsg:public CkMessage{
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
    CMessage_prioBcMsg();
    static void *pack(prioBcMsg *p);
    static prioBcMsg* unpack(void* p);
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

/* DECLS: group PVT: IrrGroup{
PVT();
void startPhase(prioBcMsg* impl_msg);
void startPhaseExp(prioBcMsg* impl_msg);
void beginCheckpoint(eventMsg* impl_msg);
void resumeAfterCheckpoint(eventMsg* impl_msg);
void beginLoadbalancing(eventMsg* impl_msg);
void resumeAfterLB(eventMsg* impl_msg);
void callAtSync();
void setGVT(GVTMsg* impl_msg);
void reportReduce(UpdateMsg* impl_msg);
PVT(CkMigrateMessage* impl_msg);
};
 */
 class PVT;
 class CkIndex_PVT;
 class CProxy_PVT;
 class CProxyElement_PVT;
 class CProxySection_PVT;
/* --------------- index object ------------------ */
class CkIndex_PVT:public CkIndex_IrrGroup{
  public:
    typedef PVT local_t;
    typedef CkIndex_PVT index_t;
    typedef CProxy_PVT proxy_t;
    typedef CProxyElement_PVT element_t;
    typedef CProxySection_PVT section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PVT();
     */
    // Entry point registration at startup
    
    static int reg_PVT_void();
    // Entry point index lookup
    
    inline static int idx_PVT_void() {
      static int epidx = reg_PVT_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PVT_void(); }
    
    static void _call_PVT_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PVT_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startPhase(prioBcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_startPhase_prioBcMsg();
    // Entry point index lookup
    
    inline static int idx_startPhase_prioBcMsg() {
      static int epidx = reg_startPhase_prioBcMsg();
      return epidx;
    }

    
    inline static int idx_startPhase(void (PVT::*)(prioBcMsg* impl_msg) ) {
      return idx_startPhase_prioBcMsg();
    }


    
    static int startPhase(prioBcMsg* impl_msg) { return idx_startPhase_prioBcMsg(); }
    
    static void _call_startPhase_prioBcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startPhase_prioBcMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void startPhaseExp(prioBcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_startPhaseExp_prioBcMsg();
    // Entry point index lookup
    
    inline static int idx_startPhaseExp_prioBcMsg() {
      static int epidx = reg_startPhaseExp_prioBcMsg();
      return epidx;
    }

    
    inline static int idx_startPhaseExp(void (PVT::*)(prioBcMsg* impl_msg) ) {
      return idx_startPhaseExp_prioBcMsg();
    }


    
    static int startPhaseExp(prioBcMsg* impl_msg) { return idx_startPhaseExp_prioBcMsg(); }
    
    static void _call_startPhaseExp_prioBcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startPhaseExp_prioBcMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void beginCheckpoint(eventMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_beginCheckpoint_eventMsg();
    // Entry point index lookup
    
    inline static int idx_beginCheckpoint_eventMsg() {
      static int epidx = reg_beginCheckpoint_eventMsg();
      return epidx;
    }

    
    inline static int idx_beginCheckpoint(void (PVT::*)(eventMsg* impl_msg) ) {
      return idx_beginCheckpoint_eventMsg();
    }


    
    static int beginCheckpoint(eventMsg* impl_msg) { return idx_beginCheckpoint_eventMsg(); }
    
    static void _call_beginCheckpoint_eventMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginCheckpoint_eventMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeAfterCheckpoint(eventMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resumeAfterCheckpoint_eventMsg();
    // Entry point index lookup
    
    inline static int idx_resumeAfterCheckpoint_eventMsg() {
      static int epidx = reg_resumeAfterCheckpoint_eventMsg();
      return epidx;
    }

    
    inline static int idx_resumeAfterCheckpoint(void (PVT::*)(eventMsg* impl_msg) ) {
      return idx_resumeAfterCheckpoint_eventMsg();
    }


    
    static int resumeAfterCheckpoint(eventMsg* impl_msg) { return idx_resumeAfterCheckpoint_eventMsg(); }
    
    static void _call_resumeAfterCheckpoint_eventMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeAfterCheckpoint_eventMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void beginLoadbalancing(eventMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_beginLoadbalancing_eventMsg();
    // Entry point index lookup
    
    inline static int idx_beginLoadbalancing_eventMsg() {
      static int epidx = reg_beginLoadbalancing_eventMsg();
      return epidx;
    }

    
    inline static int idx_beginLoadbalancing(void (PVT::*)(eventMsg* impl_msg) ) {
      return idx_beginLoadbalancing_eventMsg();
    }


    
    static int beginLoadbalancing(eventMsg* impl_msg) { return idx_beginLoadbalancing_eventMsg(); }
    
    static void _call_beginLoadbalancing_eventMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginLoadbalancing_eventMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeAfterLB(eventMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resumeAfterLB_eventMsg();
    // Entry point index lookup
    
    inline static int idx_resumeAfterLB_eventMsg() {
      static int epidx = reg_resumeAfterLB_eventMsg();
      return epidx;
    }

    
    inline static int idx_resumeAfterLB(void (PVT::*)(eventMsg* impl_msg) ) {
      return idx_resumeAfterLB_eventMsg();
    }


    
    static int resumeAfterLB(eventMsg* impl_msg) { return idx_resumeAfterLB_eventMsg(); }
    
    static void _call_resumeAfterLB_eventMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeAfterLB_eventMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void callAtSync();
     */
    // Entry point registration at startup
    
    static int reg_callAtSync_void();
    // Entry point index lookup
    
    inline static int idx_callAtSync_void() {
      static int epidx = reg_callAtSync_void();
      return epidx;
    }

    
    inline static int idx_callAtSync(void (PVT::*)() ) {
      return idx_callAtSync_void();
    }


    
    static int callAtSync() { return idx_callAtSync_void(); }
    
    static void _call_callAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_callAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setGVT(GVTMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setGVT_GVTMsg();
    // Entry point index lookup
    
    inline static int idx_setGVT_GVTMsg() {
      static int epidx = reg_setGVT_GVTMsg();
      return epidx;
    }

    
    inline static int idx_setGVT(void (PVT::*)(GVTMsg* impl_msg) ) {
      return idx_setGVT_GVTMsg();
    }


    
    static int setGVT(GVTMsg* impl_msg) { return idx_setGVT_GVTMsg(); }
    
    static void _call_setGVT_GVTMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setGVT_GVTMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void reportReduce(UpdateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_reportReduce_UpdateMsg();
    // Entry point index lookup
    
    inline static int idx_reportReduce_UpdateMsg() {
      static int epidx = reg_reportReduce_UpdateMsg();
      return epidx;
    }

    
    inline static int idx_reportReduce(void (PVT::*)(UpdateMsg* impl_msg) ) {
      return idx_reportReduce_UpdateMsg();
    }


    
    static int reportReduce(UpdateMsg* impl_msg) { return idx_reportReduce_UpdateMsg(); }
    
    static void _call_reportReduce_UpdateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reportReduce_UpdateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PVT(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PVT_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PVT_CkMigrateMessage() {
      static int epidx = reg_PVT_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PVT_CkMigrateMessage(); }
    
    static void _call_PVT_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PVT_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PVT: public CProxyElement_IrrGroup{
  public:
    typedef PVT local_t;
    typedef CkIndex_PVT index_t;
    typedef CProxy_PVT proxy_t;
    typedef CProxyElement_PVT element_t;
    typedef CProxySection_PVT section_t;


    /* TRAM aggregators */

    CProxyElement_PVT(void) {
    }
    CProxyElement_PVT(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_PVT(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PVT(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    PVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PVT* ckLocalBranch(CkGroupID gID) {
      return (PVT*)CkLocalBranch(gID);
    }
/* DECLS: PVT();
 */
    

/* DECLS: void startPhase(prioBcMsg* impl_msg);
 */
    
    void startPhase(prioBcMsg* impl_msg);

/* DECLS: void startPhaseExp(prioBcMsg* impl_msg);
 */
    
    void startPhaseExp(prioBcMsg* impl_msg);

/* DECLS: void beginCheckpoint(eventMsg* impl_msg);
 */
    
    void beginCheckpoint(eventMsg* impl_msg);

/* DECLS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
    
    void resumeAfterCheckpoint(eventMsg* impl_msg);

/* DECLS: void beginLoadbalancing(eventMsg* impl_msg);
 */
    
    void beginLoadbalancing(eventMsg* impl_msg);

/* DECLS: void resumeAfterLB(eventMsg* impl_msg);
 */
    
    void resumeAfterLB(eventMsg* impl_msg);

/* DECLS: void callAtSync();
 */
    
    void callAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setGVT(GVTMsg* impl_msg);
 */
    
    void setGVT(GVTMsg* impl_msg);

/* DECLS: void reportReduce(UpdateMsg* impl_msg);
 */
    
    void reportReduce(UpdateMsg* impl_msg);

/* DECLS: PVT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_PVT: public CProxy_IrrGroup{
  public:
    typedef PVT local_t;
    typedef CkIndex_PVT index_t;
    typedef CProxy_PVT proxy_t;
    typedef CProxyElement_PVT element_t;
    typedef CProxySection_PVT section_t;

    CProxy_PVT(void) {
    }
    CProxy_PVT(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_PVT(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PVT(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PVT operator[](int onPE) const
      {return CProxyElement_PVT(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    PVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PVT* ckLocalBranch(CkGroupID gID) {
      return (PVT*)CkLocalBranch(gID);
    }
/* DECLS: PVT();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startPhase(prioBcMsg* impl_msg);
 */
    
    void startPhase(prioBcMsg* impl_msg);
    
    void startPhase(prioBcMsg* impl_msg, int npes, int *pes);
    
    void startPhase(prioBcMsg* impl_msg, CmiGroup &grp);

/* DECLS: void startPhaseExp(prioBcMsg* impl_msg);
 */
    
    void startPhaseExp(prioBcMsg* impl_msg);
    
    void startPhaseExp(prioBcMsg* impl_msg, int npes, int *pes);
    
    void startPhaseExp(prioBcMsg* impl_msg, CmiGroup &grp);

/* DECLS: void beginCheckpoint(eventMsg* impl_msg);
 */
    
    void beginCheckpoint(eventMsg* impl_msg);
    
    void beginCheckpoint(eventMsg* impl_msg, int npes, int *pes);
    
    void beginCheckpoint(eventMsg* impl_msg, CmiGroup &grp);

/* DECLS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
    
    void resumeAfterCheckpoint(eventMsg* impl_msg);
    
    void resumeAfterCheckpoint(eventMsg* impl_msg, int npes, int *pes);
    
    void resumeAfterCheckpoint(eventMsg* impl_msg, CmiGroup &grp);

/* DECLS: void beginLoadbalancing(eventMsg* impl_msg);
 */
    
    void beginLoadbalancing(eventMsg* impl_msg);
    
    void beginLoadbalancing(eventMsg* impl_msg, int npes, int *pes);
    
    void beginLoadbalancing(eventMsg* impl_msg, CmiGroup &grp);

/* DECLS: void resumeAfterLB(eventMsg* impl_msg);
 */
    
    void resumeAfterLB(eventMsg* impl_msg);
    
    void resumeAfterLB(eventMsg* impl_msg, int npes, int *pes);
    
    void resumeAfterLB(eventMsg* impl_msg, CmiGroup &grp);

/* DECLS: void callAtSync();
 */
    
    void callAtSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void callAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void callAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setGVT(GVTMsg* impl_msg);
 */
    
    void setGVT(GVTMsg* impl_msg);
    
    void setGVT(GVTMsg* impl_msg, int npes, int *pes);
    
    void setGVT(GVTMsg* impl_msg, CmiGroup &grp);

/* DECLS: void reportReduce(UpdateMsg* impl_msg);
 */
    
    void reportReduce(UpdateMsg* impl_msg);
    
    void reportReduce(UpdateMsg* impl_msg, int npes, int *pes);
    
    void reportReduce(UpdateMsg* impl_msg, CmiGroup &grp);

/* DECLS: PVT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_PVT: public CProxySection_IrrGroup{
  public:
    typedef PVT local_t;
    typedef CkIndex_PVT index_t;
    typedef CProxy_PVT proxy_t;
    typedef CProxyElement_PVT element_t;
    typedef CProxySection_PVT section_t;

    CProxySection_PVT(void) {
    }
    CProxySection_PVT(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_PVT(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PVT(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_PVT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PVT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    PVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PVT* ckLocalBranch(CkGroupID gID) {
      return (PVT*)CkLocalBranch(gID);
    }
/* DECLS: PVT();
 */
    

/* DECLS: void startPhase(prioBcMsg* impl_msg);
 */
    
    void startPhase(prioBcMsg* impl_msg);

/* DECLS: void startPhaseExp(prioBcMsg* impl_msg);
 */
    
    void startPhaseExp(prioBcMsg* impl_msg);

/* DECLS: void beginCheckpoint(eventMsg* impl_msg);
 */
    
    void beginCheckpoint(eventMsg* impl_msg);

/* DECLS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
    
    void resumeAfterCheckpoint(eventMsg* impl_msg);

/* DECLS: void beginLoadbalancing(eventMsg* impl_msg);
 */
    
    void beginLoadbalancing(eventMsg* impl_msg);

/* DECLS: void resumeAfterLB(eventMsg* impl_msg);
 */
    
    void resumeAfterLB(eventMsg* impl_msg);

/* DECLS: void callAtSync();
 */
    
    void callAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setGVT(GVTMsg* impl_msg);
 */
    
    void setGVT(GVTMsg* impl_msg);

/* DECLS: void reportReduce(UpdateMsg* impl_msg);
 */
    
    void reportReduce(UpdateMsg* impl_msg);

/* DECLS: PVT(CkMigrateMessage* impl_msg);
 */

};
#define PVT_SDAG_CODE 
typedef CBaseT1<Group, CProxy_PVT>CBase_PVT;

/* DECLS: group GVT: IrrGroup{
GVT();
void sumGVTIterationCounts();
void runGVT(UpdateMsg* impl_msg);
void computeGVT(UpdateMsg* impl_msg);
GVT(CkMigrateMessage* impl_msg);
};
 */
 class GVT;
 class CkIndex_GVT;
 class CProxy_GVT;
 class CProxyElement_GVT;
 class CProxySection_GVT;
/* --------------- index object ------------------ */
class CkIndex_GVT:public CkIndex_IrrGroup{
  public:
    typedef GVT local_t;
    typedef CkIndex_GVT index_t;
    typedef CProxy_GVT proxy_t;
    typedef CProxyElement_GVT element_t;
    typedef CProxySection_GVT section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: GVT();
     */
    // Entry point registration at startup
    
    static int reg_GVT_void();
    // Entry point index lookup
    
    inline static int idx_GVT_void() {
      static int epidx = reg_GVT_void();
      return epidx;
    }

    
    static int ckNew() { return idx_GVT_void(); }
    
    static void _call_GVT_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GVT_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sumGVTIterationCounts();
     */
    // Entry point registration at startup
    
    static int reg_sumGVTIterationCounts_void();
    // Entry point index lookup
    
    inline static int idx_sumGVTIterationCounts_void() {
      static int epidx = reg_sumGVTIterationCounts_void();
      return epidx;
    }

    
    inline static int idx_sumGVTIterationCounts(void (GVT::*)() ) {
      return idx_sumGVTIterationCounts_void();
    }


    
    static int sumGVTIterationCounts() { return idx_sumGVTIterationCounts_void(); }
    
    static void _call_sumGVTIterationCounts_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sumGVTIterationCounts_void(void* impl_msg, void* impl_obj);
    /* DECLS: void runGVT(UpdateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_runGVT_UpdateMsg();
    // Entry point index lookup
    
    inline static int idx_runGVT_UpdateMsg() {
      static int epidx = reg_runGVT_UpdateMsg();
      return epidx;
    }

    
    inline static int idx_runGVT(void (GVT::*)(UpdateMsg* impl_msg) ) {
      return idx_runGVT_UpdateMsg();
    }


    
    static int runGVT(UpdateMsg* impl_msg) { return idx_runGVT_UpdateMsg(); }
    
    static void _call_runGVT_UpdateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_runGVT_UpdateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void computeGVT(UpdateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_computeGVT_UpdateMsg();
    // Entry point index lookup
    
    inline static int idx_computeGVT_UpdateMsg() {
      static int epidx = reg_computeGVT_UpdateMsg();
      return epidx;
    }

    
    inline static int idx_computeGVT(void (GVT::*)(UpdateMsg* impl_msg) ) {
      return idx_computeGVT_UpdateMsg();
    }


    
    static int computeGVT(UpdateMsg* impl_msg) { return idx_computeGVT_UpdateMsg(); }
    
    static void _call_computeGVT_UpdateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_computeGVT_UpdateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: GVT(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_GVT_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_GVT_CkMigrateMessage() {
      static int epidx = reg_GVT_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_GVT_CkMigrateMessage(); }
    
    static void _call_GVT_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GVT_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_GVT: public CProxyElement_IrrGroup{
  public:
    typedef GVT local_t;
    typedef CkIndex_GVT index_t;
    typedef CProxy_GVT proxy_t;
    typedef CProxyElement_GVT element_t;
    typedef CProxySection_GVT section_t;


    /* TRAM aggregators */

    CProxyElement_GVT(void) {
    }
    CProxyElement_GVT(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_GVT(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_GVT(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    GVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GVT* ckLocalBranch(CkGroupID gID) {
      return (GVT*)CkLocalBranch(gID);
    }
/* DECLS: GVT();
 */
    

/* DECLS: void sumGVTIterationCounts();
 */
    
    void sumGVTIterationCounts(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void runGVT(UpdateMsg* impl_msg);
 */
    
    void runGVT(UpdateMsg* impl_msg);

/* DECLS: void computeGVT(UpdateMsg* impl_msg);
 */
    
    void computeGVT(UpdateMsg* impl_msg);

/* DECLS: GVT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_GVT: public CProxy_IrrGroup{
  public:
    typedef GVT local_t;
    typedef CkIndex_GVT index_t;
    typedef CProxy_GVT proxy_t;
    typedef CProxyElement_GVT element_t;
    typedef CProxySection_GVT section_t;

    CProxy_GVT(void) {
    }
    CProxy_GVT(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_GVT(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_GVT(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_GVT operator[](int onPE) const
      {return CProxyElement_GVT(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    GVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GVT* ckLocalBranch(CkGroupID gID) {
      return (GVT*)CkLocalBranch(gID);
    }
/* DECLS: GVT();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumGVTIterationCounts();
 */
    
    void sumGVTIterationCounts(const CkEntryOptions *impl_e_opts=NULL);
    
    void sumGVTIterationCounts(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sumGVTIterationCounts(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void runGVT(UpdateMsg* impl_msg);
 */
    
    void runGVT(UpdateMsg* impl_msg);
    
    void runGVT(UpdateMsg* impl_msg, int npes, int *pes);
    
    void runGVT(UpdateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void computeGVT(UpdateMsg* impl_msg);
 */
    
    void computeGVT(UpdateMsg* impl_msg);
    
    void computeGVT(UpdateMsg* impl_msg, int npes, int *pes);
    
    void computeGVT(UpdateMsg* impl_msg, CmiGroup &grp);

/* DECLS: GVT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_GVT: public CProxySection_IrrGroup{
  public:
    typedef GVT local_t;
    typedef CkIndex_GVT index_t;
    typedef CProxy_GVT proxy_t;
    typedef CProxyElement_GVT element_t;
    typedef CProxySection_GVT section_t;

    CProxySection_GVT(void) {
    }
    CProxySection_GVT(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_GVT(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_GVT(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_GVT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_GVT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    GVT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GVT* ckLocalBranch(CkGroupID gID) {
      return (GVT*)CkLocalBranch(gID);
    }
/* DECLS: GVT();
 */
    

/* DECLS: void sumGVTIterationCounts();
 */
    
    void sumGVTIterationCounts(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void runGVT(UpdateMsg* impl_msg);
 */
    
    void runGVT(UpdateMsg* impl_msg);

/* DECLS: void computeGVT(UpdateMsg* impl_msg);
 */
    
    void computeGVT(UpdateMsg* impl_msg);

/* DECLS: GVT(CkMigrateMessage* impl_msg);
 */

};
#define GVT_SDAG_CODE 
typedef CBaseT1<Group, CProxy_GVT>CBase_GVT;







/* ---------------- method closures -------------- */
class Closure_PVT {
  public:








    struct callAtSync_8_closure;




};

/* ---------------- method closures -------------- */
class Closure_GVT {
  public:


    struct sumGVTIterationCounts_2_closure;




};

extern void _registergvt(void);
#endif
