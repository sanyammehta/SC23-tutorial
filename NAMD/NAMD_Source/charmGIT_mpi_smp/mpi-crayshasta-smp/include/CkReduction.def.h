
/* ---------------- method closures -------------- */
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
#endif /* CK_TEMPLATES_ONLY */

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
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message CkGroupCallbackMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkGroupCallbackMsg::operator new(size_t s){
  return CkGroupCallbackMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, int* sz){
  return CkGroupCallbackMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, int* sz,const int pb){
  return CkGroupCallbackMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkGroupCallbackMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, const int p) {
  return CkGroupCallbackMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkGroupCallbackMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkGroupCallbackMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkGroupCallbackMsg::CMessage_CkGroupCallbackMsg() {
CkGroupCallbackMsg *newmsg = (CkGroupCallbackMsg *)this;
}
void CMessage_CkGroupCallbackMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkGroupCallbackMsg::pack(CkGroupCallbackMsg *msg) {
  return (void *) msg;
}
CkGroupCallbackMsg* CMessage_CkGroupCallbackMsg::unpack(void* buf) {
  CkGroupCallbackMsg *msg = (CkGroupCallbackMsg *) buf;
  return msg;
}
int CMessage_CkGroupCallbackMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkGroupInitCallback: IrrGroup{
CkGroupInitCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupInitCallback(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkGroupInitCallback::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxyElement_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */
CkGroupID CProxy_CkGroupInitCallback::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkGroupInitCallback::__idx, CkIndex_CkGroupInitCallback::idx_CkGroupInitCallback_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkGroupInitCallback::reg_CkGroupInitCallback_void() {
  int epidx = CkRegisterEp("CkGroupInitCallback()",
      reinterpret_cast<CkCallFnPtr>(_call_CkGroupInitCallback_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkGroupInitCallback::_call_CkGroupInitCallback_void(void* impl_msg, void* impl_obj_void)
{
  CkGroupInitCallback* impl_obj = static_cast<CkGroupInitCallback*>(impl_obj_void);
  new (impl_obj_void) CkGroupInitCallback();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkGroupInitCallback::reg_callMeBack_CkGroupCallbackMsg() {
  int epidx = CkRegisterEp("callMeBack(CkGroupCallbackMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_callMeBack_CkGroupCallbackMsg), CMessage_CkGroupCallbackMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkGroupCallbackMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkGroupInitCallback::_call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj_void)
{
  CkGroupInitCallback* impl_obj = static_cast<CkGroupInitCallback*>(impl_obj_void);
  impl_obj->callMeBack((CkGroupCallbackMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkGroupInitCallback::reg_CkGroupInitCallback_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkGroupInitCallback(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkGroupInitCallback_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkGroupInitCallback::_call_CkGroupInitCallback_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkGroupInitCallback((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxySection_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkGroupInitCallback::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkGroupInitCallback::isIrreducible());
  // REG: CkGroupInitCallback();
  idx_CkGroupInitCallback_void();
  CkRegisterDefaultCtor(__idx, idx_CkGroupInitCallback_void());

  // REG: void callMeBack(CkGroupCallbackMsg* impl_msg);
  idx_callMeBack_CkGroupCallbackMsg();

  // REG: CkGroupInitCallback(CkMigrateMessage* impl_msg);
  idx_CkGroupInitCallback_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkGroupInitCallback_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkGroupReadyCallback: IrrGroup{
CkGroupReadyCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupReadyCallback(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkGroupReadyCallback::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxyElement_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */
CkGroupID CProxy_CkGroupReadyCallback::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkGroupReadyCallback::__idx, CkIndex_CkGroupReadyCallback::idx_CkGroupReadyCallback_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkGroupReadyCallback::reg_CkGroupReadyCallback_void() {
  int epidx = CkRegisterEp("CkGroupReadyCallback()",
      reinterpret_cast<CkCallFnPtr>(_call_CkGroupReadyCallback_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkGroupReadyCallback::_call_CkGroupReadyCallback_void(void* impl_msg, void* impl_obj_void)
{
  CkGroupReadyCallback* impl_obj = static_cast<CkGroupReadyCallback*>(impl_obj_void);
  new (impl_obj_void) CkGroupReadyCallback();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkGroupReadyCallback::reg_callMeBack_CkGroupCallbackMsg() {
  int epidx = CkRegisterEp("callMeBack(CkGroupCallbackMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_callMeBack_CkGroupCallbackMsg), CMessage_CkGroupCallbackMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkGroupCallbackMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkGroupReadyCallback::_call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj_void)
{
  CkGroupReadyCallback* impl_obj = static_cast<CkGroupReadyCallback*>(impl_obj_void);
  impl_obj->callMeBack((CkGroupCallbackMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkGroupReadyCallback::reg_CkGroupReadyCallback_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkGroupReadyCallback(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkGroupReadyCallback_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkGroupReadyCallback::_call_CkGroupReadyCallback_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkGroupReadyCallback((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
void CProxySection_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkGroupReadyCallback::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkGroupReadyCallback::isIrreducible());
  // REG: CkGroupReadyCallback();
  idx_CkGroupReadyCallback_void();
  CkRegisterDefaultCtor(__idx, idx_CkGroupReadyCallback_void());

  // REG: void callMeBack(CkGroupCallbackMsg* impl_msg);
  idx_callMeBack_CkGroupCallbackMsg();

  // REG: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
  idx_CkGroupReadyCallback_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkGroupReadyCallback_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionMsg::operator new(size_t s){
  return CkReductionMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkReductionMsg::operator new(size_t s, int* sz){
  return CkReductionMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkReductionMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkReductionMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkReductionMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkReductionMsg::operator new(size_t s, const int p) {
  return CkReductionMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkReductionMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkReductionMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkReductionMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkReductionMsg::CMessage_CkReductionMsg() {
CkReductionMsg *newmsg = (CkReductionMsg *)this;
}
void CMessage_CkReductionMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionMsg::pack(CkReductionMsg *msg) {
  return (void *) msg;
}
CkReductionMsg* CMessage_CkReductionMsg::unpack(void* buf) {
  CkReductionMsg *msg = (CkReductionMsg *) buf;
  return msg;
}
int CMessage_CkReductionMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionNumberMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionNumberMsg::operator new(size_t s){
  return CkReductionNumberMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, int* sz){
  return CkReductionNumberMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionNumberMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkReductionNumberMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, const int p) {
  return CkReductionNumberMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkReductionNumberMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkReductionNumberMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkReductionNumberMsg::CMessage_CkReductionNumberMsg() {
CkReductionNumberMsg *newmsg = (CkReductionNumberMsg *)this;
}
void CMessage_CkReductionNumberMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionNumberMsg::pack(CkReductionNumberMsg *msg) {
  return (void *) msg;
}
CkReductionNumberMsg* CMessage_CkReductionNumberMsg::unpack(void* buf) {
  CkReductionNumberMsg *msg = (CkReductionNumberMsg *) buf;
  return msg;
}
int CMessage_CkReductionNumberMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionInactiveMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionInactiveMsg::operator new(size_t s){
  return CkReductionInactiveMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, int* sz){
  return CkReductionInactiveMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionInactiveMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkReductionInactiveMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, const int p) {
  return CkReductionInactiveMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkReductionInactiveMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkReductionInactiveMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkReductionInactiveMsg::CMessage_CkReductionInactiveMsg() {
CkReductionInactiveMsg *newmsg = (CkReductionInactiveMsg *)this;
}
void CMessage_CkReductionInactiveMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionInactiveMsg::pack(CkReductionInactiveMsg *msg) {
  return (void *) msg;
}
CkReductionInactiveMsg* CMessage_CkReductionInactiveMsg::unpack(void* buf) {
  CkReductionInactiveMsg *msg = (CkReductionInactiveMsg *) buf;
  return msg;
}
int CMessage_CkReductionInactiveMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkReductionMgr: CkGroupInitCallback{
CkReductionMgr();
void RecvMsg(CkReductionMsg* impl_msg);
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void LateMigrantMsg(CkReductionMsg* impl_msg);
void MigrantDied(CkReductionNumberMsg* impl_msg);
void Barrier_RecvMsg(CkReductionMsg* impl_msg);
void contributeViaMessage(CkReductionMsg* impl_msg);
void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
CkReductionMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
void CProxyElement_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr();
 */
CkGroupID CProxy_CkReductionMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkReductionMgr::__idx, CkIndex_CkReductionMgr::idx_CkReductionMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_CkReductionMgr_void() {
  int epidx = CkRegisterEp("CkReductionMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_CkReductionMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_CkReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  new (impl_obj_void) CkReductionMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("RecvMsg(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_RecvMsg_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_ReductionStarting_CkReductionNumberMsg() {
  int epidx = CkRegisterEp("ReductionStarting(CkReductionNumberMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReductionStarting_CkReductionNumberMsg), CMessage_CkReductionNumberMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionNumberMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->ReductionStarting((CkReductionNumberMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_LateMigrantMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("LateMigrantMsg(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LateMigrantMsg_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_LateMigrantMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->LateMigrantMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_MigrantDied_CkReductionNumberMsg() {
  int epidx = CkRegisterEp("MigrantDied(CkReductionNumberMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MigrantDied_CkReductionNumberMsg), CMessage_CkReductionNumberMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionNumberMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_MigrantDied_CkReductionNumberMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->MigrantDied((CkReductionNumberMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_Barrier_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("Barrier_RecvMsg(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Barrier_RecvMsg_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_Barrier_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->Barrier_RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_contributeViaMessage_CkReductionMsg() {
  int epidx = CkRegisterEp("contributeViaMessage(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_contributeViaMessage_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_contributeViaMessage_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->contributeViaMessage((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkReductionMgr::reg_AddToInactiveList_CkReductionInactiveMsg() {
  int epidx = CkRegisterEp("AddToInactiveList(CkReductionInactiveMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_AddToInactiveList_CkReductionInactiveMsg), CMessage_CkReductionInactiveMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionInactiveMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_AddToInactiveList_CkReductionInactiveMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr*>(impl_obj_void);
  impl_obj->AddToInactiveList((CkReductionInactiveMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkReductionMgr::reg_CkReductionMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkReductionMgr(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkReductionMgr_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkReductionMgr::_call_CkReductionMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkReductionMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
void CProxySection_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkGroupInitCallback::__idx);
   CkRegisterGroupIrr(__idx,CkReductionMgr::isIrreducible());
  // REG: CkReductionMgr();
  idx_CkReductionMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkReductionMgr_void());

  // REG: void RecvMsg(CkReductionMsg* impl_msg);
  idx_RecvMsg_CkReductionMsg();

  // REG: void ReductionStarting(CkReductionNumberMsg* impl_msg);
  idx_ReductionStarting_CkReductionNumberMsg();

  // REG: void LateMigrantMsg(CkReductionMsg* impl_msg);
  idx_LateMigrantMsg_CkReductionMsg();

  // REG: void MigrantDied(CkReductionNumberMsg* impl_msg);
  idx_MigrantDied_CkReductionNumberMsg();

  // REG: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
  idx_Barrier_RecvMsg_CkReductionMsg();

  // REG: void contributeViaMessage(CkReductionMsg* impl_msg);
  idx_contributeViaMessage_CkReductionMsg();

  // REG: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
  idx_AddToInactiveList_CkReductionInactiveMsg();

  // REG: CkReductionMgr(CkMigrateMessage* impl_msg);
  idx_CkReductionMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkReductionMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup CkNodeReductionMgr: IrrGroup{
CkNodeReductionMgr();
void RecvMsg(CkReductionMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkNodeReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxyElement_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */
CkGroupID CProxy_CkNodeReductionMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_CkNodeReductionMgr::__idx, CkIndex_CkNodeReductionMgr::idx_CkNodeReductionMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkNodeReductionMgr::reg_CkNodeReductionMgr_void() {
  int epidx = CkRegisterEp("CkNodeReductionMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_CkNodeReductionMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkNodeReductionMgr::_call_CkNodeReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr*>(impl_obj_void);
  new (impl_obj_void) CkNodeReductionMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxy_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkNodeReductionMgr::reg_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("RecvMsg(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_RecvMsg_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkNodeReductionMgr::_call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr*>(impl_obj_void);
  impl_obj->RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */
void CProxySection_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkNodeReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkNodeReductionMgr::isIrreducible());
  // REG: CkNodeReductionMgr();
  idx_CkNodeReductionMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkNodeReductionMgr_void());

  // REG: void RecvMsg(CkReductionMsg* impl_msg);
  idx_RecvMsg_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkReduction(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CkGroupCallbackMsg;
*/
CMessage_CkGroupCallbackMsg::__register("CkGroupCallbackMsg", sizeof(CkGroupCallbackMsg),(CkPackFnPtr) CkGroupCallbackMsg::pack,(CkUnpackFnPtr) CkGroupCallbackMsg::unpack);

/* REG: group CkGroupInitCallback: IrrGroup{
CkGroupInitCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupInitCallback(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkGroupInitCallback::__register("CkGroupInitCallback", sizeof(CkGroupInitCallback));

/* REG: group CkGroupReadyCallback: IrrGroup{
CkGroupReadyCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupReadyCallback(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkGroupReadyCallback::__register("CkGroupReadyCallback", sizeof(CkGroupReadyCallback));

/* REG: message CkReductionMsg;
*/
CMessage_CkReductionMsg::__register("CkReductionMsg", sizeof(CkReductionMsg),(CkPackFnPtr) CkReductionMsg::pack,(CkUnpackFnPtr) CkReductionMsg::unpack);

/* REG: message CkReductionNumberMsg;
*/
CMessage_CkReductionNumberMsg::__register("CkReductionNumberMsg", sizeof(CkReductionNumberMsg),(CkPackFnPtr) CkReductionNumberMsg::pack,(CkUnpackFnPtr) CkReductionNumberMsg::unpack);

/* REG: message CkReductionInactiveMsg;
*/
CMessage_CkReductionInactiveMsg::__register("CkReductionInactiveMsg", sizeof(CkReductionInactiveMsg),(CkPackFnPtr) CkReductionInactiveMsg::pack,(CkUnpackFnPtr) CkReductionInactiveMsg::unpack);

/* REG: group CkReductionMgr: CkGroupInitCallback{
CkReductionMgr();
void RecvMsg(CkReductionMsg* impl_msg);
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void LateMigrantMsg(CkReductionMsg* impl_msg);
void MigrantDied(CkReductionNumberMsg* impl_msg);
void Barrier_RecvMsg(CkReductionMsg* impl_msg);
void contributeViaMessage(CkReductionMsg* impl_msg);
void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
CkReductionMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkReductionMgr::__register("CkReductionMgr", sizeof(CkReductionMgr));

/* REG: nodegroup CkNodeReductionMgr: IrrGroup{
CkNodeReductionMgr();
void RecvMsg(CkReductionMsg* impl_msg);
};
*/
  CkIndex_CkNodeReductionMgr::__register("CkNodeReductionMgr", sizeof(CkNodeReductionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkGroupInitCallback::virtual_pup(PUP::er &p) {
    recursive_pup<CkGroupInitCallback>(dynamic_cast<CkGroupInitCallback*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkGroupReadyCallback::virtual_pup(PUP::er &p) {
    recursive_pup<CkGroupReadyCallback>(dynamic_cast<CkGroupReadyCallback*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkReductionMgr>(dynamic_cast<CkReductionMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkNodeReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkNodeReductionMgr>(dynamic_cast<CkNodeReductionMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
