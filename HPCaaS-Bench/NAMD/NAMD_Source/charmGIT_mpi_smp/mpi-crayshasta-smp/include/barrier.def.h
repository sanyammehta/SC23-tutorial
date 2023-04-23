
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Barrier::notify_2_closure : public SDAG::Closure {
      

      notify_2_closure() {
        init();
      }
      notify_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~notify_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(notify_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Barrier::callFP_3_closure : public SDAG::Closure {
      

      callFP_3_closure() {
        init();
      }
      callFP_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~callFP_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(callFP_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Barrier::reset_4_closure : public SDAG::Closure {
      

      reset_4_closure() {
        init();
      }
      reset_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~reset_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(reset_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message FP;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FP::operator new(size_t s){
  return FP::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_FP::operator new(size_t s, int* sz){
  return FP::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_FP::operator new(size_t s, int* sz,const int pb){
  return FP::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_FP::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return FP::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_FP::operator new(size_t s, const int p) {
  return FP::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_FP::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return FP::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_FP::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_FP::CMessage_FP() {
FP *newmsg = (FP *)this;
}
void CMessage_FP::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FP::pack(FP *msg) {
  return (void *) msg;
}
FP* CMessage_FP::unpack(void* buf) {
  FP *msg = (FP *) buf;
  return msg;
}
int CMessage_FP::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Barrier: IrrGroup{
Barrier();
void notify();
void callFP();
void reset();
void atBarrier(FP* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Barrier::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Barrier();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void notify();
 */
void CProxyElement_Barrier::notify(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callFP();
 */
void CProxyElement_Barrier::callFP(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxyElement_Barrier::reset(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier(FP* impl_msg);
 */
void CProxyElement_Barrier::atBarrier(FP* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Barrier();
 */
CkGroupID CProxy_Barrier::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Barrier::__idx, CkIndex_Barrier::idx_Barrier_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_Barrier::reg_Barrier_void() {
  int epidx = CkRegisterEp("Barrier()",
      reinterpret_cast<CkCallFnPtr>(_call_Barrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Barrier::_call_Barrier_void(void* impl_msg, void* impl_obj_void)
{
  Barrier* impl_obj = static_cast<Barrier*>(impl_obj_void);
  new (impl_obj_void) Barrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void notify();
 */
void CProxy_Barrier::notify(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Barrier::notify(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Barrier::notify(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Barrier::reg_notify_void() {
  int epidx = CkRegisterEp("notify()",
      reinterpret_cast<CkCallFnPtr>(_call_notify_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Barrier::_call_notify_void(void* impl_msg, void* impl_obj_void)
{
  Barrier* impl_obj = static_cast<Barrier*>(impl_obj_void);
  impl_obj->notify();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Barrier::notify_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callFP();
 */
void CProxy_Barrier::callFP(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Barrier::callFP(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Barrier::callFP(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Barrier::reg_callFP_void() {
  int epidx = CkRegisterEp("callFP()",
      reinterpret_cast<CkCallFnPtr>(_call_callFP_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Barrier::_call_callFP_void(void* impl_msg, void* impl_obj_void)
{
  Barrier* impl_obj = static_cast<Barrier*>(impl_obj_void);
  impl_obj->callFP();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Barrier::callFP_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxy_Barrier::reset(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Barrier::reset(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Barrier::reset(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Barrier::reg_reset_void() {
  int epidx = CkRegisterEp("reset()",
      reinterpret_cast<CkCallFnPtr>(_call_reset_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Barrier::_call_reset_void(void* impl_msg, void* impl_obj_void)
{
  Barrier* impl_obj = static_cast<Barrier*>(impl_obj_void);
  impl_obj->reset();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Barrier::reset_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier(FP* impl_msg);
 */
void CProxy_Barrier::atBarrier(FP* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Barrier::atBarrier(FP* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Barrier::atBarrier(FP* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Barrier::reg_atBarrier_FP() {
  int epidx = CkRegisterEp("atBarrier(FP* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_atBarrier_FP), CMessage_FP::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FP::ckDebugPup);
  return epidx;
}

void CkIndex_Barrier::_call_atBarrier_FP(void* impl_msg, void* impl_obj_void)
{
  Barrier* impl_obj = static_cast<Barrier*>(impl_obj_void);
  impl_obj->atBarrier((FP*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Barrier();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void notify();
 */
void CProxySection_Barrier::notify(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Barrier::idx_notify_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Barrier::idx_notify_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callFP();
 */
void CProxySection_Barrier::callFP(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Barrier::idx_callFP_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Barrier::idx_callFP_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxySection_Barrier::reset(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Barrier::idx_reset_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Barrier::idx_reset_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier(FP* impl_msg);
 */
void CProxySection_Barrier::atBarrier(FP* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Barrier::idx_atBarrier_FP(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Barrier::idx_atBarrier_FP(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Barrier::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Barrier::isIrreducible());
  // REG: Barrier();
  idx_Barrier_void();
  CkRegisterDefaultCtor(__idx, idx_Barrier_void());

  // REG: void notify();
  idx_notify_void();

  // REG: void callFP();
  idx_callFP_void();

  // REG: void reset();
  idx_reset_void();

  // REG: void atBarrier(FP* impl_msg);
  idx_atBarrier_FP();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerbarrier(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message FP;
*/
CMessage_FP::__register("FP", sizeof(FP),(CkPackFnPtr) FP::pack,(CkUnpackFnPtr) FP::unpack);

/* REG: group Barrier: IrrGroup{
Barrier();
void notify();
void callFP();
void reset();
void atBarrier(FP* impl_msg);
};
*/
  CkIndex_Barrier::__register("Barrier", sizeof(Barrier));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Barrier::virtual_pup(PUP::er &p) {
    recursive_pup<Barrier>(dynamic_cast<Barrier*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
