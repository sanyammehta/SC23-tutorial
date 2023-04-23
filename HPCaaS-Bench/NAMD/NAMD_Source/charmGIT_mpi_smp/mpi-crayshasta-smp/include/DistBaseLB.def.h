

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistBaseLB::LoadBalance_2_closure : public SDAG::Closure {
      

      LoadBalance_2_closure() {
        init();
      }
      LoadBalance_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~LoadBalance_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(LoadBalance_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistBaseLB::barrierDone_3_closure : public SDAG::Closure {
      

      barrierDone_3_closure() {
        init();
      }
      barrierDone_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrierDone_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrierDone_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistBaseLB::ResumeClients_4_closure : public SDAG::Closure {
      

      ResumeClients_4_closure() {
        init();
      }
      ResumeClients_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeClients_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistBaseLB::ResumeClients_5_closure : public SDAG::Closure {
            int balancing;


      ResumeClients_5_closure() {
        init();
      }
      ResumeClients_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return balancing;}
      void pup(PUP::er& __p) {
        __p | balancing;
        packClosure(__p);
      }
      virtual ~ResumeClients_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group DistBaseLB: BaseLB{
void DistBaseLB(const CkLBOptions &impl_noname_0);
void LoadBalance();
void barrierDone();
void ResumeClients();
void ResumeClients(int balancing);
DistBaseLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DistBaseLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalance();
 */
void CProxyElement_DistBaseLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierDone();
 */
void CProxyElement_DistBaseLB::barrierDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_DistBaseLB::_call_redn_wrapper_barrierDone_void(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->barrierDone();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxyElement_DistBaseLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_DistBaseLB::_call_redn_wrapper_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ResumeClients();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxyElement_DistBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistBaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_DistBaseLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  CkGroupID gId = CkCreateGroup(CkIndex_DistBaseLB::__idx, CkIndex_DistBaseLB::idx_DistBaseLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_DistBaseLB::CProxy_DistBaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_DistBaseLB::__idx, CkIndex_DistBaseLB::idx_DistBaseLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_DistBaseLB::reg_DistBaseLB_marshall1() {
  int epidx = CkRegisterEp("DistBaseLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_DistBaseLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DistBaseLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DistBaseLB_marshall1);

  return epidx;
}

void CkIndex_DistBaseLB::_call_DistBaseLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) DistBaseLB(std::move(impl_noname_0.t));
}
int CkIndex_DistBaseLB::_callmarshall_DistBaseLB_marshall1(char* impl_buf, void* impl_obj_void) {
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) DistBaseLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_DistBaseLB::_marshallmessagepup_DistBaseLB_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: void LoadBalance();
 */
void CProxy_DistBaseLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistBaseLB::LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistBaseLB::LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistBaseLB::reg_LoadBalance_void() {
  int epidx = CkRegisterEp("LoadBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_LoadBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DistBaseLB::_call_LoadBalance_void(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  impl_obj->LoadBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DistBaseLB::LoadBalance_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierDone();
 */
void CProxy_DistBaseLB::barrierDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistBaseLB::barrierDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistBaseLB::barrierDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistBaseLB::reg_barrierDone_void() {
  int epidx = CkRegisterEp("barrierDone()",
      reinterpret_cast<CkCallFnPtr>(_call_barrierDone_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_DistBaseLB::reg_redn_wrapper_barrierDone_void() {
  return CkRegisterEp("redn_wrapper_barrierDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_barrierDone_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_DistBaseLB::_call_barrierDone_void(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  impl_obj->barrierDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DistBaseLB::barrierDone_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxy_DistBaseLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistBaseLB::ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistBaseLB::ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistBaseLB::reg_ResumeClients_void() {
  int epidx = CkRegisterEp("ResumeClients()",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_DistBaseLB::reg_redn_wrapper_ResumeClients_void() {
  return CkRegisterEp("redn_wrapper_ResumeClients(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ResumeClients_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_DistBaseLB::_call_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  impl_obj->ResumeClients();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DistBaseLB::ResumeClients_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxy_DistBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistBaseLB::ResumeClients(int balancing, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistBaseLB::ResumeClients(int balancing, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  CkSendMsgBranchGroup(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistBaseLB::reg_ResumeClients_marshall5() {
  int epidx = CkRegisterEp("ResumeClients(int balancing)",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ResumeClients_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ResumeClients_marshall5);

  return epidx;
}

void CkIndex_DistBaseLB::_call_ResumeClients_marshall5(void* impl_msg, void* impl_obj_void)
{
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(balancing.t));
}
int CkIndex_DistBaseLB::_callmarshall_ResumeClients_marshall5(char* impl_buf, void* impl_obj_void) {
  DistBaseLB* impl_obj = static_cast<DistBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(balancing.t));
  return implP.size();
}
void CkIndex_DistBaseLB::_marshallmessagepup_ResumeClients_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("balancing");
  implDestP|balancing;
}
PUPable_def(SINGLE_ARG(Closure_DistBaseLB::ResumeClients_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistBaseLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_DistBaseLB::reg_DistBaseLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("DistBaseLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_DistBaseLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_DistBaseLB::_call_DistBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) DistBaseLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistBaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalance();
 */
void CProxySection_DistBaseLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_LoadBalance_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierDone();
 */
void CProxySection_DistBaseLB::barrierDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_barrierDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxySection_DistBaseLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_ResumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxySection_DistBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistBaseLB::idx_ResumeClients_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistBaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DistBaseLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_BaseLB::__idx);
   CkRegisterGroupIrr(__idx,DistBaseLB::isIrreducible());
  // REG: void DistBaseLB(const CkLBOptions &impl_noname_0);
  idx_DistBaseLB_marshall1();

  // REG: void LoadBalance();
  idx_LoadBalance_void();

  // REG: void barrierDone();
  idx_barrierDone_void();
  idx_redn_wrapper_barrierDone_void();

  // REG: void ResumeClients();
  idx_ResumeClients_void();
  idx_redn_wrapper_ResumeClients_void();

  // REG: void ResumeClients(int balancing);
  idx_ResumeClients_marshall5();

  // REG: DistBaseLB(CkMigrateMessage* impl_msg);
  idx_DistBaseLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_DistBaseLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerDistBaseLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerLBManager();

  _registerBaseLB();

/* REG: group DistBaseLB: BaseLB{
void DistBaseLB(const CkLBOptions &impl_noname_0);
void LoadBalance();
void barrierDone();
void ResumeClients();
void ResumeClients(int balancing);
DistBaseLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_DistBaseLB::__register("DistBaseLB", sizeof(DistBaseLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DistBaseLB::virtual_pup(PUP::er &p) {
    recursive_pup<DistBaseLB>(dynamic_cast<DistBaseLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
