


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkCheckpointWriteMgr::Checkpoint_2_closure : public SDAG::Closure {
            char *dirname;
            CkCallback cb;
            bool requestStatus;
            int writersPerNode;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      Checkpoint_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      Checkpoint_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            char *& getP0() { return dirname;}
            CkCallback & getP1() { return cb;}
            bool & getP2() { return requestStatus;}
            int & getP3() { return writersPerNode;}
      void pup(PUP::er& __p) {
        __p | cb;
        __p | requestStatus;
        __p | writersPerNode;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  PUP::detail::TemporaryObjectHolder<int> writersPerNode;
  implP|writersPerNode;
          impl_buf+=CK_ALIGN(implP.size(),16);
          dirname = (char *)(impl_buf+impl_off_dirname);
        }
      }
      virtual ~Checkpoint_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(Checkpoint_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkCheckpointWriteMgr::FinishedCheckpoint_3_closure : public SDAG::Closure {
      

      FinishedCheckpoint_3_closure() {
        init();
      }
      FinishedCheckpoint_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~FinishedCheckpoint_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(FinishedCheckpoint_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkCheckpointMgr::Checkpoint_2_closure : public SDAG::Closure {
            char *dirname;
            CkCallback cb;
            bool requestStatus;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      Checkpoint_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      Checkpoint_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            char *& getP0() { return dirname;}
            CkCallback & getP1() { return cb;}
            bool & getP2() { return requestStatus;}
      void pup(PUP::er& __p) {
        __p | cb;
        __p | requestStatus;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
          impl_buf+=CK_ALIGN(implP.size(),16);
          dirname = (char *)(impl_buf+impl_off_dirname);
        }
      }
      virtual ~Checkpoint_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(Checkpoint_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkCheckpointMgr::SendRestartCB_3_closure : public SDAG::Closure {
      

      SendRestartCB_3_closure() {
        init();
      }
      SendRestartCB_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~SendRestartCB_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(SendRestartCB_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID _sysChkptWriteMgr;
 */
extern CkGroupID _sysChkptWriteMgr;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__sysChkptWriteMgr(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_sysChkptWriteMgr;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID _sysChkptMgr;
 */
extern CkGroupID _sysChkptMgr;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__sysChkptMgr(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_sysChkptMgr;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: nodegroup CkCheckpointWriteMgr: NodeGroup{
CkCheckpointWriteMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
void FinishedCheckpoint();
CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkCheckpointWriteMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
void CProxyElement_CkCheckpointWriteMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname) + 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FinishedCheckpoint();
 */
void CProxyElement_CkCheckpointWriteMgr::FinishedCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr();
 */
CkGroupID CProxy_CkCheckpointWriteMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_CkCheckpointWriteMgr::__idx, CkIndex_CkCheckpointWriteMgr::idx_CkCheckpointWriteMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkCheckpointWriteMgr::reg_CkCheckpointWriteMgr_void() {
  int epidx = CkRegisterEp("CkCheckpointWriteMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_CkCheckpointWriteMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkCheckpointWriteMgr::_call_CkCheckpointWriteMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointWriteMgr* impl_obj = static_cast<CkCheckpointWriteMgr*>(impl_obj_void);
  new (impl_obj_void) CkCheckpointWriteMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
void CProxy_CkCheckpointWriteMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname) + 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_CkCheckpointWriteMgr::reg_Checkpoint_marshall2() {
  int epidx = CkRegisterEp("Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode)",
      reinterpret_cast<CkCallFnPtr>(_call_Checkpoint_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Checkpoint_marshall2);

  return epidx;
}

void CkIndex_CkCheckpointWriteMgr::_call_Checkpoint_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointWriteMgr* impl_obj = static_cast<CkCheckpointWriteMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    impl_msg = CkCopyMsg(&impl_msg);
    CkSendMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  PUP::detail::TemporaryObjectHolder<int> writersPerNode;
  implP|writersPerNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dirname=(char *)(impl_buf+impl_off_dirname);
  impl_obj->Checkpoint(dirname, std::move(cb.t), std::move(requestStatus.t), std::move(writersPerNode.t));
  CmiUnlock(impl_obj->__nodelock);
}
void CkIndex_CkCheckpointWriteMgr::_marshallmessagepup_Checkpoint_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  PUP::detail::TemporaryObjectHolder<int> writersPerNode;
  implP|writersPerNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dirname=(char *)(impl_buf+impl_off_dirname);
  if (implDestP.hasComments()) implDestP.comment("dirname");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dirname))<impl_cnt_dirname;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dirname[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("requestStatus");
  implDestP|requestStatus;
  if (implDestP.hasComments()) implDestP.comment("writersPerNode");
  implDestP|writersPerNode;
}
PUPable_def(SINGLE_ARG(Closure_CkCheckpointWriteMgr::Checkpoint_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FinishedCheckpoint();
 */
void CProxy_CkCheckpointWriteMgr::FinishedCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_CkCheckpointWriteMgr::reg_FinishedCheckpoint_void() {
  int epidx = CkRegisterEp("FinishedCheckpoint()",
      reinterpret_cast<CkCallFnPtr>(_call_FinishedCheckpoint_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkCheckpointWriteMgr::_call_FinishedCheckpoint_void(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointWriteMgr* impl_obj = static_cast<CkCheckpointWriteMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->FinishedCheckpoint();
  CmiUnlock(impl_obj->__nodelock);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkCheckpointWriteMgr::FinishedCheckpoint_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkCheckpointWriteMgr::reg_CkCheckpointWriteMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkCheckpointWriteMgr(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCheckpointWriteMgr_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkCheckpointWriteMgr::_call_CkCheckpointWriteMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkCheckpointWriteMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
void CProxySection_CkCheckpointWriteMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname) + 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    implP|writersPerNode;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkCheckpointWriteMgr::idx_Checkpoint_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FinishedCheckpoint();
 */
void CProxySection_CkCheckpointWriteMgr::FinishedCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkCheckpointWriteMgr::idx_FinishedCheckpoint_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkCheckpointWriteMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,CkCheckpointWriteMgr::isIrreducible());
  // REG: CkCheckpointWriteMgr();
  idx_CkCheckpointWriteMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkCheckpointWriteMgr_void());

  // REG: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
  idx_Checkpoint_marshall2();

  // REG: void FinishedCheckpoint();
  idx_FinishedCheckpoint_void();

  // REG: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
  idx_CkCheckpointWriteMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkCheckpointWriteMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkCheckpointMgr: IrrGroup{
CkCheckpointMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
void SendRestartCB();
CkCheckpointMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkCheckpointMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
void CProxyElement_CkCheckpointMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendRestartCB();
 */
void CProxyElement_CkCheckpointMgr::SendRestartCB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkCheckpointMgr::_call_redn_wrapper_SendRestartCB_void(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointMgr* impl_obj = static_cast<CkCheckpointMgr*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->SendRestartCB();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr();
 */
CkGroupID CProxy_CkCheckpointMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkCheckpointMgr::__idx, CkIndex_CkCheckpointMgr::idx_CkCheckpointMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkCheckpointMgr::reg_CkCheckpointMgr_void() {
  int epidx = CkRegisterEp("CkCheckpointMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_CkCheckpointMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkCheckpointMgr::_call_CkCheckpointMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointMgr* impl_obj = static_cast<CkCheckpointMgr*>(impl_obj_void);
  new (impl_obj_void) CkCheckpointMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
void CProxy_CkCheckpointMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkCheckpointMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  CkSendMsgBranchMulti(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkCheckpointMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  CkSendMsgBranchGroup(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkCheckpointMgr::reg_Checkpoint_marshall2() {
  int epidx = CkRegisterEp("Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus)",
      reinterpret_cast<CkCallFnPtr>(_call_Checkpoint_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Checkpoint_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Checkpoint_marshall2);

  return epidx;
}

void CkIndex_CkCheckpointMgr::_call_Checkpoint_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointMgr* impl_obj = static_cast<CkCheckpointMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *dirname, const CkCallback &cb, const bool &requestStatus*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dirname=(char *)(impl_buf+impl_off_dirname);
  impl_obj->Checkpoint(dirname, std::move(cb.t), std::move(requestStatus.t));
}
int CkIndex_CkCheckpointMgr::_callmarshall_Checkpoint_marshall2(char* impl_buf, void* impl_obj_void) {
  CkCheckpointMgr* impl_obj = static_cast<CkCheckpointMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const char *dirname, const CkCallback &cb, const bool &requestStatus*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dirname=(char *)(impl_buf+impl_off_dirname);
  impl_obj->Checkpoint(dirname, std::move(cb.t), std::move(requestStatus.t));
  return implP.size();
}
void CkIndex_CkCheckpointMgr::_marshallmessagepup_Checkpoint_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *dirname, const CkCallback &cb, const bool &requestStatus*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dirname, impl_cnt_dirname;
  implP|impl_off_dirname;
  implP|impl_cnt_dirname;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  PUP::detail::TemporaryObjectHolder<bool> requestStatus;
  implP|requestStatus;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dirname=(char *)(impl_buf+impl_off_dirname);
  if (implDestP.hasComments()) implDestP.comment("dirname");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dirname))<impl_cnt_dirname;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dirname[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("requestStatus");
  implDestP|requestStatus;
}
PUPable_def(SINGLE_ARG(Closure_CkCheckpointMgr::Checkpoint_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendRestartCB();
 */
void CProxy_CkCheckpointMgr::SendRestartCB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkCheckpointMgr::SendRestartCB(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkCheckpointMgr::SendRestartCB(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkCheckpointMgr::reg_SendRestartCB_void() {
  int epidx = CkRegisterEp("SendRestartCB()",
      reinterpret_cast<CkCallFnPtr>(_call_SendRestartCB_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkCheckpointMgr::reg_redn_wrapper_SendRestartCB_void() {
  return CkRegisterEp("redn_wrapper_SendRestartCB(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_SendRestartCB_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkCheckpointMgr::_call_SendRestartCB_void(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointMgr* impl_obj = static_cast<CkCheckpointMgr*>(impl_obj_void);
  impl_obj->SendRestartCB();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkCheckpointMgr::SendRestartCB_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkCheckpointMgr::reg_CkCheckpointMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkCheckpointMgr(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCheckpointMgr_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkCheckpointMgr::_call_CkCheckpointMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkCheckpointMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
void CProxySection_CkCheckpointMgr::Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *dirname, const CkCallback &cb, const bool &requestStatus
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dirname, impl_cnt_dirname;
  impl_off_dirname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dirname=sizeof(char)*(strlen(dirname)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dirname;
    implP|impl_cnt_dirname;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)requestStatus;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dirname,dirname,impl_cnt_dirname);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCheckpointMgr::idx_Checkpoint_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendRestartCB();
 */
void CProxySection_CkCheckpointMgr::SendRestartCB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCheckpointMgr::idx_SendRestartCB_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkCheckpointMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkCheckpointMgr::isIrreducible());
  // REG: CkCheckpointMgr();
  idx_CkCheckpointMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkCheckpointMgr_void());

  // REG: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
  idx_Checkpoint_marshall2();

  // REG: void SendRestartCB();
  idx_SendRestartCB_void();
  idx_redn_wrapper_SendRestartCB_void();

  // REG: CkCheckpointMgr(CkMigrateMessage* impl_msg);
  idx_CkCheckpointMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkCheckpointMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare CkCheckpointInit: Chare{
CkCheckpointInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkCheckpointInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkCheckpointInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_CkCheckpointInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CkCheckpointInit::__idx, CkIndex_CkCheckpointInit::idx_CkCheckpointInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CkCheckpointInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_CkCheckpointInit::__idx, CkIndex_CkCheckpointInit::idx_CkCheckpointInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CkCheckpointInit::reg_CkCheckpointInit_CkArgMsg() {
  int epidx = CkRegisterEp("CkCheckpointInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCheckpointInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkCheckpointInit::_call_CkCheckpointInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  CkCheckpointInit* impl_obj = static_cast<CkCheckpointInit*>(impl_obj_void);
  new (impl_obj_void) CkCheckpointInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkCheckpointInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CkCheckpointInit(CkArgMsg* impl_msg);
  idx_CkCheckpointInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_CkCheckpointInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkCheckpoint(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("_sysChkptWriteMgr","CkGroupID",sizeof(_sysChkptWriteMgr),(void *) &_sysChkptWriteMgr,__xlater_roPup__sysChkptWriteMgr);

  CkRegisterReadonly("_sysChkptMgr","CkGroupID",sizeof(_sysChkptMgr),(void *) &_sysChkptMgr,__xlater_roPup__sysChkptMgr);

  _registerCkCheckpointStatus();

/* REG: nodegroup CkCheckpointWriteMgr: NodeGroup{
CkCheckpointWriteMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
void FinishedCheckpoint();
CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkCheckpointWriteMgr::__register("CkCheckpointWriteMgr", sizeof(CkCheckpointWriteMgr));

/* REG: group CkCheckpointMgr: IrrGroup{
CkCheckpointMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
void SendRestartCB();
CkCheckpointMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkCheckpointMgr::__register("CkCheckpointMgr", sizeof(CkCheckpointMgr));

/* REG: mainchare CkCheckpointInit: Chare{
CkCheckpointInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_CkCheckpointInit::__register("CkCheckpointInit", sizeof(CkCheckpointInit));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkCheckpointWriteMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkCheckpointWriteMgr>(dynamic_cast<CkCheckpointWriteMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkCheckpointMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkCheckpointMgr>(dynamic_cast<CkCheckpointMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkCheckpointInit::virtual_pup(PUP::er &p) {
    recursive_pup<CkCheckpointInit>(dynamic_cast<CkCheckpointInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
