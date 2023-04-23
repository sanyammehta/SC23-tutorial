/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CompletionDetector::start_detection_2_closure : public SDAG::Closure {
            int num_producers;
            CkCallback start;
            CkCallback allProduced;
            CkCallback finish;
            int prio_;


      start_detection_2_closure() {
        init();
      }
      start_detection_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return num_producers;}
            CkCallback & getP1() { return start;}
            CkCallback & getP2() { return allProduced;}
            CkCallback & getP3() { return finish;}
            int & getP4() { return prio_;}
      void pup(PUP::er& __p) {
        __p | num_producers;
        __p | start;
        __p | allProduced;
        __p | finish;
        __p | prio_;
        packClosure(__p);
      }
      virtual ~start_detection_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_detection_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CompletionDetector::producers_done_3_closure : public SDAG::Closure {
            int producers_done_global_;


      producers_done_3_closure() {
        init();
      }
      producers_done_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return producers_done_global_;}
      void pup(PUP::er& __p) {
        __p | producers_done_global_;
        packClosure(__p);
      }
      virtual ~producers_done_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(producers_done_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CompletionDetector::count_consumed_4_closure : public SDAG::Closure {
            int produced_global;
            int consumed_global;


      count_consumed_4_closure() {
        init();
      }
      count_consumed_4_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return produced_global;}
            int & getP1() { return consumed_global;}
      void pup(PUP::er& __p) {
        __p | produced_global;
        __p | consumed_global;
        packClosure(__p);
      }
      virtual ~count_consumed_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(count_consumed_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group CompletionDetector: IrrGroup{
CompletionDetector();
void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
void producers_done(int producers_done_global_);
void count_consumed(int produced_global, int consumed_global);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CompletionDetector::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CompletionDetector();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
void CProxyElement_CompletionDetector::start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void producers_done(int producers_done_global_);
 */
void CProxyElement_CompletionDetector::producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int producers_done_global_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|producers_done_global_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|producers_done_global_;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CompletionDetector::_call_redn_wrapper_producers_done_marshall3(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_CompletionDetector::producers_done_3_closure* genClosure = new Closure_CompletionDetector::producers_done_3_closure();
  /*Unmarshall pup'd fields: int producers_done_global_*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  implP|genClosure->producers_done_global_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->producers_done(genClosure);
  genClosure->deref();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void count_consumed(int produced_global, int consumed_global);
 */
void CProxyElement_CompletionDetector::count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int produced_global, int consumed_global
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|produced_global;
    implP|consumed_global;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|produced_global;
    implP|consumed_global;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CompletionDetector::_call_redn_wrapper_count_consumed_marshall4(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_CompletionDetector::count_consumed_4_closure* genClosure = new Closure_CompletionDetector::count_consumed_4_closure();
  /*Unmarshall pup'd fields: int produced_global, int consumed_global*/
  PUP::fromMem implP(impl_buf);
  implP|genClosure->produced_global;
  implP|genClosure->consumed_global;
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->count_consumed(genClosure);
  genClosure->deref();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CompletionDetector();
 */
CkGroupID CProxy_CompletionDetector::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CompletionDetector::__idx, CkIndex_CompletionDetector::idx_CompletionDetector_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CompletionDetector::reg_CompletionDetector_void() {
  int epidx = CkRegisterEp("CompletionDetector()",
      reinterpret_cast<CkCallFnPtr>(_call_CompletionDetector_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CompletionDetector::_call_CompletionDetector_void(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  new (impl_obj_void) CompletionDetector();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
void CProxy_CompletionDetector::start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CompletionDetector::start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
  }
  CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CompletionDetector::start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
  }
  CkSendMsgBranchGroup(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CompletionDetector::reg_start_detection_marshall2() {
  int epidx = CkRegisterEp("start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_)",
      reinterpret_cast<CkCallFnPtr>(_call_start_detection_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_start_detection_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_start_detection_marshall2);

  return epidx;
}

void CkIndex_CompletionDetector::_call_start_detection_marshall2(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::start_detection_2_closure* genClosure = new Closure_CompletionDetector::start_detection_2_closure();
  implP|genClosure->num_producers;
  implP|genClosure->start;
  implP|genClosure->allProduced;
  implP|genClosure->finish;
  implP|genClosure->prio_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_start_detection(genClosure);
  genClosure->deref();
}
int CkIndex_CompletionDetector::_callmarshall_start_detection_marshall2(char* impl_buf, void* impl_obj_void) {
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::start_detection_2_closure* genClosure = new Closure_CompletionDetector::start_detection_2_closure();
  implP|genClosure->num_producers;
  implP|genClosure->start;
  implP|genClosure->allProduced;
  implP|genClosure->finish;
  implP|genClosure->prio_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_start_detection(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_CompletionDetector::_marshallmessagepup_start_detection_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_producers;
  implP|num_producers;
  PUP::detail::TemporaryObjectHolder<CkCallback> start;
  implP|start;
  PUP::detail::TemporaryObjectHolder<CkCallback> allProduced;
  implP|allProduced;
  PUP::detail::TemporaryObjectHolder<CkCallback> finish;
  implP|finish;
  PUP::detail::TemporaryObjectHolder<int> prio_;
  implP|prio_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("num_producers");
  implDestP|num_producers;
  if (implDestP.hasComments()) implDestP.comment("start");
  implDestP|start;
  if (implDestP.hasComments()) implDestP.comment("allProduced");
  implDestP|allProduced;
  if (implDestP.hasComments()) implDestP.comment("finish");
  implDestP|finish;
  if (implDestP.hasComments()) implDestP.comment("prio_");
  implDestP|prio_;
}
PUPable_def(SINGLE_ARG(Closure_CompletionDetector::start_detection_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void producers_done(int producers_done_global_);
 */
void CProxy_CompletionDetector::producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int producers_done_global_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|producers_done_global_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|producers_done_global_;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CompletionDetector::producers_done(int producers_done_global_, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int producers_done_global_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|producers_done_global_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|producers_done_global_;
  }
  CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CompletionDetector::producers_done(int producers_done_global_, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int producers_done_global_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|producers_done_global_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|producers_done_global_;
  }
  CkSendMsgBranchGroup(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CompletionDetector::reg_producers_done_marshall3() {
  int epidx = CkRegisterEp("producers_done(int producers_done_global_)",
      reinterpret_cast<CkCallFnPtr>(_call_producers_done_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_producers_done_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_producers_done_marshall3);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_CompletionDetector::reg_redn_wrapper_producers_done_marshall3() {
  return CkRegisterEp("redn_wrapper_producers_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_producers_done_marshall3), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_CompletionDetector::_call_producers_done_marshall3(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::producers_done_3_closure* genClosure = new Closure_CompletionDetector::producers_done_3_closure();
  implP|genClosure->producers_done_global_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->producers_done(genClosure);
  genClosure->deref();
}
int CkIndex_CompletionDetector::_callmarshall_producers_done_marshall3(char* impl_buf, void* impl_obj_void) {
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::producers_done_3_closure* genClosure = new Closure_CompletionDetector::producers_done_3_closure();
  implP|genClosure->producers_done_global_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->producers_done(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_CompletionDetector::_marshallmessagepup_producers_done_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int producers_done_global_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> producers_done_global_;
  implP|producers_done_global_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("producers_done_global_");
  implDestP|producers_done_global_;
}
PUPable_def(SINGLE_ARG(Closure_CompletionDetector::producers_done_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void count_consumed(int produced_global, int consumed_global);
 */
void CProxy_CompletionDetector::count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int produced_global, int consumed_global
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|produced_global;
    implP|consumed_global;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|produced_global;
    implP|consumed_global;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CompletionDetector::count_consumed(int produced_global, int consumed_global, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int produced_global, int consumed_global
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|produced_global;
    implP|consumed_global;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|produced_global;
    implP|consumed_global;
  }
  CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CompletionDetector::count_consumed(int produced_global, int consumed_global, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int produced_global, int consumed_global
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|produced_global;
    implP|consumed_global;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|produced_global;
    implP|consumed_global;
  }
  CkSendMsgBranchGroup(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CompletionDetector::reg_count_consumed_marshall4() {
  int epidx = CkRegisterEp("count_consumed(int produced_global, int consumed_global)",
      reinterpret_cast<CkCallFnPtr>(_call_count_consumed_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_count_consumed_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_count_consumed_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_CompletionDetector::reg_redn_wrapper_count_consumed_marshall4() {
  return CkRegisterEp("redn_wrapper_count_consumed(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_count_consumed_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_CompletionDetector::_call_count_consumed_marshall4(void* impl_msg, void* impl_obj_void)
{
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::count_consumed_4_closure* genClosure = new Closure_CompletionDetector::count_consumed_4_closure();
  implP|genClosure->produced_global;
  implP|genClosure->consumed_global;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->count_consumed(genClosure);
  genClosure->deref();
}
int CkIndex_CompletionDetector::_callmarshall_count_consumed_marshall4(char* impl_buf, void* impl_obj_void) {
  CompletionDetector* impl_obj = static_cast<CompletionDetector*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_CompletionDetector::count_consumed_4_closure* genClosure = new Closure_CompletionDetector::count_consumed_4_closure();
  implP|genClosure->produced_global;
  implP|genClosure->consumed_global;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->count_consumed(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_CompletionDetector::_marshallmessagepup_count_consumed_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int produced_global, int consumed_global*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> produced_global;
  implP|produced_global;
  PUP::detail::TemporaryObjectHolder<int> consumed_global;
  implP|consumed_global;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("produced_global");
  implDestP|produced_global;
  if (implDestP.hasComments()) implDestP.comment("consumed_global");
  implDestP|consumed_global;
}
PUPable_def(SINGLE_ARG(Closure_CompletionDetector::count_consumed_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CompletionDetector();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
 */
void CProxySection_CompletionDetector::start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_producers;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)start;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)allProduced;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)finish;
    implP|prio_;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_start_detection_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void producers_done(int producers_done_global_);
 */
void CProxySection_CompletionDetector::producers_done(int producers_done_global_, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int producers_done_global_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|producers_done_global_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|producers_done_global_;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_producers_done_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void count_consumed(int produced_global, int consumed_global);
 */
void CProxySection_CompletionDetector::count_consumed(int produced_global, int consumed_global, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int produced_global, int consumed_global
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|produced_global;
    implP|consumed_global;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|produced_global;
    implP|consumed_global;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CompletionDetector::idx_count_consumed_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CompletionDetector::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CompletionDetector::isIrreducible());
  // REG: CompletionDetector();
  idx_CompletionDetector_void();
  CkRegisterDefaultCtor(__idx, idx_CompletionDetector_void());

  // REG: void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
  idx_start_detection_marshall2();

  // REG: void producers_done(int producers_done_global_);
  idx_producers_done_marshall3();
  idx_redn_wrapper_producers_done_marshall3();

  // REG: void count_consumed(int produced_global, int consumed_global);
  idx_count_consumed_marshall4();
  idx_redn_wrapper_count_consumed_marshall4();

  CompletionDetector::__sdag_register(); // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::start_detection(int num_producers, CkCallback start, CkCallback allProduced, CkCallback finish, int prio_){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "CompletionDetector", "start_detection(int num_producers, CkCallback start, CkCallback allProduced, CkCallback finish, int prio_)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_sdag_fnc_start_detection(int num_producers, CkCallback start, CkCallback allProduced, CkCallback finish, int prio_){
  Closure_CompletionDetector::start_detection_2_closure* genClosure = new Closure_CompletionDetector::start_detection_2_closure();
  genClosure->getP0() = num_producers;
  genClosure->getP1() = start;
  genClosure->getP2() = allProduced;
  genClosure->getP3() = finish;
  genClosure->getP4() = prio_;
  _sdag_fnc_start_detection(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_sdag_fnc_start_detection(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::start_detection_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_0(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  start_detection_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_0(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    { // begin serial block
#line 7 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

        CkAssert(!running);
        running = true;
        prio = prio_;
        producers_total = num_producers;
        if (!start.isInvalid())
          contribute(start);
      
#line 874 "completion.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_while_0(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    if (producers_done_global < producers_total) {
      _slist_1(gen0);
    } else {
      _serial_3(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_while_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    if (producers_done_global < producers_total) {
      _slist_1(gen0);
    } else {
      _serial_3(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_1(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _serial_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _while_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_1(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    { // begin serial block
#line 16 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

          contribute(sizeof(int), &producers_done_local, CkReduction::sum_int,
                     CkCallback(CkReductionTarget(CompletionDetector, producers_done),
                                thisgroup));
        
#line 949 "completion.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* CompletionDetector::_when_0(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_2(gen0, static_cast<Closure_CompletionDetector::producers_done_3_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_when_0_end(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::producers_done_3_closure* gen1) {
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_2(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::producers_done_3_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_2()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    {
      int& producers_done_global_ = gen1->getP0();
      { // begin serial block
#line 21 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

          producers_done_global = producers_done_global_;
        
#line 1000 "completion.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_3(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_3()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    { // begin serial block
#line 25 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

        if (CkMyPe() == 0 && !allProduced.isInvalid())
          allProduced.send();
      
#line 1025 "completion.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_while_1(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    if (unconsumed > 0) {
      _slist_2(gen0);
    } else {
      _serial_6(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_while_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    if (unconsumed > 0) {
      _slist_2(gen0);
    } else {
      _serial_6(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_2(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_slist_2_end(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _while_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_4(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_4()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    { // begin serial block
#line 30 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

          int counts[2];
          counts[0] = produced;
          counts[1] = consumed;
          contribute(2*sizeof(int), counts, CkReduction::sum_int,
                     CkCallback(CkReductionTarget(CompletionDetector, count_consumed),
                                thisgroup));
        
#line 1103 "completion.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* CompletionDetector::_when_1(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_5(gen0, static_cast<Closure_CompletionDetector::count_consumed_4_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_when_1_end(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::count_consumed_4_closure* gen1) {
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_5(Closure_CompletionDetector::start_detection_2_closure* gen0, Closure_CompletionDetector::count_consumed_4_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_serial_5()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    {
      int& produced_global = gen1->getP0();
      int& consumed_global = gen1->getP1();
      { // begin serial block
#line 38 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

          unconsumed = produced_global - consumed_global;
        
#line 1155 "completion.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_serial_6(Closure_CompletionDetector::start_detection_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_CompletionDetector_completion_finished()), CkMyPe(), 0, NULL, this); 
  {
    int& num_producers = gen0->getP0();
    CkCallback& start = gen0->getP1();
    CkCallback& allProduced = gen0->getP2();
    CkCallback& finish = gen0->getP3();
    int& prio_ = gen0->getP4();
    { // begin serial block
#line 42 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/completion/completion.ci"

        init();
        CkAssert(!finish.isInvalid());
        contribute(finish);
      
#line 1181 "completion.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::producers_done(int producers_done_global_){
  Closure_CompletionDetector::producers_done_3_closure* genClosure = new Closure_CompletionDetector::producers_done_3_closure();
  genClosure->getP0() = producers_done_global_;
  producers_done(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::producers_done(Closure_CompletionDetector::producers_done_3_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<Closure_CompletionDetector::start_detection_2_closure*>(c->closure[0])
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::count_consumed(int produced_global, int consumed_global){
  Closure_CompletionDetector::count_consumed_4_closure* genClosure = new Closure_CompletionDetector::count_consumed_4_closure();
  genClosure->getP0() = produced_global;
  genClosure->getP1() = consumed_global;
  count_consumed(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::count_consumed(Closure_CompletionDetector::count_consumed_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(1, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
      static_cast<Closure_CompletionDetector::start_detection_2_closure*>(c->closure[0])
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_sdag_init() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,2));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::__sdag_init() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::_sdag_pup(PUP::er &p) {  // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CompletionDetector::__sdag_register() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  (void)_sdag_idx_CompletionDetector_serial_0();
  (void)_sdag_idx_CompletionDetector_serial_1();
  (void)_sdag_idx_CompletionDetector_serial_2();
  (void)_sdag_idx_CompletionDetector_serial_3();
  (void)_sdag_idx_CompletionDetector_serial_4();
  (void)_sdag_idx_CompletionDetector_serial_5();
  (void)_sdag_idx_CompletionDetector_completion_finished();
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::start_detection_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::producers_done_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::count_consumed_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::start_detection_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::producers_done_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_CompletionDetector::count_consumed_4_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_0() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_0() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_0", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_1() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_1() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_1", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_2() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_2() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_2", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_3() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_3() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_3", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_4() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_4() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_4", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_serial_5() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_serial_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_serial_5() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_serial_5", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_idx_CompletionDetector_completion_finished() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_CompletionDetector_completion_finished();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int CompletionDetector::_sdag_reg_CompletionDetector_completion_finished() { // Potentially missing CompletionDetector_SDAG_CODE in your class definition?
  return CkRegisterEp("CompletionDetector_completion_finished", NULL, 0, CkIndex_CompletionDetector::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registercompletion(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group CompletionDetector: IrrGroup{
CompletionDetector();
void start_detection(int num_producers, const CkCallback &start, const CkCallback &allProduced, const CkCallback &finish, int prio_);
void producers_done(int producers_done_global_);
void count_consumed(int produced_global, int consumed_global);
};
*/
  CkIndex_CompletionDetector::__register("CompletionDetector", sizeof(CompletionDetector));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CompletionDetector::virtual_pup(PUP::er &p) {
    recursive_pup<CompletionDetector>(dynamic_cast<CompletionDetector*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
