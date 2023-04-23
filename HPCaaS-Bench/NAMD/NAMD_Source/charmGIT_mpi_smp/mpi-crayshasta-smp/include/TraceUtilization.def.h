/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceUtilizationBOC::collectSumDetailData_3_closure : public SDAG::Closure {
      

      collectSumDetailData_3_closure() {
        init();
      }
      collectSumDetailData_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~collectSumDetailData_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(collectSumDetailData_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: mainchare TraceUtilizationInit: Chare{
TraceUtilizationInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceUtilizationInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceUtilizationInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceUtilizationInit::__idx, CkIndex_TraceUtilizationInit::idx_TraceUtilizationInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceUtilizationInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceUtilizationInit::__idx, CkIndex_TraceUtilizationInit::idx_TraceUtilizationInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceUtilizationInit::reg_TraceUtilizationInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceUtilizationInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceUtilizationInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceUtilizationInit::_call_TraceUtilizationInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceUtilizationInit* impl_obj = static_cast<TraceUtilizationInit*>(impl_obj_void);
  new (impl_obj_void) TraceUtilizationInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceUtilizationInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceUtilizationInit(CkArgMsg* impl_msg);
  idx_TraceUtilizationInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceUtilizationInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceUtilizationBOC: IrrGroup{
TraceUtilizationBOC();
void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
void collectSumDetailData();
void sumDetailDataCollected(CkReductionMsg* impl_msg);
TraceUtilizationBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceUtilizationBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
void CProxyElement_TraceUtilizationBOC::ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSumDetailData();
 */
void CProxyElement_TraceUtilizationBOC::collectSumDetailData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
void CProxyElement_TraceUtilizationBOC::sumDetailDataCollected(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC();
 */
CkGroupID CProxy_TraceUtilizationBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceUtilizationBOC::__idx, CkIndex_TraceUtilizationBOC::idx_TraceUtilizationBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceUtilizationBOC::reg_TraceUtilizationBOC_void() {
  int epidx = CkRegisterEp("TraceUtilizationBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceUtilizationBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceUtilizationBOC::_call_TraceUtilizationBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceUtilizationBOC* impl_obj = static_cast<TraceUtilizationBOC*>(impl_obj_void);
  new (impl_obj_void) TraceUtilizationBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
void CProxy_TraceUtilizationBOC::ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceUtilizationBOC::ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceUtilizationBOC::ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceUtilizationBOC::reg_ccsRequestSumDetailCompressed_CkCcsRequestMsg() {
  int epidx = CkRegisterEp("ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ccsRequestSumDetailCompressed_CkCcsRequestMsg), CMessage_CkCcsRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCcsRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceUtilizationBOC::_call_ccsRequestSumDetailCompressed_CkCcsRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TraceUtilizationBOC* impl_obj = static_cast<TraceUtilizationBOC*>(impl_obj_void);
  impl_obj->ccsRequestSumDetailCompressed((CkCcsRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSumDetailData();
 */
void CProxy_TraceUtilizationBOC::collectSumDetailData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceUtilizationBOC::collectSumDetailData(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceUtilizationBOC::collectSumDetailData(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceUtilizationBOC::reg_collectSumDetailData_void() {
  int epidx = CkRegisterEp("collectSumDetailData()",
      reinterpret_cast<CkCallFnPtr>(_call_collectSumDetailData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceUtilizationBOC::_call_collectSumDetailData_void(void* impl_msg, void* impl_obj_void)
{
  TraceUtilizationBOC* impl_obj = static_cast<TraceUtilizationBOC*>(impl_obj_void);
  impl_obj->collectSumDetailData();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceUtilizationBOC::collectSumDetailData_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
void CProxy_TraceUtilizationBOC::sumDetailDataCollected(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceUtilizationBOC::sumDetailDataCollected(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceUtilizationBOC::sumDetailDataCollected(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceUtilizationBOC::reg_sumDetailDataCollected_CkReductionMsg() {
  int epidx = CkRegisterEp("sumDetailDataCollected(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sumDetailDataCollected_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceUtilizationBOC::_call_sumDetailDataCollected_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TraceUtilizationBOC* impl_obj = static_cast<TraceUtilizationBOC*>(impl_obj_void);
  impl_obj->sumDetailDataCollected((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceUtilizationBOC::reg_TraceUtilizationBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceUtilizationBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceUtilizationBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceUtilizationBOC::_call_TraceUtilizationBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceUtilizationBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
 */
void CProxySection_TraceUtilizationBOC::ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectSumDetailData();
 */
void CProxySection_TraceUtilizationBOC::collectSumDetailData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_collectSumDetailData_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumDetailDataCollected(CkReductionMsg* impl_msg);
 */
void CProxySection_TraceUtilizationBOC::sumDetailDataCollected(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceUtilizationBOC::idx_sumDetailDataCollected_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceUtilizationBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceUtilizationBOC::isIrreducible());
  // REG: TraceUtilizationBOC();
  idx_TraceUtilizationBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceUtilizationBOC_void());

  // REG: void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
  idx_ccsRequestSumDetailCompressed_CkCcsRequestMsg();

  // REG: void collectSumDetailData();
  idx_collectSumDetailData_void();

  // REG: void sumDetailDataCollected(CkReductionMsg* impl_msg);
  idx_sumDetailDataCollected_CkReductionMsg();

  // REG: TraceUtilizationBOC(CkMigrateMessage* impl_msg);
  idx_TraceUtilizationBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceUtilizationBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_TraceUtilizationBOC traceUtilizationGroupProxy;
 */
extern CProxy_TraceUtilizationBOC traceUtilizationGroupProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceUtilizationGroupProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceUtilizationGroupProxy;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceUtilization(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TraceUtilizationInit: Chare{
TraceUtilizationInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceUtilizationInit::__register("TraceUtilizationInit", sizeof(TraceUtilizationInit));

/* REG: group TraceUtilizationBOC: IrrGroup{
TraceUtilizationBOC();
void ccsRequestSumDetailCompressed(CkCcsRequestMsg* impl_msg);
void collectSumDetailData();
void sumDetailDataCollected(CkReductionMsg* impl_msg);
TraceUtilizationBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TraceUtilizationBOC::__register("TraceUtilizationBOC", sizeof(TraceUtilizationBOC));

  CkRegisterReadonly("traceUtilizationGroupProxy","CProxy_TraceUtilizationBOC",sizeof(traceUtilizationGroupProxy),(void *) &traceUtilizationGroupProxy,__xlater_roPup_traceUtilizationGroupProxy);

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceUtilizationInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceUtilizationInit>(dynamic_cast<TraceUtilizationInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceUtilizationBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceUtilizationBOC>(dynamic_cast<TraceUtilizationBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
