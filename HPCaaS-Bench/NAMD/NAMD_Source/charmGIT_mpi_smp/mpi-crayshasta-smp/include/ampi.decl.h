#ifndef _DECL_ampi_H_
#define _DECL_ampi_H_
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
/* DECLS: message AmpiMsg{
char data[];
}
;
 */
class AmpiMsg;
class CMessage_AmpiMsg:public CkMessage{
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
    CMessage_AmpiMsg();
    static void *pack(AmpiMsg *p);
    static AmpiMsg* unpack(void* p);
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



/* DECLS: readonly CProxy_ampiPeMgr ampiPeMgrProxy;
 */

/* DECLS: group ampiPeMgr: IrrGroup{
ampiPeMgr();
ampiPeMgr(CkMigrateMessage* impl_msg);
};
 */
 class ampiPeMgr;
 class CkIndex_ampiPeMgr;
 class CProxy_ampiPeMgr;
 class CProxyElement_ampiPeMgr;
 class CProxySection_ampiPeMgr;
/* --------------- index object ------------------ */
class CkIndex_ampiPeMgr:public CkIndex_IrrGroup{
  public:
    typedef ampiPeMgr local_t;
    typedef CkIndex_ampiPeMgr index_t;
    typedef CProxy_ampiPeMgr proxy_t;
    typedef CProxyElement_ampiPeMgr element_t;
    typedef CProxySection_ampiPeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampiPeMgr();
     */
    // Entry point registration at startup
    
    static int reg_ampiPeMgr_void();
    // Entry point index lookup
    
    inline static int idx_ampiPeMgr_void() {
      static int epidx = reg_ampiPeMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ampiPeMgr_void(); }
    
    static void _call_ampiPeMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiPeMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: ampiPeMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampiPeMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampiPeMgr_CkMigrateMessage() {
      static int epidx = reg_ampiPeMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampiPeMgr_CkMigrateMessage(); }
    
