


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreeLB::ProcessAtSync_2_closure : public SDAG::Closure {
      

      ProcessAtSync_2_closure() {
        init();
      }
      ProcessAtSync_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ProcessAtSync_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ProcessAtSync_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreeLB::multicastIDM_6_closure : public SDAG::Closure {
            IDM mig_order;
            int num_pes;
            int *_pes;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      multicastIDM_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      multicastIDM_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            IDM & getP0() { return mig_order;}
            int & getP1() { return num_pes;}
            int *& getP2() { return _pes;}
      void pup(PUP::er& __p) {
        __p | mig_order;
        __p | num_pes;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<IDM> mig_order;
  implP|mig_order;
  PUP::detail::TemporaryObjectHolder<int> num_pes;
  implP|num_pes;
  int impl_off__pes, impl_cnt__pes;
  implP|impl_off__pes;
  implP|impl_cnt__pes;
          impl_buf+=CK_ALIGN(implP.size(),16);
          _pes = (int *)(impl_buf+impl_off__pes);
        }
      }
      virtual ~multicastIDM_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(multicastIDM_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreeLB::resumeClients_7_closure : public SDAG::Closure {
      

      resumeClients_7_closure() {
        init();
      }
      resumeClients_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resumeClients_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(resumeClients_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreeLB::reportLbTime_8_closure : public SDAG::Closure {
            double *times;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      reportLbTime_8_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      reportLbTime_8_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return times;}
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
  int impl_off_times, impl_cnt_times;
  implP|impl_off_times;
  implP|impl_cnt_times;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          times = (double *)(impl_buf+impl_off_times);
        }
      }
      virtual ~reportLbTime_8_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(reportLbTime_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: group TreeLB: BaseLB{
void TreeLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void sendStatsUp(CkMessage* impl_msg);
void sendDecisionDown(CkMessage* impl_msg);
void recvLoadTokens(CkMessage* impl_msg);
void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
void resumeClients();
void reportLbTime(const double *times, int n);
TreeLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TreeLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxyElement_TreeLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TreeLB::_call_redn_wrapper_ProcessAtSync_void(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ProcessAtSync();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStatsUp(CkMessage* impl_msg);
 */
void CProxyElement_TreeLB::sendStatsUp(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDecisionDown(CkMessage* impl_msg);
 */
void CProxyElement_TreeLB::sendDecisionDown(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadTokens(CkMessage* impl_msg);
 */
void CProxyElement_TreeLB::recvLoadTokens(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
void CProxyElement_TreeLB::multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const IDM &mig_order, int num_pes, const int *_pes
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off__pes, impl_cnt__pes;
  impl_off__pes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt__pes=sizeof(int)*(num_pes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off__pes,_pes,impl_cnt__pes);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxyElement_TreeLB::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TreeLB::_call_redn_wrapper_resumeClients_void(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->resumeClients();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLbTime(const double *times, int n);
 */
void CProxyElement_TreeLB::reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *times, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_times, impl_cnt_times;
  impl_off_times=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_times=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_times,times,impl_cnt_times);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TreeLB::_call_redn_wrapper_reportLbTime_marshall8(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *times, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* times; times = (double*)impl_buf;
  impl_obj->reportLbTime(times, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreeLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_TreeLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TreeLB::__idx, CkIndex_TreeLB::idx_TreeLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_TreeLB::CProxy_TreeLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_TreeLB::__idx, CkIndex_TreeLB::idx_TreeLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_TreeLB::reg_TreeLB_marshall1() {
  int epidx = CkRegisterEp("TreeLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_TreeLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_TreeLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_TreeLB_marshall1);

  return epidx;
}

void CkIndex_TreeLB::_call_TreeLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) TreeLB(std::move(impl_noname_0.t));
}
int CkIndex_TreeLB::_callmarshall_TreeLB_marshall1(char* impl_buf, void* impl_obj_void) {
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) TreeLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_TreeLB::_marshallmessagepup_TreeLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxy_TreeLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_ProcessAtSync_void() {
  int epidx = CkRegisterEp("ProcessAtSync()",
      reinterpret_cast<CkCallFnPtr>(_call_ProcessAtSync_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_TreeLB::reg_redn_wrapper_ProcessAtSync_void() {
  return CkRegisterEp("redn_wrapper_ProcessAtSync(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ProcessAtSync_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_TreeLB::_call_ProcessAtSync_void(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  impl_obj->ProcessAtSync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TreeLB::ProcessAtSync_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStatsUp(CkMessage* impl_msg);
 */
void CProxy_TreeLB::sendStatsUp(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::sendStatsUp(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::sendStatsUp(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_sendStatsUp_CkMessage() {
  int epidx = CkRegisterEp("sendStatsUp(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendStatsUp_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_TreeLB::_call_sendStatsUp_CkMessage(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  impl_obj->sendStatsUp((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDecisionDown(CkMessage* impl_msg);
 */
void CProxy_TreeLB::sendDecisionDown(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::sendDecisionDown(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::sendDecisionDown(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_sendDecisionDown_CkMessage() {
  int epidx = CkRegisterEp("sendDecisionDown(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendDecisionDown_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_TreeLB::_call_sendDecisionDown_CkMessage(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  impl_obj->sendDecisionDown((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadTokens(CkMessage* impl_msg);
 */
void CProxy_TreeLB::recvLoadTokens(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::recvLoadTokens(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::recvLoadTokens(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_recvLoadTokens_CkMessage() {
  int epidx = CkRegisterEp("recvLoadTokens(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvLoadTokens_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_TreeLB::_call_recvLoadTokens_CkMessage(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  impl_obj->recvLoadTokens((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
void CProxy_TreeLB::multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const IDM &mig_order, int num_pes, const int *_pes
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off__pes, impl_cnt__pes;
  impl_off__pes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt__pes=sizeof(int)*(num_pes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off__pes,_pes,impl_cnt__pes);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const IDM &mig_order, int num_pes, const int *_pes
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off__pes, impl_cnt__pes;
  impl_off__pes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt__pes=sizeof(int)*(num_pes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off__pes,_pes,impl_cnt__pes);
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const IDM &mig_order, int num_pes, const int *_pes
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off__pes, impl_cnt__pes;
  impl_off__pes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt__pes=sizeof(int)*(num_pes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off__pes,_pes,impl_cnt__pes);
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_multicastIDM_marshall6() {
  int epidx = CkRegisterEp("multicastIDM(const IDM &mig_order, int num_pes, const int *_pes)",
      reinterpret_cast<CkCallFnPtr>(_call_multicastIDM_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_multicastIDM_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_multicastIDM_marshall6);

  return epidx;
}

void CkIndex_TreeLB::_call_multicastIDM_marshall6(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const IDM &mig_order, int num_pes, const int *_pes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<IDM> mig_order;
  implP|mig_order;
  PUP::detail::TemporaryObjectHolder<int> num_pes;
  implP|num_pes;
  int impl_off__pes, impl_cnt__pes;
  implP|impl_off__pes;
  implP|impl_cnt__pes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *_pes=(int *)(impl_buf+impl_off__pes);
  impl_obj->multicastIDM(std::move(mig_order.t), std::move(num_pes.t), _pes);
}
int CkIndex_TreeLB::_callmarshall_multicastIDM_marshall6(char* impl_buf, void* impl_obj_void) {
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const IDM &mig_order, int num_pes, const int *_pes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<IDM> mig_order;
  implP|mig_order;
  PUP::detail::TemporaryObjectHolder<int> num_pes;
  implP|num_pes;
  int impl_off__pes, impl_cnt__pes;
  implP|impl_off__pes;
  implP|impl_cnt__pes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *_pes=(int *)(impl_buf+impl_off__pes);
  impl_obj->multicastIDM(std::move(mig_order.t), std::move(num_pes.t), _pes);
  return implP.size();
}
void CkIndex_TreeLB::_marshallmessagepup_multicastIDM_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const IDM &mig_order, int num_pes, const int *_pes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<IDM> mig_order;
  implP|mig_order;
  PUP::detail::TemporaryObjectHolder<int> num_pes;
  implP|num_pes;
  int impl_off__pes, impl_cnt__pes;
  implP|impl_off__pes;
  implP|impl_cnt__pes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *_pes=(int *)(impl_buf+impl_off__pes);
  if (implDestP.hasComments()) implDestP.comment("mig_order");
  implDestP|mig_order;
  if (implDestP.hasComments()) implDestP.comment("num_pes");
  implDestP|num_pes;
  if (implDestP.hasComments()) implDestP.comment("_pes");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*_pes))<impl_cnt__pes;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|_pes[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_TreeLB::multicastIDM_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxy_TreeLB::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::resumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::resumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_resumeClients_void() {
  int epidx = CkRegisterEp("resumeClients()",
      reinterpret_cast<CkCallFnPtr>(_call_resumeClients_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_TreeLB::reg_redn_wrapper_resumeClients_void() {
  return CkRegisterEp("redn_wrapper_resumeClients(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_resumeClients_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_TreeLB::_call_resumeClients_void(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  impl_obj->resumeClients();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TreeLB::resumeClients_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLbTime(const double *times, int n);
 */
void CProxy_TreeLB::reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *times, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_times, impl_cnt_times;
  impl_off_times=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_times=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_times,times,impl_cnt_times);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TreeLB::reportLbTime(const double *times, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *times, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_times, impl_cnt_times;
  impl_off_times=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_times=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_times,times,impl_cnt_times);
  CkSendMsgBranchMulti(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TreeLB::reportLbTime(const double *times, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *times, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_times, impl_cnt_times;
  impl_off_times=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_times=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_times,times,impl_cnt_times);
  CkSendMsgBranchGroup(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TreeLB::reg_reportLbTime_marshall8() {
  int epidx = CkRegisterEp("reportLbTime(const double *times, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_reportLbTime_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reportLbTime_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reportLbTime_marshall8);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TreeLB::reg_redn_wrapper_reportLbTime_marshall8() {
  return CkRegisterEp("redn_wrapper_reportLbTime(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_reportLbTime_marshall8), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TreeLB::_call_reportLbTime_marshall8(void* impl_msg, void* impl_obj_void)
{
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *times, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_times, impl_cnt_times;
  implP|impl_off_times;
  implP|impl_cnt_times;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *times=(double *)(impl_buf+impl_off_times);
  impl_obj->reportLbTime(times, std::move(n.t));
}
int CkIndex_TreeLB::_callmarshall_reportLbTime_marshall8(char* impl_buf, void* impl_obj_void) {
  TreeLB* impl_obj = static_cast<TreeLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *times, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_times, impl_cnt_times;
  implP|impl_off_times;
  implP|impl_cnt_times;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *times=(double *)(impl_buf+impl_off_times);
  impl_obj->reportLbTime(times, std::move(n.t));
  return implP.size();
}
void CkIndex_TreeLB::_marshallmessagepup_reportLbTime_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *times, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_times, impl_cnt_times;
  implP|impl_off_times;
  implP|impl_cnt_times;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *times=(double *)(impl_buf+impl_off_times);
  if (implDestP.hasComments()) implDestP.comment("times");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*times))<impl_cnt_times;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|times[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_TreeLB::reportLbTime_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreeLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TreeLB::reg_TreeLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("TreeLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TreeLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TreeLB::_call_TreeLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TreeLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TreeLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxySection_TreeLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_ProcessAtSync_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStatsUp(CkMessage* impl_msg);
 */
void CProxySection_TreeLB::sendStatsUp(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_sendStatsUp_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDecisionDown(CkMessage* impl_msg);
 */
void CProxySection_TreeLB::sendDecisionDown(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_sendDecisionDown_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadTokens(CkMessage* impl_msg);
 */
void CProxySection_TreeLB::recvLoadTokens(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_recvLoadTokens_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
 */
void CProxySection_TreeLB::multicastIDM(const IDM &mig_order, int num_pes, const int *_pes, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const IDM &mig_order, int num_pes, const int *_pes
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off__pes, impl_cnt__pes;
  impl_off__pes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt__pes=sizeof(int)*(num_pes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<IDM>::type>::type &)mig_order;
    implP|num_pes;
    implP|impl_off__pes;
    implP|impl_cnt__pes;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off__pes,_pes,impl_cnt__pes);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_multicastIDM_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxySection_TreeLB::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_resumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_resumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLbTime(const double *times, int n);
 */
void CProxySection_TreeLB::reportLbTime(const double *times, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *times, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_times, impl_cnt_times;
  impl_off_times=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_times=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_times;
    implP|impl_cnt_times;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_times,times,impl_cnt_times);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TreeLB::idx_reportLbTime_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreeLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TreeLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_BaseLB::__idx);
   CkRegisterGroupIrr(__idx,TreeLB::isIrreducible());
  // REG: void TreeLB(const CkLBOptions &impl_noname_0);
  idx_TreeLB_marshall1();

  // REG: void ProcessAtSync();
  idx_ProcessAtSync_void();
  idx_redn_wrapper_ProcessAtSync_void();

  // REG: void sendStatsUp(CkMessage* impl_msg);
  idx_sendStatsUp_CkMessage();

  // REG: void sendDecisionDown(CkMessage* impl_msg);
  idx_sendDecisionDown_CkMessage();

  // REG: void recvLoadTokens(CkMessage* impl_msg);
  idx_recvLoadTokens_CkMessage();

  // REG: void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
  idx_multicastIDM_marshall6();

  // REG: void resumeClients();
  idx_resumeClients_void();
  idx_redn_wrapper_resumeClients_void();

  // REG: void reportLbTime(const double *times, int n);
  idx_reportLbTime_marshall8();
  idx_redn_wrapper_reportLbTime_marshall8();

  // REG: TreeLB(CkMigrateMessage* impl_msg);
  idx_TreeLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TreeLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTreeLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;

  _registerBaseLB();

  _registerInitCall(lbinit,1);

/* REG: group TreeLB: BaseLB{
void TreeLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void sendStatsUp(CkMessage* impl_msg);
void sendDecisionDown(CkMessage* impl_msg);
void recvLoadTokens(CkMessage* impl_msg);
void multicastIDM(const IDM &mig_order, int num_pes, const int *_pes);
void resumeClients();
void reportLbTime(const double *times, int n);
TreeLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TreeLB::__register("TreeLB", sizeof(TreeLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TreeLB::virtual_pup(PUP::er &p) {
    recursive_pup<TreeLB>(dynamic_cast<TreeLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
