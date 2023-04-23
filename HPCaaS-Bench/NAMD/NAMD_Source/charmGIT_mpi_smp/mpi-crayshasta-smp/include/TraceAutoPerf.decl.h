#ifndef _DECL_TraceAutoPerf_H_
#define _DECL_TraceAutoPerf_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TraceAutoPerfInit: Chare{
TraceAutoPerfInit(CkArgMsg* impl_msg);
};
 */
 class TraceAutoPerfInit;
 class CkIndex_TraceAutoPerfInit;
 class CProxy_TraceAutoPerfInit;
/* --------------- index object ------------------ */
class CkIndex_TraceAutoPerfInit:public CkIndex_Chare{
  public:
    typedef TraceAutoPerfInit local_t;
    typedef CkIndex_TraceAutoPerfInit index_t;
    typedef CProxy_TraceAutoPerfInit proxy_t;
    typedef CProxy_TraceAutoPerfInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceAutoPerfInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceAutoPerfInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceAutoPerfInit_CkArgMsg() {
      static int epidx = reg_TraceAutoPerfInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceAutoPerfInit_CkArgMsg(); }
    
    static void _call_TraceAutoPerfInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceAutoPerfInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceAutoPerfInit:public CProxy_Chare{
  public:
    typedef TraceAutoPerfInit local_t;
    typedef CkIndex_TraceAutoPerfInit index_t;
    typedef CProxy_TraceAutoPerfInit proxy_t;
    typedef CProxy_TraceAutoPerfInit element_t;

    CProxy_TraceAutoPerfInit(void) {};
    CProxy_TraceAutoPerfInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceAutoPerfInit(const Chare *c) : CProxy_Chare(c){  }

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
    TraceAutoPerfInit *ckLocal(void) const
    { return (TraceAutoPerfInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceAutoPerfInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceAutoPerfInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceAutoPerfInit>CBase_TraceAutoPerfInit;



/* DECLS: readonly CProxy_TraceAutoPerfBOC autoPerfProxy;
 */

/* DECLS: readonly bool isPeriodicalAnalysis;
 */

/* DECLS: readonly int treeGroupSize;
 */

/* DECLS: readonly int numGroups;
 */

/* DECLS: readonly int treeBranchFactor;
 */

/* DECLS: readonly bool isIdleAnalysis;
 */

/* DECLS: readonly bool isPerfDumpOn;
 */

/* DECLS: readonly int WARMUP_STEP;
 */

/* DECLS: readonly int PAUSE_STEP;
 */

/* DECLS: readonly int PICS_collection_mode;
 */

/* DECLS: readonly int PICS_evaluation_mode;
 */

/* DECLS: group TraceAutoPerfBOC: IrrGroup{
TraceAutoPerfBOC();
void registerPerfGoal(int goalIndex);
void setAutoPerfDoneCallback(const CkCallback &cb);
void setUserDefinedGoal(double value);
void setNumOfPhases(int num, const char *names);
void startStep();
void endStep(const bool &fromGlobal, int pe, int incSteps);
void endPhaseAndStep(const bool &fromGlobal, int pe);
void resume();
void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
void run(const bool &fromGlobal, int fromPE);
void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
void startPhase(int phaseId);
void endPhase();
void getPerfData(int reductionPE, const CkCallback &cb);
void gatherSummary(CkReductionMsg* impl_msg);
void globalPerfAnalyze(CkReductionMsg* impl_msg);
void setProjectionsOutput();
void recvGlobalSummary(CkReductionMsg* impl_msg);
void tuneDone();
void globalDecision(double metrics, int source);
void analyzeAndTune();
void startTimeNextStep();
void PICS_markLDBStart(int appStep);
void PICS_markLDBEnd();
TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceAutoPerfBOC;
 class CkIndex_TraceAutoPerfBOC;
 class CProxy_TraceAutoPerfBOC;
 class CProxyElement_TraceAutoPerfBOC;
 class CProxySection_TraceAutoPerfBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceAutoPerfBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceAutoPerfBOC local_t;
    typedef CkIndex_TraceAutoPerfBOC index_t;
    typedef CProxy_TraceAutoPerfBOC proxy_t;
    typedef CProxyElement_TraceAutoPerfBOC element_t;
    typedef CProxySection_TraceAutoPerfBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceAutoPerfBOC();
     */
    // Entry point registration at startup
    
    static int reg_TraceAutoPerfBOC_void();
    // Entry point index lookup
    
    inline static int idx_TraceAutoPerfBOC_void() {
      static int epidx = reg_TraceAutoPerfBOC_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TraceAutoPerfBOC_void(); }
    
    static void _call_TraceAutoPerfBOC_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceAutoPerfBOC_void(void* impl_msg, void* impl_obj);
    /* DECLS: void registerPerfGoal(int goalIndex);
     */
    // Entry point registration at startup
    
    static int reg_registerPerfGoal_marshall2();
    // Entry point index lookup
    
    inline static int idx_registerPerfGoal_marshall2() {
      static int epidx = reg_registerPerfGoal_marshall2();
      return epidx;
    }

    
    inline static int idx_registerPerfGoal(void (TraceAutoPerfBOC::*)(int goalIndex) ) {
      return idx_registerPerfGoal_marshall2();
    }


    
    static int registerPerfGoal(int goalIndex) { return idx_registerPerfGoal_marshall2(); }
    
    static void _call_registerPerfGoal_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerPerfGoal_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_registerPerfGoal_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_registerPerfGoal_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setAutoPerfDoneCallback(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setAutoPerfDoneCallback_marshall3();
    // Entry point index lookup
    
    inline static int idx_setAutoPerfDoneCallback_marshall3() {
      static int epidx = reg_setAutoPerfDoneCallback_marshall3();
      return epidx;
    }

    
    inline static int idx_setAutoPerfDoneCallback(void (TraceAutoPerfBOC::*)(const CkCallback &cb) ) {
      return idx_setAutoPerfDoneCallback_marshall3();
    }


    
    static int setAutoPerfDoneCallback(const CkCallback &cb) { return idx_setAutoPerfDoneCallback_marshall3(); }
    
    static void _call_setAutoPerfDoneCallback_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setAutoPerfDoneCallback_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setAutoPerfDoneCallback_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setAutoPerfDoneCallback_marshall3(PUP::er &p,void *msg);
    /* DECLS: void setUserDefinedGoal(double value);
     */
    // Entry point registration at startup
    
    static int reg_setUserDefinedGoal_marshall4();
    // Entry point index lookup
    
    inline static int idx_setUserDefinedGoal_marshall4() {
      static int epidx = reg_setUserDefinedGoal_marshall4();
      return epidx;
    }

    
    inline static int idx_setUserDefinedGoal(void (TraceAutoPerfBOC::*)(double value) ) {
      return idx_setUserDefinedGoal_marshall4();
    }


    
    static int setUserDefinedGoal(double value) { return idx_setUserDefinedGoal_marshall4(); }
    
    static void _call_setUserDefinedGoal_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setUserDefinedGoal_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setUserDefinedGoal_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setUserDefinedGoal_marshall4(PUP::er &p,void *msg);
    /* DECLS: void setNumOfPhases(int num, const char *names);
     */
    // Entry point registration at startup
    
    static int reg_setNumOfPhases_marshall5();
    // Entry point index lookup
    
    inline static int idx_setNumOfPhases_marshall5() {
      static int epidx = reg_setNumOfPhases_marshall5();
      return epidx;
    }

    
    inline static int idx_setNumOfPhases(void (TraceAutoPerfBOC::*)(int num, const char *names) ) {
      return idx_setNumOfPhases_marshall5();
    }


    
    static int setNumOfPhases(int num, const char *names) { return idx_setNumOfPhases_marshall5(); }
    
    static void _call_setNumOfPhases_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setNumOfPhases_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setNumOfPhases_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setNumOfPhases_marshall5(PUP::er &p,void *msg);
    /* DECLS: void startStep();
     */
    // Entry point registration at startup
    
    static int reg_startStep_void();
    // Entry point index lookup
    
    inline static int idx_startStep_void() {
      static int epidx = reg_startStep_void();
      return epidx;
    }

    
    inline static int idx_startStep(void (TraceAutoPerfBOC::*)() ) {
      return idx_startStep_void();
    }


    
    static int startStep() { return idx_startStep_void(); }
    
    static void _call_startStep_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startStep_void(void* impl_msg, void* impl_obj);
    /* DECLS: void endStep(const bool &fromGlobal, int pe, int incSteps);
     */
    // Entry point registration at startup
    
    static int reg_endStep_marshall7();
    // Entry point index lookup
    
    inline static int idx_endStep_marshall7() {
      static int epidx = reg_endStep_marshall7();
      return epidx;
    }

    
    inline static int idx_endStep(void (TraceAutoPerfBOC::*)(const bool &fromGlobal, int pe, int incSteps) ) {
      return idx_endStep_marshall7();
    }


    
    static int endStep(const bool &fromGlobal, int pe, int incSteps) { return idx_endStep_marshall7(); }
    
    static void _call_endStep_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_endStep_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_endStep_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_endStep_marshall7(PUP::er &p,void *msg);
    /* DECLS: void endPhaseAndStep(const bool &fromGlobal, int pe);
     */
    // Entry point registration at startup
    
    static int reg_endPhaseAndStep_marshall8();
    // Entry point index lookup
    
    inline static int idx_endPhaseAndStep_marshall8() {
      static int epidx = reg_endPhaseAndStep_marshall8();
      return epidx;
    }

    
    inline static int idx_endPhaseAndStep(void (TraceAutoPerfBOC::*)(const bool &fromGlobal, int pe) ) {
      return idx_endPhaseAndStep_marshall8();
    }


    
    static int endPhaseAndStep(const bool &fromGlobal, int pe) { return idx_endPhaseAndStep_marshall8(); }
    
    static void _call_endPhaseAndStep_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_endPhaseAndStep_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_endPhaseAndStep_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_endPhaseAndStep_marshall8(PUP::er &p,void *msg);
    /* DECLS: void resume();
     */
    // Entry point registration at startup
    
    static int reg_resume_void();
    // Entry point index lookup
    
    inline static int idx_resume_void() {
      static int epidx = reg_resume_void();
      return epidx;
    }

    
    inline static int idx_resume(void (TraceAutoPerfBOC::*)() ) {
      return idx_resume_void();
    }


    
    static int resume() { return idx_resume_void(); }
    
    static void _call_resume_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resume_void(void* impl_msg, void* impl_obj);
    /* DECLS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_endStepResumeCb_marshall10();
    // Entry point index lookup
    
    inline static int idx_endStepResumeCb_marshall10() {
      static int epidx = reg_endStepResumeCb_marshall10();
      return epidx;
    }

    
    inline static int idx_endStepResumeCb(void (TraceAutoPerfBOC::*)(const bool &fromGlobal, int pe, const CkCallback &cb) ) {
      return idx_endStepResumeCb_marshall10();
    }


    
    static int endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb) { return idx_endStepResumeCb_marshall10(); }
    
    static void _call_endStepResumeCb_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_endStepResumeCb_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_endStepResumeCb_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_endStepResumeCb_marshall10(PUP::er &p,void *msg);
    /* DECLS: void run(const bool &fromGlobal, int fromPE);
     */
    // Entry point registration at startup
    
    static int reg_run_marshall11();
    // Entry point index lookup
    
    inline static int idx_run_marshall11() {
      static int epidx = reg_run_marshall11();
      return epidx;
    }

    
    inline static int idx_run(void (TraceAutoPerfBOC::*)(const bool &fromGlobal, int fromPE) ) {
      return idx_run_marshall11();
    }


    
    static int run(const bool &fromGlobal, int fromPE) { return idx_run_marshall11(); }
    
    static void _call_run_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_run_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_run_marshall11(PUP::er &p,void *msg);
    /* DECLS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setCbAndRun_marshall12();
    // Entry point index lookup
    
    inline static int idx_setCbAndRun_marshall12() {
      static int epidx = reg_setCbAndRun_marshall12();
      return epidx;
    }

    
    inline static int idx_setCbAndRun(void (TraceAutoPerfBOC::*)(const bool &fromGlobal, int fromPE, const CkCallback &cb) ) {
      return idx_setCbAndRun_marshall12();
    }


    
    static int setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb) { return idx_setCbAndRun_marshall12(); }
    
    static void _call_setCbAndRun_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setCbAndRun_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setCbAndRun_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setCbAndRun_marshall12(PUP::er &p,void *msg);
    /* DECLS: void startPhase(int phaseId);
     */
    // Entry point registration at startup
    
    static int reg_startPhase_marshall13();
    // Entry point index lookup
    
    inline static int idx_startPhase_marshall13() {
      static int epidx = reg_startPhase_marshall13();
      return epidx;
    }

    
    inline static int idx_startPhase(void (TraceAutoPerfBOC::*)(int phaseId) ) {
      return idx_startPhase_marshall13();
    }


    
    static int startPhase(int phaseId) { return idx_startPhase_marshall13(); }
    
    static void _call_startPhase_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startPhase_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startPhase_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startPhase_marshall13(PUP::er &p,void *msg);
    /* DECLS: void endPhase();
     */
    // Entry point registration at startup
    
    static int reg_endPhase_void();
    // Entry point index lookup
    
    inline static int idx_endPhase_void() {
      static int epidx = reg_endPhase_void();
      return epidx;
    }

    
    inline static int idx_endPhase(void (TraceAutoPerfBOC::*)() ) {
      return idx_endPhase_void();
    }


    
    static int endPhase() { return idx_endPhase_void(); }
    
    static void _call_endPhase_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_endPhase_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getPerfData(int reductionPE, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_getPerfData_marshall15();
    // Entry point index lookup
    
    inline static int idx_getPerfData_marshall15() {
      static int epidx = reg_getPerfData_marshall15();
      return epidx;
    }

    
    inline static int idx_getPerfData(void (TraceAutoPerfBOC::*)(int reductionPE, const CkCallback &cb) ) {
      return idx_getPerfData_marshall15();
    }


    
    static int getPerfData(int reductionPE, const CkCallback &cb) { return idx_getPerfData_marshall15(); }
    
    static void _call_getPerfData_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getPerfData_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getPerfData_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getPerfData_marshall15(PUP::er &p,void *msg);
    /* DECLS: void gatherSummary(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_gatherSummary_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_gatherSummary_CkReductionMsg() {
      static int epidx = reg_gatherSummary_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_gatherSummary(void (TraceAutoPerfBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_gatherSummary_CkReductionMsg();
    }


    
    static int gatherSummary(CkReductionMsg* impl_msg) { return idx_gatherSummary_CkReductionMsg(); }
    
    static void _call_gatherSummary_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gatherSummary_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_globalPerfAnalyze_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_globalPerfAnalyze_CkReductionMsg() {
      static int epidx = reg_globalPerfAnalyze_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_globalPerfAnalyze(void (TraceAutoPerfBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_globalPerfAnalyze_CkReductionMsg();
    }


    
    static int globalPerfAnalyze(CkReductionMsg* impl_msg) { return idx_globalPerfAnalyze_CkReductionMsg(); }
    
    static void _call_globalPerfAnalyze_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_globalPerfAnalyze_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setProjectionsOutput();
     */
    // Entry point registration at startup
    
    static int reg_setProjectionsOutput_void();
    // Entry point index lookup
    
    inline static int idx_setProjectionsOutput_void() {
      static int epidx = reg_setProjectionsOutput_void();
      return epidx;
    }

    
    inline static int idx_setProjectionsOutput(void (TraceAutoPerfBOC::*)() ) {
      return idx_setProjectionsOutput_void();
    }


    
    static int setProjectionsOutput() { return idx_setProjectionsOutput_void(); }
    
    static void _call_setProjectionsOutput_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setProjectionsOutput_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvGlobalSummary(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvGlobalSummary_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_recvGlobalSummary_CkReductionMsg() {
      static int epidx = reg_recvGlobalSummary_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_recvGlobalSummary(void (TraceAutoPerfBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_recvGlobalSummary_CkReductionMsg();
    }


    
    static int recvGlobalSummary(CkReductionMsg* impl_msg) { return idx_recvGlobalSummary_CkReductionMsg(); }
    
    static void _call_recvGlobalSummary_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvGlobalSummary_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void tuneDone();
     */
    // Entry point registration at startup
    
    static int reg_tuneDone_void();
    // Entry point index lookup
    
    inline static int idx_tuneDone_void() {
      static int epidx = reg_tuneDone_void();
      return epidx;
    }

    
    inline static int idx_tuneDone(void (TraceAutoPerfBOC::*)() ) {
      return idx_tuneDone_void();
    }


    
    static int tuneDone() { return idx_tuneDone_void(); }
    
    static void _call_tuneDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_tuneDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void globalDecision(double metrics, int source);
     */
    // Entry point registration at startup
    
    static int reg_globalDecision_marshall21();
    // Entry point index lookup
    
    inline static int idx_globalDecision_marshall21() {
      static int epidx = reg_globalDecision_marshall21();
      return epidx;
    }

    
    inline static int idx_globalDecision(void (TraceAutoPerfBOC::*)(double metrics, int source) ) {
      return idx_globalDecision_marshall21();
    }


    
    static int globalDecision(double metrics, int source) { return idx_globalDecision_marshall21(); }
    
    static void _call_globalDecision_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_globalDecision_marshall21(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_globalDecision_marshall21(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_globalDecision_marshall21(PUP::er &p,void *msg);
    /* DECLS: void analyzeAndTune();
     */
    // Entry point registration at startup
    
    static int reg_analyzeAndTune_void();
    // Entry point index lookup
    
    inline static int idx_analyzeAndTune_void() {
      static int epidx = reg_analyzeAndTune_void();
      return epidx;
    }

    
    inline static int idx_analyzeAndTune(void (TraceAutoPerfBOC::*)() ) {
      return idx_analyzeAndTune_void();
    }


    
    static int analyzeAndTune() { return idx_analyzeAndTune_void(); }
    
    static void _call_analyzeAndTune_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_analyzeAndTune_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startTimeNextStep();
     */
    // Entry point registration at startup
    
    static int reg_startTimeNextStep_void();
    // Entry point index lookup
    
    inline static int idx_startTimeNextStep_void() {
      static int epidx = reg_startTimeNextStep_void();
      return epidx;
    }

    
    inline static int idx_startTimeNextStep(void (TraceAutoPerfBOC::*)() ) {
      return idx_startTimeNextStep_void();
    }


    
    static int startTimeNextStep() { return idx_startTimeNextStep_void(); }
    
    static void _call_startTimeNextStep_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startTimeNextStep_void(void* impl_msg, void* impl_obj);
    /* DECLS: void PICS_markLDBStart(int appStep);
     */
    // Entry point registration at startup
    
    static int reg_PICS_markLDBStart_marshall24();
    // Entry point index lookup
    
    inline static int idx_PICS_markLDBStart_marshall24() {
      static int epidx = reg_PICS_markLDBStart_marshall24();
      return epidx;
    }

    
    inline static int idx_PICS_markLDBStart(void (TraceAutoPerfBOC::*)(int appStep) ) {
      return idx_PICS_markLDBStart_marshall24();
    }


    
    static int PICS_markLDBStart(int appStep) { return idx_PICS_markLDBStart_marshall24(); }
    
    static void _call_PICS_markLDBStart_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PICS_markLDBStart_marshall24(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PICS_markLDBStart_marshall24(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PICS_markLDBStart_marshall24(PUP::er &p,void *msg);
    /* DECLS: void PICS_markLDBEnd();
     */
    // Entry point registration at startup
    
    static int reg_PICS_markLDBEnd_void();
    // Entry point index lookup
    
    inline static int idx_PICS_markLDBEnd_void() {
      static int epidx = reg_PICS_markLDBEnd_void();
      return epidx;
    }

    
    inline static int idx_PICS_markLDBEnd(void (TraceAutoPerfBOC::*)() ) {
      return idx_PICS_markLDBEnd_void();
    }


    
    static int PICS_markLDBEnd() { return idx_PICS_markLDBEnd_void(); }
    
    static void _call_PICS_markLDBEnd_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PICS_markLDBEnd_void(void* impl_msg, void* impl_obj);
    /* DECLS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceAutoPerfBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceAutoPerfBOC_CkMigrateMessage() {
      static int epidx = reg_TraceAutoPerfBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceAutoPerfBOC_CkMigrateMessage(); }
    
    static void _call_TraceAutoPerfBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceAutoPerfBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceAutoPerfBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceAutoPerfBOC local_t;
    typedef CkIndex_TraceAutoPerfBOC index_t;
    typedef CProxy_TraceAutoPerfBOC proxy_t;
    typedef CProxyElement_TraceAutoPerfBOC element_t;
    typedef CProxySection_TraceAutoPerfBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceAutoPerfBOC(void) {
    }
    CProxyElement_TraceAutoPerfBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceAutoPerfBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceAutoPerfBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceAutoPerfBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceAutoPerfBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceAutoPerfBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceAutoPerfBOC();
 */
    

/* DECLS: void registerPerfGoal(int goalIndex);
 */
    
    void registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
    
    void setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setUserDefinedGoal(double value);
 */
    
    void setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setNumOfPhases(int num, const char *names);
 */
    
    void setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startStep();
 */
    
    void startStep(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
    
    void endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
    
    void endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
    
    void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run(const bool &fromGlobal, int fromPE);
 */
    
    void run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
    
    void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startPhase(int phaseId);
 */
    
    void startPhase(int phaseId, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhase();
 */
    
    void endPhase(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
    
    void getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherSummary(CkReductionMsg* impl_msg);
 */
    
    void gatherSummary(CkReductionMsg* impl_msg);

/* DECLS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
    
    void globalPerfAnalyze(CkReductionMsg* impl_msg);

/* DECLS: void setProjectionsOutput();
 */
    
    void setProjectionsOutput(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
    
    void recvGlobalSummary(CkReductionMsg* impl_msg);

/* DECLS: void tuneDone();
 */
    
    void tuneDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalDecision(double metrics, int source);
 */
    
    void globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void analyzeAndTune();
 */
    
    void analyzeAndTune(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeNextStep();
 */
    
    void startTimeNextStep(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBStart(int appStep);
 */
    
    void PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBEnd();
 */
    
    void PICS_markLDBEnd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceAutoPerfBOC: public CProxy_IrrGroup{
  public:
    typedef TraceAutoPerfBOC local_t;
    typedef CkIndex_TraceAutoPerfBOC index_t;
    typedef CProxy_TraceAutoPerfBOC proxy_t;
    typedef CProxyElement_TraceAutoPerfBOC element_t;
    typedef CProxySection_TraceAutoPerfBOC section_t;

    CProxy_TraceAutoPerfBOC(void) {
    }
    CProxy_TraceAutoPerfBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceAutoPerfBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceAutoPerfBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceAutoPerfBOC operator[](int onPE) const
      {return CProxyElement_TraceAutoPerfBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceAutoPerfBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceAutoPerfBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceAutoPerfBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceAutoPerfBOC();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerPerfGoal(int goalIndex);
 */
    
    void registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts=NULL);
    
    void registerPerfGoal(int goalIndex, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void registerPerfGoal(int goalIndex, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
    
    void setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void setAutoPerfDoneCallback(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setAutoPerfDoneCallback(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setUserDefinedGoal(double value);
 */
    
    void setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts=NULL);
    
    void setUserDefinedGoal(double value, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setUserDefinedGoal(double value, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setNumOfPhases(int num, const char *names);
 */
    
    void setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts=NULL);
    
    void setNumOfPhases(int num, const char *names, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setNumOfPhases(int num, const char *names, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startStep();
 */
    
    void startStep(const CkEntryOptions *impl_e_opts=NULL);
    
    void startStep(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startStep(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
    
    void endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts=NULL);
    
    void endStep(const bool &fromGlobal, int pe, int incSteps, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void endStep(const bool &fromGlobal, int pe, int incSteps, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
    
    void endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts=NULL);
    
    void endPhaseAndStep(const bool &fromGlobal, int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void endPhaseAndStep(const bool &fromGlobal, int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);
    
    void resume(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resume(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
    
    void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run(const bool &fromGlobal, int fromPE);
 */
    
    void run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts=NULL);
    
    void run(const bool &fromGlobal, int fromPE, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void run(const bool &fromGlobal, int fromPE, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
    
    void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startPhase(int phaseId);
 */
    
    void startPhase(int phaseId, const CkEntryOptions *impl_e_opts=NULL);
    
    void startPhase(int phaseId, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startPhase(int phaseId, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhase();
 */
    
    void endPhase(const CkEntryOptions *impl_e_opts=NULL);
    
    void endPhase(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void endPhase(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
    
    void getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void getPerfData(int reductionPE, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getPerfData(int reductionPE, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherSummary(CkReductionMsg* impl_msg);
 */
    
    void gatherSummary(CkReductionMsg* impl_msg);
    
    void gatherSummary(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void gatherSummary(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
    
    void globalPerfAnalyze(CkReductionMsg* impl_msg);
    
    void globalPerfAnalyze(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void globalPerfAnalyze(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void setProjectionsOutput();
 */
    
    void setProjectionsOutput(const CkEntryOptions *impl_e_opts=NULL);
    
    void setProjectionsOutput(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setProjectionsOutput(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
    
    void recvGlobalSummary(CkReductionMsg* impl_msg);
    
    void recvGlobalSummary(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void recvGlobalSummary(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void tuneDone();
 */
    
    void tuneDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void tuneDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void tuneDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalDecision(double metrics, int source);
 */
    
    void globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts=NULL);
    
    void globalDecision(double metrics, int source, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void globalDecision(double metrics, int source, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void analyzeAndTune();
 */
    
    void analyzeAndTune(const CkEntryOptions *impl_e_opts=NULL);
    
    void analyzeAndTune(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void analyzeAndTune(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeNextStep();
 */
    
    void startTimeNextStep(const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeNextStep(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeNextStep(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBStart(int appStep);
 */
    
    void PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts=NULL);
    
    void PICS_markLDBStart(int appStep, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void PICS_markLDBStart(int appStep, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBEnd();
 */
    
    void PICS_markLDBEnd(const CkEntryOptions *impl_e_opts=NULL);
    
    void PICS_markLDBEnd(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void PICS_markLDBEnd(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceAutoPerfBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceAutoPerfBOC local_t;
    typedef CkIndex_TraceAutoPerfBOC index_t;
    typedef CProxy_TraceAutoPerfBOC proxy_t;
    typedef CProxyElement_TraceAutoPerfBOC element_t;
    typedef CProxySection_TraceAutoPerfBOC section_t;

    CProxySection_TraceAutoPerfBOC(void) {
    }
    CProxySection_TraceAutoPerfBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceAutoPerfBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceAutoPerfBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceAutoPerfBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceAutoPerfBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceAutoPerfBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceAutoPerfBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceAutoPerfBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceAutoPerfBOC();
 */
    

/* DECLS: void registerPerfGoal(int goalIndex);
 */
    
    void registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
    
    void setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setUserDefinedGoal(double value);
 */
    
    void setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setNumOfPhases(int num, const char *names);
 */
    
    void setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startStep();
 */
    
    void startStep(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
    
    void endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
    
    void endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
    
    void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run(const bool &fromGlobal, int fromPE);
 */
    
    void run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
    
    void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startPhase(int phaseId);
 */
    
    void startPhase(int phaseId, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endPhase();
 */
    
    void endPhase(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
    
    void getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gatherSummary(CkReductionMsg* impl_msg);
 */
    
    void gatherSummary(CkReductionMsg* impl_msg);

/* DECLS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
    
    void globalPerfAnalyze(CkReductionMsg* impl_msg);

/* DECLS: void setProjectionsOutput();
 */
    
    void setProjectionsOutput(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
    
    void recvGlobalSummary(CkReductionMsg* impl_msg);

/* DECLS: void tuneDone();
 */
    
    void tuneDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalDecision(double metrics, int source);
 */
    
    void globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void analyzeAndTune();
 */
    
    void analyzeAndTune(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeNextStep();
 */
    
    void startTimeNextStep(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBStart(int appStep);
 */
    
    void PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void PICS_markLDBEnd();
 */
    
    void PICS_markLDBEnd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceAutoPerfBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceAutoPerfBOC>CBase_TraceAutoPerfBOC;

/* ---------------- method closures -------------- */
class Closure_TraceAutoPerfInit {
  public:

};














/* ---------------- method closures -------------- */
class Closure_TraceAutoPerfBOC {
  public:


    struct registerPerfGoal_2_closure;


    struct setAutoPerfDoneCallback_3_closure;


    struct setUserDefinedGoal_4_closure;


    struct setNumOfPhases_5_closure;


    struct startStep_6_closure;


    struct endStep_7_closure;


    struct endPhaseAndStep_8_closure;


    struct resume_9_closure;


    struct endStepResumeCb_10_closure;


    struct run_11_closure;


    struct setCbAndRun_12_closure;


    struct startPhase_13_closure;


    struct endPhase_14_closure;


    struct getPerfData_15_closure;




    struct setProjectionsOutput_18_closure;



    struct tuneDone_20_closure;


    struct globalDecision_21_closure;


    struct analyzeAndTune_22_closure;


    struct startTimeNextStep_23_closure;


    struct PICS_markLDBStart_24_closure;


    struct PICS_markLDBEnd_25_closure;


};

extern void _registerTraceAutoPerf(void);
#endif