    static void _call_ampiPeMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiPeMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ampiPeMgr: public CProxyElement_IrrGroup{
  public:
    typedef ampiPeMgr local_t;
    typedef CkIndex_ampiPeMgr index_t;
    typedef CProxy_ampiPeMgr proxy_t;
    typedef CProxyElement_ampiPeMgr element_t;
    typedef CProxySection_ampiPeMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ampiPeMgr(void) {
    }
    CProxyElement_ampiPeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ampiPeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ampiPeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ampiPeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiPeMgr* ckLocalBranch(CkGroupID gID) {
      return (ampiPeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ampiPeMgr();
 */
    

/* DECLS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_ampiPeMgr: public CProxy_IrrGroup{
  public:
    typedef ampiPeMgr local_t;
    typedef CkIndex_ampiPeMgr index_t;
    typedef CProxy_ampiPeMgr proxy_t;
    typedef CProxyElement_ampiPeMgr element_t;
    typedef CProxySection_ampiPeMgr section_t;

    CProxy_ampiPeMgr(void) {
    }
    CProxy_ampiPeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ampiPeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ampiPeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ampiPeMgr operator[](int onPE) const
      {return CProxyElement_ampiPeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ampiPeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiPeMgr* ckLocalBranch(CkGroupID gID) {
      return (ampiPeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ampiPeMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_ampiPeMgr: public CProxySection_IrrGroup{
  public:
    typedef ampiPeMgr local_t;
    typedef CkIndex_ampiPeMgr index_t;
    typedef CProxy_ampiPeMgr proxy_t;
    typedef CProxyElement_ampiPeMgr element_t;
    typedef CProxySection_ampiPeMgr section_t;

    CProxySection_ampiPeMgr(void) {
    }
    CProxySection_ampiPeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ampiPeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ampiPeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ampiPeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ampiPeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ampiPeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiPeMgr* ckLocalBranch(CkGroupID gID) {
      return (ampiPeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ampiPeMgr();
 */
    

/* DECLS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */

};
#define ampiPeMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ampiPeMgr>CBase_ampiPeMgr;

/* DECLS: array ampiParent: ArrayElement{
ampiParent(const CProxy_TCharm &threads_, int nRanks_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
void resumeAfterMigration();
ampiParent(CkMigrateMessage* impl_msg);
};
 */
 class ampiParent;
 class CkIndex_ampiParent;
 class CProxy_ampiParent;
 class CProxyElement_ampiParent;
 class CProxySection_ampiParent;
/* --------------- index object ------------------ */
class CkIndex_ampiParent:public CkIndex_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
     */
    // Entry point registration at startup
    
    static int reg_ampiParent_marshall1();
    // Entry point index lookup
    
    inline static int idx_ampiParent_marshall1() {
      static int epidx = reg_ampiParent_marshall1();
      return epidx;
    }

    
    static int ckNew(const CProxy_TCharm &threads_, int nRanks_) { return idx_ampiParent_marshall1(); }
    
    static void _call_ampiParent_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiParent_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ampiParent_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ampiParent_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ResumeThread();
     */
    // Entry point registration at startup
    
    static int reg_ResumeThread_void();
    // Entry point index lookup
    
    inline static int idx_ResumeThread_void() {
      static int epidx = reg_ResumeThread_void();
      return epidx;
    }

    
    inline static int idx_ResumeThread(void (ampiParent::*)() ) {
      return idx_ResumeThread_void();
    }


    
    static int ResumeThread() { return idx_ResumeThread_void(); }
    
    static void _call_ResumeThread_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeThread_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Checkpoint(int len, const char *dname);
     */
    // Entry point registration at startup
    
    static int reg_Checkpoint_marshall3();
    // Entry point index lookup
    
    inline static int idx_Checkpoint_marshall3() {
      static int epidx = reg_Checkpoint_marshall3();
      return epidx;
    }

    
    inline static int idx_Checkpoint(void (ampiParent::*)(int len, const char *dname) ) {
      return idx_Checkpoint_marshall3();
    }


    
    static int Checkpoint(int len, const char *dname) { return idx_Checkpoint_marshall3(); }
    
    static void _call_Checkpoint_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Checkpoint_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Checkpoint_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Checkpoint_marshall3(PUP::er &p,void *msg);
    /* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_ExchangeProxy_marshall4();
    // Entry point index lookup
    
    inline static int idx_ExchangeProxy_marshall4() {
      static int epidx = reg_ExchangeProxy_marshall4();
      return epidx;
    }

    
    inline static int idx_ExchangeProxy(void (ampiParent::*)(const CProxy_ampi &impl_noname_0) ) {
      return idx_ExchangeProxy_marshall4();
    }


    
    static int ExchangeProxy(const CProxy_ampi &impl_noname_0) { return idx_ExchangeProxy_marshall4(); }
    
    static void _call_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ExchangeProxy_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ExchangeProxy_marshall4(PUP::er &p,void *msg);
    /* DECLS: void resumeAfterMigration();
     */
    // Entry point registration at startup
    
    static int reg_resumeAfterMigration_void();
    // Entry point index lookup
    
    inline static int idx_resumeAfterMigration_void() {
      static int epidx = reg_resumeAfterMigration_void();
      return epidx;
    }

    
    inline static int idx_resumeAfterMigration(void (ampiParent::*)() ) {
      return idx_resumeAfterMigration_void();
    }


    
    static int resumeAfterMigration() { return idx_resumeAfterMigration_void(); }
    
    static void _call_resumeAfterMigration_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeAfterMigration_void(void* impl_msg, void* impl_obj);
    /* DECLS: ampiParent(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampiParent_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampiParent_CkMigrateMessage() {
      static int epidx = reg_ampiParent_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampiParent_CkMigrateMessage(); }
    
    static void _call_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ampiParent : public CProxyElement_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_ampiParent(void) {
    }
    CProxyElement_ampiParent(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    ampiParent *ckLocal(void) const
    { return (ampiParent *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
    
    void insert(const CProxy_TCharm &threads_, int nRanks_, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resumeAfterMigration();
 */
    
    void resumeAfterMigration(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_ampiParent : public CProxy_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_ampiParent(void) {
    }
    CProxy_ampiParent(const ArrayElement *e) : CProxy_ArrayElement(e){
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

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_ampiParent operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampiParent operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampiParent operator [] (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator () (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_ampiParent(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_ampiParent(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
    
    static CkArrayID ckNew(const CProxy_TCharm &threads_, int nRanks_, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CProxy_TCharm &threads_, int nRanks_, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CProxy_TCharm &threads_, int nRanks_, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CProxy_TCharm &threads_, int nRanks_, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resumeAfterMigration();
 */
    
    void resumeAfterMigration(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_ampiParent : public CProxySection_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_ampiParent(void) {
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
    CProxyElement_ampiParent operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator [] (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator () (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_ampiParent(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_ampiParent(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_ampiParent(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ampiParent(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ampiParent(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
    

/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resumeAfterMigration();
 */
    
    void resumeAfterMigration(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
#define ampiParent_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_ampiParent>CBase_ampiParent;

/* DECLS: array ampi: ArrayElement{
ampi();
ampi(const CkArrayID &parent_, const ampiCommStruct &s);
void allInitDone();
void setInitDoneFlag();
void unblock();
void injectMsg(int size, const char *buf);
void genericSync(AmpiMsg* impl_msg);
void generic(AmpiMsg* impl_msg);
void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
void completedSend(int sreqIdx);
void completedRdmaSend(CkDataMsg* impl_msg);
void completedRdmaRecv(CkDataMsg* impl_msg);
void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
void barrierResult();
void ibarrierResult();
void bcastResult(AmpiMsg* impl_msg);
void rednResult(CkReductionMsg* impl_msg);
void irednResult(CkReductionMsg* impl_msg);
threaded void splitPhase1(CkReductionMsg* impl_msg);
threaded void splitPhaseInter(CkReductionMsg* impl_msg);
threaded void commCreatePhase1(int nextComm, int commType);
void registrationFinish();
threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
void setRemoteProxy(const CProxy_ampi &rproxy);
sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
sync void winRemoteUnlock(int winIndex, int requestRank);
AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
ampi(CkMigrateMessage* impl_msg);
};
 */
 class ampi;
 class CkIndex_ampi;
 class CProxy_ampi;
 class CProxyElement_ampi;
 class CProxySection_ampi;
/* --------------- index object ------------------ */
class CkIndex_ampi:public CkIndex_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampi();
     */
    // Entry point registration at startup
    
    static int reg_ampi_void();
    // Entry point index lookup
    
    inline static int idx_ampi_void() {
      static int epidx = reg_ampi_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ampi_void(); }
    
    static void _call_ampi_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_void(void* impl_msg, void* impl_obj);
    /* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
     */
    // Entry point registration at startup
    
    static int reg_ampi_marshall2();
    // Entry point index lookup
    
    inline static int idx_ampi_marshall2() {
      static int epidx = reg_ampi_marshall2();
      return epidx;
    }

    
    static int ckNew(const CkArrayID &parent_, const ampiCommStruct &s) { return idx_ampi_marshall2(); }
    
    static void _call_ampi_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ampi_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ampi_marshall2(PUP::er &p,void *msg);
    /* DECLS: void allInitDone();
     */
    // Entry point registration at startup
    
    static int reg_allInitDone_void();
    // Entry point index lookup
    
    inline static int idx_allInitDone_void() {
      static int epidx = reg_allInitDone_void();
      return epidx;
    }

    
    inline static int idx_allInitDone(void (ampi::*)() ) {
      return idx_allInitDone_void();
    }


    
    static int allInitDone() { return idx_allInitDone_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_allInitDone_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_allInitDone_void() {
      static int epidx = reg_redn_wrapper_allInitDone_void();
      return epidx;
    }
    
    static int redn_wrapper_allInitDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_allInitDone_void(); }
    
    static void _call_redn_wrapper_allInitDone_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_allInitDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_allInitDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setInitDoneFlag();
     */
    // Entry point registration at startup
    
    static int reg_setInitDoneFlag_void();
    // Entry point index lookup
    
    inline static int idx_setInitDoneFlag_void() {
      static int epidx = reg_setInitDoneFlag_void();
      return epidx;
    }

    
    inline static int idx_setInitDoneFlag(void (ampi::*)() ) {
      return idx_setInitDoneFlag_void();
    }


    
    static int setInitDoneFlag() { return idx_setInitDoneFlag_void(); }
    
    static void _call_setInitDoneFlag_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInitDoneFlag_void(void* impl_msg, void* impl_obj);
    /* DECLS: void unblock();
     */
    // Entry point registration at startup
    
    static int reg_unblock_void();
    // Entry point index lookup
    
    inline static int idx_unblock_void() {
      static int epidx = reg_unblock_void();
      return epidx;
    }

    
    inline static int idx_unblock(void (ampi::*)() ) {
      return idx_unblock_void();
    }


    
    static int unblock() { return idx_unblock_void(); }
    
    static void _call_unblock_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unblock_void(void* impl_msg, void* impl_obj);
    /* DECLS: void injectMsg(int size, const char *buf);
     */
    // Entry point registration at startup
    
    static int reg_injectMsg_marshall6();
    // Entry point index lookup
    
    inline static int idx_injectMsg_marshall6() {
      static int epidx = reg_injectMsg_marshall6();
      return epidx;
    }

    
    inline static int idx_injectMsg(void (ampi::*)(int size, const char *buf) ) {
      return idx_injectMsg_marshall6();
    }


    
    static int injectMsg(int size, const char *buf) { return idx_injectMsg_marshall6(); }
    
    static void _call_injectMsg_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_injectMsg_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_injectMsg_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_injectMsg_marshall6(PUP::er &p,void *msg);
    /* DECLS: void genericSync(AmpiMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_genericSync_AmpiMsg();
    // Entry point index lookup
    
    inline static int idx_genericSync_AmpiMsg() {
      static int epidx = reg_genericSync_AmpiMsg();
      return epidx;
    }

    
    inline static int idx_genericSync(void (ampi::*)(AmpiMsg* impl_msg) ) {
      return idx_genericSync_AmpiMsg();
    }


    
    static int genericSync(AmpiMsg* impl_msg) { return idx_genericSync_AmpiMsg(); }
    
    static void _call_genericSync_AmpiMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_genericSync_AmpiMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void generic(AmpiMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_generic_AmpiMsg();
    // Entry point index lookup
    
    inline static int idx_generic_AmpiMsg() {
      static int epidx = reg_generic_AmpiMsg();
      return epidx;
    }

    
    inline static int idx_generic(void (ampi::*)(AmpiMsg* impl_msg) ) {
      return idx_generic_AmpiMsg();
    }


    
    static int generic(AmpiMsg* impl_msg) { return idx_generic_AmpiMsg(); }
    
    static void _call_generic_AmpiMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_generic_AmpiMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
     */
    // Entry point registration at startup
    
    static int reg_genericRdma_marshall9();
    // Entry point index lookup
    
    inline static int idx_genericRdma_marshall9() {
      static int epidx = reg_genericRdma_marshall9();
      return epidx;
    }

    
    inline static int idx_genericRdma(void (ampi::*)(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank) ) {
      return idx_genericRdma_marshall9();
    }


    
    static int genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank) { return idx_genericRdma_marshall9(); }
    
    static void _call_genericRdma_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_genericRdma_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_genericRdma_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_genericRdma_marshall9(PUP::er &p,void *msg);
    /* DECLS: void completedSend(int sreqIdx);
     */
    // Entry point registration at startup
    
    static int reg_completedSend_marshall10();
    // Entry point index lookup
    
    inline static int idx_completedSend_marshall10() {
      static int epidx = reg_completedSend_marshall10();
      return epidx;
    }

    
    inline static int idx_completedSend(void (ampi::*)(int sreqIdx) ) {
      return idx_completedSend_marshall10();
    }


    
    static int completedSend(int sreqIdx) { return idx_completedSend_marshall10(); }
    
    static void _call_completedSend_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_completedSend_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_completedSend_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_completedSend_marshall10(PUP::er &p,void *msg);
    /* DECLS: void completedRdmaSend(CkDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_completedRdmaSend_CkDataMsg();
    // Entry point index lookup
    
    inline static int idx_completedRdmaSend_CkDataMsg() {
      static int epidx = reg_completedRdmaSend_CkDataMsg();
      return epidx;
    }

    
    inline static int idx_completedRdmaSend(void (ampi::*)(CkDataMsg* impl_msg) ) {
      return idx_completedRdmaSend_CkDataMsg();
    }


    
    static int completedRdmaSend(CkDataMsg* impl_msg) { return idx_completedRdmaSend_CkDataMsg(); }
    
    static void _call_completedRdmaSend_CkDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_completedRdmaSend_CkDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void completedRdmaRecv(CkDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_completedRdmaRecv_CkDataMsg();
    // Entry point index lookup
    
    inline static int idx_completedRdmaRecv_CkDataMsg() {
      static int epidx = reg_completedRdmaRecv_CkDataMsg();
      return epidx;
    }

    
    inline static int idx_completedRdmaRecv(void (ampi::*)(CkDataMsg* impl_msg) ) {
      return idx_completedRdmaRecv_CkDataMsg();
    }


    
    static int completedRdmaRecv(CkDataMsg* impl_msg) { return idx_completedRdmaRecv_CkDataMsg(); }
    
    static void _call_completedRdmaRecv_CkDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_completedRdmaRecv_CkDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
     */
    // Entry point registration at startup
    
    static int reg_requestPut_marshall13();
    // Entry point index lookup
    
    inline static int idx_requestPut_marshall13() {
      static int epidx = reg_requestPut_marshall13();
      return epidx;
    }

    
    inline static int idx_requestPut(void (ampi::*)(const MPI_Request &req, const CkNcpyBuffer &targetInfo) ) {
      return idx_requestPut_marshall13();
    }


    
    static int requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo) { return idx_requestPut_marshall13(); }
    
    static void _call_requestPut_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestPut_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestPut_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestPut_marshall13(PUP::er &p,void *msg);
    /* DECLS: void barrierResult();
     */
    // Entry point registration at startup
    
    static int reg_barrierResult_void();
    // Entry point index lookup
    
    inline static int idx_barrierResult_void() {
      static int epidx = reg_barrierResult_void();
      return epidx;
    }

    
    inline static int idx_barrierResult(void (ampi::*)() ) {
      return idx_barrierResult_void();
    }


    
    static int barrierResult() { return idx_barrierResult_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_barrierResult_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_barrierResult_void() {
      static int epidx = reg_redn_wrapper_barrierResult_void();
      return epidx;
    }
    
    static int redn_wrapper_barrierResult(CkReductionMsg* impl_msg) { return idx_redn_wrapper_barrierResult_void(); }
    
    static void _call_redn_wrapper_barrierResult_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_barrierResult_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrierResult_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ibarrierResult();
     */
    // Entry point registration at startup
    
    static int reg_ibarrierResult_void();
    // Entry point index lookup
    
    inline static int idx_ibarrierResult_void() {
      static int epidx = reg_ibarrierResult_void();
      return epidx;
    }

    
    inline static int idx_ibarrierResult(void (ampi::*)() ) {
      return idx_ibarrierResult_void();
    }


    
    static int ibarrierResult() { return idx_ibarrierResult_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ibarrierResult_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ibarrierResult_void() {
      static int epidx = reg_redn_wrapper_ibarrierResult_void();
      return epidx;
    }
    
    static int redn_wrapper_ibarrierResult(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ibarrierResult_void(); }
    
    static void _call_redn_wrapper_ibarrierResult_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ibarrierResult_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ibarrierResult_void(void* impl_msg, void* impl_obj);
    /* DECLS: void bcastResult(AmpiMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_bcastResult_AmpiMsg();
    // Entry point index lookup
    
    inline static int idx_bcastResult_AmpiMsg() {
      static int epidx = reg_bcastResult_AmpiMsg();
      return epidx;
    }

    
    inline static int idx_bcastResult(void (ampi::*)(AmpiMsg* impl_msg) ) {
      return idx_bcastResult_AmpiMsg();
    }


    
    static int bcastResult(AmpiMsg* impl_msg) { return idx_bcastResult_AmpiMsg(); }
    
    static void _call_bcastResult_AmpiMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_bcastResult_AmpiMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void rednResult(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_rednResult_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_rednResult_CkReductionMsg() {
      static int epidx = reg_rednResult_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_rednResult(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_rednResult_CkReductionMsg();
    }


    
    static int rednResult(CkReductionMsg* impl_msg) { return idx_rednResult_CkReductionMsg(); }
    
    static void _call_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void irednResult(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_irednResult_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_irednResult_CkReductionMsg() {
      static int epidx = reg_irednResult_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_irednResult(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_irednResult_CkReductionMsg();
    }


    
    static int irednResult(CkReductionMsg* impl_msg) { return idx_irednResult_CkReductionMsg(); }
    
    static void _call_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitPhase1_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_splitPhase1_CkReductionMsg() {
      static int epidx = reg_splitPhase1_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_splitPhase1(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_splitPhase1_CkReductionMsg();
    }


    
    static int splitPhase1(CkReductionMsg* impl_msg) { return idx_splitPhase1_CkReductionMsg(); }
    
    static void _call_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_splitPhase1_CkReductionMsg(CkThrCallArg *);
    /* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitPhaseInter_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_splitPhaseInter_CkReductionMsg() {
      static int epidx = reg_splitPhaseInter_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_splitPhaseInter(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_splitPhaseInter_CkReductionMsg();
    }


    
    static int splitPhaseInter(CkReductionMsg* impl_msg) { return idx_splitPhaseInter_CkReductionMsg(); }
    
    static void _call_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_splitPhaseInter_CkReductionMsg(CkThrCallArg *);
    /* DECLS: threaded void commCreatePhase1(int nextComm, int commType);
     */
    // Entry point registration at startup
    
    static int reg_commCreatePhase1_marshall21();
    // Entry point index lookup
    
    inline static int idx_commCreatePhase1_marshall21() {
      static int epidx = reg_commCreatePhase1_marshall21();
      return epidx;
    }

    
    inline static int idx_commCreatePhase1(void (ampi::*)(int nextComm, int commType) ) {
      return idx_commCreatePhase1_marshall21();
    }


    
    static int commCreatePhase1(int nextComm, int commType) { return idx_commCreatePhase1_marshall21(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_commCreatePhase1_marshall21();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_commCreatePhase1_marshall21() {
      static int epidx = reg_redn_wrapper_commCreatePhase1_marshall21();
      return epidx;
    }
    
    static int redn_wrapper_commCreatePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_commCreatePhase1_marshall21(); }
    
    static void _call_redn_wrapper_commCreatePhase1_marshall21(void* impl_msg, void* impl_obj_void);
    
    static void _call_commCreatePhase1_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_commCreatePhase1_marshall21(void* impl_msg, void* impl_obj);
    
    static void _callthr_commCreatePhase1_marshall21(CkThrCallArg *);
    
    static void _marshallmessagepup_commCreatePhase1_marshall21(PUP::er &p,void *msg);
    /* DECLS: void registrationFinish();
     */
    // Entry point registration at startup
    
    static int reg_registrationFinish_void();
    // Entry point index lookup
    
    inline static int idx_registrationFinish_void() {
      static int epidx = reg_registrationFinish_void();
      return epidx;
    }

    
    inline static int idx_registrationFinish(void (ampi::*)() ) {
      return idx_registrationFinish_void();
    }


    
    static int registrationFinish() { return idx_registrationFinish_void(); }
    
    static void _call_registrationFinish_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registrationFinish_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
     */
    // Entry point registration at startup
    
    static int reg_intercommCreatePhase1_marshall23();
    // Entry point index lookup
    
    inline static int idx_intercommCreatePhase1_marshall23() {
      static int epidx = reg_intercommCreatePhase1_marshall23();
      return epidx;
    }

    
    inline static int idx_intercommCreatePhase1(void (ampi::*)(const MPI_Comm &nextInterComm) ) {
      return idx_intercommCreatePhase1_marshall23();
    }


    
    static int intercommCreatePhase1(const MPI_Comm &nextInterComm) { return idx_intercommCreatePhase1_marshall23(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_intercommCreatePhase1_marshall23();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_intercommCreatePhase1_marshall23() {
      static int epidx = reg_redn_wrapper_intercommCreatePhase1_marshall23();
      return epidx;
    }
    
    static int redn_wrapper_intercommCreatePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_intercommCreatePhase1_marshall23(); }
    
    static void _call_redn_wrapper_intercommCreatePhase1_marshall23(void* impl_msg, void* impl_obj_void);
    
    static void _call_intercommCreatePhase1_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_intercommCreatePhase1_marshall23(void* impl_msg, void* impl_obj);
    
    static void _callthr_intercommCreatePhase1_marshall23(CkThrCallArg *);
    
    static void _marshallmessagepup_intercommCreatePhase1_marshall23(PUP::er &p,void *msg);
    /* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
     */
    // Entry point registration at startup
    
    static int reg_intercommMergePhase1_marshall24();
    // Entry point index lookup
    
    inline static int idx_intercommMergePhase1_marshall24() {
      static int epidx = reg_intercommMergePhase1_marshall24();
      return epidx;
    }

    
    inline static int idx_intercommMergePhase1(void (ampi::*)(const MPI_Comm &nextIntraComm) ) {
      return idx_intercommMergePhase1_marshall24();
    }


    
    static int intercommMergePhase1(const MPI_Comm &nextIntraComm) { return idx_intercommMergePhase1_marshall24(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_intercommMergePhase1_marshall24();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_intercommMergePhase1_marshall24() {
      static int epidx = reg_redn_wrapper_intercommMergePhase1_marshall24();
      return epidx;
    }
    
    static int redn_wrapper_intercommMergePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_intercommMergePhase1_marshall24(); }
    
    static void _call_redn_wrapper_intercommMergePhase1_marshall24(void* impl_msg, void* impl_obj_void);
    
    static void _call_intercommMergePhase1_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_intercommMergePhase1_marshall24(void* impl_msg, void* impl_obj);
    
    static void _callthr_intercommMergePhase1_marshall24(CkThrCallArg *);
    
    static void _marshallmessagepup_intercommMergePhase1_marshall24(PUP::er &p,void *msg);
    /* DECLS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_exchangeProxyForSplitLocal_marshall25();
    // Entry point index lookup
    
    inline static int idx_exchangeProxyForSplitLocal_marshall25() {
      static int epidx = reg_exchangeProxyForSplitLocal_marshall25();
      return epidx;
    }

    
    inline static int idx_exchangeProxyForSplitLocal(void (ampi::*)(int impl_noname_1, const CProxy_ampi &impl_noname_2) ) {
      return idx_exchangeProxyForSplitLocal_marshall25();
    }


    
    static int exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2) { return idx_exchangeProxyForSplitLocal_marshall25(); }
    
    static void _call_exchangeProxyForSplitLocal_marshall25(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchangeProxyForSplitLocal_marshall25(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchangeProxyForSplitLocal_marshall25(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchangeProxyForSplitLocal_marshall25(PUP::er &p,void *msg);
    /* DECLS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_exchangeProxyForSplitRemote_marshall26();
    // Entry point index lookup
    
    inline static int idx_exchangeProxyForSplitRemote_marshall26() {
      static int epidx = reg_exchangeProxyForSplitRemote_marshall26();
      return epidx;
    }

    
    inline static int idx_exchangeProxyForSplitRemote(void (ampi::*)(int impl_noname_3, const CProxy_ampi &impl_noname_4) ) {
      return idx_exchangeProxyForSplitRemote_marshall26();
    }


    
    static int exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4) { return idx_exchangeProxyForSplitRemote_marshall26(); }
    
    static void _call_exchangeProxyForSplitRemote_marshall26(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchangeProxyForSplitRemote_marshall26(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchangeProxyForSplitRemote_marshall26(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchangeProxyForSplitRemote_marshall26(PUP::er &p,void *msg);
    /* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
     */
    // Entry point registration at startup
    
    static int reg_setRemoteProxy_marshall27();
    // Entry point index lookup
    
    inline static int idx_setRemoteProxy_marshall27() {
      static int epidx = reg_setRemoteProxy_marshall27();
      return epidx;
    }

    
    inline static int idx_setRemoteProxy(void (ampi::*)(const CProxy_ampi &rproxy) ) {
      return idx_setRemoteProxy_marshall27();
    }


    
    static int setRemoteProxy(const CProxy_ampi &rproxy) { return idx_setRemoteProxy_marshall27(); }
    
    static void _call_setRemoteProxy_marshall27(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setRemoteProxy_marshall27(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setRemoteProxy_marshall27(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setRemoteProxy_marshall27(PUP::er &p,void *msg);
    /* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemotePut_marshall28();
    // Entry point index lookup
    
    inline static int idx_winRemotePut_marshall28() {
      static int epidx = reg_winRemotePut_marshall28();
      return epidx;
    }

    
    inline static int idx_winRemotePut(void (ampi::*)(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemotePut_marshall28();
    }


    
    static int winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemotePut_marshall28(); }
    
    static void _call_winRemotePut_marshall28(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemotePut_marshall28(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemotePut_marshall28(PUP::er &p,void *msg);
    /* DECLS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemotePut_marshall29();
    // Entry point index lookup
    
    inline static int idx_winRemotePut_marshall29() {
      static int epidx = reg_winRemotePut_marshall29();
      return epidx;
    }

    
    inline static int idx_winRemotePut(void (ampi::*)(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemotePut_marshall29();
    }


    
    static int winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemotePut_marshall29(); }
    
    static void _call_winRemotePut_marshall29(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemotePut_marshall29(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemotePut_marshall29(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteGet_marshall30();
    // Entry point index lookup
    
    inline static int idx_winRemoteGet_marshall30() {
      static int epidx = reg_winRemoteGet_marshall30();
      return epidx;
    }

    
    inline static int idx_winRemoteGet(AmpiMsg* (ampi::*)(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemoteGet_marshall30();
    }


    
    static int winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemoteGet_marshall30(); }
    
    static void _call_winRemoteGet_marshall30(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteGet_marshall30(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteGet_marshall30(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteAccumulate_marshall31();
    // Entry point index lookup
    
    inline static int idx_winRemoteAccumulate_marshall31() {
      static int epidx = reg_winRemoteAccumulate_marshall31();
      return epidx;
    }

    
    inline static int idx_winRemoteAccumulate(void (ampi::*)(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) ) {
      return idx_winRemoteAccumulate_marshall31();
    }


    
    static int winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) { return idx_winRemoteAccumulate_marshall31(); }
    
    static void _call_winRemoteAccumulate_marshall31(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteAccumulate_marshall31(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteAccumulate_marshall31(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteAccumulate_marshall32();
    // Entry point index lookup
    
    inline static int idx_winRemoteAccumulate_marshall32() {
      static int epidx = reg_winRemoteAccumulate_marshall32();
      return epidx;
    }

    
    inline static int idx_winRemoteAccumulate(void (ampi::*)(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) ) {
      return idx_winRemoteAccumulate_marshall32();
    }


    
    static int winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) { return idx_winRemoteAccumulate_marshall32(); }
    
    static void _call_winRemoteAccumulate_marshall32(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteAccumulate_marshall32(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteAccumulate_marshall32(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteGetAccumulate_marshall33();
    // Entry point index lookup
    
    inline static int idx_winRemoteGetAccumulate_marshall33() {
      static int epidx = reg_winRemoteGetAccumulate_marshall33();
      return epidx;
    }

    
    inline static int idx_winRemoteGetAccumulate(AmpiMsg* (ampi::*)(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) ) {
      return idx_winRemoteGetAccumulate_marshall33();
    }


    
    static int winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) { return idx_winRemoteGetAccumulate_marshall33(); }
    
    static void _call_winRemoteGetAccumulate_marshall33(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteGetAccumulate_marshall33(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteGetAccumulate_marshall33(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteGetAccumulate_marshall34();
    // Entry point index lookup
    
    inline static int idx_winRemoteGetAccumulate_marshall34() {
      static int epidx = reg_winRemoteGetAccumulate_marshall34();
      return epidx;
    }

    
    inline static int idx_winRemoteGetAccumulate(AmpiMsg* (ampi::*)(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex) ) {
      return idx_winRemoteGetAccumulate_marshall34();
    }


    
    static int winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex) { return idx_winRemoteGetAccumulate_marshall34(); }
    
    static void _call_winRemoteGetAccumulate_marshall34(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteGetAccumulate_marshall34(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteGetAccumulate_marshall34(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteCompareAndSwap_marshall35();
    // Entry point index lookup
    
    inline static int idx_winRemoteCompareAndSwap_marshall35() {
      static int epidx = reg_winRemoteCompareAndSwap_marshall35();
      return epidx;
    }

    
    inline static int idx_winRemoteCompareAndSwap(AmpiMsg* (ampi::*)(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex) ) {
      return idx_winRemoteCompareAndSwap_marshall35();
    }


    
    static int winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex) { return idx_winRemoteCompareAndSwap_marshall35(); }
    
    static void _call_winRemoteCompareAndSwap_marshall35(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteCompareAndSwap_marshall35(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteCompareAndSwap_marshall35(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteLock_marshall36();
    // Entry point index lookup
    
    inline static int idx_winRemoteLock_marshall36() {
      static int epidx = reg_winRemoteLock_marshall36();
      return epidx;
    }

    
    inline static int idx_winRemoteLock(void (ampi::*)(int lock_type, int winIndex, int requestRank) ) {
      return idx_winRemoteLock_marshall36();
    }


    
    static int winRemoteLock(int lock_type, int winIndex, int requestRank) { return idx_winRemoteLock_marshall36(); }
    
    static void _call_winRemoteLock_marshall36(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteLock_marshall36(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteLock_marshall36(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteUnlock_marshall37();
    // Entry point index lookup
    
    inline static int idx_winRemoteUnlock_marshall37() {
      static int epidx = reg_winRemoteUnlock_marshall37();
      return epidx;
    }

    
    inline static int idx_winRemoteUnlock(void (ampi::*)(int winIndex, int requestRank) ) {
      return idx_winRemoteUnlock_marshall37();
    }


    
    static int winRemoteUnlock(int winIndex, int requestRank) { return idx_winRemoteUnlock_marshall37(); }
    
    static void _call_winRemoteUnlock_marshall37(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteUnlock_marshall37(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteUnlock_marshall37(PUP::er &p,void *msg);
    /* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteIget_marshall38();
    // Entry point index lookup
    
    inline static int idx_winRemoteIget_marshall38() {
      static int epidx = reg_winRemoteIget_marshall38();
      return epidx;
    }

    
    inline static int idx_winRemoteIget(AmpiMsg* (ampi::*)(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemoteIget_marshall38();
    }


    
    static int winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemoteIget_marshall38(); }
    
    static void _call_winRemoteIget_marshall38(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteIget_marshall38(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_winRemoteIget_marshall38(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_winRemoteIget_marshall38(PUP::er &p,void *msg);
    /* DECLS: ampi(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampi_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampi_CkMigrateMessage() {
      static int epidx = reg_ampi_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampi_CkMigrateMessage(); }
    
    static void _call_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ampi : public CProxyElement_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_ampi(void) {
    }
    CProxyElement_ampi(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    ampi *ckLocal(void) const
    { return (ampi *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: ampi();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    
    void insert(const CkArrayID &parent_, const ampiCommStruct &s, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void injectMsg(int size, const char *buf);
 */
    
    void injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void genericSync(AmpiMsg* impl_msg);
 */
    
    void genericSync(AmpiMsg* impl_msg) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
    
    void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedSend(int sreqIdx);
 */
    
    void completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
    
    void completedRdmaSend(CkDataMsg* impl_msg) ;

/* DECLS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
    
    void completedRdmaRecv(CkDataMsg* impl_msg) ;

/* DECLS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
    
    void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void bcastResult(AmpiMsg* impl_msg);
 */
    
    void bcastResult(AmpiMsg* impl_msg) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(int nextComm, int commType);
 */
    
    void commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void registrationFinish();
 */
    
    void registrationFinish(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
    
    void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
    
    void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
    
    void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
    
    void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
    
    AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */
    
    AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */
    
    AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */
    
    void winRemoteLock(int lock_type, int winIndex, int requestRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */
    
    void winRemoteUnlock(int winIndex, int requestRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    CkFutureID winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_ampi : public CProxy_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_ampi(void) {
    }
    CProxy_ampi(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_ampi operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampi operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampi operator [] (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_ampi operator () (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_ampi(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_ampi(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: ampi();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    
    static CkArrayID ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void injectMsg(int size, const char *buf);
 */
    
    void injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void genericSync(AmpiMsg* impl_msg);
 */
    
    void genericSync(AmpiMsg* impl_msg) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
    
    void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedSend(int sreqIdx);
 */
    
    void completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
    
    void completedRdmaSend(CkDataMsg* impl_msg) ;

/* DECLS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
    
    void completedRdmaRecv(CkDataMsg* impl_msg) ;

/* DECLS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
    
    void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void bcastResult(AmpiMsg* impl_msg);
 */
    
    void bcastResult(AmpiMsg* impl_msg) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(int nextComm, int commType);
 */
    
    void commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void registrationFinish();
 */
    
    void registrationFinish(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
    
    void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
    
    void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_ampi : public CProxySection_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_ampi(void) {
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
    CProxyElement_ampi operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampi operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampi operator [] (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_ampi operator () (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_ampi(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_ampi(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_ampi(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ampi(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ampi(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: ampi();
 */
    

/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    

/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void injectMsg(int size, const char *buf);
 */
    
    void injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void genericSync(AmpiMsg* impl_msg);
 */
    
    void genericSync(AmpiMsg* impl_msg) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
    
    void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedSend(int sreqIdx);
 */
    
    void completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
    
    void completedRdmaSend(CkDataMsg* impl_msg) ;

/* DECLS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
    
    void completedRdmaRecv(CkDataMsg* impl_msg) ;

/* DECLS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
    
    void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void bcastResult(AmpiMsg* impl_msg);
 */
    
    void bcastResult(AmpiMsg* impl_msg) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(int nextComm, int commType);
 */
    
    void commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void registrationFinish();
 */
    
    void registrationFinish(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
    
    void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
    
    void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
#define ampi_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_ampi>CBase_ampi;





/* ---------------- method closures -------------- */
class Closure_ampiPeMgr {
  public:


};

/* ---------------- method closures -------------- */
class Closure_ampiParent {
  public:


    struct ResumeThread_2_closure;


    struct Checkpoint_3_closure;


    struct ExchangeProxy_4_closure;


    struct resumeAfterMigration_5_closure;


};

/* ---------------- method closures -------------- */
class Closure_ampi {
  public:



    struct allInitDone_3_closure;


    struct setInitDoneFlag_4_closure;


    struct unblock_5_closure;


    struct injectMsg_6_closure;




    struct genericRdma_9_closure;


    struct completedSend_10_closure;




    struct requestPut_13_closure;


    struct barrierResult_14_closure;


    struct ibarrierResult_15_closure;







    struct commCreatePhase1_21_closure;


    struct registrationFinish_22_closure;


    struct intercommCreatePhase1_23_closure;


    struct intercommMergePhase1_24_closure;


    struct exchangeProxyForSplitLocal_25_closure;


    struct exchangeProxyForSplitRemote_26_closure;


    struct setRemoteProxy_27_closure;


    struct winRemotePut_28_closure;


    struct winRemotePut_29_closure;


    struct winRemoteGet_30_closure;


    struct winRemoteAccumulate_31_closure;


    struct winRemoteAccumulate_32_closure;


    struct winRemoteGetAccumulate_33_closure;


    struct winRemoteGetAccumulate_34_closure;


    struct winRemoteCompareAndSwap_35_closure;


    struct winRemoteLock_36_closure;


    struct winRemoteUnlock_37_closure;


    struct winRemoteIget_38_closure;


};

extern void _registerampi(void);
#endif
