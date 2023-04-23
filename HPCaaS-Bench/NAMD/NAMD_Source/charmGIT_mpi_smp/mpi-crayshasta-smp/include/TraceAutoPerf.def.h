/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */















/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::registerPerfGoal_2_closure : public SDAG::Closure {
            int goalIndex;


      registerPerfGoal_2_closure() {
        init();
      }
      registerPerfGoal_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return goalIndex;}
      void pup(PUP::er& __p) {
        __p | goalIndex;
        packClosure(__p);
      }
      virtual ~registerPerfGoal_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(registerPerfGoal_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::setAutoPerfDoneCallback_3_closure : public SDAG::Closure {
            CkCallback cb;


      setAutoPerfDoneCallback_3_closure() {
        init();
      }
      setAutoPerfDoneCallback_3_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~setAutoPerfDoneCallback_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setAutoPerfDoneCallback_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::setUserDefinedGoal_4_closure : public SDAG::Closure {
            double value;


      setUserDefinedGoal_4_closure() {
        init();
      }
      setUserDefinedGoal_4_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return value;}
      void pup(PUP::er& __p) {
        __p | value;
        packClosure(__p);
      }
      virtual ~setUserDefinedGoal_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(setUserDefinedGoal_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::setNumOfPhases_5_closure : public SDAG::Closure {
            int num;
            char *names;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      setNumOfPhases_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      setNumOfPhases_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return num;}
            char *& getP1() { return names;}
      void pup(PUP::er& __p) {
        __p | num;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  int impl_off_names, impl_cnt_names;
  implP|impl_off_names;
  implP|impl_cnt_names;
          impl_buf+=CK_ALIGN(implP.size(),16);
          names = (char *)(impl_buf+impl_off_names);
        }
      }
      virtual ~setNumOfPhases_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(setNumOfPhases_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::startStep_6_closure : public SDAG::Closure {
      

      startStep_6_closure() {
        init();
      }
      startStep_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startStep_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(startStep_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::endStep_7_closure : public SDAG::Closure {
            bool fromGlobal;
            int pe;
            int incSteps;


      endStep_7_closure() {
        init();
      }
      endStep_7_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return fromGlobal;}
            int & getP1() { return pe;}
            int & getP2() { return incSteps;}
      void pup(PUP::er& __p) {
        __p | fromGlobal;
        __p | pe;
        __p | incSteps;
        packClosure(__p);
      }
      virtual ~endStep_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(endStep_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::endPhaseAndStep_8_closure : public SDAG::Closure {
            bool fromGlobal;
            int pe;


      endPhaseAndStep_8_closure() {
        init();
      }
      endPhaseAndStep_8_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return fromGlobal;}
            int & getP1() { return pe;}
      void pup(PUP::er& __p) {
        __p | fromGlobal;
        __p | pe;
        packClosure(__p);
      }
      virtual ~endPhaseAndStep_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(endPhaseAndStep_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::resume_9_closure : public SDAG::Closure {
      

      resume_9_closure() {
        init();
      }
      resume_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resume_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(resume_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::endStepResumeCb_10_closure : public SDAG::Closure {
            bool fromGlobal;
            int pe;
            CkCallback cb;


      endStepResumeCb_10_closure() {
        init();
      }
      endStepResumeCb_10_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return fromGlobal;}
            int & getP1() { return pe;}
            CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | fromGlobal;
        __p | pe;
        __p | cb;
        packClosure(__p);
      }
      virtual ~endStepResumeCb_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(endStepResumeCb_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::run_11_closure : public SDAG::Closure {
            bool fromGlobal;
            int fromPE;


      run_11_closure() {
        init();
      }
      run_11_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return fromGlobal;}
            int & getP1() { return fromPE;}
      void pup(PUP::er& __p) {
        __p | fromGlobal;
        __p | fromPE;
        packClosure(__p);
      }
      virtual ~run_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::setCbAndRun_12_closure : public SDAG::Closure {
            bool fromGlobal;
            int fromPE;
            CkCallback cb;


      setCbAndRun_12_closure() {
        init();
      }
      setCbAndRun_12_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return fromGlobal;}
            int & getP1() { return fromPE;}
            CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | fromGlobal;
        __p | fromPE;
        __p | cb;
        packClosure(__p);
      }
      virtual ~setCbAndRun_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(setCbAndRun_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::startPhase_13_closure : public SDAG::Closure {
            int phaseId;


      startPhase_13_closure() {
        init();
      }
      startPhase_13_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return phaseId;}
      void pup(PUP::er& __p) {
        __p | phaseId;
        packClosure(__p);
      }
      virtual ~startPhase_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(startPhase_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::endPhase_14_closure : public SDAG::Closure {
      

      endPhase_14_closure() {
        init();
      }
      endPhase_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~endPhase_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(endPhase_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::getPerfData_15_closure : public SDAG::Closure {
            int reductionPE;
            CkCallback cb;


      getPerfData_15_closure() {
        init();
      }
      getPerfData_15_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return reductionPE;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | reductionPE;
        __p | cb;
        packClosure(__p);
      }
      virtual ~getPerfData_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(getPerfData_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::setProjectionsOutput_18_closure : public SDAG::Closure {
      

      setProjectionsOutput_18_closure() {
        init();
      }
      setProjectionsOutput_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setProjectionsOutput_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(setProjectionsOutput_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::tuneDone_20_closure : public SDAG::Closure {
      

      tuneDone_20_closure() {
        init();
      }
      tuneDone_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~tuneDone_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(tuneDone_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::globalDecision_21_closure : public SDAG::Closure {
            double metrics;
            int source;


      globalDecision_21_closure() {
        init();
      }
      globalDecision_21_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return metrics;}
            int & getP1() { return source;}
      void pup(PUP::er& __p) {
        __p | metrics;
        __p | source;
        packClosure(__p);
      }
      virtual ~globalDecision_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(globalDecision_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::analyzeAndTune_22_closure : public SDAG::Closure {
      

      analyzeAndTune_22_closure() {
        init();
      }
      analyzeAndTune_22_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~analyzeAndTune_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(analyzeAndTune_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::startTimeNextStep_23_closure : public SDAG::Closure {
      

      startTimeNextStep_23_closure() {
        init();
      }
      startTimeNextStep_23_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startTimeNextStep_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(startTimeNextStep_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::PICS_markLDBStart_24_closure : public SDAG::Closure {
            int appStep;


      PICS_markLDBStart_24_closure() {
        init();
      }
      PICS_markLDBStart_24_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return appStep;}
      void pup(PUP::er& __p) {
        __p | appStep;
        packClosure(__p);
      }
      virtual ~PICS_markLDBStart_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(PICS_markLDBStart_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceAutoPerfBOC::PICS_markLDBEnd_25_closure : public SDAG::Closure {
      

      PICS_markLDBEnd_25_closure() {
        init();
      }
      PICS_markLDBEnd_25_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~PICS_markLDBEnd_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(PICS_markLDBEnd_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare TraceAutoPerfInit: Chare{
TraceAutoPerfInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceAutoPerfInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceAutoPerfInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceAutoPerfInit::__idx, CkIndex_TraceAutoPerfInit::idx_TraceAutoPerfInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceAutoPerfInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceAutoPerfInit::__idx, CkIndex_TraceAutoPerfInit::idx_TraceAutoPerfInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceAutoPerfInit::reg_TraceAutoPerfInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceAutoPerfInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceAutoPerfInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceAutoPerfInit::_call_TraceAutoPerfInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfInit* impl_obj = static_cast<TraceAutoPerfInit*>(impl_obj_void);
  new (impl_obj_void) TraceAutoPerfInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceAutoPerfInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceAutoPerfInit(CkArgMsg* impl_msg);
  idx_TraceAutoPerfInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceAutoPerfInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CProxy_TraceAutoPerfBOC autoPerfProxy;
 */
extern CProxy_TraceAutoPerfBOC autoPerfProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_autoPerfProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|autoPerfProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool isPeriodicalAnalysis;
 */
extern bool isPeriodicalAnalysis;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_isPeriodicalAnalysis(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|isPeriodicalAnalysis;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int treeGroupSize;
 */
extern int treeGroupSize;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_treeGroupSize(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|treeGroupSize;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int numGroups;
 */
extern int numGroups;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_numGroups(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|numGroups;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int treeBranchFactor;
 */
extern int treeBranchFactor;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_treeBranchFactor(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|treeBranchFactor;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool isIdleAnalysis;
 */
extern bool isIdleAnalysis;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_isIdleAnalysis(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|isIdleAnalysis;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool isPerfDumpOn;
 */
extern bool isPerfDumpOn;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_isPerfDumpOn(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|isPerfDumpOn;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int WARMUP_STEP;
 */
extern int WARMUP_STEP;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_WARMUP_STEP(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|WARMUP_STEP;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int PAUSE_STEP;
 */
extern int PAUSE_STEP;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_PAUSE_STEP(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|PAUSE_STEP;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int PICS_collection_mode;
 */
extern int PICS_collection_mode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_PICS_collection_mode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|PICS_collection_mode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int PICS_evaluation_mode;
 */
extern int PICS_evaluation_mode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_PICS_evaluation_mode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|PICS_evaluation_mode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceAutoPerfBOC: IrrGroup{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceAutoPerfBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPerfGoal(int goalIndex);
 */
void CProxyElement_TraceAutoPerfBOC::registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int goalIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|goalIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|goalIndex;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
void CProxyElement_TraceAutoPerfBOC::setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setUserDefinedGoal(double value);
 */
void CProxyElement_TraceAutoPerfBOC::setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double value
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|value;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|value;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNumOfPhases(int num, const char *names);
 */
void CProxyElement_TraceAutoPerfBOC::setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const char *names
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_names, impl_cnt_names;
  impl_off_names=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_names=sizeof(char)*(num*40));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_names,names,impl_cnt_names);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startStep();
 */
void CProxyElement_TraceAutoPerfBOC::startStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
void CProxyElement_TraceAutoPerfBOC::endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, int incSteps
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
void CProxyElement_TraceAutoPerfBOC::endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxyElement_TraceAutoPerfBOC::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
void CProxyElement_TraceAutoPerfBOC::endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run(const bool &fromGlobal, int fromPE);
 */
void CProxyElement_TraceAutoPerfBOC::run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
void CProxyElement_TraceAutoPerfBOC::setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(int phaseId);
 */
void CProxyElement_TraceAutoPerfBOC::startPhase(int phaseId, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int phaseId
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|phaseId;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|phaseId;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhase();
 */
void CProxyElement_TraceAutoPerfBOC::endPhase(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
void CProxyElement_TraceAutoPerfBOC::getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int reductionPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherSummary(CkReductionMsg* impl_msg);
 */
void CProxyElement_TraceAutoPerfBOC::gatherSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
void CProxyElement_TraceAutoPerfBOC::globalPerfAnalyze(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjectionsOutput();
 */
void CProxyElement_TraceAutoPerfBOC::setProjectionsOutput(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
void CProxyElement_TraceAutoPerfBOC::recvGlobalSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tuneDone();
 */
void CProxyElement_TraceAutoPerfBOC::tuneDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalDecision(double metrics, int source);
 */
void CProxyElement_TraceAutoPerfBOC::globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double metrics, int source
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|metrics;
    implP|source;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|metrics;
    implP|source;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void analyzeAndTune();
 */
void CProxyElement_TraceAutoPerfBOC::analyzeAndTune(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeNextStep();
 */
void CProxyElement_TraceAutoPerfBOC::startTimeNextStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBStart(int appStep);
 */
void CProxyElement_TraceAutoPerfBOC::PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int appStep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|appStep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|appStep;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBEnd();
 */
void CProxyElement_TraceAutoPerfBOC::PICS_markLDBEnd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC();
 */
CkGroupID CProxy_TraceAutoPerfBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceAutoPerfBOC::__idx, CkIndex_TraceAutoPerfBOC::idx_TraceAutoPerfBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_TraceAutoPerfBOC_void() {
  int epidx = CkRegisterEp("TraceAutoPerfBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceAutoPerfBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_TraceAutoPerfBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  new (impl_obj_void) TraceAutoPerfBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPerfGoal(int goalIndex);
 */
void CProxy_TraceAutoPerfBOC::registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int goalIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|goalIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|goalIndex;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::registerPerfGoal(int goalIndex, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int goalIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|goalIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|goalIndex;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::registerPerfGoal(int goalIndex, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int goalIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|goalIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|goalIndex;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_registerPerfGoal_marshall2() {
  int epidx = CkRegisterEp("registerPerfGoal(int goalIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_registerPerfGoal_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_registerPerfGoal_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_registerPerfGoal_marshall2);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_registerPerfGoal_marshall2(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int goalIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> goalIndex;
  implP|goalIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->registerPerfGoal(std::move(goalIndex.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_registerPerfGoal_marshall2(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int goalIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> goalIndex;
  implP|goalIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->registerPerfGoal(std::move(goalIndex.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_registerPerfGoal_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int goalIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> goalIndex;
  implP|goalIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("goalIndex");
  implDestP|goalIndex;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::registerPerfGoal_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
void CProxy_TraceAutoPerfBOC::setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::setAutoPerfDoneCallback(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::setAutoPerfDoneCallback(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_setAutoPerfDoneCallback_marshall3() {
  int epidx = CkRegisterEp("setAutoPerfDoneCallback(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_setAutoPerfDoneCallback_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setAutoPerfDoneCallback_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setAutoPerfDoneCallback_marshall3);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_setAutoPerfDoneCallback_marshall3(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setAutoPerfDoneCallback(std::move(cb.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_setAutoPerfDoneCallback_marshall3(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setAutoPerfDoneCallback(std::move(cb.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_setAutoPerfDoneCallback_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::setAutoPerfDoneCallback_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setUserDefinedGoal(double value);
 */
void CProxy_TraceAutoPerfBOC::setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double value
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|value;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|value;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::setUserDefinedGoal(double value, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double value
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|value;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|value;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::setUserDefinedGoal(double value, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double value
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|value;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|value;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_setUserDefinedGoal_marshall4() {
  int epidx = CkRegisterEp("setUserDefinedGoal(double value)",
      reinterpret_cast<CkCallFnPtr>(_call_setUserDefinedGoal_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setUserDefinedGoal_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setUserDefinedGoal_marshall4);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_setUserDefinedGoal_marshall4(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double value*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> value;
  implP|value;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setUserDefinedGoal(std::move(value.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_setUserDefinedGoal_marshall4(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double value*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> value;
  implP|value;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setUserDefinedGoal(std::move(value.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_setUserDefinedGoal_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double value*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> value;
  implP|value;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("value");
  implDestP|value;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::setUserDefinedGoal_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNumOfPhases(int num, const char *names);
 */
void CProxy_TraceAutoPerfBOC::setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const char *names
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_names, impl_cnt_names;
  impl_off_names=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_names=sizeof(char)*(num*40));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_names,names,impl_cnt_names);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::setNumOfPhases(int num, const char *names, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num, const char *names
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_names, impl_cnt_names;
  impl_off_names=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_names=sizeof(char)*(num*40));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_names,names,impl_cnt_names);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::setNumOfPhases(int num, const char *names, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num, const char *names
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_names, impl_cnt_names;
  impl_off_names=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_names=sizeof(char)*(num*40));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_names,names,impl_cnt_names);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_setNumOfPhases_marshall5() {
  int epidx = CkRegisterEp("setNumOfPhases(int num, const char *names)",
      reinterpret_cast<CkCallFnPtr>(_call_setNumOfPhases_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setNumOfPhases_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setNumOfPhases_marshall5);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_setNumOfPhases_marshall5(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num, const char *names*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  int impl_off_names, impl_cnt_names;
  implP|impl_off_names;
  implP|impl_cnt_names;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *names=(char *)(impl_buf+impl_off_names);
  impl_obj->setNumOfPhases(std::move(num.t), names);
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_setNumOfPhases_marshall5(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int num, const char *names*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  int impl_off_names, impl_cnt_names;
  implP|impl_off_names;
  implP|impl_cnt_names;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *names=(char *)(impl_buf+impl_off_names);
  impl_obj->setNumOfPhases(std::move(num.t), names);
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_setNumOfPhases_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num, const char *names*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  int impl_off_names, impl_cnt_names;
  implP|impl_off_names;
  implP|impl_cnt_names;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *names=(char *)(impl_buf+impl_off_names);
  if (implDestP.hasComments()) implDestP.comment("num");
  implDestP|num;
  if (implDestP.hasComments()) implDestP.comment("names");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*names))<impl_cnt_names;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|names[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::setNumOfPhases_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startStep();
 */
void CProxy_TraceAutoPerfBOC::startStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::startStep(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::startStep(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_startStep_void() {
  int epidx = CkRegisterEp("startStep()",
      reinterpret_cast<CkCallFnPtr>(_call_startStep_void), 0, __idx, 0+CK_EP_INLINE);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_startStep_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->startStep();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::startStep_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
void CProxy_TraceAutoPerfBOC::endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, int incSteps
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endStep(const bool &fromGlobal, int pe, int incSteps, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe, int incSteps
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endStep(const bool &fromGlobal, int pe, int incSteps, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe, int incSteps
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_endStep_marshall7() {
  int epidx = CkRegisterEp("endStep(const bool &fromGlobal, int pe, int incSteps)",
      reinterpret_cast<CkCallFnPtr>(_call_endStep_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_endStep_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_endStep_marshall7);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_endStep_marshall7(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, int incSteps*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> incSteps;
  implP|incSteps;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endStep(std::move(fromGlobal.t), std::move(pe.t), std::move(incSteps.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_endStep_marshall7(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, int incSteps*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> incSteps;
  implP|incSteps;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endStep(std::move(fromGlobal.t), std::move(pe.t), std::move(incSteps.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_endStep_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, int incSteps*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> incSteps;
  implP|incSteps;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fromGlobal");
  implDestP|fromGlobal;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("incSteps");
  implDestP|incSteps;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::endStep_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
void CProxy_TraceAutoPerfBOC::endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endPhaseAndStep(const bool &fromGlobal, int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endPhaseAndStep(const bool &fromGlobal, int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_endPhaseAndStep_marshall8() {
  int epidx = CkRegisterEp("endPhaseAndStep(const bool &fromGlobal, int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_endPhaseAndStep_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_endPhaseAndStep_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_endPhaseAndStep_marshall8);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_endPhaseAndStep_marshall8(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endPhaseAndStep(std::move(fromGlobal.t), std::move(pe.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_endPhaseAndStep_marshall8(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endPhaseAndStep(std::move(fromGlobal.t), std::move(pe.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_endPhaseAndStep_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fromGlobal");
  implDestP|fromGlobal;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::endPhaseAndStep_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxy_TraceAutoPerfBOC::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::resume(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::resume(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_resume_void() {
  int epidx = CkRegisterEp("resume()",
      reinterpret_cast<CkCallFnPtr>(_call_resume_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_resume_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->resume();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::resume_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
void CProxy_TraceAutoPerfBOC::endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int pe, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_endStepResumeCb_marshall10() {
  int epidx = CkRegisterEp("endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_endStepResumeCb_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_endStepResumeCb_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_endStepResumeCb_marshall10);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_endStepResumeCb_marshall10(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endStepResumeCb(std::move(fromGlobal.t), std::move(pe.t), std::move(cb.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_endStepResumeCb_marshall10(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endStepResumeCb(std::move(fromGlobal.t), std::move(pe.t), std::move(cb.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_endStepResumeCb_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int pe, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fromGlobal");
  implDestP|fromGlobal;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::endStepResumeCb_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run(const bool &fromGlobal, int fromPE);
 */
void CProxy_TraceAutoPerfBOC::run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::run(const bool &fromGlobal, int fromPE, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int fromPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::run(const bool &fromGlobal, int fromPE, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int fromPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_run_marshall11() {
  int epidx = CkRegisterEp("run(const bool &fromGlobal, int fromPE)",
      reinterpret_cast<CkCallFnPtr>(_call_run_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_run_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_run_marshall11);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_run_marshall11(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->run(std::move(fromGlobal.t), std::move(fromPE.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_run_marshall11(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->run(std::move(fromGlobal.t), std::move(fromPE.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_run_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fromGlobal");
  implDestP|fromGlobal;
  if (implDestP.hasComments()) implDestP.comment("fromPE");
  implDestP|fromPE;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::run_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
void CProxy_TraceAutoPerfBOC::setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int fromPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &fromGlobal, int fromPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_setCbAndRun_marshall12() {
  int epidx = CkRegisterEp("setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_setCbAndRun_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setCbAndRun_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setCbAndRun_marshall12);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_setCbAndRun_marshall12(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setCbAndRun(std::move(fromGlobal.t), std::move(fromPE.t), std::move(cb.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_setCbAndRun_marshall12(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setCbAndRun(std::move(fromGlobal.t), std::move(fromPE.t), std::move(cb.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_setCbAndRun_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &fromGlobal, int fromPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> fromGlobal;
  implP|fromGlobal;
  PUP::detail::TemporaryObjectHolder<int> fromPE;
  implP|fromPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fromGlobal");
  implDestP|fromGlobal;
  if (implDestP.hasComments()) implDestP.comment("fromPE");
  implDestP|fromPE;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::setCbAndRun_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(int phaseId);
 */
void CProxy_TraceAutoPerfBOC::startPhase(int phaseId, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int phaseId
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|phaseId;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|phaseId;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::startPhase(int phaseId, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int phaseId
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|phaseId;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|phaseId;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::startPhase(int phaseId, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int phaseId
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|phaseId;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|phaseId;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_startPhase_marshall13() {
  int epidx = CkRegisterEp("startPhase(int phaseId)",
      reinterpret_cast<CkCallFnPtr>(_call_startPhase_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startPhase_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startPhase_marshall13);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_startPhase_marshall13(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int phaseId*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> phaseId;
  implP|phaseId;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startPhase(std::move(phaseId.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_startPhase_marshall13(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int phaseId*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> phaseId;
  implP|phaseId;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startPhase(std::move(phaseId.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_startPhase_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int phaseId*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> phaseId;
  implP|phaseId;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("phaseId");
  implDestP|phaseId;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::startPhase_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhase();
 */
void CProxy_TraceAutoPerfBOC::endPhase(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endPhase(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::endPhase(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_endPhase_void() {
  int epidx = CkRegisterEp("endPhase()",
      reinterpret_cast<CkCallFnPtr>(_call_endPhase_void), 0, __idx, 0+CK_EP_INLINE);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_endPhase_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->endPhase();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::endPhase_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
void CProxy_TraceAutoPerfBOC::getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int reductionPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::getPerfData(int reductionPE, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int reductionPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::getPerfData(int reductionPE, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int reductionPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_getPerfData_marshall15() {
  int epidx = CkRegisterEp("getPerfData(int reductionPE, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_getPerfData_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getPerfData_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getPerfData_marshall15);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_getPerfData_marshall15(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int reductionPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> reductionPE;
  implP|reductionPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getPerfData(std::move(reductionPE.t), std::move(cb.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_getPerfData_marshall15(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int reductionPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> reductionPE;
  implP|reductionPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getPerfData(std::move(reductionPE.t), std::move(cb.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_getPerfData_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int reductionPE, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> reductionPE;
  implP|reductionPE;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("reductionPE");
  implDestP|reductionPE;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::getPerfData_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherSummary(CkReductionMsg* impl_msg);
 */
void CProxy_TraceAutoPerfBOC::gatherSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::gatherSummary(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::gatherSummary(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_gatherSummary_CkReductionMsg() {
  int epidx = CkRegisterEp("gatherSummary(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_gatherSummary_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_gatherSummary_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->gatherSummary((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
void CProxy_TraceAutoPerfBOC::globalPerfAnalyze(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::globalPerfAnalyze(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::globalPerfAnalyze(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_globalPerfAnalyze_CkReductionMsg() {
  int epidx = CkRegisterEp("globalPerfAnalyze(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_globalPerfAnalyze_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_globalPerfAnalyze_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->globalPerfAnalyze((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjectionsOutput();
 */
void CProxy_TraceAutoPerfBOC::setProjectionsOutput(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::setProjectionsOutput(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::setProjectionsOutput(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_setProjectionsOutput_void() {
  int epidx = CkRegisterEp("setProjectionsOutput()",
      reinterpret_cast<CkCallFnPtr>(_call_setProjectionsOutput_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_setProjectionsOutput_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->setProjectionsOutput();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::setProjectionsOutput_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
void CProxy_TraceAutoPerfBOC::recvGlobalSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::recvGlobalSummary(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::recvGlobalSummary(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_recvGlobalSummary_CkReductionMsg() {
  int epidx = CkRegisterEp("recvGlobalSummary(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvGlobalSummary_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_recvGlobalSummary_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->recvGlobalSummary((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tuneDone();
 */
void CProxy_TraceAutoPerfBOC::tuneDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::tuneDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::tuneDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_tuneDone_void() {
  int epidx = CkRegisterEp("tuneDone()",
      reinterpret_cast<CkCallFnPtr>(_call_tuneDone_void), 0, __idx, 0+CK_EP_INLINE);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_tuneDone_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->tuneDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::tuneDone_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalDecision(double metrics, int source);
 */
void CProxy_TraceAutoPerfBOC::globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double metrics, int source
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|metrics;
    implP|source;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|metrics;
    implP|source;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::globalDecision(double metrics, int source, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double metrics, int source
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|metrics;
    implP|source;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|metrics;
    implP|source;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::globalDecision(double metrics, int source, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double metrics, int source
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|metrics;
    implP|source;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|metrics;
    implP|source;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_globalDecision_marshall21() {
  int epidx = CkRegisterEp("globalDecision(double metrics, int source)",
      reinterpret_cast<CkCallFnPtr>(_call_globalDecision_marshall21), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_globalDecision_marshall21);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_globalDecision_marshall21);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_globalDecision_marshall21(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double metrics, int source*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> metrics;
  implP|metrics;
  PUP::detail::TemporaryObjectHolder<int> source;
  implP|source;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->globalDecision(std::move(metrics.t), std::move(source.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_globalDecision_marshall21(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double metrics, int source*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> metrics;
  implP|metrics;
  PUP::detail::TemporaryObjectHolder<int> source;
  implP|source;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->globalDecision(std::move(metrics.t), std::move(source.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_globalDecision_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double metrics, int source*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> metrics;
  implP|metrics;
  PUP::detail::TemporaryObjectHolder<int> source;
  implP|source;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("metrics");
  implDestP|metrics;
  if (implDestP.hasComments()) implDestP.comment("source");
  implDestP|source;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::globalDecision_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void analyzeAndTune();
 */
void CProxy_TraceAutoPerfBOC::analyzeAndTune(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::analyzeAndTune(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_TraceAutoPerfBOC::analyzeAndTune(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_analyzeAndTune_void() {
  int epidx = CkRegisterEp("analyzeAndTune()",
      reinterpret_cast<CkCallFnPtr>(_call_analyzeAndTune_void), 0, __idx, 0+CK_EP_INLINE);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_analyzeAndTune_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->analyzeAndTune();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::analyzeAndTune_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeNextStep();
 */
void CProxy_TraceAutoPerfBOC::startTimeNextStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::startTimeNextStep(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::startTimeNextStep(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_startTimeNextStep_void() {
  int epidx = CkRegisterEp("startTimeNextStep()",
      reinterpret_cast<CkCallFnPtr>(_call_startTimeNextStep_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_startTimeNextStep_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->startTimeNextStep();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::startTimeNextStep_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBStart(int appStep);
 */
void CProxy_TraceAutoPerfBOC::PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int appStep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|appStep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|appStep;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::PICS_markLDBStart(int appStep, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int appStep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|appStep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|appStep;
  }
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::PICS_markLDBStart(int appStep, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int appStep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|appStep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|appStep;
  }
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_PICS_markLDBStart_marshall24() {
  int epidx = CkRegisterEp("PICS_markLDBStart(int appStep)",
      reinterpret_cast<CkCallFnPtr>(_call_PICS_markLDBStart_marshall24), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PICS_markLDBStart_marshall24);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PICS_markLDBStart_marshall24);

  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_PICS_markLDBStart_marshall24(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int appStep*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> appStep;
  implP|appStep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->PICS_markLDBStart(std::move(appStep.t));
}
int CkIndex_TraceAutoPerfBOC::_callmarshall_PICS_markLDBStart_marshall24(char* impl_buf, void* impl_obj_void) {
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int appStep*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> appStep;
  implP|appStep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->PICS_markLDBStart(std::move(appStep.t));
  return implP.size();
}
void CkIndex_TraceAutoPerfBOC::_marshallmessagepup_PICS_markLDBStart_marshall24(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int appStep*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> appStep;
  implP|appStep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("appStep");
  implDestP|appStep;
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::PICS_markLDBStart_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBEnd();
 */
void CProxy_TraceAutoPerfBOC::PICS_markLDBEnd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceAutoPerfBOC::PICS_markLDBEnd(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceAutoPerfBOC::PICS_markLDBEnd(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_PICS_markLDBEnd_void() {
  int epidx = CkRegisterEp("PICS_markLDBEnd()",
      reinterpret_cast<CkCallFnPtr>(_call_PICS_markLDBEnd_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_PICS_markLDBEnd_void(void* impl_msg, void* impl_obj_void)
{
  TraceAutoPerfBOC* impl_obj = static_cast<TraceAutoPerfBOC*>(impl_obj_void);
  impl_obj->PICS_markLDBEnd();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceAutoPerfBOC::PICS_markLDBEnd_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceAutoPerfBOC::reg_TraceAutoPerfBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceAutoPerfBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceAutoPerfBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceAutoPerfBOC::_call_TraceAutoPerfBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceAutoPerfBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPerfGoal(int goalIndex);
 */
void CProxySection_TraceAutoPerfBOC::registerPerfGoal(int goalIndex, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int goalIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|goalIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|goalIndex;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_registerPerfGoal_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAutoPerfDoneCallback(const CkCallback &cb);
 */
void CProxySection_TraceAutoPerfBOC::setAutoPerfDoneCallback(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setAutoPerfDoneCallback_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setUserDefinedGoal(double value);
 */
void CProxySection_TraceAutoPerfBOC::setUserDefinedGoal(double value, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double value
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|value;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|value;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setUserDefinedGoal_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNumOfPhases(int num, const char *names);
 */
void CProxySection_TraceAutoPerfBOC::setNumOfPhases(int num, const char *names, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const char *names
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_names, impl_cnt_names;
  impl_off_names=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_names=sizeof(char)*(num*40));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    implP|impl_off_names;
    implP|impl_cnt_names;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_names,names,impl_cnt_names);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setNumOfPhases_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startStep();
 */
void CProxySection_TraceAutoPerfBOC::startStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startStep_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStep(const bool &fromGlobal, int pe, int incSteps);
 */
void CProxySection_TraceAutoPerfBOC::endStep(const bool &fromGlobal, int pe, int incSteps, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, int incSteps
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    implP|incSteps;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endStep_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhaseAndStep(const bool &fromGlobal, int pe);
 */
void CProxySection_TraceAutoPerfBOC::endPhaseAndStep(const bool &fromGlobal, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endPhaseAndStep_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxySection_TraceAutoPerfBOC::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_resume_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
 */
void CProxySection_TraceAutoPerfBOC::endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int pe, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endStepResumeCb_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run(const bool &fromGlobal, int fromPE);
 */
void CProxySection_TraceAutoPerfBOC::run(const bool &fromGlobal, int fromPE, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_run_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
 */
void CProxySection_TraceAutoPerfBOC::setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &fromGlobal, int fromPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)fromGlobal;
    implP|fromPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setCbAndRun_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(int phaseId);
 */
void CProxySection_TraceAutoPerfBOC::startPhase(int phaseId, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int phaseId
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|phaseId;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|phaseId;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startPhase_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endPhase();
 */
void CProxySection_TraceAutoPerfBOC::endPhase(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_endPhase_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getPerfData(int reductionPE, const CkCallback &cb);
 */
void CProxySection_TraceAutoPerfBOC::getPerfData(int reductionPE, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int reductionPE, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|reductionPE;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_getPerfData_marshall15(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherSummary(CkReductionMsg* impl_msg);
 */
void CProxySection_TraceAutoPerfBOC::gatherSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_gatherSummary_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalPerfAnalyze(CkReductionMsg* impl_msg);
 */
void CProxySection_TraceAutoPerfBOC::globalPerfAnalyze(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_globalPerfAnalyze_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjectionsOutput();
 */
void CProxySection_TraceAutoPerfBOC::setProjectionsOutput(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_setProjectionsOutput_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGlobalSummary(CkReductionMsg* impl_msg);
 */
void CProxySection_TraceAutoPerfBOC::recvGlobalSummary(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_recvGlobalSummary_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tuneDone();
 */
void CProxySection_TraceAutoPerfBOC::tuneDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_tuneDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalDecision(double metrics, int source);
 */
void CProxySection_TraceAutoPerfBOC::globalDecision(double metrics, int source, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double metrics, int source
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|metrics;
    implP|source;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|metrics;
    implP|source;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_globalDecision_marshall21(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void analyzeAndTune();
 */
void CProxySection_TraceAutoPerfBOC::analyzeAndTune(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_analyzeAndTune_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeNextStep();
 */
void CProxySection_TraceAutoPerfBOC::startTimeNextStep(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_startTimeNextStep_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBStart(int appStep);
 */
void CProxySection_TraceAutoPerfBOC::PICS_markLDBStart(int appStep, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int appStep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|appStep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|appStep;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBStart_marshall24(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PICS_markLDBEnd();
 */
void CProxySection_TraceAutoPerfBOC::PICS_markLDBEnd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceAutoPerfBOC::idx_PICS_markLDBEnd_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceAutoPerfBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceAutoPerfBOC::isIrreducible());
  // REG: TraceAutoPerfBOC();
  idx_TraceAutoPerfBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceAutoPerfBOC_void());

  // REG: void registerPerfGoal(int goalIndex);
  idx_registerPerfGoal_marshall2();

  // REG: void setAutoPerfDoneCallback(const CkCallback &cb);
  idx_setAutoPerfDoneCallback_marshall3();

  // REG: void setUserDefinedGoal(double value);
  idx_setUserDefinedGoal_marshall4();

  // REG: void setNumOfPhases(int num, const char *names);
  idx_setNumOfPhases_marshall5();

  // REG: void startStep();
  idx_startStep_void();

  // REG: void endStep(const bool &fromGlobal, int pe, int incSteps);
  idx_endStep_marshall7();

  // REG: void endPhaseAndStep(const bool &fromGlobal, int pe);
  idx_endPhaseAndStep_marshall8();

  // REG: void resume();
  idx_resume_void();

  // REG: void endStepResumeCb(const bool &fromGlobal, int pe, const CkCallback &cb);
  idx_endStepResumeCb_marshall10();

  // REG: void run(const bool &fromGlobal, int fromPE);
  idx_run_marshall11();

  // REG: void setCbAndRun(const bool &fromGlobal, int fromPE, const CkCallback &cb);
  idx_setCbAndRun_marshall12();

  // REG: void startPhase(int phaseId);
  idx_startPhase_marshall13();

  // REG: void endPhase();
  idx_endPhase_void();

  // REG: void getPerfData(int reductionPE, const CkCallback &cb);
  idx_getPerfData_marshall15();

  // REG: void gatherSummary(CkReductionMsg* impl_msg);
  idx_gatherSummary_CkReductionMsg();

  // REG: void globalPerfAnalyze(CkReductionMsg* impl_msg);
  idx_globalPerfAnalyze_CkReductionMsg();

  // REG: void setProjectionsOutput();
  idx_setProjectionsOutput_void();

  // REG: void recvGlobalSummary(CkReductionMsg* impl_msg);
  idx_recvGlobalSummary_CkReductionMsg();

  // REG: void tuneDone();
  idx_tuneDone_void();

  // REG: void globalDecision(double metrics, int source);
  idx_globalDecision_marshall21();

  // REG: void analyzeAndTune();
  idx_analyzeAndTune_void();

  // REG: void startTimeNextStep();
  idx_startTimeNextStep_void();

  // REG: void PICS_markLDBStart(int appStep);
  idx_PICS_markLDBStart_marshall24();

  // REG: void PICS_markLDBEnd();
  idx_PICS_markLDBEnd_void();

  // REG: TraceAutoPerfBOC(CkMigrateMessage* impl_msg);
  idx_TraceAutoPerfBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceAutoPerfBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceAutoPerf(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TraceAutoPerfInit: Chare{
TraceAutoPerfInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceAutoPerfInit::__register("TraceAutoPerfInit", sizeof(TraceAutoPerfInit));

  _registerInitCall(_initTraceAutoPerfNode,1);

  _registerInitCall(_initTraceAutoPerfBOC,0);

  CkRegisterReadonly("autoPerfProxy","CProxy_TraceAutoPerfBOC",sizeof(autoPerfProxy),(void *) &autoPerfProxy,__xlater_roPup_autoPerfProxy);

  CkRegisterReadonly("isPeriodicalAnalysis","bool",sizeof(isPeriodicalAnalysis),(void *) &isPeriodicalAnalysis,__xlater_roPup_isPeriodicalAnalysis);

  CkRegisterReadonly("treeGroupSize","int",sizeof(treeGroupSize),(void *) &treeGroupSize,__xlater_roPup_treeGroupSize);

  CkRegisterReadonly("numGroups","int",sizeof(numGroups),(void *) &numGroups,__xlater_roPup_numGroups);

  CkRegisterReadonly("treeBranchFactor","int",sizeof(treeBranchFactor),(void *) &treeBranchFactor,__xlater_roPup_treeBranchFactor);

  CkRegisterReadonly("isIdleAnalysis","bool",sizeof(isIdleAnalysis),(void *) &isIdleAnalysis,__xlater_roPup_isIdleAnalysis);

  CkRegisterReadonly("isPerfDumpOn","bool",sizeof(isPerfDumpOn),(void *) &isPerfDumpOn,__xlater_roPup_isPerfDumpOn);

  CkRegisterReadonly("WARMUP_STEP","int",sizeof(WARMUP_STEP),(void *) &WARMUP_STEP,__xlater_roPup_WARMUP_STEP);

  CkRegisterReadonly("PAUSE_STEP","int",sizeof(PAUSE_STEP),(void *) &PAUSE_STEP,__xlater_roPup_PAUSE_STEP);

  CkRegisterReadonly("PICS_collection_mode","int",sizeof(PICS_collection_mode),(void *) &PICS_collection_mode,__xlater_roPup_PICS_collection_mode);

  CkRegisterReadonly("PICS_evaluation_mode","int",sizeof(PICS_evaluation_mode),(void *) &PICS_evaluation_mode,__xlater_roPup_PICS_evaluation_mode);

/* REG: group TraceAutoPerfBOC: IrrGroup{
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
  CkIndex_TraceAutoPerfBOC::__register("TraceAutoPerfBOC", sizeof(TraceAutoPerfBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceAutoPerfInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceAutoPerfInit>(dynamic_cast<TraceAutoPerfInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceAutoPerfBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceAutoPerfBOC>(dynamic_cast<TraceAutoPerfBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
