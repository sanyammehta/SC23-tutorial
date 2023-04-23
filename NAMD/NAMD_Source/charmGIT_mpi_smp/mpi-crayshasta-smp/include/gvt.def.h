





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_PVT::callAtSync_8_closure : public SDAG::Closure {
      

      callAtSync_8_closure() {
        init();
      }
      callAtSync_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~callAtSync_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(callAtSync_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_GVT::sumGVTIterationCounts_2_closure : public SDAG::Closure {
      

      sumGVTIterationCounts_2_closure() {
        init();
      }
      sumGVTIterationCounts_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sumGVTIterationCounts_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(sumGVTIterationCounts_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CkGroupID ThePVT;
 */
extern CkGroupID ThePVT;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ThePVT(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ThePVT;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID TheGVT;
 */
extern CkGroupID TheGVT;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_TheGVT(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|TheGVT;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message UpdateMsg{
SRentry SRs[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_UpdateMsg::operator new(size_t s){
  return UpdateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_UpdateMsg::operator new(size_t s, int* sz){
  return UpdateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_UpdateMsg::operator new(size_t s, int* sz,const int pb){
  return UpdateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_UpdateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return UpdateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_UpdateMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return UpdateMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_UpdateMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return UpdateMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_UpdateMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return UpdateMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_UpdateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(SRentry)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_UpdateMsg::CMessage_UpdateMsg() {
UpdateMsg *newmsg = (UpdateMsg *)this;
  newmsg->SRs = (SRentry *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_UpdateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_UpdateMsg::pack(UpdateMsg *msg) {
  msg->SRs = (SRentry *) ((char *)msg->SRs - (char *)msg);
  return (void *) msg;
}
UpdateMsg* CMessage_UpdateMsg::unpack(void* buf) {
  UpdateMsg *msg = (UpdateMsg *) buf;
  msg->SRs = (SRentry *) ((size_t)msg->SRs + (char *)msg);
  return msg;
}
int CMessage_UpdateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GVTMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GVTMsg::operator new(size_t s){
  return GVTMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GVTMsg::operator new(size_t s, int* sz){
  return GVTMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GVTMsg::operator new(size_t s, int* sz,const int pb){
  return GVTMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GVTMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GVTMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GVTMsg::operator new(size_t s, const int p) {
  return GVTMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_GVTMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return GVTMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_GVTMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_GVTMsg::CMessage_GVTMsg() {
GVTMsg *newmsg = (GVTMsg *)this;
}
void CMessage_GVTMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GVTMsg::pack(GVTMsg *msg) {
  return (void *) msg;
}
GVTMsg* CMessage_GVTMsg::unpack(void* buf) {
  GVTMsg *msg = (GVTMsg *) buf;
  return msg;
}
int CMessage_GVTMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message prioBcMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_prioBcMsg::operator new(size_t s){
  return prioBcMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_prioBcMsg::operator new(size_t s, int* sz){
  return prioBcMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_prioBcMsg::operator new(size_t s, int* sz,const int pb){
  return prioBcMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_prioBcMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return prioBcMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_prioBcMsg::operator new(size_t s, const int p) {
  return prioBcMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_prioBcMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return prioBcMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_prioBcMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_prioBcMsg::CMessage_prioBcMsg() {
prioBcMsg *newmsg = (prioBcMsg *)this;
}
void CMessage_prioBcMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_prioBcMsg::pack(prioBcMsg *msg) {
  return (void *) msg;
}
prioBcMsg* CMessage_prioBcMsg::unpack(void* buf) {
  prioBcMsg *msg = (prioBcMsg *) buf;
  return msg;
}
int CMessage_prioBcMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PVT: IrrGroup{
PVT();
void startPhase(prioBcMsg* impl_msg);
void startPhaseExp(prioBcMsg* impl_msg);
void beginCheckpoint(eventMsg* impl_msg);
void resumeAfterCheckpoint(eventMsg* impl_msg);
void beginLoadbalancing(eventMsg* impl_msg);
void resumeAfterLB(eventMsg* impl_msg);
void callAtSync();
void setGVT(GVTMsg* impl_msg);
void reportReduce(UpdateMsg* impl_msg);
PVT(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PVT::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(prioBcMsg* impl_msg);
 */
void CProxyElement_PVT::startPhase(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhaseExp(prioBcMsg* impl_msg);
 */
void CProxyElement_PVT::startPhaseExp(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginCheckpoint(eventMsg* impl_msg);
 */
void CProxyElement_PVT::beginCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
void CProxyElement_PVT::resumeAfterCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginLoadbalancing(eventMsg* impl_msg);
 */
void CProxyElement_PVT::beginLoadbalancing(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterLB(eventMsg* impl_msg);
 */
void CProxyElement_PVT::resumeAfterLB(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callAtSync();
 */
void CProxyElement_PVT::callAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setGVT(GVTMsg* impl_msg);
 */
void CProxyElement_PVT::setGVT(GVTMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportReduce(UpdateMsg* impl_msg);
 */
void CProxyElement_PVT::reportReduce(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT();
 */
CkGroupID CProxy_PVT::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_PVT::__idx, CkIndex_PVT::idx_PVT_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_PVT::reg_PVT_void() {
  int epidx = CkRegisterEp("PVT()",
      reinterpret_cast<CkCallFnPtr>(_call_PVT_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PVT::_call_PVT_void(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  new (impl_obj_void) PVT();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(prioBcMsg* impl_msg);
 */
void CProxy_PVT::startPhase(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::startPhase(prioBcMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::startPhase(prioBcMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_startPhase_prioBcMsg() {
  int epidx = CkRegisterEp("startPhase(prioBcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_startPhase_prioBcMsg), CMessage_prioBcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)prioBcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_startPhase_prioBcMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->startPhase((prioBcMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhaseExp(prioBcMsg* impl_msg);
 */
void CProxy_PVT::startPhaseExp(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::startPhaseExp(prioBcMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::startPhaseExp(prioBcMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_startPhaseExp_prioBcMsg() {
  int epidx = CkRegisterEp("startPhaseExp(prioBcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_startPhaseExp_prioBcMsg), CMessage_prioBcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)prioBcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_startPhaseExp_prioBcMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->startPhaseExp((prioBcMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginCheckpoint(eventMsg* impl_msg);
 */
void CProxy_PVT::beginCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::beginCheckpoint(eventMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::beginCheckpoint(eventMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_beginCheckpoint_eventMsg() {
  int epidx = CkRegisterEp("beginCheckpoint(eventMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_beginCheckpoint_eventMsg), CMessage_eventMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)eventMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_beginCheckpoint_eventMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->beginCheckpoint((eventMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
void CProxy_PVT::resumeAfterCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::resumeAfterCheckpoint(eventMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::resumeAfterCheckpoint(eventMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_resumeAfterCheckpoint_eventMsg() {
  int epidx = CkRegisterEp("resumeAfterCheckpoint(eventMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resumeAfterCheckpoint_eventMsg), CMessage_eventMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)eventMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_resumeAfterCheckpoint_eventMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->resumeAfterCheckpoint((eventMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginLoadbalancing(eventMsg* impl_msg);
 */
void CProxy_PVT::beginLoadbalancing(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::beginLoadbalancing(eventMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::beginLoadbalancing(eventMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_beginLoadbalancing_eventMsg() {
  int epidx = CkRegisterEp("beginLoadbalancing(eventMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_beginLoadbalancing_eventMsg), CMessage_eventMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)eventMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_beginLoadbalancing_eventMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->beginLoadbalancing((eventMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterLB(eventMsg* impl_msg);
 */
void CProxy_PVT::resumeAfterLB(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::resumeAfterLB(eventMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::resumeAfterLB(eventMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_resumeAfterLB_eventMsg() {
  int epidx = CkRegisterEp("resumeAfterLB(eventMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resumeAfterLB_eventMsg), CMessage_eventMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)eventMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_resumeAfterLB_eventMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->resumeAfterLB((eventMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callAtSync();
 */
void CProxy_PVT::callAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PVT::callAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PVT::callAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PVT::reg_callAtSync_void() {
  int epidx = CkRegisterEp("callAtSync()",
      reinterpret_cast<CkCallFnPtr>(_call_callAtSync_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PVT::_call_callAtSync_void(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->callAtSync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_PVT::callAtSync_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setGVT(GVTMsg* impl_msg);
 */
void CProxy_PVT::setGVT(GVTMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_PVT::setGVT(GVTMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_PVT::setGVT(GVTMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_PVT::reg_setGVT_GVTMsg() {
  int epidx = CkRegisterEp("setGVT(GVTMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setGVT_GVTMsg), CMessage_GVTMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GVTMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_setGVT_GVTMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->setGVT((GVTMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportReduce(UpdateMsg* impl_msg);
 */
void CProxy_PVT::reportReduce(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_PVT::reportReduce(UpdateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_PVT::reportReduce(UpdateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_PVT::reg_reportReduce_UpdateMsg() {
  int epidx = CkRegisterEp("reportReduce(UpdateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_reportReduce_UpdateMsg), CMessage_UpdateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)UpdateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PVT::_call_reportReduce_UpdateMsg(void* impl_msg, void* impl_obj_void)
{
  PVT* impl_obj = static_cast<PVT*>(impl_obj_void);
  impl_obj->reportReduce((UpdateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_PVT::reg_PVT_CkMigrateMessage() {
  int epidx = CkRegisterEp("PVT(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PVT_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_PVT::_call_PVT_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) PVT((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhase(prioBcMsg* impl_msg);
 */
void CProxySection_PVT::startPhase(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_startPhase_prioBcMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startPhaseExp(prioBcMsg* impl_msg);
 */
void CProxySection_PVT::startPhaseExp(prioBcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_startPhaseExp_prioBcMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginCheckpoint(eventMsg* impl_msg);
 */
void CProxySection_PVT::beginCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_beginCheckpoint_eventMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterCheckpoint(eventMsg* impl_msg);
 */
void CProxySection_PVT::resumeAfterCheckpoint(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_resumeAfterCheckpoint_eventMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginLoadbalancing(eventMsg* impl_msg);
 */
void CProxySection_PVT::beginLoadbalancing(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_beginLoadbalancing_eventMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterLB(eventMsg* impl_msg);
 */
void CProxySection_PVT::resumeAfterLB(eventMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_resumeAfterLB_eventMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callAtSync();
 */
void CProxySection_PVT::callAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_callAtSync_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_callAtSync_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setGVT(GVTMsg* impl_msg);
 */
void CProxySection_PVT::setGVT(GVTMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_setGVT_GVTMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportReduce(UpdateMsg* impl_msg);
 */
void CProxySection_PVT::reportReduce(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PVT::idx_reportReduce_UpdateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PVT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PVT::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PVT::isIrreducible());
  // REG: PVT();
  idx_PVT_void();
  CkRegisterDefaultCtor(__idx, idx_PVT_void());

  // REG: void startPhase(prioBcMsg* impl_msg);
  idx_startPhase_prioBcMsg();

  // REG: void startPhaseExp(prioBcMsg* impl_msg);
  idx_startPhaseExp_prioBcMsg();

  // REG: void beginCheckpoint(eventMsg* impl_msg);
  idx_beginCheckpoint_eventMsg();

  // REG: void resumeAfterCheckpoint(eventMsg* impl_msg);
  idx_resumeAfterCheckpoint_eventMsg();

  // REG: void beginLoadbalancing(eventMsg* impl_msg);
  idx_beginLoadbalancing_eventMsg();

  // REG: void resumeAfterLB(eventMsg* impl_msg);
  idx_resumeAfterLB_eventMsg();

  // REG: void callAtSync();
  idx_callAtSync_void();

  // REG: void setGVT(GVTMsg* impl_msg);
  idx_setGVT_GVTMsg();

  // REG: void reportReduce(UpdateMsg* impl_msg);
  idx_reportReduce_UpdateMsg();

  // REG: PVT(CkMigrateMessage* impl_msg);
  idx_PVT_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PVT_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group GVT: IrrGroup{
GVT();
void sumGVTIterationCounts();
void runGVT(UpdateMsg* impl_msg);
void computeGVT(UpdateMsg* impl_msg);
GVT(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_GVT::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumGVTIterationCounts();
 */
void CProxyElement_GVT::sumGVTIterationCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runGVT(UpdateMsg* impl_msg);
 */
void CProxyElement_GVT::runGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void computeGVT(UpdateMsg* impl_msg);
 */
void CProxyElement_GVT::computeGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT();
 */
CkGroupID CProxy_GVT::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_GVT::__idx, CkIndex_GVT::idx_GVT_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_GVT::reg_GVT_void() {
  int epidx = CkRegisterEp("GVT()",
      reinterpret_cast<CkCallFnPtr>(_call_GVT_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_GVT::_call_GVT_void(void* impl_msg, void* impl_obj_void)
{
  GVT* impl_obj = static_cast<GVT*>(impl_obj_void);
  new (impl_obj_void) GVT();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumGVTIterationCounts();
 */
void CProxy_GVT::sumGVTIterationCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_GVT::sumGVTIterationCounts(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_GVT::sumGVTIterationCounts(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_GVT::reg_sumGVTIterationCounts_void() {
  int epidx = CkRegisterEp("sumGVTIterationCounts()",
      reinterpret_cast<CkCallFnPtr>(_call_sumGVTIterationCounts_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_GVT::_call_sumGVTIterationCounts_void(void* impl_msg, void* impl_obj_void)
{
  GVT* impl_obj = static_cast<GVT*>(impl_obj_void);
  impl_obj->sumGVTIterationCounts();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_GVT::sumGVTIterationCounts_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runGVT(UpdateMsg* impl_msg);
 */
void CProxy_GVT::runGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_GVT::runGVT(UpdateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_GVT::runGVT(UpdateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_GVT::reg_runGVT_UpdateMsg() {
  int epidx = CkRegisterEp("runGVT(UpdateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_runGVT_UpdateMsg), CMessage_UpdateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)UpdateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_GVT::_call_runGVT_UpdateMsg(void* impl_msg, void* impl_obj_void)
{
  GVT* impl_obj = static_cast<GVT*>(impl_obj_void);
  impl_obj->runGVT((UpdateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void computeGVT(UpdateMsg* impl_msg);
 */
void CProxy_GVT::computeGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_GVT::computeGVT(UpdateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_GVT::computeGVT(UpdateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_GVT::reg_computeGVT_UpdateMsg() {
  int epidx = CkRegisterEp("computeGVT(UpdateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_computeGVT_UpdateMsg), CMessage_UpdateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)UpdateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_GVT::_call_computeGVT_UpdateMsg(void* impl_msg, void* impl_obj_void)
{
  GVT* impl_obj = static_cast<GVT*>(impl_obj_void);
  impl_obj->computeGVT((UpdateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_GVT::reg_GVT_CkMigrateMessage() {
  int epidx = CkRegisterEp("GVT(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_GVT_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_GVT::_call_GVT_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) GVT((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumGVTIterationCounts();
 */
void CProxySection_GVT::sumGVTIterationCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_GVT::idx_sumGVTIterationCounts_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runGVT(UpdateMsg* impl_msg);
 */
void CProxySection_GVT::runGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_GVT::idx_runGVT_UpdateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void computeGVT(UpdateMsg* impl_msg);
 */
void CProxySection_GVT::computeGVT(UpdateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_GVT::idx_computeGVT_UpdateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: GVT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_GVT::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,GVT::isIrreducible());
  // REG: GVT();
  idx_GVT_void();
  CkRegisterDefaultCtor(__idx, idx_GVT_void());

  // REG: void sumGVTIterationCounts();
  idx_sumGVTIterationCounts_void();

  // REG: void runGVT(UpdateMsg* impl_msg);
  idx_runGVT_UpdateMsg();

  // REG: void computeGVT(UpdateMsg* impl_msg);
  idx_computeGVT_UpdateMsg();

  // REG: GVT(CkMigrateMessage* impl_msg);
  idx_GVT_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_GVT_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registergvt(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerposeMsgs();

  CkRegisterReadonly("ThePVT","CkGroupID",sizeof(ThePVT),(void *) &ThePVT,__xlater_roPup_ThePVT);

  CkRegisterReadonly("TheGVT","CkGroupID",sizeof(TheGVT),(void *) &TheGVT,__xlater_roPup_TheGVT);

/* REG: message UpdateMsg{
SRentry SRs[];
}
;
*/
CMessage_UpdateMsg::__register("UpdateMsg", sizeof(UpdateMsg),(CkPackFnPtr) UpdateMsg::pack,(CkUnpackFnPtr) UpdateMsg::unpack);

/* REG: message GVTMsg;
*/
CMessage_GVTMsg::__register("GVTMsg", sizeof(GVTMsg),(CkPackFnPtr) GVTMsg::pack,(CkUnpackFnPtr) GVTMsg::unpack);

/* REG: message prioBcMsg;
*/
CMessage_prioBcMsg::__register("prioBcMsg", sizeof(prioBcMsg),(CkPackFnPtr) prioBcMsg::pack,(CkUnpackFnPtr) prioBcMsg::unpack);

/* REG: group PVT: IrrGroup{
PVT();
void startPhase(prioBcMsg* impl_msg);
void startPhaseExp(prioBcMsg* impl_msg);
void beginCheckpoint(eventMsg* impl_msg);
void resumeAfterCheckpoint(eventMsg* impl_msg);
void beginLoadbalancing(eventMsg* impl_msg);
void resumeAfterLB(eventMsg* impl_msg);
void callAtSync();
void setGVT(GVTMsg* impl_msg);
void reportReduce(UpdateMsg* impl_msg);
PVT(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PVT::__register("PVT", sizeof(PVT));

/* REG: group GVT: IrrGroup{
GVT();
void sumGVTIterationCounts();
void runGVT(UpdateMsg* impl_msg);
void computeGVT(UpdateMsg* impl_msg);
GVT(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_GVT::__register("GVT", sizeof(GVT));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PVT::virtual_pup(PUP::er &p) {
    recursive_pup<PVT>(dynamic_cast<PVT*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_GVT::virtual_pup(PUP::er &p) {
    recursive_pup<GVT>(dynamic_cast<GVT*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
