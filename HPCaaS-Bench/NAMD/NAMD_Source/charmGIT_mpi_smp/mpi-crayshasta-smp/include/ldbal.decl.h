#ifndef _DECL_ldbal_H_
#define _DECL_ldbal_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_LBgroup TheLBG;
 */

/* DECLS: readonly CProxy_LBstrategy TheLBstrategy;
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
/* DECLS: message LoadReport;
 */
class LoadReport;
class CMessage_LoadReport:public CkMessage{
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
    CMessage_LoadReport();
    static void *pack(LoadReport *p);
    static LoadReport* unpack(void* p);
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
/* DECLS: message BalanceSpecs;
 */
class BalanceSpecs;
class CMessage_BalanceSpecs:public CkMessage{
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
    CMessage_BalanceSpecs();
    static void *pack(BalanceSpecs *p);
    static BalanceSpecs* unpack(void* p);
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

/* DECLS: group LBgroup: IrrGroup{
LBgroup();
void calculateLocalLoad();
void balance(BalanceSpecs* impl_msg);
};
 */
 class LBgroup;
 class CkIndex_LBgroup;
 class CProxy_LBgroup;
 class CProxyElement_LBgroup;
 class CProxySection_LBgroup;
/* --------------- index object ------------------ */
class CkIndex_LBgroup:public CkIndex_IrrGroup{
  public:
    typedef LBgroup local_t;
    typedef CkIndex_LBgroup index_t;
    typedef CProxy_LBgroup proxy_t;
    typedef CProxyElement_LBgroup element_t;
    typedef CProxySection_LBgroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LBgroup();
     */
    // Entry point registration at startup
    
    static int reg_LBgroup_void();
    // Entry point index lookup
    
    inline static int idx_LBgroup_void() {
      static int epidx = reg_LBgroup_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LBgroup_void(); }
    
    static void _call_LBgroup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBgroup_void(void* impl_msg, void* impl_obj);
    /* DECLS: void calculateLocalLoad();
     */
    // Entry point registration at startup
    
    static int reg_calculateLocalLoad_void();
    // Entry point index lookup
    
    inline static int idx_calculateLocalLoad_void() {
      static int epidx = reg_calculateLocalLoad_void();
      return epidx;
    }

    
    inline static int idx_calculateLocalLoad(void (LBgroup::*)() ) {
      return idx_calculateLocalLoad_void();
    }


    
    static int calculateLocalLoad() { return idx_calculateLocalLoad_void(); }
    
    static void _call_calculateLocalLoad_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calculateLocalLoad_void(void* impl_msg, void* impl_obj);
    /* DECLS: void balance(BalanceSpecs* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_balance_BalanceSpecs();
    // Entry point index lookup
    
    inline static int idx_balance_BalanceSpecs() {
      static int epidx = reg_balance_BalanceSpecs();
      return epidx;
    }

    
    inline static int idx_balance(void (LBgroup::*)(BalanceSpecs* impl_msg) ) {
      return idx_balance_BalanceSpecs();
    }


    
    static int balance(BalanceSpecs* impl_msg) { return idx_balance_BalanceSpecs(); }
    
    static void _call_balance_BalanceSpecs(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_balance_BalanceSpecs(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LBgroup: public CProxyElement_IrrGroup{
  public:
    typedef LBgroup local_t;
    typedef CkIndex_LBgroup index_t;
    typedef CProxy_LBgroup proxy_t;
    typedef CProxyElement_LBgroup element_t;
    typedef CProxySection_LBgroup section_t;


    /* TRAM aggregators */

    CProxyElement_LBgroup(void) {
    }
    CProxyElement_LBgroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LBgroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LBgroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LBgroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBgroup* ckLocalBranch(CkGroupID gID) {
      return (LBgroup*)CkLocalBranch(gID);
    }
/* DECLS: LBgroup();
 */
    

/* DECLS: void calculateLocalLoad();
 */
    
