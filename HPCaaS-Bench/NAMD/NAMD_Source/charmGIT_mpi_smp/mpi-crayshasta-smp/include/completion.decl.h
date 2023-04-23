#ifndef _DECL_completion_H_
#define _DECL_completion_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: group CompletionDetector: IrrGroup{
CompletionDetector();
void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
void producers_done(int producers_done_global_);
void count_consumed(int produced_global, int consumed_global);
};
 */
 class CompletionDetector;
 class CkIndex_CompletionDetector;
 class CProxy_CompletionDetector;
 class CProxyElement_CompletionDetector;
 class CProxySection_CompletionDetector;
/* --------------- index object ------------------ */
class CkIndex_CompletionDetector:public CkIndex_IrrGroup{
  public:
    typedef CompletionDetector local_t;
    typedef CkIndex_CompletionDetector index_t;
    typedef CProxy_CompletionDetector proxy_t;
    typedef CProxyElement_CompletionDetector element_t;
    typedef CProxySection_CompletionDetector section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CompletionDetector();
     */
    // Entry point registration at startup
    
    static int reg_CompletionDetector_void();
    // Entry point index lookup
    
    inline static int idx_CompletionDetector_void() {
      static int epidx = reg_CompletionDetector_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CompletionDetector_void(); }
    
    static void _call_CompletionDetector_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CompletionDetector_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
     */
    // Entry point registration at startup
    
    static int reg_start_detection_marshall2();
    // Entry point index lookup
    
