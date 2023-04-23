#ifndef _DECL_stats_H_
#define _DECL_stats_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID theLocalStats;
 */

/* DECLS: readonly CkChareID theGlobalStats;
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
/* DECLS: message localStatSummary;
 */
class localStatSummary;
class CMessage_localStatSummary:public CkMessage{
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
    CMessage_localStatSummary();
    static void *pack(localStatSummary *p);
    static localStatSummary* unpack(void* p);
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

/* DECLS: group localStat: IrrGroup{
localStat();
void SendStats();
localStat(CkMigrateMessage* impl_msg);
};
 */
 class localStat;
 class CkIndex_localStat;
 class CProxy_localStat;
 class CProxyElement_localStat;
 class CProxySection_localStat;
/* --------------- index object ------------------ */
class CkIndex_localStat:public CkIndex_IrrGroup{
  public:
    typedef localStat local_t;
    typedef CkIndex_localStat index_t;
    typedef CProxy_localStat proxy_t;
    typedef CProxyElement_localStat element_t;
    typedef CProxySection_localStat section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: localStat();
     */
    // Entry point registration at startup
    
    static int reg_localStat_void();
    // Entry point index lookup
    
    inline static int idx_localStat_void() {
      static int epidx = reg_localStat_void();
      return epidx;
    }

    
    static int ckNew() { return idx_localStat_void(); }
    
    static void _call_localStat_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_localStat_void(void* impl_msg, void* impl_obj);
    /* DECLS: void SendStats();
     */
    // Entry point registration at startup
    
    static int reg_SendStats_void();
    // Entry point index lookup
    
    inline static int idx_SendStats_void() {
      static int epidx = reg_SendStats_void();
      return epidx;
    }

    
    inline static int idx_SendStats(void (localStat::*)() ) {
      return idx_SendStats_void();
    }


    
    static int SendStats() { return idx_SendStats_void(); }
    
    static void _call_SendStats_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SendStats_void(void* impl_msg, void* impl_obj);
    /* DECLS: localStat(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_localStat_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_localStat_CkMigrateMessage() {
      static int epidx = reg_localStat_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_localStat_CkMigrateMessage(); }
    
    static void _call_localStat_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_localStat_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_localStat: public CProxyElement_IrrGroup{
  public:
    typedef localStat local_t;
    typedef CkIndex_localStat index_t;
    typedef CProxy_localStat proxy_t;
    typedef CProxyElement_localStat element_t;
    typedef CProxySection_localStat section_t;


    /* TRAM aggregators */

    CProxyElement_localStat(void) {
    }
    CProxyElement_localStat(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_localStat(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_localStat(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    localStat* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static localStat* ckLocalBranch(CkGroupID gID) {
      return (localStat*)CkLocalBranch(gID);
    }
/* DECLS: localStat();
 */
    

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: localStat(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_localStat: public CProxy_IrrGroup{
  public:
    typedef localStat local_t;
    typedef CkIndex_localStat index_t;
    typedef CProxy_localStat proxy_t;
    typedef CProxyElement_localStat element_t;
    typedef CProxySection_localStat section_t;

    CProxy_localStat(void) {
    }
    CProxy_localStat(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_localStat(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_localStat(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_localStat operator[](int onPE) const
      {return CProxyElement_localStat(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    localStat* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static localStat* ckLocalBranch(CkGroupID gID) {
      return (localStat*)CkLocalBranch(gID);
    }
/* DECLS: localStat();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);
    
    void SendStats(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SendStats(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: localStat(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_localStat: public CProxySection_IrrGroup{
  public:
    typedef localStat local_t;
    typedef CkIndex_localStat index_t;
    typedef CProxy_localStat proxy_t;
    typedef CProxyElement_localStat element_t;
    typedef CProxySection_localStat section_t;

    CProxySection_localStat(void) {
    }
    CProxySection_localStat(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_localStat(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_localStat(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_localStat(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_localStat(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    localStat* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static localStat* ckLocalBranch(CkGroupID gID) {
      return (localStat*)CkLocalBranch(gID);
    }
/* DECLS: localStat();
 */
    

/* DECLS: void SendStats();
 */
    
    void SendStats(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: localStat(CkMigrateMessage* impl_msg);
 */

};
#define localStat_SDAG_CODE 
typedef CBaseT1<Group, CProxy_localStat>CBase_localStat;

/* DECLS: chare globalStat: Chare{
globalStat();
void localStatReport(localStatSummary* impl_msg);
globalStat(CkMigrateMessage* impl_msg);
};
 */
 class globalStat;
 class CkIndex_globalStat;
 class CProxy_globalStat;
/* --------------- index object ------------------ */
class CkIndex_globalStat:public CkIndex_Chare{
  public:
    typedef globalStat local_t;
    typedef CkIndex_globalStat index_t;
    typedef CProxy_globalStat proxy_t;
    typedef CProxy_globalStat element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: globalStat();
     */
    // Entry point registration at startup
    
    static int reg_globalStat_void();
    // Entry point index lookup
    
    inline static int idx_globalStat_void() {
      static int epidx = reg_globalStat_void();
      return epidx;
    }

    
    static int ckNew() { return idx_globalStat_void(); }
    
    static void _call_globalStat_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_globalStat_void(void* impl_msg, void* impl_obj);
    /* DECLS: void localStatReport(localStatSummary* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_localStatReport_localStatSummary();
    // Entry point index lookup
    
    inline static int idx_localStatReport_localStatSummary() {
      static int epidx = reg_localStatReport_localStatSummary();
      return epidx;
    }

    
    inline static int idx_localStatReport(void (globalStat::*)(localStatSummary* impl_msg) ) {
      return idx_localStatReport_localStatSummary();
    }


    
    static int localStatReport(localStatSummary* impl_msg) { return idx_localStatReport_localStatSummary(); }
    
    static void _call_localStatReport_localStatSummary(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_localStatReport_localStatSummary(void* impl_msg, void* impl_obj);
    /* DECLS: globalStat(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_globalStat_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_globalStat_CkMigrateMessage() {
      static int epidx = reg_globalStat_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_globalStat_CkMigrateMessage(); }
    
    static void _call_globalStat_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_globalStat_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_globalStat:public CProxy_Chare{
  public:
    typedef globalStat local_t;
    typedef CkIndex_globalStat index_t;
    typedef CProxy_globalStat proxy_t;
    typedef CProxy_globalStat element_t;

    CProxy_globalStat(void) {};
    CProxy_globalStat(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_globalStat(const Chare *c) : CProxy_Chare(c){  }

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
    globalStat *ckLocal(void) const
    { return (globalStat *)CkLocalChare(&ckGetChareID()); }
/* DECLS: globalStat();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void localStatReport(localStatSummary* impl_msg);
 */
    
    void localStatReport(localStatSummary* impl_msg);

/* DECLS: globalStat(CkMigrateMessage* impl_msg);
 */

};
#define globalStat_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_globalStat>CBase_globalStat;




/* ---------------- method closures -------------- */
class Closure_localStat {
  public:


    struct SendStats_2_closure;


};

/* ---------------- method closures -------------- */
class Closure_globalStat {
  public:



};

extern void _registerstats(void);
#endif