    void calculateLocalLoad(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void balance(BalanceSpecs* impl_msg);
 */
    
    void balance(BalanceSpecs* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_LBgroup: public CProxy_IrrGroup{
  public:
    typedef LBgroup local_t;
    typedef CkIndex_LBgroup index_t;
    typedef CProxy_LBgroup proxy_t;
    typedef CProxyElement_LBgroup element_t;
    typedef CProxySection_LBgroup section_t;

    CProxy_LBgroup(void) {
    }
    CProxy_LBgroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LBgroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LBgroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LBgroup operator[](int onPE) const
      {return CProxyElement_LBgroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LBgroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBgroup* ckLocalBranch(CkGroupID gID) {
      return (LBgroup*)CkLocalBranch(gID);
    }
/* DECLS: LBgroup();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void calculateLocalLoad();
 */
    
    void calculateLocalLoad(const CkEntryOptions *impl_e_opts=NULL);
    
    void calculateLocalLoad(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void calculateLocalLoad(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void balance(BalanceSpecs* impl_msg);
 */
    
    void balance(BalanceSpecs* impl_msg);
    
    void balance(BalanceSpecs* impl_msg, int npes, int *pes);
    
    void balance(BalanceSpecs* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_LBgroup: public CProxySection_IrrGroup{
  public:
    typedef LBgroup local_t;
    typedef CkIndex_LBgroup index_t;
    typedef CProxy_LBgroup proxy_t;
    typedef CProxyElement_LBgroup element_t;
    typedef CProxySection_LBgroup section_t;

    CProxySection_LBgroup(void) {
    }
    CProxySection_LBgroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LBgroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LBgroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LBgroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LBgroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LBgroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBgroup* ckLocalBranch(CkGroupID gID) {
      return (LBgroup*)CkLocalBranch(gID);
    }
/* DECLS: LBgroup();
 */
    

/* DECLS: void calculateLocalLoad();
 */
    
    void calculateLocalLoad(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void balance(BalanceSpecs* impl_msg);
 */
    
    void balance(BalanceSpecs* impl_msg);

};
#define LBgroup_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LBgroup>CBase_LBgroup;

/* DECLS: group LBstrategy: IrrGroup{
LBstrategy();
void recvLoadReport(LoadReport* impl_msg);
};
 */
 class LBstrategy;
 class CkIndex_LBstrategy;
 class CProxy_LBstrategy;
 class CProxyElement_LBstrategy;
 class CProxySection_LBstrategy;
/* --------------- index object ------------------ */
class CkIndex_LBstrategy:public CkIndex_IrrGroup{
  public:
    typedef LBstrategy local_t;
    typedef CkIndex_LBstrategy index_t;
    typedef CProxy_LBstrategy proxy_t;
    typedef CProxyElement_LBstrategy element_t;
    typedef CProxySection_LBstrategy section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LBstrategy();
     */
    // Entry point registration at startup
    
    static int reg_LBstrategy_void();
    // Entry point index lookup
    
    inline static int idx_LBstrategy_void() {
      static int epidx = reg_LBstrategy_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LBstrategy_void(); }
    
    static void _call_LBstrategy_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBstrategy_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvLoadReport(LoadReport* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvLoadReport_LoadReport();
    // Entry point index lookup
    
    inline static int idx_recvLoadReport_LoadReport() {
      static int epidx = reg_recvLoadReport_LoadReport();
      return epidx;
    }

    
    inline static int idx_recvLoadReport(void (LBstrategy::*)(LoadReport* impl_msg) ) {
      return idx_recvLoadReport_LoadReport();
    }


    
    static int recvLoadReport(LoadReport* impl_msg) { return idx_recvLoadReport_LoadReport(); }
    
    static void _call_recvLoadReport_LoadReport(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvLoadReport_LoadReport(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LBstrategy: public CProxyElement_IrrGroup{
  public:
    typedef LBstrategy local_t;
    typedef CkIndex_LBstrategy index_t;
    typedef CProxy_LBstrategy proxy_t;
    typedef CProxyElement_LBstrategy element_t;
    typedef CProxySection_LBstrategy section_t;


    /* TRAM aggregators */

    CProxyElement_LBstrategy(void) {
    }
    CProxyElement_LBstrategy(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LBstrategy(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LBstrategy(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LBstrategy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBstrategy* ckLocalBranch(CkGroupID gID) {
      return (LBstrategy*)CkLocalBranch(gID);
    }
/* DECLS: LBstrategy();
 */
    

/* DECLS: void recvLoadReport(LoadReport* impl_msg);
 */
    
    void recvLoadReport(LoadReport* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_LBstrategy: public CProxy_IrrGroup{
  public:
    typedef LBstrategy local_t;
    typedef CkIndex_LBstrategy index_t;
    typedef CProxy_LBstrategy proxy_t;
    typedef CProxyElement_LBstrategy element_t;
    typedef CProxySection_LBstrategy section_t;

    CProxy_LBstrategy(void) {
    }
    CProxy_LBstrategy(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LBstrategy(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LBstrategy(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LBstrategy operator[](int onPE) const
      {return CProxyElement_LBstrategy(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LBstrategy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBstrategy* ckLocalBranch(CkGroupID gID) {
      return (LBstrategy*)CkLocalBranch(gID);
    }
/* DECLS: LBstrategy();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvLoadReport(LoadReport* impl_msg);
 */
    
    void recvLoadReport(LoadReport* impl_msg);
    
    void recvLoadReport(LoadReport* impl_msg, int npes, int *pes);
    
    void recvLoadReport(LoadReport* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_LBstrategy: public CProxySection_IrrGroup{
  public:
    typedef LBstrategy local_t;
    typedef CkIndex_LBstrategy index_t;
    typedef CProxy_LBstrategy proxy_t;
    typedef CProxyElement_LBstrategy element_t;
    typedef CProxySection_LBstrategy section_t;

    CProxySection_LBstrategy(void) {
    }
    CProxySection_LBstrategy(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LBstrategy(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LBstrategy(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LBstrategy(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LBstrategy(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LBstrategy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBstrategy* ckLocalBranch(CkGroupID gID) {
      return (LBstrategy*)CkLocalBranch(gID);
    }
/* DECLS: LBstrategy();
 */
    

/* DECLS: void recvLoadReport(LoadReport* impl_msg);
 */
    
    void recvLoadReport(LoadReport* impl_msg);

};
#define LBstrategy_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LBstrategy>CBase_LBstrategy;





/* ---------------- method closures -------------- */
class Closure_LBgroup {
  public:


    struct calculateLocalLoad_2_closure;


};

/* ---------------- method closures -------------- */
class Closure_LBstrategy {
  public:


};

extern void _registerldbal(void);
#endif