    inline static int idx_start_detection_marshall2() {
      static int epidx = reg_start_detection_marshall2();
      return epidx;
    }

    
    inline static int idx_start_detection(void (CompletionDetector::*)(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_) ) {
      return idx_start_detection_marshall2();
    }


    
    static int start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_) { return idx_start_detection_marshall2(); }
    
    static void _call_start_detection_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_detection_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_start_detection_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_start_detection_marshall2(PUP::er &p,void *msg);
    /* DECLS: void producers_done(int producers_done_global_);
     */
    // Entry point registration at startup
    
    static int reg_producers_done_marshall3();
    // Entry point index lookup
    
    inline static int idx_producers_done_marshall3() {
      static int epidx = reg_producers_done_marshall3();
      return epidx;
    }

    
    inline static int idx_producers_done(void (CompletionDetector::*)(int producers_done_global_) ) {
      return idx_producers_done_marshall3();
    }


    
    static int producers_done(int producers_done_global_) { return idx_producers_done_marshall3(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_producers_done_marshall3();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_producers_done_marshall3() {
      static int epidx = reg_redn_wrapper_producers_done_marshall3();
      return epidx;
    }
    
    static int redn_wrapper_producers_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_producers_done_marshall3(); }
    
    static void _call_redn_wrapper_producers_done_marshall3(void* impl_msg, void* impl_obj_void);
    
    static void _call_producers_done_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_producers_done_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_producers_done_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_producers_done_marshall3(PUP::er &p,void *msg);
    /* DECLS: void count_consumed(int produced_global, int consumed_global);
     */
    // Entry point registration at startup
    
    static int reg_count_consumed_marshall4();
    // Entry point index lookup
    
    inline static int idx_count_consumed_marshall4() {
      static int epidx = reg_count_consumed_marshall4();
      return epidx;
    }

    
    inline static int idx_count_consumed(void (CompletionDetector::*)(int produced_global, int consumed_global) ) {
      return idx_count_consumed_marshall4();
    }


    
    static int count_consumed(int produced_global, int consumed_global) { return idx_count_consumed_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_count_consumed_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_count_consumed_marshall4() {
      static int epidx = reg_redn_wrapper_count_consumed_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_count_consumed(CkReductionMsg* impl_msg) { return idx_redn_wrapper_count_consumed_marshall4(); }
    
    static void _call_redn_wrapper_count_consumed_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_count_consumed_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_count_consumed_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_count_consumed_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_count_consumed_marshall4(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CompletionDetector: public CProxyElement_IrrGroup{
  public:
    typedef CompletionDetector local_t;
    typedef CkIndex_CompletionDetector index_t;
    typedef CProxy_CompletionDetector proxy_t;
    typedef CProxyElement_CompletionDetector element_t;
    typedef CProxySection_CompletionDetector section_t;


    /* TRAM aggregators */

    CProxyElement_CompletionDetector(void) {
    }
    CProxyElement_CompletionDetector(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CompletionDetector(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CompletionDetector(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CompletionDetector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CompletionDetector* ckLocalBranch(CkGroupID gID) {
      return (CompletionDetector*)CkLocalBranch(gID);
    }
/* DECLS: CompletionDetector();
 */
    

/* DECLS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
    
    void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void producers_done(int producers_done_global_);
 */
    
    void producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void count_consumed(int produced_global, int consumed_global);
 */
    
    void count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_CompletionDetector: public CProxy_IrrGroup{
  public:
    typedef CompletionDetector local_t;
    typedef CkIndex_CompletionDetector index_t;
    typedef CProxy_CompletionDetector proxy_t;
    typedef CProxyElement_CompletionDetector element_t;
    typedef CProxySection_CompletionDetector section_t;

    CProxy_CompletionDetector(void) {
    }
    CProxy_CompletionDetector(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CompletionDetector(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CompletionDetector(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CompletionDetector operator[](int onPE) const
      {return CProxyElement_CompletionDetector(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CompletionDetector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CompletionDetector* ckLocalBranch(CkGroupID gID) {
      return (CompletionDetector*)CkLocalBranch(gID);
    }
/* DECLS: CompletionDetector();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
    
    void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts=NULL);
    
    void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void producers_done(int producers_done_global_);
 */
    
    void producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts=NULL);
    
    void producers_done(int producers_done_global_, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void producers_done(int producers_done_global_, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void count_consumed(int produced_global, int consumed_global);
 */
    
    void count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts=NULL);
    
    void count_consumed(int produced_global, int consumed_global, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void count_consumed(int produced_global, int consumed_global, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_CompletionDetector: public CProxySection_IrrGroup{
  public:
    typedef CompletionDetector local_t;
    typedef CkIndex_CompletionDetector index_t;
    typedef CProxy_CompletionDetector proxy_t;
    typedef CProxyElement_CompletionDetector element_t;
    typedef CProxySection_CompletionDetector section_t;

    CProxySection_CompletionDetector(void) {
    }
    CProxySection_CompletionDetector(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CompletionDetector(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CompletionDetector(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CompletionDetector(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CompletionDetector(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CompletionDetector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CompletionDetector* ckLocalBranch(CkGroupID gID) {
      return (CompletionDetector*)CkLocalBranch(gID);
    }
/* DECLS: CompletionDetector();
 */
    

/* DECLS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
    
    void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void producers_done(int producers_done_global_);
 */
    
    void producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void count_consumed(int produced_global, int consumed_global);
 */
    
    void count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts=NULL);

};
#define CompletionDetector_SDAG_CODE                                           \
public:                                                                        \
  void start_detection(int num_producers, CkCallback start, CkCallback allProduced, CkCallback finish, int prio_);\
  void _sdag_fnc_start_detection(int num_producers, CkCallback start, CkCallback allProduced, CkCallback finish, int prio_);\
  void _sdag_fnc_start_detection(Closure_CompletionDetector::start_detection_2_closure* gen0);\
private:                                                                       \
  void start_detection_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _slist_0(Closure_CompletionDetector::start_detection_2_closure* gen0);  \
  void _slist_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _serial_0(Closure_CompletionDetector::start_detection_2_closure* gen0); \
  void _while_0(Closure_CompletionDetector::start_detection_2_closure* gen0);  \
  void _while_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _slist_1(Closure_CompletionDetector::start_detection_2_closure* gen0);  \
  void _slist_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _serial_1(Closure_CompletionDetector::start_detection_2_closure* gen0); \
  SDAG::Continuation* _when_0(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _when_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::producers_done_3_closure* gen1);\
  void _serial_2(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::producers_done_3_closure* gen1);\
  void _serial_3(Closure_CompletionDetector::start_detection_2_closure* gen0); \
  void _while_1(Closure_CompletionDetector::start_detection_2_closure* gen0);  \
  void _while_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _slist_2(Closure_CompletionDetector::start_detection_2_closure* gen0);  \
  void _slist_2_end(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _serial_4(Closure_CompletionDetector::start_detection_2_closure* gen0); \
  SDAG::Continuation* _when_1(Closure_CompletionDetector::start_detection_2_closure* gen0);\
  void _when_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::count_consumed_4_closure* gen1);\
  void _serial_5(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::count_consumed_4_closure* gen1);\
  void _serial_6(Closure_CompletionDetector::start_detection_2_closure* gen0); \
public:                                                                        \
  void producers_done(Closure_CompletionDetector::producers_done_3_closure* genClosure);\
  void producers_done(int producers_done_global_);                             \
  void count_consumed(Closure_CompletionDetector::count_consumed_4_closure* genClosure);\
  void count_consumed(int produced_global, int consumed_global);               \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_CompletionDetector_serial_0();                          \
  static int _sdag_reg_CompletionDetector_serial_0();                          \
  static int _sdag_idx_CompletionDetector_serial_1();                          \
  static int _sdag_reg_CompletionDetector_serial_1();                          \
  static int _sdag_idx_CompletionDetector_serial_2();                          \
  static int _sdag_reg_CompletionDetector_serial_2();                          \
  static int _sdag_idx_CompletionDetector_serial_3();                          \
  static int _sdag_reg_CompletionDetector_serial_3();                          \
  static int _sdag_idx_CompletionDetector_serial_4();                          \
  static int _sdag_reg_CompletionDetector_serial_4();                          \
  static int _sdag_idx_CompletionDetector_serial_5();                          \
  static int _sdag_reg_CompletionDetector_serial_5();                          \
  static int _sdag_idx_CompletionDetector_completion_finished();               \
  static int _sdag_reg_CompletionDetector_completion_finished();               \

typedef CBaseT1<Group, CProxy_CompletionDetector>CBase_CompletionDetector;

/* ---------------- method closures -------------- */
class Closure_CompletionDetector {
  public:


    struct start_detection_2_closure;


    struct producers_done_3_closure;


    struct count_consumed_4_closure;

};

extern void _registercompletion(void);
#endif
