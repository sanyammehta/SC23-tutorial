#ifndef _DECL_PathHistory_H_
#define _DECL_PathHistory_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_pathHistoryManager pathHistoryManagerProxy;
 */


/* DECLS: mainchare pathHistoryMain: Chare{
pathHistoryMain(CkArgMsg* impl_msg);
};
 */
 class pathHistoryMain;
 class CkIndex_pathHistoryMain;
 class CProxy_pathHistoryMain;
/* --------------- index object ------------------ */
class CkIndex_pathHistoryMain:public CkIndex_Chare{
  public:
    typedef pathHistoryMain local_t;
    typedef CkIndex_pathHistoryMain index_t;
    typedef CProxy_pathHistoryMain proxy_t;
    typedef CProxy_pathHistoryMain element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: pathHistoryMain(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pathHistoryMain_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_pathHistoryMain_CkArgMsg() {
      static int epidx = reg_pathHistoryMain_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_pathHistoryMain_CkArgMsg(); }
    
    static void _call_pathHistoryMain_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pathHistoryMain_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_pathHistoryMain:public CProxy_Chare{
  public:
    typedef pathHistoryMain local_t;
    typedef CkIndex_pathHistoryMain index_t;
    typedef CProxy_pathHistoryMain proxy_t;
    typedef CProxy_pathHistoryMain element_t;

    CProxy_pathHistoryMain(void) {};
    CProxy_pathHistoryMain(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_pathHistoryMain(const Chare *c) : CProxy_Chare(c){  }

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
    pathHistoryMain *ckLocal(void) const
    { return (pathHistoryMain *)CkLocalChare(&ckGetChareID()); }
/* DECLS: pathHistoryMain(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define pathHistoryMain_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_pathHistoryMain>CBase_pathHistoryMain;

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message pathInformationMsg{
PathHistoryTableEntry history[];
}
;
 */
class pathInformationMsg;
class CMessage_pathInformationMsg:public CkMessage{
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
    CMessage_pathInformationMsg();
    static void *pack(pathInformationMsg *p);
    static pathInformationMsg* unpack(void* p);
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

/* DECLS: group pathHistoryManager: IrrGroup{
pathHistoryManager();
void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
pathHistoryManager(CkMigrateMessage* impl_msg);
};
 */
 class pathHistoryManager;
 class CkIndex_pathHistoryManager;
 class CProxy_pathHistoryManager;
 class CProxyElement_pathHistoryManager;
 class CProxySection_pathHistoryManager;
/* --------------- index object ------------------ */
class CkIndex_pathHistoryManager:public CkIndex_IrrGroup{
  public:
    typedef pathHistoryManager local_t;
    typedef CkIndex_pathHistoryManager index_t;
    typedef CProxy_pathHistoryManager proxy_t;
    typedef CProxyElement_pathHistoryManager element_t;
    typedef CProxySection_pathHistoryManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: pathHistoryManager();
     */
    // Entry point registration at startup
    
    static int reg_pathHistoryManager_void();
    // Entry point index lookup
    
    inline static int idx_pathHistoryManager_void() {
      static int epidx = reg_pathHistoryManager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_pathHistoryManager_void(); }
    
    static void _call_pathHistoryManager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pathHistoryManager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_traceCriticalPathBackStepByStep_pathInformationMsg();
    // Entry point index lookup
    
    inline static int idx_traceCriticalPathBackStepByStep_pathInformationMsg() {
      static int epidx = reg_traceCriticalPathBackStepByStep_pathInformationMsg();
      return epidx;
    }

    
    inline static int idx_traceCriticalPathBackStepByStep(void (pathHistoryManager::*)(pathInformationMsg* impl_msg) ) {
      return idx_traceCriticalPathBackStepByStep_pathInformationMsg();
    }


    
    static int traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg) { return idx_traceCriticalPathBackStepByStep_pathInformationMsg(); }
    
    static void _call_traceCriticalPathBackStepByStep_pathInformationMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_traceCriticalPathBackStepByStep_pathInformationMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_broadcastCriticalPathProjections_pathInformationMsg();
    // Entry point index lookup
    
    inline static int idx_broadcastCriticalPathProjections_pathInformationMsg() {
      static int epidx = reg_broadcastCriticalPathProjections_pathInformationMsg();
      return epidx;
    }

    
    inline static int idx_broadcastCriticalPathProjections(void (pathHistoryManager::*)(pathInformationMsg* impl_msg) ) {
      return idx_broadcastCriticalPathProjections_pathInformationMsg();
    }


    
    static int broadcastCriticalPathProjections(pathInformationMsg* impl_msg) { return idx_broadcastCriticalPathProjections_pathInformationMsg(); }
    
    static void _call_broadcastCriticalPathProjections_pathInformationMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_broadcastCriticalPathProjections_pathInformationMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_criticalPathProjectionsDone_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_criticalPathProjectionsDone_CkReductionMsg() {
      static int epidx = reg_criticalPathProjectionsDone_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_criticalPathProjectionsDone(void (pathHistoryManager::*)(CkReductionMsg* impl_msg) ) {
      return idx_criticalPathProjectionsDone_CkReductionMsg();
    }


    
    static int criticalPathProjectionsDone(CkReductionMsg* impl_msg) { return idx_criticalPathProjectionsDone_CkReductionMsg(); }
    
    static void _call_criticalPathProjectionsDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_criticalPathProjectionsDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_saveCriticalPathForPriorities_pathInformationMsg();
    // Entry point index lookup
    
    inline static int idx_saveCriticalPathForPriorities_pathInformationMsg() {
      static int epidx = reg_saveCriticalPathForPriorities_pathInformationMsg();
      return epidx;
    }

    
    inline static int idx_saveCriticalPathForPriorities(void (pathHistoryManager::*)(pathInformationMsg* impl_msg) ) {
      return idx_saveCriticalPathForPriorities_pathInformationMsg();
    }


    
    static int saveCriticalPathForPriorities(pathInformationMsg* impl_msg) { return idx_saveCriticalPathForPriorities_pathInformationMsg(); }
    
    static void _call_saveCriticalPathForPriorities_pathInformationMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_saveCriticalPathForPriorities_pathInformationMsg(void* impl_msg, void* impl_obj);
    /* DECLS: pathHistoryManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pathHistoryManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_pathHistoryManager_CkMigrateMessage() {
      static int epidx = reg_pathHistoryManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_pathHistoryManager_CkMigrateMessage(); }
    
    static void _call_pathHistoryManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pathHistoryManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_pathHistoryManager: public CProxyElement_IrrGroup{
  public:
    typedef pathHistoryManager local_t;
    typedef CkIndex_pathHistoryManager index_t;
    typedef CProxy_pathHistoryManager proxy_t;
    typedef CProxyElement_pathHistoryManager element_t;
    typedef CProxySection_pathHistoryManager section_t;


    /* TRAM aggregators */

    CProxyElement_pathHistoryManager(void) {
    }
    CProxyElement_pathHistoryManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_pathHistoryManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_pathHistoryManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    pathHistoryManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static pathHistoryManager* ckLocalBranch(CkGroupID gID) {
      return (pathHistoryManager*)CkLocalBranch(gID);
    }
/* DECLS: pathHistoryManager();
 */
    

/* DECLS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
    
    void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);

/* DECLS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
    
    void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);

/* DECLS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
    
    void criticalPathProjectionsDone(CkReductionMsg* impl_msg);

/* DECLS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
    
    void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);

/* DECLS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_pathHistoryManager: public CProxy_IrrGroup{
  public:
    typedef pathHistoryManager local_t;
    typedef CkIndex_pathHistoryManager index_t;
    typedef CProxy_pathHistoryManager proxy_t;
    typedef CProxyElement_pathHistoryManager element_t;
    typedef CProxySection_pathHistoryManager section_t;

    CProxy_pathHistoryManager(void) {
    }
    CProxy_pathHistoryManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_pathHistoryManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_pathHistoryManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_pathHistoryManager operator[](int onPE) const
      {return CProxyElement_pathHistoryManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    pathHistoryManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static pathHistoryManager* ckLocalBranch(CkGroupID gID) {
      return (pathHistoryManager*)CkLocalBranch(gID);
    }
/* DECLS: pathHistoryManager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
    
    void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
    
    void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg, int npes, int *pes);
    
    void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg, CmiGroup &grp);

/* DECLS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
    
    void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
    
    void broadcastCriticalPathProjections(pathInformationMsg* impl_msg, int npes, int *pes);
    
    void broadcastCriticalPathProjections(pathInformationMsg* impl_msg, CmiGroup &grp);

/* DECLS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
    
    void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
    
    void criticalPathProjectionsDone(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void criticalPathProjectionsDone(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
    
    void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
    
    void saveCriticalPathForPriorities(pathInformationMsg* impl_msg, int npes, int *pes);
    
    void saveCriticalPathForPriorities(pathInformationMsg* impl_msg, CmiGroup &grp);

/* DECLS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_pathHistoryManager: public CProxySection_IrrGroup{
  public:
    typedef pathHistoryManager local_t;
    typedef CkIndex_pathHistoryManager index_t;
    typedef CProxy_pathHistoryManager proxy_t;
    typedef CProxyElement_pathHistoryManager element_t;
    typedef CProxySection_pathHistoryManager section_t;

    CProxySection_pathHistoryManager(void) {
    }
    CProxySection_pathHistoryManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_pathHistoryManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_pathHistoryManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_pathHistoryManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_pathHistoryManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    pathHistoryManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static pathHistoryManager* ckLocalBranch(CkGroupID gID) {
      return (pathHistoryManager*)CkLocalBranch(gID);
    }
/* DECLS: pathHistoryManager();
 */
    

/* DECLS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
    
    void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);

/* DECLS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
    
    void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);

/* DECLS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
    
    void criticalPathProjectionsDone(CkReductionMsg* impl_msg);

/* DECLS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
    
    void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);

/* DECLS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */

};
#define pathHistoryManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_pathHistoryManager>CBase_pathHistoryManager;



/* ---------------- method closures -------------- */
class Closure_pathHistoryMain {
  public:

};


/* ---------------- method closures -------------- */
class Closure_pathHistoryManager {
  public:






};

extern void _registerPathHistory(void);
#endif
