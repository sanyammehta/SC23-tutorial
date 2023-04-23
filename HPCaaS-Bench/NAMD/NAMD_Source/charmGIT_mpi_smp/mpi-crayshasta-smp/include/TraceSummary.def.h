

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::startSumOnly_2_closure : public SDAG::Closure {
      

      startSumOnly_2_closure() {
        init();
      }
      startSumOnly_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startSumOnly_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(startSumOnly_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::askSummary_3_closure : public SDAG::Closure {
            int size;


      askSummary_3_closure() {
        init();
      }
      askSummary_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return size;}
      void pup(PUP::er& __p) {
        __p | size;
        packClosure(__p);
      }
      virtual ~askSummary_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(askSummary_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::sendSummaryBOC_4_closure : public SDAG::Closure {
            double *results;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      sendSummaryBOC_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      sendSummaryBOC_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return results;}
            int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_results, impl_cnt_results;
  implP|impl_off_results;
  implP|impl_cnt_results;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          results = (double *)(impl_buf+impl_off_results);
        }
      }
      virtual ~sendSummaryBOC_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(sendSummaryBOC_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::initCCS_5_closure : public SDAG::Closure {
      

      initCCS_5_closure() {
        init();
      }
      initCCS_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initCCS_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(initCCS_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::collectSummaryData_8_closure : public SDAG::Closure {
            double startTime;
            double binSize;
            int numBins;


      collectSummaryData_8_closure() {
        init();
      }
      collectSummaryData_8_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return startTime;}
            double & getP1() { return binSize;}
            int & getP2() { return numBins;}
      void pup(PUP::er& __p) {
        __p | startTime;
        __p | binSize;
        __p | numBins;
        packClosure(__p);
      }
      virtual ~collectSummaryData_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(collectSummaryData_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::summaryDataCollected_9_closure : public SDAG::Closure {
            double *result;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      summaryDataCollected_9_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      summaryDataCollected_9_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return result;}
            int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          result = (double *)(impl_buf+impl_off_result);
        }
      }
      virtual ~summaryDataCollected_9_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(summaryDataCollected_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::traceSummaryParallelShutdown_10_closure : public SDAG::Closure {
            int pe;


      traceSummaryParallelShutdown_10_closure() {
        init();
      }
      traceSummaryParallelShutdown_10_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pe;}
      void pup(PUP::er& __p) {
        __p | pe;
        packClosure(__p);
      }
      virtual ~traceSummaryParallelShutdown_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(traceSummaryParallelShutdown_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::maxBinSize_11_closure : public SDAG::Closure {
            double impl_noname_0;


      maxBinSize_11_closure() {
        init();
      }
      maxBinSize_11_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~maxBinSize_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(maxBinSize_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::shrink_12_closure : public SDAG::Closure {
            double _maxBinSize;


      shrink_12_closure() {
        init();
      }
      shrink_12_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return _maxBinSize;}
      void pup(PUP::er& __p) {
        __p | _maxBinSize;
        packClosure(__p);
      }
      virtual ~shrink_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(shrink_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceSummaryBOC::sumData_13_closure : public SDAG::Closure {
            double *result;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      sumData_13_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      sumData_13_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return result;}
            int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          result = (double *)(impl_buf+impl_off_result);
        }
      }
      virtual ~sumData_13_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(sumData_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID traceSummaryGID;
 */
extern CkGroupID traceSummaryGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceSummaryGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceSummaryGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool summaryCcsStreaming;
 */
extern bool summaryCcsStreaming;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_summaryCcsStreaming(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|summaryCcsStreaming;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare TraceSummaryInit: Chare{
TraceSummaryInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceSummaryInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceSummaryInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceSummaryInit::__idx, CkIndex_TraceSummaryInit::idx_TraceSummaryInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceSummaryInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceSummaryInit::__idx, CkIndex_TraceSummaryInit::idx_TraceSummaryInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceSummaryInit::reg_TraceSummaryInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceSummaryInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSummaryInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceSummaryInit::_call_TraceSummaryInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryInit* impl_obj = static_cast<TraceSummaryInit*>(impl_obj_void);
  new (impl_obj_void) TraceSummaryInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceSummaryInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceSummaryInit(CkArgMsg* impl_msg);
  idx_TraceSummaryInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceSummaryInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group TraceSummaryBOC: IrrGroup{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceSummaryBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSumOnly();
 */
void CProxyElement_TraceSummaryBOC::startSumOnly(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void askSummary(int size);
 */
void CProxyElement_TraceSummaryBOC::askSummary(int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendSummaryBOC(const double *results, int n);
 */
void CProxyElement_TraceSummaryBOC::sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *results, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_results, impl_cnt_results;
  impl_off_results=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_results=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_results,results,impl_cnt_results);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceSummaryBOC::_call_redn_wrapper_sendSummaryBOC_marshall4(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *results, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* results; results = (double*)impl_buf;
  impl_obj->sendSummaryBOC(results, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCCS();
 */
void CProxyElement_TraceSummaryBOC::initCCS(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
void CProxyElement_TraceSummaryBOC::ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
void CProxyElement_TraceSummaryBOC::ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
void CProxyElement_TraceSummaryBOC::collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double startTime, double binSize, int numBins
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|startTime;
    implP|binSize;
    implP|numBins;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|startTime;
    implP|binSize;
    implP|numBins;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void summaryDataCollected(const double *result, int n);
 */
void CProxyElement_TraceSummaryBOC::summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceSummaryBOC::_call_redn_wrapper_summaryDataCollected_marshall9(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* result; result = (double*)impl_buf;
  impl_obj->summaryDataCollected(result, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceSummaryParallelShutdown(int pe);
 */
void CProxyElement_TraceSummaryBOC::traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void maxBinSize(double impl_noname_0);
 */
void CProxyElement_TraceSummaryBOC::maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceSummaryBOC::_call_redn_wrapper_maxBinSize_marshall11(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<double> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->maxBinSize(std::move(impl_noname_0.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shrink(double _maxBinSize);
 */
void CProxyElement_TraceSummaryBOC::shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double _maxBinSize
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_maxBinSize;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_maxBinSize;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumData(const double *result, int n);
 */
void CProxyElement_TraceSummaryBOC::sumData(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceSummaryBOC::_call_redn_wrapper_sumData_marshall13(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* result; result = (double*)impl_buf;
  impl_obj->sumData(result, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC();
 */
CkGroupID CProxy_TraceSummaryBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceSummaryBOC::__idx, CkIndex_TraceSummaryBOC::idx_TraceSummaryBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_TraceSummaryBOC_void() {
  int epidx = CkRegisterEp("TraceSummaryBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSummaryBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_TraceSummaryBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  new (impl_obj_void) TraceSummaryBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSumOnly();
 */
void CProxy_TraceSummaryBOC::startSumOnly(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::startSumOnly(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::startSumOnly(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_startSumOnly_void() {
  int epidx = CkRegisterEp("startSumOnly()",
      reinterpret_cast<CkCallFnPtr>(_call_startSumOnly_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_startSumOnly_void(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  impl_obj->startSumOnly();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::startSumOnly_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void askSummary(int size);
 */
void CProxy_TraceSummaryBOC::askSummary(int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::askSummary(int size, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
  }
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::askSummary(int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
  }
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_askSummary_marshall3() {
  int epidx = CkRegisterEp("askSummary(int size)",
      reinterpret_cast<CkCallFnPtr>(_call_askSummary_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_askSummary_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_askSummary_marshall3);

  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_askSummary_marshall3(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->askSummary(std::move(size.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_askSummary_marshall3(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->askSummary(std::move(size.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_askSummary_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::askSummary_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendSummaryBOC(const double *results, int n);
 */
void CProxy_TraceSummaryBOC::sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *results, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_results, impl_cnt_results;
  impl_off_results=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_results=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_results,results,impl_cnt_results);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::sendSummaryBOC(const double *results, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *results, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_results, impl_cnt_results;
  impl_off_results=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_results=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_results,results,impl_cnt_results);
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::sendSummaryBOC(const double *results, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *results, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_results, impl_cnt_results;
  impl_off_results=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_results=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_results,results,impl_cnt_results);
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_sendSummaryBOC_marshall4() {
  int epidx = CkRegisterEp("sendSummaryBOC(const double *results, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_sendSummaryBOC_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendSummaryBOC_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendSummaryBOC_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceSummaryBOC::reg_redn_wrapper_sendSummaryBOC_marshall4() {
  return CkRegisterEp("redn_wrapper_sendSummaryBOC(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_sendSummaryBOC_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceSummaryBOC::_call_sendSummaryBOC_marshall4(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *results, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_results, impl_cnt_results;
  implP|impl_off_results;
  implP|impl_cnt_results;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *results=(double *)(impl_buf+impl_off_results);
  impl_obj->sendSummaryBOC(results, std::move(n.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_sendSummaryBOC_marshall4(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *results, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_results, impl_cnt_results;
  implP|impl_off_results;
  implP|impl_cnt_results;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *results=(double *)(impl_buf+impl_off_results);
  impl_obj->sendSummaryBOC(results, std::move(n.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_sendSummaryBOC_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *results, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_results, impl_cnt_results;
  implP|impl_off_results;
  implP|impl_cnt_results;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *results=(double *)(impl_buf+impl_off_results);
  if (implDestP.hasComments()) implDestP.comment("results");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*results))<impl_cnt_results;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|results[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::sendSummaryBOC_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCCS();
 */
void CProxy_TraceSummaryBOC::initCCS(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::initCCS(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::initCCS(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_initCCS_void() {
  int epidx = CkRegisterEp("initCCS()",
      reinterpret_cast<CkCallFnPtr>(_call_initCCS_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_initCCS_void(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  impl_obj->initCCS();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::initCCS_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
void CProxy_TraceSummaryBOC::ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_ccsRequestSummaryDouble_CkCcsRequestMsg() {
  int epidx = CkRegisterEp("ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ccsRequestSummaryDouble_CkCcsRequestMsg), CMessage_CkCcsRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCcsRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_ccsRequestSummaryDouble_CkCcsRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  impl_obj->ccsRequestSummaryDouble((CkCcsRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
void CProxy_TraceSummaryBOC::ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg() {
  int epidx = CkRegisterEp("ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg), CMessage_CkCcsRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCcsRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  impl_obj->ccsRequestSummaryUnsignedChar((CkCcsRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
void CProxy_TraceSummaryBOC::collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double startTime, double binSize, int numBins
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|startTime;
    implP|binSize;
    implP|numBins;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|startTime;
    implP|binSize;
    implP|numBins;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::collectSummaryData(double startTime, double binSize, int numBins, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double startTime, double binSize, int numBins
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|startTime;
    implP|binSize;
    implP|numBins;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|startTime;
    implP|binSize;
    implP|numBins;
  }
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::collectSummaryData(double startTime, double binSize, int numBins, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double startTime, double binSize, int numBins
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|startTime;
    implP|binSize;
    implP|numBins;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|startTime;
    implP|binSize;
    implP|numBins;
  }
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_collectSummaryData_marshall8() {
  int epidx = CkRegisterEp("collectSummaryData(double startTime, double binSize, int numBins)",
      reinterpret_cast<CkCallFnPtr>(_call_collectSummaryData_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collectSummaryData_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collectSummaryData_marshall8);

  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_collectSummaryData_marshall8(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double startTime, double binSize, int numBins*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> startTime;
  implP|startTime;
  PUP::detail::TemporaryObjectHolder<double> binSize;
  implP|binSize;
  PUP::detail::TemporaryObjectHolder<int> numBins;
  implP|numBins;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectSummaryData(std::move(startTime.t), std::move(binSize.t), std::move(numBins.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_collectSummaryData_marshall8(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double startTime, double binSize, int numBins*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> startTime;
  implP|startTime;
  PUP::detail::TemporaryObjectHolder<double> binSize;
  implP|binSize;
  PUP::detail::TemporaryObjectHolder<int> numBins;
  implP|numBins;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectSummaryData(std::move(startTime.t), std::move(binSize.t), std::move(numBins.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_collectSummaryData_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double startTime, double binSize, int numBins*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> startTime;
  implP|startTime;
  PUP::detail::TemporaryObjectHolder<double> binSize;
  implP|binSize;
  PUP::detail::TemporaryObjectHolder<int> numBins;
  implP|numBins;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("startTime");
  implDestP|startTime;
  if (implDestP.hasComments()) implDestP.comment("binSize");
  implDestP|binSize;
  if (implDestP.hasComments()) implDestP.comment("numBins");
  implDestP|numBins;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::collectSummaryData_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void summaryDataCollected(const double *result, int n);
 */
void CProxy_TraceSummaryBOC::summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::summaryDataCollected(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::summaryDataCollected(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_summaryDataCollected_marshall9() {
  int epidx = CkRegisterEp("summaryDataCollected(const double *result, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_summaryDataCollected_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_summaryDataCollected_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_summaryDataCollected_marshall9);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceSummaryBOC::reg_redn_wrapper_summaryDataCollected_marshall9() {
  return CkRegisterEp("redn_wrapper_summaryDataCollected(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_summaryDataCollected_marshall9), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceSummaryBOC::_call_summaryDataCollected_marshall9(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->summaryDataCollected(result, std::move(n.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_summaryDataCollected_marshall9(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->summaryDataCollected(result, std::move(n.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_summaryDataCollected_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*result))<impl_cnt_result;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|result[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::summaryDataCollected_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceSummaryParallelShutdown(int pe);
 */
void CProxy_TraceSummaryBOC::traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::traceSummaryParallelShutdown(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::traceSummaryParallelShutdown(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_traceSummaryParallelShutdown_marshall10() {
  int epidx = CkRegisterEp("traceSummaryParallelShutdown(int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_traceSummaryParallelShutdown_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_traceSummaryParallelShutdown_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_traceSummaryParallelShutdown_marshall10);

  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_traceSummaryParallelShutdown_marshall10(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceSummaryParallelShutdown(std::move(pe.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_traceSummaryParallelShutdown_marshall10(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceSummaryParallelShutdown(std::move(pe.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_traceSummaryParallelShutdown_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::traceSummaryParallelShutdown_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void maxBinSize(double impl_noname_0);
 */
void CProxy_TraceSummaryBOC::maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::maxBinSize(double impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::maxBinSize(double impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_maxBinSize_marshall11() {
  int epidx = CkRegisterEp("maxBinSize(double impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_maxBinSize_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_maxBinSize_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_maxBinSize_marshall11);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceSummaryBOC::reg_redn_wrapper_maxBinSize_marshall11() {
  return CkRegisterEp("redn_wrapper_maxBinSize(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_maxBinSize_marshall11), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceSummaryBOC::_call_maxBinSize_marshall11(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->maxBinSize(std::move(impl_noname_0.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_maxBinSize_marshall11(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->maxBinSize(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_maxBinSize_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::maxBinSize_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shrink(double _maxBinSize);
 */
void CProxy_TraceSummaryBOC::shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double _maxBinSize
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_maxBinSize;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_maxBinSize;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::shrink(double _maxBinSize, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double _maxBinSize
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_maxBinSize;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_maxBinSize;
  }
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::shrink(double _maxBinSize, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double _maxBinSize
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_maxBinSize;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_maxBinSize;
  }
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_shrink_marshall12() {
  int epidx = CkRegisterEp("shrink(double _maxBinSize)",
      reinterpret_cast<CkCallFnPtr>(_call_shrink_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_shrink_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_shrink_marshall12);

  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_shrink_marshall12(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double _maxBinSize*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> _maxBinSize;
  implP|_maxBinSize;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->shrink(std::move(_maxBinSize.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_shrink_marshall12(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double _maxBinSize*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> _maxBinSize;
  implP|_maxBinSize;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->shrink(std::move(_maxBinSize.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_shrink_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double _maxBinSize*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> _maxBinSize;
  implP|_maxBinSize;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("_maxBinSize");
  implDestP|_maxBinSize;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::shrink_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumData(const double *result, int n);
 */
void CProxy_TraceSummaryBOC::sumData(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceSummaryBOC::sumData(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceSummaryBOC::sumData(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchGroup(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_sumData_marshall13() {
  int epidx = CkRegisterEp("sumData(const double *result, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_sumData_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sumData_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sumData_marshall13);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceSummaryBOC::reg_redn_wrapper_sumData_marshall13() {
  return CkRegisterEp("redn_wrapper_sumData(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_sumData_marshall13), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceSummaryBOC::_call_sumData_marshall13(void* impl_msg, void* impl_obj_void)
{
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->sumData(result, std::move(n.t));
}
int CkIndex_TraceSummaryBOC::_callmarshall_sumData_marshall13(char* impl_buf, void* impl_obj_void) {
  TraceSummaryBOC* impl_obj = static_cast<TraceSummaryBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->sumData(result, std::move(n.t));
  return implP.size();
}
void CkIndex_TraceSummaryBOC::_marshallmessagepup_sumData_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*result))<impl_cnt_result;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|result[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_TraceSummaryBOC::sumData_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceSummaryBOC::reg_TraceSummaryBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceSummaryBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSummaryBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSummaryBOC::_call_TraceSummaryBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceSummaryBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSumOnly();
 */
void CProxySection_TraceSummaryBOC::startSumOnly(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_startSumOnly_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void askSummary(int size);
 */
void CProxySection_TraceSummaryBOC::askSummary(int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_askSummary_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendSummaryBOC(const double *results, int n);
 */
void CProxySection_TraceSummaryBOC::sendSummaryBOC(const double *results, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *results, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_results, impl_cnt_results;
  impl_off_results=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_results=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_results;
    implP|impl_cnt_results;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_results,results,impl_cnt_results);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_sendSummaryBOC_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCCS();
 */
void CProxySection_TraceSummaryBOC::initCCS(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_initCCS_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
 */
void CProxySection_TraceSummaryBOC::ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryDouble_CkCcsRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
 */
void CProxySection_TraceSummaryBOC::ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSummaryData(double startTime, double binSize, int numBins);
 */
void CProxySection_TraceSummaryBOC::collectSummaryData(double startTime, double binSize, int numBins, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double startTime, double binSize, int numBins
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|startTime;
    implP|binSize;
    implP|numBins;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|startTime;
    implP|binSize;
    implP|numBins;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_collectSummaryData_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void summaryDataCollected(const double *result, int n);
 */
void CProxySection_TraceSummaryBOC::summaryDataCollected(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_summaryDataCollected_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceSummaryParallelShutdown(int pe);
 */
void CProxySection_TraceSummaryBOC::traceSummaryParallelShutdown(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_traceSummaryParallelShutdown_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void maxBinSize(double impl_noname_0);
 */
void CProxySection_TraceSummaryBOC::maxBinSize(double impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_maxBinSize_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shrink(double _maxBinSize);
 */
void CProxySection_TraceSummaryBOC::shrink(double _maxBinSize, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double _maxBinSize
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_maxBinSize;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_maxBinSize;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_shrink_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumData(const double *result, int n);
 */
void CProxySection_TraceSummaryBOC::sumData(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceSummaryBOC::idx_sumData_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSummaryBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceSummaryBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceSummaryBOC::isIrreducible());
  // REG: TraceSummaryBOC();
  idx_TraceSummaryBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceSummaryBOC_void());

  // REG: void startSumOnly();
  idx_startSumOnly_void();

  // REG: void askSummary(int size);
  idx_askSummary_marshall3();

  // REG: void sendSummaryBOC(const double *results, int n);
  idx_sendSummaryBOC_marshall4();
  idx_redn_wrapper_sendSummaryBOC_marshall4();

  // REG: void initCCS();
  idx_initCCS_void();

  // REG: void ccsRequestSummaryDouble(CkCcsRequestMsg* impl_msg);
  idx_ccsRequestSummaryDouble_CkCcsRequestMsg();

  // REG: void ccsRequestSummaryUnsignedChar(CkCcsRequestMsg* impl_msg);
  idx_ccsRequestSummaryUnsignedChar_CkCcsRequestMsg();

  // REG: void collectSummaryData(double startTime, double binSize, int numBins);
  idx_collectSummaryData_marshall8();

  // REG: void summaryDataCollected(const double *result, int n);
  idx_summaryDataCollected_marshall9();
  idx_redn_wrapper_summaryDataCollected_marshall9();

  // REG: void traceSummaryParallelShutdown(int pe);
  idx_traceSummaryParallelShutdown_marshall10();

  // REG: void maxBinSize(double impl_noname_0);
  idx_maxBinSize_marshall11();
  idx_redn_wrapper_maxBinSize_marshall11();

  // REG: void shrink(double _maxBinSize);
  idx_shrink_marshall12();

  // REG: void sumData(const double *result, int n);
  idx_sumData_marshall13();
  idx_redn_wrapper_sumData_marshall13();

  // REG: TraceSummaryBOC(CkMigrateMessage* impl_msg);
  idx_TraceSummaryBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceSummaryBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceSummary(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("traceSummaryGID","CkGroupID",sizeof(traceSummaryGID),(void *) &traceSummaryGID,__xlater_roPup_traceSummaryGID);

  CkRegisterReadonly("summaryCcsStreaming","bool",sizeof(summaryCcsStreaming),(void *) &summaryCcsStreaming,__xlater_roPup_summaryCcsStreaming);

/* REG: mainchare TraceSummaryInit: Chare{
TraceSummaryInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceSummaryInit::__register("TraceSummaryInit", sizeof(TraceSummaryInit));

  _registerInitCall(initTraceSummaryBOC,1);

/* REG: group TraceSummaryBOC: IrrGroup{
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
  CkIndex_TraceSummaryBOC::__register("TraceSummaryBOC", sizeof(TraceSummaryBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceSummaryInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceSummaryInit>(dynamic_cast<TraceSummaryInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceSummaryBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceSummaryBOC>(dynamic_cast<TraceSummaryBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
