

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



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


/* DEFS: readonly CProxy_pathHistoryManager pathHistoryManagerProxy;
 */
extern CProxy_pathHistoryManager pathHistoryManagerProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_pathHistoryManagerProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|pathHistoryManagerProxy;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare pathHistoryMain: Chare{
pathHistoryMain(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_pathHistoryMain::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryMain(CkArgMsg* impl_msg);
 */
CkChareID CProxy_pathHistoryMain::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_pathHistoryMain::__idx, CkIndex_pathHistoryMain::idx_pathHistoryMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_pathHistoryMain::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_pathHistoryMain::__idx, CkIndex_pathHistoryMain::idx_pathHistoryMain_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_pathHistoryMain::reg_pathHistoryMain_CkArgMsg() {
  int epidx = CkRegisterEp("pathHistoryMain(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pathHistoryMain_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_pathHistoryMain::_call_pathHistoryMain_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  pathHistoryMain* impl_obj = static_cast<pathHistoryMain*>(impl_obj_void);
  new (impl_obj_void) pathHistoryMain((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_pathHistoryMain::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: pathHistoryMain(CkArgMsg* impl_msg);
  idx_pathHistoryMain_CkArgMsg();
  CkRegisterMainChare(__idx, idx_pathHistoryMain_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message pathInformationMsg{
PathHistoryTableEntry history[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_pathInformationMsg::operator new(size_t s){
  return pathInformationMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_pathInformationMsg::operator new(size_t s, int* sz){
  return pathInformationMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_pathInformationMsg::operator new(size_t s, int* sz,const int pb){
  return pathInformationMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_pathInformationMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return pathInformationMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_pathInformationMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return pathInformationMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_pathInformationMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return pathInformationMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_pathInformationMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return pathInformationMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_pathInformationMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(PathHistoryTableEntry)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_pathInformationMsg::CMessage_pathInformationMsg() {
pathInformationMsg *newmsg = (pathInformationMsg *)this;
  newmsg->history = (PathHistoryTableEntry *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_pathInformationMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_pathInformationMsg::pack(pathInformationMsg *msg) {
  msg->history = (PathHistoryTableEntry *) ((char *)msg->history - (char *)msg);
  return (void *) msg;
}
pathInformationMsg* CMessage_pathInformationMsg::unpack(void* buf) {
  pathInformationMsg *msg = (pathInformationMsg *) buf;
  msg->history = (PathHistoryTableEntry *) ((size_t)msg->history + (char *)msg);
  return msg;
}
int CMessage_pathInformationMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group pathHistoryManager: IrrGroup{
pathHistoryManager();
void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
pathHistoryManager(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_pathHistoryManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
void CProxyElement_pathHistoryManager::traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
void CProxyElement_pathHistoryManager::broadcastCriticalPathProjections(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
void CProxyElement_pathHistoryManager::criticalPathProjectionsDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
void CProxyElement_pathHistoryManager::saveCriticalPathForPriorities(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager();
 */
CkGroupID CProxy_pathHistoryManager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_pathHistoryManager::__idx, CkIndex_pathHistoryManager::idx_pathHistoryManager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_pathHistoryManager::reg_pathHistoryManager_void() {
  int epidx = CkRegisterEp("pathHistoryManager()",
      reinterpret_cast<CkCallFnPtr>(_call_pathHistoryManager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_pathHistoryManager_void(void* impl_msg, void* impl_obj_void)
{
  pathHistoryManager* impl_obj = static_cast<pathHistoryManager*>(impl_obj_void);
  new (impl_obj_void) pathHistoryManager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
void CProxy_pathHistoryManager::traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_pathHistoryManager::traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_pathHistoryManager::traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_pathHistoryManager::reg_traceCriticalPathBackStepByStep_pathInformationMsg() {
  int epidx = CkRegisterEp("traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_traceCriticalPathBackStepByStep_pathInformationMsg), CMessage_pathInformationMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)pathInformationMsg::ckDebugPup);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_traceCriticalPathBackStepByStep_pathInformationMsg(void* impl_msg, void* impl_obj_void)
{
  pathHistoryManager* impl_obj = static_cast<pathHistoryManager*>(impl_obj_void);
  impl_obj->traceCriticalPathBackStepByStep((pathInformationMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
void CProxy_pathHistoryManager::broadcastCriticalPathProjections(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_pathHistoryManager::broadcastCriticalPathProjections(pathInformationMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_pathHistoryManager::broadcastCriticalPathProjections(pathInformationMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_pathHistoryManager::reg_broadcastCriticalPathProjections_pathInformationMsg() {
  int epidx = CkRegisterEp("broadcastCriticalPathProjections(pathInformationMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_broadcastCriticalPathProjections_pathInformationMsg), CMessage_pathInformationMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)pathInformationMsg::ckDebugPup);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_broadcastCriticalPathProjections_pathInformationMsg(void* impl_msg, void* impl_obj_void)
{
  pathHistoryManager* impl_obj = static_cast<pathHistoryManager*>(impl_obj_void);
  impl_obj->broadcastCriticalPathProjections((pathInformationMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
void CProxy_pathHistoryManager::criticalPathProjectionsDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_pathHistoryManager::criticalPathProjectionsDone(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_pathHistoryManager::criticalPathProjectionsDone(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_pathHistoryManager::reg_criticalPathProjectionsDone_CkReductionMsg() {
  int epidx = CkRegisterEp("criticalPathProjectionsDone(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_criticalPathProjectionsDone_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_criticalPathProjectionsDone_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  pathHistoryManager* impl_obj = static_cast<pathHistoryManager*>(impl_obj_void);
  impl_obj->criticalPathProjectionsDone((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
void CProxy_pathHistoryManager::saveCriticalPathForPriorities(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_pathHistoryManager::saveCriticalPathForPriorities(pathInformationMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_pathHistoryManager::saveCriticalPathForPriorities(pathInformationMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_pathHistoryManager::reg_saveCriticalPathForPriorities_pathInformationMsg() {
  int epidx = CkRegisterEp("saveCriticalPathForPriorities(pathInformationMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_saveCriticalPathForPriorities_pathInformationMsg), CMessage_pathInformationMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)pathInformationMsg::ckDebugPup);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_saveCriticalPathForPriorities_pathInformationMsg(void* impl_msg, void* impl_obj_void)
{
  pathHistoryManager* impl_obj = static_cast<pathHistoryManager*>(impl_obj_void);
  impl_obj->saveCriticalPathForPriorities((pathInformationMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_pathHistoryManager::reg_pathHistoryManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("pathHistoryManager(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pathHistoryManager_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_pathHistoryManager::_call_pathHistoryManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) pathHistoryManager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
 */
void CProxySection_pathHistoryManager::traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_traceCriticalPathBackStepByStep_pathInformationMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
 */
void CProxySection_pathHistoryManager::broadcastCriticalPathProjections(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_broadcastCriticalPathProjections_pathInformationMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
 */
void CProxySection_pathHistoryManager::criticalPathProjectionsDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_criticalPathProjectionsDone_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
 */
void CProxySection_pathHistoryManager::saveCriticalPathForPriorities(pathInformationMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_pathHistoryManager::idx_saveCriticalPathForPriorities_pathInformationMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pathHistoryManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_pathHistoryManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,pathHistoryManager::isIrreducible());
  // REG: pathHistoryManager();
  idx_pathHistoryManager_void();
  CkRegisterDefaultCtor(__idx, idx_pathHistoryManager_void());

  // REG: void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
  idx_traceCriticalPathBackStepByStep_pathInformationMsg();

  // REG: void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
  idx_broadcastCriticalPathProjections_pathInformationMsg();

  // REG: void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
  idx_criticalPathProjectionsDone_CkReductionMsg();

  // REG: void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
  idx_saveCriticalPathForPriorities_pathInformationMsg();

  // REG: pathHistoryManager(CkMigrateMessage* impl_msg);
  idx_pathHistoryManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_pathHistoryManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPathHistory(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("pathHistoryManagerProxy","CProxy_pathHistoryManager",sizeof(pathHistoryManagerProxy),(void *) &pathHistoryManagerProxy,__xlater_roPup_pathHistoryManagerProxy);

  _registerInitCall(initializeCriticalPath,0);

/* REG: mainchare pathHistoryMain: Chare{
pathHistoryMain(CkArgMsg* impl_msg);
};
*/
  CkIndex_pathHistoryMain::__register("pathHistoryMain", sizeof(pathHistoryMain));

/* REG: message pathInformationMsg{
PathHistoryTableEntry history[];
}
;
*/
CMessage_pathInformationMsg::__register("pathInformationMsg", sizeof(pathInformationMsg),(CkPackFnPtr) pathInformationMsg::pack,(CkUnpackFnPtr) pathInformationMsg::unpack);

/* REG: group pathHistoryManager: IrrGroup{
pathHistoryManager();
void traceCriticalPathBackStepByStep(pathInformationMsg* impl_msg);
void broadcastCriticalPathProjections(pathInformationMsg* impl_msg);
void criticalPathProjectionsDone(CkReductionMsg* impl_msg);
void saveCriticalPathForPriorities(pathInformationMsg* impl_msg);
pathHistoryManager(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_pathHistoryManager::__register("pathHistoryManager", sizeof(pathHistoryManager));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_pathHistoryMain::virtual_pup(PUP::er &p) {
    recursive_pup<pathHistoryMain>(dynamic_cast<pathHistoryMain*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_pathHistoryManager::virtual_pup(PUP::er &p) {
    recursive_pup<pathHistoryManager>(dynamic_cast<pathHistoryManager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
