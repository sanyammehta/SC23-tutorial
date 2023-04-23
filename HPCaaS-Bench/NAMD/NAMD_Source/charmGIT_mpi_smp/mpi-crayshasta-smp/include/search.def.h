
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_idaStarWorker::ChildFinished_2_closure : public SDAG::Closure {
            int dummy;


      ChildFinished_2_closure() {
        init();
      }
      ChildFinished_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return dummy;}
      void pup(PUP::er& __p) {
        __p | dummy;
        packClosure(__p);
      }
      virtual ~ChildFinished_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ChildFinished_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_idaStarGroup::ChildFinished_2_closure : public SDAG::Closure {
            int dummy;


      ChildFinished_2_closure() {
        init();
      }
      ChildFinished_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return dummy;}
      void pup(PUP::er& __p) {
        __p | dummy;
        packClosure(__p);
      }
      virtual ~ChildFinished_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ChildFinished_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_idaStarGroup::SolutionFound_4_closure : public SDAG::Closure {
            CkPointer<problem> soln;


      SolutionFound_4_closure() {
        init();
      }
      SolutionFound_4_closure(CkMigrateMessage*) {
        init();
      }
            CkPointer<problem> & getP0() { return soln;}
      void pup(PUP::er& __p) {
        __p | soln;
        packClosure(__p);
      }
      virtual ~SolutionFound_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(SolutionFound_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_idaStarGroup::Terminate_5_closure : public SDAG::Closure {
      

      Terminate_5_closure() {
        init();
      }
      Terminate_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~Terminate_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(Terminate_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message searchResults;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_searchResults::operator new(size_t s){
  return searchResults::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_searchResults::operator new(size_t s, int* sz){
  return searchResults::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_searchResults::operator new(size_t s, int* sz,const int pb){
  return searchResults::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_searchResults::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return searchResults::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_searchResults::operator new(size_t s, const int p) {
  return searchResults::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_searchResults::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return searchResults::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_searchResults::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_searchResults::CMessage_searchResults() {
searchResults *newmsg = (searchResults *)this;
}
void CMessage_searchResults::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_searchResults::pack(searchResults *msg) {
  return (void *) msg;
}
searchResults* CMessage_searchResults::unpack(void* buf) {
  searchResults *msg = (searchResults *) buf;
  return msg;
}
int CMessage_searchResults::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare idaStarWorker: Chare{
idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
void ChildFinished(int dummy);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_idaStarWorker::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
 */
CkChareID CProxy_idaStarWorker::ckNew(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)master;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|maxdepth;
    implP|charesize;
    implP|serialdist;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)master;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|maxdepth;
    implP|charesize;
    implP|serialdist;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_idaStarWorker::__idx, CkIndex_idaStarWorker::idx_idaStarWorker_marshall1(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_idaStarWorker::ckNew(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist, CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)master;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|maxdepth;
    implP|charesize;
    implP|serialdist;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)master;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|maxdepth;
    implP|charesize;
    implP|serialdist;
  }
  CkCreateChare(CkIndex_idaStarWorker::__idx, CkIndex_idaStarWorker::idx_idaStarWorker_marshall1(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_idaStarWorker::reg_idaStarWorker_marshall1() {
  int epidx = CkRegisterEp("idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist)",
      reinterpret_cast<CkCallFnPtr>(_call_idaStarWorker_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_idaStarWorker_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_idaStarWorker_marshall1);

  return epidx;
}

void CkIndex_idaStarWorker::_call_idaStarWorker_marshall1(void* impl_msg, void* impl_obj_void)
{
  idaStarWorker* impl_obj = static_cast<idaStarWorker*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> master;
  implP|master;
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) idaStarWorker(std::move(master.t), std::move(issue.t), std::move(maxdepth.t), std::move(charesize.t), std::move(serialdist.t));
}
int CkIndex_idaStarWorker::_callmarshall_idaStarWorker_marshall1(char* impl_buf, void* impl_obj_void) {
  idaStarWorker* impl_obj = static_cast<idaStarWorker*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> master;
  implP|master;
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) idaStarWorker(std::move(master.t), std::move(issue.t), std::move(maxdepth.t), std::move(charesize.t), std::move(serialdist.t));
  return implP.size();
}
void CkIndex_idaStarWorker::_marshallmessagepup_idaStarWorker_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> master;
  implP|master;
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("master");
  implDestP|master;
  if (implDestP.hasComments()) implDestP.comment("issue");
  implDestP|issue;
  if (implDestP.hasComments()) implDestP.comment("maxdepth");
  implDestP|maxdepth;
  if (implDestP.hasComments()) implDestP.comment("charesize");
  implDestP|charesize;
  if (implDestP.hasComments()) implDestP.comment("serialdist");
  implDestP|serialdist;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ChildFinished(int dummy);
 */
void CProxy_idaStarWorker::ChildFinished(int dummy, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_idaStarWorker::idx_ChildFinished_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_idaStarWorker::idx_ChildFinished_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_idaStarWorker::idx_ChildFinished_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_idaStarWorker::reg_ChildFinished_marshall2() {
  int epidx = CkRegisterEp("ChildFinished(int dummy)",
      reinterpret_cast<CkCallFnPtr>(_call_ChildFinished_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ChildFinished_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ChildFinished_marshall2);

  return epidx;
}

void CkIndex_idaStarWorker::_call_ChildFinished_marshall2(void* impl_msg, void* impl_obj_void)
{
  idaStarWorker* impl_obj = static_cast<idaStarWorker*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ChildFinished(std::move(dummy.t));
}
int CkIndex_idaStarWorker::_callmarshall_ChildFinished_marshall2(char* impl_buf, void* impl_obj_void) {
  idaStarWorker* impl_obj = static_cast<idaStarWorker*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ChildFinished(std::move(dummy.t));
  return implP.size();
}
void CkIndex_idaStarWorker::_marshallmessagepup_ChildFinished_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dummy");
  implDestP|dummy;
}
PUPable_def(SINGLE_ARG(Closure_idaStarWorker::ChildFinished_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_idaStarWorker::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
  idx_idaStarWorker_marshall1();

  // REG: void ChildFinished(int dummy);
  idx_ChildFinished_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group idaStarGroup: IrrGroup{
idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
void ChildFinished(int dummy);
void ReductionResults(CkReductionMsg* impl_msg);
void SolutionFound(const CkPointer<problem> &soln);
void Terminate();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_idaStarGroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ChildFinished(int dummy);
 */
void CProxyElement_idaStarGroup::ChildFinished(int dummy, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionResults(CkReductionMsg* impl_msg);
 */
void CProxyElement_idaStarGroup::ReductionResults(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SolutionFound(const CkPointer<problem> &soln);
 */
void CProxyElement_idaStarGroup::SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkPointer<problem> &soln
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxyElement_idaStarGroup::Terminate(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
CkGroupID CProxy_idaStarGroup::ckNew(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|startdepth;
    implP|maxdepth;
    implP|stride;
    implP|window;
    implP|charesize;
    implP|serialdist;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)Finished;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|startdepth;
    implP|maxdepth;
    implP|stride;
    implP|window;
    implP|charesize;
    implP|serialdist;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)Finished;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_idaStarGroup::__idx, CkIndex_idaStarGroup::idx_idaStarGroup_marshall1(), impl_msg);
  return gId;
}
  CProxy_idaStarGroup::CProxy_idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|startdepth;
    implP|maxdepth;
    implP|stride;
    implP|window;
    implP|charesize;
    implP|serialdist;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)Finished;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)issue;
    implP|startdepth;
    implP|maxdepth;
    implP|stride;
    implP|window;
    implP|charesize;
    implP|serialdist;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)Finished;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_idaStarGroup::__idx, CkIndex_idaStarGroup::idx_idaStarGroup_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_idaStarGroup::reg_idaStarGroup_marshall1() {
  int epidx = CkRegisterEp("idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished)",
      reinterpret_cast<CkCallFnPtr>(_call_idaStarGroup_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_idaStarGroup_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_idaStarGroup_marshall1);

  return epidx;
}

void CkIndex_idaStarGroup::_call_idaStarGroup_marshall1(void* impl_msg, void* impl_obj_void)
{
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> startdepth;
  implP|startdepth;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> stride;
  implP|stride;
  PUP::detail::TemporaryObjectHolder<int> window;
  implP|window;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  PUP::detail::TemporaryObjectHolder<CkCallback> Finished;
  implP|Finished;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) idaStarGroup(std::move(issue.t), std::move(startdepth.t), std::move(maxdepth.t), std::move(stride.t), std::move(window.t), std::move(charesize.t), std::move(serialdist.t), std::move(Finished.t));
}
int CkIndex_idaStarGroup::_callmarshall_idaStarGroup_marshall1(char* impl_buf, void* impl_obj_void) {
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> startdepth;
  implP|startdepth;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> stride;
  implP|stride;
  PUP::detail::TemporaryObjectHolder<int> window;
  implP|window;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  PUP::detail::TemporaryObjectHolder<CkCallback> Finished;
  implP|Finished;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) idaStarGroup(std::move(issue.t), std::move(startdepth.t), std::move(maxdepth.t), std::move(stride.t), std::move(window.t), std::move(charesize.t), std::move(serialdist.t), std::move(Finished.t));
  return implP.size();
}
void CkIndex_idaStarGroup::_marshallmessagepup_idaStarGroup_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> issue;
  implP|issue;
  PUP::detail::TemporaryObjectHolder<int> startdepth;
  implP|startdepth;
  PUP::detail::TemporaryObjectHolder<int> maxdepth;
  implP|maxdepth;
  PUP::detail::TemporaryObjectHolder<int> stride;
  implP|stride;
  PUP::detail::TemporaryObjectHolder<int> window;
  implP|window;
  PUP::detail::TemporaryObjectHolder<int> charesize;
  implP|charesize;
  PUP::detail::TemporaryObjectHolder<int> serialdist;
  implP|serialdist;
  PUP::detail::TemporaryObjectHolder<CkCallback> Finished;
  implP|Finished;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("issue");
  implDestP|issue;
  if (implDestP.hasComments()) implDestP.comment("startdepth");
  implDestP|startdepth;
  if (implDestP.hasComments()) implDestP.comment("maxdepth");
  implDestP|maxdepth;
  if (implDestP.hasComments()) implDestP.comment("stride");
  implDestP|stride;
  if (implDestP.hasComments()) implDestP.comment("window");
  implDestP|window;
  if (implDestP.hasComments()) implDestP.comment("charesize");
  implDestP|charesize;
  if (implDestP.hasComments()) implDestP.comment("serialdist");
  implDestP|serialdist;
  if (implDestP.hasComments()) implDestP.comment("Finished");
  implDestP|Finished;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ChildFinished(int dummy);
 */
void CProxy_idaStarGroup::ChildFinished(int dummy, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_idaStarGroup::ChildFinished(int dummy, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_idaStarGroup::ChildFinished(int dummy, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  CkSendMsgBranchGroup(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_idaStarGroup::reg_ChildFinished_marshall2() {
  int epidx = CkRegisterEp("ChildFinished(int dummy)",
      reinterpret_cast<CkCallFnPtr>(_call_ChildFinished_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ChildFinished_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ChildFinished_marshall2);

  return epidx;
}

void CkIndex_idaStarGroup::_call_ChildFinished_marshall2(void* impl_msg, void* impl_obj_void)
{
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ChildFinished(std::move(dummy.t));
}
int CkIndex_idaStarGroup::_callmarshall_ChildFinished_marshall2(char* impl_buf, void* impl_obj_void) {
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ChildFinished(std::move(dummy.t));
  return implP.size();
}
void CkIndex_idaStarGroup::_marshallmessagepup_ChildFinished_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dummy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dummy;
  implP|dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dummy");
  implDestP|dummy;
}
PUPable_def(SINGLE_ARG(Closure_idaStarGroup::ChildFinished_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionResults(CkReductionMsg* impl_msg);
 */
void CProxy_idaStarGroup::ReductionResults(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_idaStarGroup::ReductionResults(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_idaStarGroup::ReductionResults(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_idaStarGroup::reg_ReductionResults_CkReductionMsg() {
  int epidx = CkRegisterEp("ReductionResults(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReductionResults_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_idaStarGroup::_call_ReductionResults_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  impl_obj->ReductionResults((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SolutionFound(const CkPointer<problem> &soln);
 */
void CProxy_idaStarGroup::SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkPointer<problem> &soln
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_idaStarGroup::SolutionFound(const CkPointer<problem> &soln, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkPointer<problem> &soln
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
  }
  CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_idaStarGroup::SolutionFound(const CkPointer<problem> &soln, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkPointer<problem> &soln
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
  }
  CkSendMsgBranchGroup(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_idaStarGroup::reg_SolutionFound_marshall4() {
  int epidx = CkRegisterEp("SolutionFound(const CkPointer<problem> &soln)",
      reinterpret_cast<CkCallFnPtr>(_call_SolutionFound_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_SolutionFound_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_SolutionFound_marshall4);

  return epidx;
}

void CkIndex_idaStarGroup::_call_SolutionFound_marshall4(void* impl_msg, void* impl_obj_void)
{
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<problem> &soln*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> soln;
  implP|soln;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->SolutionFound(std::move(soln.t));
}
int CkIndex_idaStarGroup::_callmarshall_SolutionFound_marshall4(char* impl_buf, void* impl_obj_void) {
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkPointer<problem> &soln*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> soln;
  implP|soln;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->SolutionFound(std::move(soln.t));
  return implP.size();
}
void CkIndex_idaStarGroup::_marshallmessagepup_SolutionFound_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<problem> &soln*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<problem>> soln;
  implP|soln;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("soln");
  implDestP|soln;
}
PUPable_def(SINGLE_ARG(Closure_idaStarGroup::SolutionFound_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxy_idaStarGroup::Terminate(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_idaStarGroup::Terminate(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_idaStarGroup::Terminate(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_idaStarGroup::reg_Terminate_void() {
  int epidx = CkRegisterEp("Terminate()",
      reinterpret_cast<CkCallFnPtr>(_call_Terminate_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_idaStarGroup::_call_Terminate_void(void* impl_msg, void* impl_obj_void)
{
  idaStarGroup* impl_obj = static_cast<idaStarGroup*>(impl_obj_void);
  impl_obj->Terminate();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_idaStarGroup::Terminate_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ChildFinished(int dummy);
 */
void CProxySection_idaStarGroup::ChildFinished(int dummy, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dummy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_ChildFinished_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionResults(CkReductionMsg* impl_msg);
 */
void CProxySection_idaStarGroup::ReductionResults(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_ReductionResults_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SolutionFound(const CkPointer<problem> &soln);
 */
void CProxySection_idaStarGroup::SolutionFound(const CkPointer<problem> &soln, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkPointer<problem> &soln
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<problem>>::type>::type &)soln;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_SolutionFound_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxySection_idaStarGroup::Terminate(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_idaStarGroup::idx_Terminate_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_idaStarGroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,idaStarGroup::isIrreducible());
  // REG: idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
  idx_idaStarGroup_marshall1();

  // REG: void ChildFinished(int dummy);
  idx_ChildFinished_marshall2();

  // REG: void ReductionResults(CkReductionMsg* impl_msg);
  idx_ReductionResults_CkReductionMsg();

  // REG: void SolutionFound(const CkPointer<problem> &soln);
  idx_SolutionFound_marshall4();

  // REG: void Terminate();
  idx_Terminate_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registersearch(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message searchResults;
*/
CMessage_searchResults::__register("searchResults", sizeof(searchResults),(CkPackFnPtr) searchResults::pack,(CkUnpackFnPtr) searchResults::unpack);

/* REG: chare idaStarWorker: Chare{
idaStarWorker(const CkGroupID &master, const CkPointer<problem> &issue, int maxdepth, int charesize, int serialdist);
void ChildFinished(int dummy);
};
*/
  CkIndex_idaStarWorker::__register("idaStarWorker", sizeof(idaStarWorker));

/* REG: group idaStarGroup: IrrGroup{
idaStarGroup(const CkPointer<problem> &issue, int startdepth, int maxdepth, int stride, int window, int charesize, int serialdist, const CkCallback &Finished);
void ChildFinished(int dummy);
void ReductionResults(CkReductionMsg* impl_msg);
void SolutionFound(const CkPointer<problem> &soln);
void Terminate();
};
*/
  CkIndex_idaStarGroup::__register("idaStarGroup", sizeof(idaStarGroup));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_idaStarWorker::virtual_pup(PUP::er &p) {
    recursive_pup<idaStarWorker>(dynamic_cast<idaStarWorker*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_idaStarGroup::virtual_pup(PUP::er &p) {
    recursive_pup<idaStarGroup>(dynamic_cast<idaStarGroup*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
