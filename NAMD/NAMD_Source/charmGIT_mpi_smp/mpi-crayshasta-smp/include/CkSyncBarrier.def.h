
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkSyncBarrier::resumeClients_2_closure : public SDAG::Closure {
      

      resumeClients_2_closure() {
        init();
      }
      resumeClients_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resumeClients_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(resumeClients_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkSyncBarrier::kick_3_closure : public SDAG::Closure {
            int kickStep;
            int sourceNode;
            int sourcePe;


      kick_3_closure() {
        init();
      }
      kick_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return kickStep;}
            int & getP1() { return sourceNode;}
            int & getP2() { return sourcePe;}
      void pup(PUP::er& __p) {
        __p | kickStep;
        __p | sourceNode;
        __p | sourcePe;
        packClosure(__p);
      }
      virtual ~kick_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(kick_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkSyncBarrier::checkBarrier_4_closure : public SDAG::Closure {
      

      checkBarrier_4_closure() {
        init();
      }
      checkBarrier_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~checkBarrier_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(checkBarrier_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID _syncBarrier;
 */
extern CkGroupID _syncBarrier;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__syncBarrier(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_syncBarrier;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare CkSyncBarrierInit: Chare{
CkSyncBarrierInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkSyncBarrierInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkSyncBarrierInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_CkSyncBarrierInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CkSyncBarrierInit::__idx, CkIndex_CkSyncBarrierInit::idx_CkSyncBarrierInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CkSyncBarrierInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_CkSyncBarrierInit::__idx, CkIndex_CkSyncBarrierInit::idx_CkSyncBarrierInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CkSyncBarrierInit::reg_CkSyncBarrierInit_CkArgMsg() {
  int epidx = CkRegisterEp("CkSyncBarrierInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkSyncBarrierInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkSyncBarrierInit::_call_CkSyncBarrierInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  CkSyncBarrierInit* impl_obj = static_cast<CkSyncBarrierInit*>(impl_obj_void);
  new (impl_obj_void) CkSyncBarrierInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkSyncBarrierInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CkSyncBarrierInit(CkArgMsg* impl_msg);
  idx_CkSyncBarrierInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_CkSyncBarrierInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkSyncBarrier: IrrGroup{
void CkSyncBarrier();
void resumeClients();
void kick(int kickStep, int sourceNode, int sourcePe);
void checkBarrier();
CkSyncBarrier(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkSyncBarrier::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CkSyncBarrier();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxyElement_CkSyncBarrier::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
void CProxyElement_CkSyncBarrier::kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int kickStep, int sourceNode, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkBarrier();
 */
void CProxyElement_CkSyncBarrier::checkBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CkSyncBarrier();
 */
CkGroupID CProxy_CkSyncBarrier::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkSyncBarrier::__idx, CkIndex_CkSyncBarrier::idx_CkSyncBarrier_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkSyncBarrier::reg_CkSyncBarrier_void() {
  int epidx = CkRegisterEp("CkSyncBarrier()",
      reinterpret_cast<CkCallFnPtr>(_call_CkSyncBarrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkSyncBarrier::_call_CkSyncBarrier_void(void* impl_msg, void* impl_obj_void)
{
  CkSyncBarrier* impl_obj = static_cast<CkSyncBarrier*>(impl_obj_void);
  new (impl_obj_void) CkSyncBarrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxy_CkSyncBarrier::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkSyncBarrier::resumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkSyncBarrier::resumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkSyncBarrier::reg_resumeClients_void() {
  int epidx = CkRegisterEp("resumeClients()",
      reinterpret_cast<CkCallFnPtr>(_call_resumeClients_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkSyncBarrier::_call_resumeClients_void(void* impl_msg, void* impl_obj_void)
{
  CkSyncBarrier* impl_obj = static_cast<CkSyncBarrier*>(impl_obj_void);
  impl_obj->resumeClients();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkSyncBarrier::resumeClients_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
void CProxy_CkSyncBarrier::kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int kickStep, int sourceNode, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkSyncBarrier::kick(int kickStep, int sourceNode, int sourcePe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int kickStep, int sourceNode, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
  }
  CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkSyncBarrier::kick(int kickStep, int sourceNode, int sourcePe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int kickStep, int sourceNode, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
  }
  CkSendMsgBranchGroup(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkSyncBarrier::reg_kick_marshall3() {
  int epidx = CkRegisterEp("kick(int kickStep, int sourceNode, int sourcePe)",
      reinterpret_cast<CkCallFnPtr>(_call_kick_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_kick_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_kick_marshall3);

  return epidx;
}

void CkIndex_CkSyncBarrier::_call_kick_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkSyncBarrier* impl_obj = static_cast<CkSyncBarrier*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int kickStep, int sourceNode, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> kickStep;
  implP|kickStep;
  PUP::detail::TemporaryObjectHolder<int> sourceNode;
  implP|sourceNode;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->kick(std::move(kickStep.t), std::move(sourceNode.t), std::move(sourcePe.t));
}
int CkIndex_CkSyncBarrier::_callmarshall_kick_marshall3(char* impl_buf, void* impl_obj_void) {
  CkSyncBarrier* impl_obj = static_cast<CkSyncBarrier*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int kickStep, int sourceNode, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> kickStep;
  implP|kickStep;
  PUP::detail::TemporaryObjectHolder<int> sourceNode;
  implP|sourceNode;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->kick(std::move(kickStep.t), std::move(sourceNode.t), std::move(sourcePe.t));
  return implP.size();
}
void CkIndex_CkSyncBarrier::_marshallmessagepup_kick_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int kickStep, int sourceNode, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> kickStep;
  implP|kickStep;
  PUP::detail::TemporaryObjectHolder<int> sourceNode;
  implP|sourceNode;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("kickStep");
  implDestP|kickStep;
  if (implDestP.hasComments()) implDestP.comment("sourceNode");
  implDestP|sourceNode;
  if (implDestP.hasComments()) implDestP.comment("sourcePe");
  implDestP|sourcePe;
}
PUPable_def(SINGLE_ARG(Closure_CkSyncBarrier::kick_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkBarrier();
 */
void CProxy_CkSyncBarrier::checkBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkSyncBarrier::checkBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkSyncBarrier::checkBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkSyncBarrier::reg_checkBarrier_void() {
  int epidx = CkRegisterEp("checkBarrier()",
      reinterpret_cast<CkCallFnPtr>(_call_checkBarrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkSyncBarrier::_call_checkBarrier_void(void* impl_msg, void* impl_obj_void)
{
  CkSyncBarrier* impl_obj = static_cast<CkSyncBarrier*>(impl_obj_void);
  impl_obj->checkBarrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkSyncBarrier::checkBarrier_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkSyncBarrier::reg_CkSyncBarrier_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkSyncBarrier(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkSyncBarrier_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkSyncBarrier::_call_CkSyncBarrier_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkSyncBarrier((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CkSyncBarrier();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeClients();
 */
void CProxySection_CkSyncBarrier::resumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_resumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int kickStep, int sourceNode, int sourcePe);
 */
void CProxySection_CkSyncBarrier::kick(int kickStep, int sourceNode, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int kickStep, int sourceNode, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|kickStep;
    implP|sourceNode;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_kick_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkBarrier();
 */
void CProxySection_CkSyncBarrier::checkBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkSyncBarrier::idx_checkBarrier_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkSyncBarrier(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkSyncBarrier::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkSyncBarrier::isIrreducible());
  // REG: void CkSyncBarrier();
  idx_CkSyncBarrier_void();
  CkRegisterDefaultCtor(__idx, idx_CkSyncBarrier_void());

  // REG: void resumeClients();
  idx_resumeClients_void();

  // REG: void kick(int kickStep, int sourceNode, int sourcePe);
  idx_kick_marshall3();

  // REG: void checkBarrier();
  idx_checkBarrier_void();

  // REG: CkSyncBarrier(CkMigrateMessage* impl_msg);
  idx_CkSyncBarrier_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkSyncBarrier_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkSyncBarrier(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("_syncBarrier","CkGroupID",sizeof(_syncBarrier),(void *) &_syncBarrier,__xlater_roPup__syncBarrier);

/* REG: mainchare CkSyncBarrierInit: Chare{
CkSyncBarrierInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_CkSyncBarrierInit::__register("CkSyncBarrierInit", sizeof(CkSyncBarrierInit));

/* REG: group CkSyncBarrier: IrrGroup{
void CkSyncBarrier();
void resumeClients();
void kick(int kickStep, int sourceNode, int sourcePe);
void checkBarrier();
CkSyncBarrier(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkSyncBarrier::__register("CkSyncBarrier", sizeof(CkSyncBarrier));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkSyncBarrierInit::virtual_pup(PUP::er &p) {
    recursive_pup<CkSyncBarrierInit>(dynamic_cast<CkSyncBarrierInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkSyncBarrier::virtual_pup(PUP::er &p) {
    recursive_pup<CkSyncBarrier>(dynamic_cast<CkSyncBarrier*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
