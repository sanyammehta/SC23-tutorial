#ifndef _DECL_msa_H_
#define _DECL_msa_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> group MSA_CacheGroup: IrrGroup{
MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
void AckPage(unsigned int page);
void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
void enroll();
void enroll(unsigned int numberOfWorkerThreads);
void enrollAck(int originator);
void enrollDone();
void SyncAck(const bool &clear);
void SyncDone(CkReductionMsg* impl_msg);
threaded void FinishSync();
void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
};
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class MSA_CacheGroup;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CkIndex_MSA_CacheGroup;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxy_MSA_CacheGroup;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxyElement_MSA_CacheGroup;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxySection_MSA_CacheGroup;
/* --------------- index object ------------------ */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class CkIndex_MSA_CacheGroup:public CkIndex_IrrGroup{
  public:
    typedef MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
     */
    // Entry point registration at startup
    
    static int reg_MSA_CacheGroup_marshall1();
    // Entry point index lookup
    
    inline static int idx_MSA_CacheGroup_marshall1() {
      static int epidx = reg_MSA_CacheGroup_marshall1();
      return epidx;
    }

    
    static int ckNew(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads) { return idx_MSA_CacheGroup_marshall1(); }
    
    static void _call_MSA_CacheGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MSA_CacheGroup_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MSA_CacheGroup_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MSA_CacheGroup_marshall1(PUP::er &p,void *msg);
    /* DECLS: void AckPage(unsigned int page);
     */
    // Entry point registration at startup
    
    static int reg_AckPage_marshall2();
    // Entry point index lookup
    
    inline static int idx_AckPage_marshall2() {
      static int epidx = reg_AckPage_marshall2();
      return epidx;
    }

    
    inline static int idx_AckPage(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(unsigned int page) ) {
      return idx_AckPage_marshall2();
    }


    
    static int AckPage(unsigned int page) { return idx_AckPage_marshall2(); }
    
    static void _call_AckPage_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_AckPage_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_AckPage_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_AckPage_marshall2(PUP::er &p,void *msg);
    /* DECLS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
     */
    // Entry point registration at startup
    
    static int reg_ReceivePage_marshall3();
    // Entry point index lookup
    
    inline static int idx_ReceivePage_marshall3() {
      static int epidx = reg_ReceivePage_marshall3();
      return epidx;
    }

    
    inline static int idx_ReceivePage(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(unsigned int page, const ENTRY_TYPE *pageData, int size) ) {
      return idx_ReceivePage_marshall3();
    }


    
    static int ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size) { return idx_ReceivePage_marshall3(); }
    
    static void _call_ReceivePage_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceivePage_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceivePage_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceivePage_marshall3(PUP::er &p,void *msg);
    /* DECLS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
     */
    // Entry point registration at startup
    
    static int reg_ReceivePageWithPUP_marshall4();
    // Entry point index lookup
    
    inline static int idx_ReceivePageWithPUP_marshall4() {
      static int epidx = reg_ReceivePageWithPUP_marshall4();
      return epidx;
    }

    
    inline static int idx_ReceivePageWithPUP(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size) ) {
      return idx_ReceivePageWithPUP_marshall4();
    }


    
    static int ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size) { return idx_ReceivePageWithPUP_marshall4(); }
    
    static void _call_ReceivePageWithPUP_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceivePageWithPUP_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceivePageWithPUP_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceivePageWithPUP_marshall4(PUP::er &p,void *msg);
    /* DECLS: void enroll();
     */
    // Entry point registration at startup
    
    static int reg_enroll_void();
    // Entry point index lookup
    
    inline static int idx_enroll_void() {
      static int epidx = reg_enroll_void();
      return epidx;
    }

    
    inline static int idx_enroll(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)() ) {
      return idx_enroll_void();
    }


    
    static int enroll() { return idx_enroll_void(); }
    
    static void _call_enroll_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enroll_void(void* impl_msg, void* impl_obj);
    /* DECLS: void enroll(unsigned int numberOfWorkerThreads);
     */
    // Entry point registration at startup
    
    static int reg_enroll_marshall6();
    // Entry point index lookup
    
    inline static int idx_enroll_marshall6() {
      static int epidx = reg_enroll_marshall6();
      return epidx;
    }

    
    inline static int idx_enroll(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(unsigned int numberOfWorkerThreads) ) {
      return idx_enroll_marshall6();
    }


    
    static int enroll(unsigned int numberOfWorkerThreads) { return idx_enroll_marshall6(); }
    
    static void _call_enroll_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enroll_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_enroll_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_enroll_marshall6(PUP::er &p,void *msg);
    /* DECLS: void enrollAck(int originator);
     */
    // Entry point registration at startup
    
    static int reg_enrollAck_marshall7();
    // Entry point index lookup
    
    inline static int idx_enrollAck_marshall7() {
      static int epidx = reg_enrollAck_marshall7();
      return epidx;
    }

    
    inline static int idx_enrollAck(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(int originator) ) {
      return idx_enrollAck_marshall7();
    }


    
    static int enrollAck(int originator) { return idx_enrollAck_marshall7(); }
    
    static void _call_enrollAck_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enrollAck_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_enrollAck_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_enrollAck_marshall7(PUP::er &p,void *msg);
    /* DECLS: void enrollDone();
     */
    // Entry point registration at startup
    
    static int reg_enrollDone_void();
    // Entry point index lookup
    
    inline static int idx_enrollDone_void() {
      static int epidx = reg_enrollDone_void();
      return epidx;
    }

    
    inline static int idx_enrollDone(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)() ) {
      return idx_enrollDone_void();
    }


    
    static int enrollDone() { return idx_enrollDone_void(); }
    
    static void _call_enrollDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enrollDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void SyncAck(const bool &clear);
     */
    // Entry point registration at startup
    
    static int reg_SyncAck_marshall9();
    // Entry point index lookup
    
    inline static int idx_SyncAck_marshall9() {
      static int epidx = reg_SyncAck_marshall9();
      return epidx;
    }

    
    inline static int idx_SyncAck(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const bool &clear) ) {
      return idx_SyncAck_marshall9();
    }


    
    static int SyncAck(const bool &clear) { return idx_SyncAck_marshall9(); }
    
    static void _call_SyncAck_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SyncAck_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_SyncAck_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_SyncAck_marshall9(PUP::er &p,void *msg);
    /* DECLS: void SyncDone(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SyncDone_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_SyncDone_CkReductionMsg() {
      static int epidx = reg_SyncDone_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_SyncDone(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(CkReductionMsg* impl_msg) ) {
      return idx_SyncDone_CkReductionMsg();
    }


    
    static int SyncDone(CkReductionMsg* impl_msg) { return idx_SyncDone_CkReductionMsg(); }
    
    static void _call_SyncDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SyncDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void FinishSync();
     */
    // Entry point registration at startup
    
    static int reg_FinishSync_void();
    // Entry point index lookup
    
    inline static int idx_FinishSync_void() {
      static int epidx = reg_FinishSync_void();
      return epidx;
    }

    
    inline static int idx_FinishSync(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)() ) {
      return idx_FinishSync_void();
    }


    
    static int FinishSync() { return idx_FinishSync_void(); }
    
    static void _call_FinishSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FinishSync_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_FinishSync_void(CkThrCallArg *);
    /* DECLS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
     */
    // Entry point registration at startup
    
    static int reg_emitBufferValue_marshall12();
    // Entry point index lookup
    
    inline static int idx_emitBufferValue_marshall12() {
      static int epidx = reg_emitBufferValue_marshall12();
      return epidx;
    }

    
    inline static int idx_emitBufferValue(void (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(int ID, unsigned int pageNum, unsigned int offset) ) {
      return idx_emitBufferValue_marshall12();
    }


    
    static int emitBufferValue(int ID, unsigned int pageNum, unsigned int offset) { return idx_emitBufferValue_marshall12(); }
    
    static void _call_emitBufferValue_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_emitBufferValue_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_emitBufferValue_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_emitBufferValue_marshall12(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class CProxyElement_MSA_CacheGroup: public CProxyElement_IrrGroup{
  public:
    typedef MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;


    /* TRAM aggregators */

    CProxyElement_MSA_CacheGroup(void) {
    }
    CProxyElement_MSA_CacheGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MSA_CacheGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MSA_CacheGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(CkGroupID gID) {
      return (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *)CkLocalBranch(gID);
    }
/* DECLS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
    

/* DECLS: void AckPage(unsigned int page);
 */
    
    void AckPage(unsigned int page, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
    
    void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
    
    void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll();
 */
    
    void enroll(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll(unsigned int numberOfWorkerThreads);
 */
    
    void enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollAck(int originator);
 */
    
    void enrollAck(int originator, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollDone();
 */
    
    void enrollDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncAck(const bool &clear);
 */
    
    void SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncDone(CkReductionMsg* impl_msg);
 */
    
    void SyncDone(CkReductionMsg* impl_msg);

/* DECLS: threaded void FinishSync();
 */
    
    void FinishSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
    
    void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class CProxy_MSA_CacheGroup: public CProxy_IrrGroup{
  public:
    typedef MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    CProxy_MSA_CacheGroup(void) {
    }
    CProxy_MSA_CacheGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MSA_CacheGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MSA_CacheGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator[](int onPE) const
      {return CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(CkGroupID gID) {
      return (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *)CkLocalBranch(gID);
    }
/* DECLS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
    
    static CkGroupID ckNew(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void AckPage(unsigned int page);
 */
    
    void AckPage(unsigned int page, const CkEntryOptions *impl_e_opts=NULL);
    
    void AckPage(unsigned int page, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void AckPage(unsigned int page, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
    
    void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
    
    void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll();
 */
    
    void enroll(const CkEntryOptions *impl_e_opts=NULL);
    
    void enroll(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void enroll(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll(unsigned int numberOfWorkerThreads);
 */
    
    void enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts=NULL);
    
    void enroll(unsigned int numberOfWorkerThreads, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void enroll(unsigned int numberOfWorkerThreads, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollAck(int originator);
 */
    
    void enrollAck(int originator, const CkEntryOptions *impl_e_opts=NULL);
    
    void enrollAck(int originator, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void enrollAck(int originator, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollDone();
 */
    
    void enrollDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void enrollDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void enrollDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncAck(const bool &clear);
 */
    
    void SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts=NULL);
    
    void SyncAck(const bool &clear, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SyncAck(const bool &clear, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncDone(CkReductionMsg* impl_msg);
 */
    
    void SyncDone(CkReductionMsg* impl_msg);
    
    void SyncDone(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void SyncDone(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: threaded void FinishSync();
 */
    
    void FinishSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void FinishSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void FinishSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
    
    void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts=NULL);
    
    void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class CProxySection_MSA_CacheGroup: public CProxySection_IrrGroup{
  public:
    typedef MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    CProxySection_MSA_CacheGroup(void) {
    }
    CProxySection_MSA_CacheGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MSA_CacheGroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MSA_CacheGroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_MSA_CacheGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MSA_CacheGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * ckLocalBranch(CkGroupID gID) {
      return (MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *)CkLocalBranch(gID);
    }
/* DECLS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
    

/* DECLS: void AckPage(unsigned int page);
 */
    
    void AckPage(unsigned int page, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
    
    void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
    
    void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll();
 */
    
    void enroll(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enroll(unsigned int numberOfWorkerThreads);
 */
    
    void enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollAck(int originator);
 */
    
    void enrollAck(int originator, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void enrollDone();
 */
    
    void enrollDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncAck(const bool &clear);
 */
    
    void SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SyncDone(CkReductionMsg* impl_msg);
 */
    
    void SyncDone(CkReductionMsg* impl_msg);

/* DECLS: threaded void FinishSync();
 */
    
    void FinishSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
    
    void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts=NULL);

};
#define MSA_CacheGroup_SDAG_CODE 
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
struct CBase_MSA_CacheGroup;

/* DECLS: template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> array MSA_PageArray: ArrayElement{
MSA_PageArray();
void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
void GetPage(int pe);
void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
void Sync(const bool &clear);
void emit(int ID, int offset);
MSA_PageArray(CkMigrateMessage* impl_msg);
};
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class MSA_PageArray;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CkIndex_MSA_PageArray;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxy_MSA_PageArray;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxyElement_MSA_PageArray;
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxySection_MSA_PageArray;
/* --------------- index object ------------------ */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class CkIndex_MSA_PageArray:public CkIndex_ArrayElement{
  public:
    typedef MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MSA_PageArray();
     */
    // Entry point registration at startup
    
    static int reg_MSA_PageArray_void();
    // Entry point index lookup
    
    inline static int idx_MSA_PageArray_void() {
      static int epidx = reg_MSA_PageArray_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MSA_PageArray_void(); }
    
    static void _call_MSA_PageArray_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MSA_PageArray_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
     */
    // Entry point registration at startup
    
    static int reg_setCacheProxy_marshall2();
    // Entry point index lookup
    
    inline static int idx_setCacheProxy_marshall2() {
      static int epidx = reg_setCacheProxy_marshall2();
      return epidx;
    }

    
    inline static int idx_setCacheProxy(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache) ) {
      return idx_setCacheProxy_marshall2();
    }


    
    static int setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache) { return idx_setCacheProxy_marshall2(); }
    
    static void _call_setCacheProxy_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setCacheProxy_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setCacheProxy_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setCacheProxy_marshall2(PUP::er &p,void *msg);
    /* DECLS: void GetPage(int pe);
     */
    // Entry point registration at startup
    
    static int reg_GetPage_marshall3();
    // Entry point index lookup
    
    inline static int idx_GetPage_marshall3() {
      static int epidx = reg_GetPage_marshall3();
      return epidx;
    }

    
    inline static int idx_GetPage(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(int pe) ) {
      return idx_GetPage_marshall3();
    }


    
    static int GetPage(int pe) { return idx_GetPage_marshall3(); }
    
    static void _call_GetPage_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GetPage_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_GetPage_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_GetPage_marshall3(PUP::er &p,void *msg);
    /* DECLS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
     */
    // Entry point registration at startup
    
    static int reg_PAReceivePage_marshall4();
    // Entry point index lookup
    
    inline static int idx_PAReceivePage_marshall4() {
      static int epidx = reg_PAReceivePage_marshall4();
      return epidx;
    }

    
    inline static int idx_PAReceivePage(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState) ) {
      return idx_PAReceivePage_marshall4();
    }


    
    static int PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState) { return idx_PAReceivePage_marshall4(); }
    
    static void _call_PAReceivePage_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PAReceivePage_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PAReceivePage_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PAReceivePage_marshall4(PUP::er &p,void *msg);
    /* DECLS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
     */
    // Entry point registration at startup
    
    static int reg_PAReceiveRLEPage_marshall5();
    // Entry point index lookup
    
    inline static int idx_PAReceiveRLEPage_marshall5() {
      static int epidx = reg_PAReceiveRLEPage_marshall5();
      return epidx;
    }

    
    inline static int idx_PAReceiveRLEPage(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState) ) {
      return idx_PAReceiveRLEPage_marshall5();
    }


    
    static int PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState) { return idx_PAReceiveRLEPage_marshall5(); }
    
    static void _call_PAReceiveRLEPage_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PAReceiveRLEPage_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PAReceiveRLEPage_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PAReceiveRLEPage_marshall5(PUP::er &p,void *msg);
    /* DECLS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
     */
    // Entry point registration at startup
    
    static int reg_PAReceiveRLEPageWithPup_marshall6();
    // Entry point index lookup
    
    inline static int idx_PAReceiveRLEPageWithPup_marshall6() {
      static int epidx = reg_PAReceiveRLEPageWithPup_marshall6();
      return epidx;
    }

    
    inline static int idx_PAReceiveRLEPageWithPup(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState) ) {
      return idx_PAReceiveRLEPageWithPup_marshall6();
    }


    
    static int PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState) { return idx_PAReceiveRLEPageWithPup_marshall6(); }
    
    static void _call_PAReceiveRLEPageWithPup_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PAReceiveRLEPageWithPup_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PAReceiveRLEPageWithPup_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PAReceiveRLEPageWithPup_marshall6(PUP::er &p,void *msg);
    /* DECLS: void Sync(const bool &clear);
     */
    // Entry point registration at startup
    
    static int reg_Sync_marshall7();
    // Entry point index lookup
    
    inline static int idx_Sync_marshall7() {
      static int epidx = reg_Sync_marshall7();
      return epidx;
    }

    
    inline static int idx_Sync(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(const bool &clear) ) {
      return idx_Sync_marshall7();
    }


    
    static int Sync(const bool &clear) { return idx_Sync_marshall7(); }
    
    static void _call_Sync_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Sync_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Sync_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Sync_marshall7(PUP::er &p,void *msg);
    /* DECLS: void emit(int ID, int offset);
     */
    // Entry point registration at startup
    
    static int reg_emit_marshall8();
    // Entry point index lookup
    
    inline static int idx_emit_marshall8() {
      static int epidx = reg_emit_marshall8();
      return epidx;
    }

    
    inline static int idx_emit(void (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::*)(int ID, int offset) ) {
      return idx_emit_marshall8();
    }


    
    static int emit(int ID, int offset) { return idx_emit_marshall8(); }
    
    static void _call_emit_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_emit_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_emit_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_emit_marshall8(PUP::er &p,void *msg);
    /* DECLS: MSA_PageArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MSA_PageArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MSA_PageArray_CkMigrateMessage() {
      static int epidx = reg_MSA_PageArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MSA_PageArray_CkMigrateMessage(); }
    
    static void _call_MSA_PageArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MSA_PageArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxyElement_MSA_PageArray : public CProxyElement_ArrayElement{
  public:
    typedef MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_MSA_PageArray(void) {
    }
    CProxyElement_MSA_PageArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  *ckLocal(void) const
    { return (MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MSA_PageArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MSA_PageArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MSA_PageArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MSA_PageArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MSA_PageArray();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
    
    void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void GetPage(int pe);
 */
    
    void GetPage(int pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Sync(const bool &clear);
 */
    
    void Sync(const bool &clear, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void emit(int ID, int offset);
 */
    
    void emit(int ID, int offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxy_MSA_PageArray : public CProxy_ArrayElement{
  public:
    typedef MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_MSA_PageArray(void) {
    }
    CProxy_MSA_PageArray(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator [] (int idx) const 
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator () (int idx) const 
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MSA_PageArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MSA_PageArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MSA_PageArray();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
    
    void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void GetPage(int pe);
 */
    
    void GetPage(int pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Sync(const bool &clear);
 */
    
    void Sync(const bool &clear, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void emit(int ID, int offset);
 */
    
    void emit(int ID, int offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  class CProxySection_MSA_PageArray : public CProxySection_ArrayElement{
  public:
    typedef MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  local_t;
    typedef CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  index_t;
    typedef CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  proxy_t;
    typedef CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  element_t;
    typedef CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_MSA_PageArray(void) {
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
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator [] (int idx) const 
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  operator () (int idx) const 
        {return CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_MSA_PageArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MSA_PageArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MSA_PageArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MSA_PageArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MSA_PageArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MSA_PageArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MSA_PageArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MSA_PageArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MSA_PageArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MSA_PageArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MSA_PageArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: MSA_PageArray();
 */
    

/* DECLS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
    
    void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void GetPage(int pe);
 */
    
    void GetPage(int pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
    
    void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Sync(const bool &clear);
 */
    
    void Sync(const bool &clear, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void emit(int ID, int offset);
 */
    
    void emit(int ID, int offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */

};
#define MSA_PageArray_SDAG_CODE 
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
struct CBase_MSA_PageArray;

/* ---------------- method closures -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class Closure_MSA_CacheGroup {
  public:


    struct AckPage_2_closure;


    struct ReceivePage_3_closure;


    struct ReceivePageWithPUP_4_closure;


    struct enroll_5_closure;


    struct enroll_6_closure;


    struct enrollAck_7_closure;


    struct enrollDone_8_closure;


    struct SyncAck_9_closure;



    struct FinishSync_11_closure;


    struct emitBufferValue_12_closure;

};

/* ---------------- method closures -------------- */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> class Closure_MSA_PageArray {
  public:


    struct setCacheProxy_2_closure;


    struct GetPage_3_closure;


    struct PAReceivePage_4_closure;


    struct PAReceiveRLEPage_5_closure;


    struct PAReceiveRLEPageWithPup_6_closure;


    struct Sync_7_closure;


    struct emit_8_closure;


};

extern void _registermsa(void);
#endif
