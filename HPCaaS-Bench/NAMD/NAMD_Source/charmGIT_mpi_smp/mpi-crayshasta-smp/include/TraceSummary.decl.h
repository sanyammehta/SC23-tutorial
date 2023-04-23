#ifndef _DECL_TraceSummary_H_
#define _DECL_TraceSummary_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID traceSummaryGID;
 */

/* DECLS: readonly bool summaryCcsStreaming;
 */

/* DECLS: mainchare TraceSummaryInit: Chare{
TraceSummaryInit(CkArgMsg* impl_msg);
};
 */
 class TraceSummaryInit;
 class CkIndex_TraceSummaryInit;
 class CProxy_TraceSummaryInit;
/* --------------- index object ------------------ */
class CkIndex_TraceSummaryInit:public CkIndex_Chare{
  public:
    typedef TraceSummaryInit local_t;
    typedef CkIndex_TraceSummaryInit index_t;
    typedef CProxy_TraceSummaryInit proxy_t;
    typedef CProxy_TraceSummaryInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceSummaryInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceSummaryInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceSummaryInit_CkArgMsg() {
      static int epidx = reg_TraceSummaryInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceSummaryInit_CkArgMsg(); }
    
    static void _call_TraceSummaryInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSummaryInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceSummaryInit:public CProxy_Chare{
  public:
    typedef TraceSummaryInit local_t;
    typedef CkIndex_TraceSummaryInit index_t;
    typedef CProxy_TraceSummaryInit proxy_t;
    typedef CProxy_TraceSummaryInit element_t;

    CProxy_TraceSummaryInit(void) {};
    CProxy_TraceSummaryInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceSummaryInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceSummaryInit *ckLocal(void) const
    { return (TraceSummaryInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceSummaryInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceSummaryInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceSummaryInit>CBase_TraceSummaryInit;


/* DECLS: group TraceSummaryBOC: IrrGroup{
TraceSummaryBOC();
void startSumOnly();
void askSummary(int size);
void sendSummaryBOC(const double *results, int n);
void initCCS();
void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
void collectSummaryData(double startTime, double binSize, int numBins);
void summaryDataCollected(const double *result, int n);
void traceSummaryParallelShutdown(int pe);
void maxBinSize(double impl_noname_0);
void shrink(double _maxBinSize);
void sumData(const double *result, int n);
TraceSummaryBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceSummaryBOC;
 class CkIndex_TraceSummaryBOC;
 class CProxy_TraceSummaryBOC;
 class CProxyElement_TraceSummaryBOC;
 class CProxySection_TraceSummaryBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceSummaryBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceSummaryBOC local_t;
    typedef CkIndex_TraceSummaryBOC index_t;
    typedef CProxy_TraceSummaryBOC proxy_t;
    typedef CProxyElement_TraceSummaryBOC element_t;
    typedef CProxySection_TraceSummaryBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceSummaryBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceSummaryBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceSummaryBOC_void() {
      static int epidx = reg_TraceSummaryBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceSummaryBOC_void(); }
    
    static void _call_TraceSummaryBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSummaryBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startSumOnly();
     */
    // Entry point registration at startup
    
    static int reg_startSumOnly_void();
    // Entry point index lookup
    
    inline static int idx_startSumOnly_void() {
      static int epidx = reg_startSumOnly_void();
      return epidx;
    }

    
    inline static int idx_startSumOnly(void (TraceSummaryBOC::*)() ) {
      return idx_startSumOnly_void();
    }


    
    static int startSumOnly() { return idx_startSumOnly_void(); }
    
    static void _call_startSumOnly_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startSumOnly_void(void* impl_msg, void* impl_obj);
    /* DECLS: void askSummary(int size);
     */
    // Entry point registration at startup
    
    static int reg_askSummary_marshall3();
    // Entry point index lookup
    
    inline static int idx_askSummary_marshall3() {
      static int epidx = reg_askSummary_marshall3();
      return epidx;
    }

    
    inline static int idx_askSummary(void (TraceSummaryBOC::*)(int size) ) {
      return idx_askSummary_marshall3();
    }


    
    static int askSummary(int size) { return idx_askSummary_marshall3(); }
    
    static void _call_askSummary_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_askSummary_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_askSummary_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_askSummary_marshall3(PUP::er &p,void *msg);
    /* DECLS: void sendSummaryBOC(const double *results, int n);
     */
    // Entry point registration at startup
    
    static int reg_sendSummaryBOC_marshall4();
    // Entry point index lookup
    
    inline static int idx_sendSummaryBOC_marshall4() {
      static int epidx = reg_sendSummaryBOC_marshall4();
      return epidx;
    }

    
    inline static int idx_sendSummaryBOC(void (TraceSummaryBOC::*)(const double *results, int n) ) {
      return idx_sendSummaryBOC_marshall4();
    }


    
    static int sendSummaryBOC(const double *results, int n) { return idx_sendSummaryBOC_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_sendSummaryBOC_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_sendSummaryBOC_marshall4() {
      static int epidx = reg_redn_wrapper_sendSummaryBOC_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_sendSummaryBOC(CkReductionMsg* impl_msg) { return idx_redn_wrapper_sendSummaryBOC_marshall4(); }
    
    static void _call_redn_wrapper_sendSummaryBOC_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_sendSummaryBOC_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendSummaryBOC_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendSummaryBOC_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendSummaryBOC_marshall4(PUP::er &p,void *msg);
    /* DECLS: void initCCS();
     */
    // Entry point registration at startup
    
    static int reg_initCCS_void();
    // Entry point index lookup
    
    inline static int idx_initCCS_void() {
      static int epidx = reg_initCCS_void();
      return epidx;
    }

    
    inline static int idx_initCCS(void (TraceSummaryBOC::*)() ) {
      return idx_initCCS_void();
    }


    
    static int initCCS() { return idx_initCCS_void(); }
    
    static void _call_initCCS_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initCCS_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ccsRequestSummaryDouble_CkCcsRequestMsg();
    // Entry point index lookup
    
    inline static int idx_ccsRequestSummaryDouble_CkCcsRequestMsg() {
      static int epidx = reg_ccsRequestSummaryDouble_CkCcsRequestMsg();
      return epidx;
    }

    
    inline static int idx_ccsRequestSummaryDouble(void (TraceSummaryBOC::*)(CkCcsRequestMsg* impl_msg) ) {
      return idx_ccsRequestSummaryDouble_CkCcsRequestMsg();
    }


    
    static int ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg) { return idx_ccsRequestSummaryDouble_CkCcsRequestMsg(); }
    
    static void _call_ccsRequestSummaryDouble_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ccsRequestSummaryDouble_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg();
    // Entry point index lookup
    
    inline static int idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg() {
      static int epidx = reg_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg();
      return epidx;
    }

    
    inline static int idx_ccsRequestSummaryUnsignedChar(void (TraceSummaryBOC::*)(CkCcsRequestMsg* impl_msg) ) {
      return idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg();
    }


    
    static int ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg) { return idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(); }
    
    static void _call_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void collectSummaryData(double startTime, double binSize, int numBins);
     */
    // Entry point registration at startup
    
    static int reg_collectSummaryData_marshall8();
    // Entry point index lookup
    
    inline static int idx_collectSummaryData_marshall8() {
      static int epidx = reg_collectSummaryData_marshall8();
      return epidx;
    }

    
    inline static int idx_collectSummaryData(void (TraceSummaryBOC::*)(double startTime, double binSize, int numBins) ) {
      return idx_collectSummaryData_marshall8();
    }


    
    static int collectSummaryData(double startTime, double binSize, int numBins) { return idx_collectSummaryData_marshall8(); }
    
    static void _call_collectSummaryData_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectSummaryData_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collectSummaryData_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collectSummaryData_marshall8(PUP::er &p,void *msg);
    /* DECLS: void summaryDataCollected(const double *result, int n);
     */
    // Entry point registration at startup
    
    static int reg_summaryDataCollected_marshall9();
    // Entry point index lookup
    
    inline static int idx_summaryDataCollected_marshall9() {
      static int epidx = reg_summaryDataCollected_marshall9();
      return epidx;
    }

    
    inline static int idx_summaryDataCollected(void (TraceSummaryBOC::*)(const double *result, int n) ) {
      return idx_summaryDataCollected_marshall9();
    }


    
    static int summaryDataCollected(const double *result, int n) { return idx_summaryDataCollected_marshall9(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_summaryDataCollected_marshall9();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_summaryDataCollected_marshall9() {
      static int epidx = reg_redn_wrapper_summaryDataCollected_marshall9();
      return epidx;
    }
    
    static int redn_wrapper_summaryDataCollected(CkReductionMsg* impl_msg) { return idx_redn_wrapper_summaryDataCollected_marshall9(); }
    
    static void _call_redn_wrapper_summaryDataCollected_marshall9(void* impl_msg, void* impl_obj_void);
    
    static void _call_summaryDataCollected_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_summaryDataCollected_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_summaryDataCollected_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_summaryDataCollected_marshall9(PUP::er &p,void *msg);
    /* DECLS: void traceSummaryParallelShutdown(int pe);
     */
    // Entry point registration at startup
    
    static int reg_traceSummaryParallelShutdown_marshall10();
    // Entry point index lookup
    
    inline static int idx_traceSummaryParallelShutdown_marshall10() {
      static int epidx = reg_traceSummaryParallelShutdown_marshall10();
      return epidx;
    }

    
    inline static int idx_traceSummaryParallelShutdown(void (TraceSummaryBOC::*)(int pe) ) {
      return idx_traceSummaryParallelShutdown_marshall10();
    }


    
    static int traceSummaryParallelShutdown(int pe) { return idx_traceSummaryParallelShutdown_marshall10(); }
    
    static void _call_traceSummaryParallelShutdown_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_traceSummaryParallelShutdown_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_traceSummaryParallelShutdown_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_traceSummaryParallelShutdown_marshall10(PUP::er &p,void *msg);
    /* DECLS: void maxBinSize(double impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_maxBinSize_marshall11();
    // Entry point index lookup
    
    inline static int idx_maxBinSize_marshall11() {
      static int epidx = reg_maxBinSize_marshall11();
      return epidx;
    }

    
    inline static int idx_maxBinSize(void (TraceSummaryBOC::*)(double impl_noname_0) ) {
      return idx_maxBinSize_marshall11();
    }


    
    static int maxBinSize(double impl_noname_0) { return idx_maxBinSize_marshall11(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_maxBinSize_marshall11();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_maxBinSize_marshall11() {
      static int epidx = reg_redn_wrapper_maxBinSize_marshall11();
      return epidx;
    }
    
    static int redn_wrapper_maxBinSize(CkReductionMsg* impl_msg) { return idx_redn_wrapper_maxBinSize_marshall11(); }
    
    static void _call_redn_wrapper_maxBinSize_marshall11(void* impl_msg, void* impl_obj_void);
    
    static void _call_maxBinSize_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_maxBinSize_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_maxBinSize_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_maxBinSize_marshall11(PUP::er &p,void *msg);
    /* DECLS: void shrink(double _maxBinSize);
     */
    // Entry point registration at startup
    
    static int reg_shrink_marshall12();
    // Entry point index lookup
    
    inline static int idx_shrink_marshall12() {
      static int epidx = reg_shrink_marshall12();
      return epidx;
    }

    
    inline static int idx_shrink(void (TraceSummaryBOC::*)(double _maxBinSize) ) {
      return idx_shrink_marshall12();
    }


    
    static int shrink(double _maxBinSize) { return idx_shrink_marshall12(); }
    
    static void _call_shrink_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_shrink_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_shrink_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_shrink_marshall12(PUP::er &p,void *msg);
    /* DECLS: void sumData(const double *result, int n);
     */
    // Entry point registration at startup
    
    static int reg_sumData_marshall13();
    // Entry point index lookup
    
    inline static int idx_sumData_marshall13() {
      static int epidx = reg_sumData_marshall13();
      return epidx;
    }

    
    inline static int idx_sumData(void (TraceSummaryBOC::*)(const double *result, int n) ) {
      return idx_sumData_marshall13();
    }


    
    static int sumData(const double *result, int n) { return idx_sumData_marshall13(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_sumData_marshall13();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_sumData_marshall13() {
      static int epidx = reg_redn_wrapper_sumData_marshall13();
      return epidx;
    }
    
    static int redn_wrapper_sumData(CkReductionMsg* impl_msg) { return idx_redn_wrapper_sumData_marshall13(); }
    
    static void _call_redn_wrapper_sumData_marshall13(void* impl_msg, void* impl_obj_void);
    
    static void _call_sumData_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sumData_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sumData_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sumData_marshall13(PUP::er &p,void *msg);
    /* DECLS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceSummaryBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceSummaryBOC_CkMigrateMessage() {
      static int epidx = reg_TraceSummaryBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceSummaryBOC_CkMigrateMessage(); }
    
    static void _call_TraceSummaryBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceSummaryBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceSummaryBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceSummaryBOC local_t;
    typedef CkIndex_TraceSummaryBOC index_t;
    typedef CProxy_TraceSummaryBOC proxy_t;
    typedef CProxyElement_TraceSummaryBOC element_t;
    typedef CProxySection_TraceSummaryBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceSummaryBOC(void) {
    }
    CProxyElement_TraceSummaryBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceSummaryBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceSummaryBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceSummaryBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSummaryBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSummaryBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSummaryBOC();
 */
    

/* DECLS: void startSumOnly();
 */
    
    void startSumOnly(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void askSummary(int size);
 */
    
    void askSummary(int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendSummaryBOC(const double *results, int n);
 */
    
    void sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCCS();
 */
    
    void initCCS(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);

/* DECLS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);

/* DECLS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
    
    void collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void summaryDataCollected(const double *result, int n);
 */
    
    void summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceSummaryParallelShutdown(int pe);
 */
    
    void traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void maxBinSize(double impl_noname_0);
 */
    
    void maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void shrink(double _maxBinSize);
 */
    
    void shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumData(const double *result, int n);
 */
    
    void sumData(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceSummaryBOC: public CProxy_IrrGroup{
  public:
    typedef TraceSummaryBOC local_t;
    typedef CkIndex_TraceSummaryBOC index_t;
    typedef CProxy_TraceSummaryBOC proxy_t;
    typedef CProxyElement_TraceSummaryBOC element_t;
    typedef CProxySection_TraceSummaryBOC section_t;

    CProxy_TraceSummaryBOC(void) {
    }
    CProxy_TraceSummaryBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceSummaryBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceSummaryBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceSummaryBOC operator[](int onPE) const
      {return CProxyElement_TraceSummaryBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceSummaryBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSummaryBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSummaryBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSummaryBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startSumOnly();
 */
    
    void startSumOnly(const CkEntryOptions *impl_e_opts=NULL);
    
    void startSumOnly(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startSumOnly(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void askSummary(int size);
 */
    
    void askSummary(int size, const CkEntryOptions *impl_e_opts=NULL);
    
    void askSummary(int size, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void askSummary(int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendSummaryBOC(const double *results, int n);
 */
    
    void sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendSummaryBOC(const double *results, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendSummaryBOC(const double *results, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCCS();
 */
    
    void initCCS(const CkEntryOptions *impl_e_opts=NULL);
    
    void initCCS(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void initCCS(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
    
    void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg, int npes, int *pes);
    
    void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
    
    void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg, int npes, int *pes);
    
    void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg, CmiGroup &grp);

/* DECLS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
    
    void collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectSummaryData(double startTime, double binSize, int numBins, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectSummaryData(double startTime, double binSize, int numBins, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void summaryDataCollected(const double *result, int n);
 */
    
    void summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void summaryDataCollected(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void summaryDataCollected(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceSummaryParallelShutdown(int pe);
 */
    
    void traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceSummaryParallelShutdown(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceSummaryParallelShutdown(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void maxBinSize(double impl_noname_0);
 */
    
    void maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void maxBinSize(double impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void maxBinSize(double impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void shrink(double _maxBinSize);
 */
    
    void shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts=NULL);
    
    void shrink(double _maxBinSize, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void shrink(double _maxBinSize, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumData(const double *result, int n);
 */
    
    void sumData(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void sumData(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sumData(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceSummaryBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceSummaryBOC local_t;
    typedef CkIndex_TraceSummaryBOC index_t;
    typedef CProxy_TraceSummaryBOC proxy_t;
    typedef CProxyElement_TraceSummaryBOC element_t;
    typedef CProxySection_TraceSummaryBOC section_t;

    CProxySection_TraceSummaryBOC(void) {
    }
    CProxySection_TraceSummaryBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceSummaryBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceSummaryBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceSummaryBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceSummaryBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceSummaryBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceSummaryBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceSummaryBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceSummaryBOC();
 */
    

/* DECLS: void startSumOnly();
 */
    
    void startSumOnly(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void askSummary(int size);
 */
    
    void askSummary(int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendSummaryBOC(const double *results, int n);
 */
    
    void sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCCS();
 */
    
    void initCCS(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);

/* DECLS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
    
    void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);

/* DECLS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
    
    void collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void summaryDataCollected(const double *result, int n);
 */
    
    void summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceSummaryParallelShutdown(int pe);
 */
    
    void traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void maxBinSize(double impl_noname_0);
 */
    
    void maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void shrink(double _maxBinSize);
 */
    
    void shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sumData(const double *result, int n);
 */
    
    void sumData(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceSummaryBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceSummaryBOC>CBase_TraceSummaryBOC;



/* ---------------- method closures -------------- */
class Closure_TraceSummaryInit {
  public:

};


/* ---------------- method closures -------------- */
class Closure_TraceSummaryBOC {
  public:


    struct startSumOnly_2_closure;


    struct askSummary_3_closure;


    struct sendSummaryBOC_4_closure;


    struct initCCS_5_closure;




    struct collectSummaryData_8_closure;


    struct summaryDataCollected_9_closure;


    struct traceSummaryParallelShutdown_10_closure;


    struct maxBinSize_11_closure;


    struct shrink_12_closure;


    struct sumData_13_closure;


};

extern void _registerTraceSummary(void);
#endif
