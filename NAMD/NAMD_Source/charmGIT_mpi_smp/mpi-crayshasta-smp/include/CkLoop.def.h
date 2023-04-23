



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_FuncCkLoop::exit_3_closure : public SDAG::Closure {
      

      exit_3_closure() {
        init();
      }
      exit_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~exit_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(exit_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_FuncSingleHelper::destroyMyself_3_closure : public SDAG::Closure {
      

      destroyMyself_3_closure() {
        init();
      }
      destroyMyself_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~destroyMyself_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(destroyMyself_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message CharmNotifyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CharmNotifyMsg::operator new(size_t s){
  return CharmNotifyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CharmNotifyMsg::operator new(size_t s, int* sz){
  return CharmNotifyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CharmNotifyMsg::operator new(size_t s, int* sz,const int pb){
  return CharmNotifyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CharmNotifyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CharmNotifyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CharmNotifyMsg::operator new(size_t s, const int p) {
  return CharmNotifyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CharmNotifyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CharmNotifyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CharmNotifyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CharmNotifyMsg::CMessage_CharmNotifyMsg() {
CharmNotifyMsg *newmsg = (CharmNotifyMsg *)this;
}
void CMessage_CharmNotifyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CharmNotifyMsg::pack(CharmNotifyMsg *msg) {
  return (void *) msg;
}
CharmNotifyMsg* CMessage_CharmNotifyMsg::unpack(void* buf) {
  CharmNotifyMsg *msg = (CharmNotifyMsg *) buf;
  return msg;
}
int CMessage_CharmNotifyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message HelperNotifyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HelperNotifyMsg::operator new(size_t s){
  return HelperNotifyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_HelperNotifyMsg::operator new(size_t s, int* sz){
  return HelperNotifyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_HelperNotifyMsg::operator new(size_t s, int* sz,const int pb){
  return HelperNotifyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_HelperNotifyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return HelperNotifyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_HelperNotifyMsg::operator new(size_t s, const int p) {
  return HelperNotifyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_HelperNotifyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return HelperNotifyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_HelperNotifyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_HelperNotifyMsg::CMessage_HelperNotifyMsg() {
HelperNotifyMsg *newmsg = (HelperNotifyMsg *)this;
}
void CMessage_HelperNotifyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HelperNotifyMsg::pack(HelperNotifyMsg *msg) {
  return (void *) msg;
}
HelperNotifyMsg* CMessage_HelperNotifyMsg::unpack(void* buf) {
  HelperNotifyMsg *msg = (HelperNotifyMsg *) buf;
  return msg;
}
int CMessage_HelperNotifyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message DestroyNotifyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_DestroyNotifyMsg::operator new(size_t s){
  return DestroyNotifyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_DestroyNotifyMsg::operator new(size_t s, int* sz){
  return DestroyNotifyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_DestroyNotifyMsg::operator new(size_t s, int* sz,const int pb){
  return DestroyNotifyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_DestroyNotifyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return DestroyNotifyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_DestroyNotifyMsg::operator new(size_t s, const int p) {
  return DestroyNotifyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_DestroyNotifyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return DestroyNotifyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_DestroyNotifyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_DestroyNotifyMsg::CMessage_DestroyNotifyMsg() {
DestroyNotifyMsg *newmsg = (DestroyNotifyMsg *)this;
}
void CMessage_DestroyNotifyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_DestroyNotifyMsg::pack(DestroyNotifyMsg *msg) {
  return (void *) msg;
}
DestroyNotifyMsg* CMessage_DestroyNotifyMsg::unpack(void* buf) {
  DestroyNotifyMsg *msg = (DestroyNotifyMsg *) buf;
  return msg;
}
int CMessage_DestroyNotifyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup FuncCkLoop: NodeGroup{
FuncCkLoop(int mode, int numThreads);
void registerHelper(HelperNotifyMsg* impl_msg);
void exit();
FuncCkLoop(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_FuncCkLoop::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(int mode, int numThreads);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
void CProxyElement_FuncCkLoop::registerHelper(HelperNotifyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exit();
 */
void CProxyElement_FuncCkLoop::exit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(int mode, int numThreads);
 */
CkGroupID CProxy_FuncCkLoop::ckNew(int mode, int numThreads, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int mode, int numThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|mode;
    implP|numThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|mode;
    implP|numThreads;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_FuncCkLoop::__idx, CkIndex_FuncCkLoop::idx_FuncCkLoop_marshall1(), impl_msg);
  return gId;
}
  CProxy_FuncCkLoop::CProxy_FuncCkLoop(int mode, int numThreads, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int mode, int numThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|mode;
    implP|numThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|mode;
    implP|numThreads;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  ckSetGroupID(CkCreateNodeGroup(CkIndex_FuncCkLoop::__idx, CkIndex_FuncCkLoop::idx_FuncCkLoop_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_FuncCkLoop::reg_FuncCkLoop_marshall1() {
  int epidx = CkRegisterEp("FuncCkLoop(int mode, int numThreads)",
      reinterpret_cast<CkCallFnPtr>(_call_FuncCkLoop_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_FuncCkLoop_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_FuncCkLoop_marshall1);

  return epidx;
}

void CkIndex_FuncCkLoop::_call_FuncCkLoop_marshall1(void* impl_msg, void* impl_obj_void)
{
  FuncCkLoop* impl_obj = static_cast<FuncCkLoop*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int mode, int numThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> mode;
  implP|mode;
  PUP::detail::TemporaryObjectHolder<int> numThreads;
  implP|numThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) FuncCkLoop(std::move(mode.t), std::move(numThreads.t));
}
int CkIndex_FuncCkLoop::_callmarshall_FuncCkLoop_marshall1(char* impl_buf, void* impl_obj_void) {
  FuncCkLoop* impl_obj = static_cast<FuncCkLoop*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int mode, int numThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> mode;
  implP|mode;
  PUP::detail::TemporaryObjectHolder<int> numThreads;
  implP|numThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) FuncCkLoop(std::move(mode.t), std::move(numThreads.t));
  return implP.size();
}
void CkIndex_FuncCkLoop::_marshallmessagepup_FuncCkLoop_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int mode, int numThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> mode;
  implP|mode;
  PUP::detail::TemporaryObjectHolder<int> numThreads;
  implP|numThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("mode");
  implDestP|mode;
  if (implDestP.hasComments()) implDestP.comment("numThreads");
  implDestP|numThreads;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
void CProxy_FuncCkLoop::registerHelper(HelperNotifyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_FuncCkLoop::reg_registerHelper_HelperNotifyMsg() {
  int epidx = CkRegisterEp("registerHelper(HelperNotifyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_registerHelper_HelperNotifyMsg), CMessage_HelperNotifyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HelperNotifyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_FuncCkLoop::_call_registerHelper_HelperNotifyMsg(void* impl_msg, void* impl_obj_void)
{
  FuncCkLoop* impl_obj = static_cast<FuncCkLoop*>(impl_obj_void);
  impl_obj->registerHelper((HelperNotifyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exit();
 */
void CProxy_FuncCkLoop::exit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_FuncCkLoop::reg_exit_void() {
  int epidx = CkRegisterEp("exit()",
      reinterpret_cast<CkCallFnPtr>(_call_exit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_FuncCkLoop::_call_exit_void(void* impl_msg, void* impl_obj_void)
{
  FuncCkLoop* impl_obj = static_cast<FuncCkLoop*>(impl_obj_void);
  impl_obj->exit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_FuncCkLoop::exit_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_FuncCkLoop::reg_FuncCkLoop_CkMigrateMessage() {
  int epidx = CkRegisterEp("FuncCkLoop(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_FuncCkLoop_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_FuncCkLoop::_call_FuncCkLoop_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) FuncCkLoop((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(int mode, int numThreads);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerHelper(HelperNotifyMsg* impl_msg);
 */
void CProxySection_FuncCkLoop::registerHelper(HelperNotifyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_FuncCkLoop::idx_registerHelper_HelperNotifyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exit();
 */
void CProxySection_FuncCkLoop::exit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_FuncCkLoop::idx_exit_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_FuncCkLoop::idx_exit_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncCkLoop(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_FuncCkLoop::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,FuncCkLoop::isIrreducible());
  // REG: FuncCkLoop(int mode, int numThreads);
  idx_FuncCkLoop_marshall1();

  // REG: void registerHelper(HelperNotifyMsg* impl_msg);
  idx_registerHelper_HelperNotifyMsg();

  // REG: void exit();
  idx_exit_void();

  // REG: FuncCkLoop(CkMigrateMessage* impl_msg);
  idx_FuncCkLoop_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_FuncCkLoop_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare FuncSingleHelper: Chare{
FuncSingleHelper();
void stealWork(CharmNotifyMsg* impl_msg);
void destroyMyself();
FuncSingleHelper(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_FuncSingleHelper::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncSingleHelper();
 */
CkChareID CProxy_FuncSingleHelper::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_FuncSingleHelper::__idx, CkIndex_FuncSingleHelper::idx_FuncSingleHelper_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_FuncSingleHelper::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_FuncSingleHelper::__idx, CkIndex_FuncSingleHelper::idx_FuncSingleHelper_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_FuncSingleHelper::reg_FuncSingleHelper_void() {
  int epidx = CkRegisterEp("FuncSingleHelper()",
      reinterpret_cast<CkCallFnPtr>(_call_FuncSingleHelper_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_FuncSingleHelper::_call_FuncSingleHelper_void(void* impl_msg, void* impl_obj_void)
{
  FuncSingleHelper* impl_obj = static_cast<FuncSingleHelper*>(impl_obj_void);
  new (impl_obj_void) FuncSingleHelper();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stealWork(CharmNotifyMsg* impl_msg);
 */
void CProxy_FuncSingleHelper::stealWork(CharmNotifyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_FuncSingleHelper::idx_stealWork_CharmNotifyMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_FuncSingleHelper::idx_stealWork_CharmNotifyMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_FuncSingleHelper::idx_stealWork_CharmNotifyMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_FuncSingleHelper::reg_stealWork_CharmNotifyMsg() {
  int epidx = CkRegisterEp("stealWork(CharmNotifyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_stealWork_CharmNotifyMsg), CMessage_CharmNotifyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CharmNotifyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_FuncSingleHelper::_call_stealWork_CharmNotifyMsg(void* impl_msg, void* impl_obj_void)
{
  FuncSingleHelper* impl_obj = static_cast<FuncSingleHelper*>(impl_obj_void);
  impl_obj->stealWork((CharmNotifyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void destroyMyself();
 */
void CProxy_FuncSingleHelper::destroyMyself(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_FuncSingleHelper::idx_destroyMyself_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_FuncSingleHelper::idx_destroyMyself_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_FuncSingleHelper::idx_destroyMyself_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_FuncSingleHelper::reg_destroyMyself_void() {
  int epidx = CkRegisterEp("destroyMyself()",
      reinterpret_cast<CkCallFnPtr>(_call_destroyMyself_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_FuncSingleHelper::_call_destroyMyself_void(void* impl_msg, void* impl_obj_void)
{
  FuncSingleHelper* impl_obj = static_cast<FuncSingleHelper*>(impl_obj_void);
  impl_obj->destroyMyself();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_FuncSingleHelper::destroyMyself_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FuncSingleHelper(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_FuncSingleHelper::reg_FuncSingleHelper_CkMigrateMessage() {
  int epidx = CkRegisterEp("FuncSingleHelper(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_FuncSingleHelper_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_FuncSingleHelper::_call_FuncSingleHelper_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) FuncSingleHelper((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_FuncSingleHelper::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: FuncSingleHelper();
  idx_FuncSingleHelper_void();
  CkRegisterDefaultCtor(__idx, idx_FuncSingleHelper_void());

  // REG: void stealWork(CharmNotifyMsg* impl_msg);
  idx_stealWork_CharmNotifyMsg();

  // REG: void destroyMyself();
  idx_destroyMyself_void();

  // REG: FuncSingleHelper(CkMigrateMessage* impl_msg);
  idx_FuncSingleHelper_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_FuncSingleHelper_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkLoop(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(RegisterCkLoopHdlrs,0);

/* REG: message CharmNotifyMsg;
*/
CMessage_CharmNotifyMsg::__register("CharmNotifyMsg", sizeof(CharmNotifyMsg),(CkPackFnPtr) CharmNotifyMsg::pack,(CkUnpackFnPtr) CharmNotifyMsg::unpack);

/* REG: message HelperNotifyMsg;
*/
CMessage_HelperNotifyMsg::__register("HelperNotifyMsg", sizeof(HelperNotifyMsg),(CkPackFnPtr) HelperNotifyMsg::pack,(CkUnpackFnPtr) HelperNotifyMsg::unpack);

/* REG: message DestroyNotifyMsg;
*/
CMessage_DestroyNotifyMsg::__register("DestroyNotifyMsg", sizeof(DestroyNotifyMsg),(CkPackFnPtr) DestroyNotifyMsg::pack,(CkUnpackFnPtr) DestroyNotifyMsg::unpack);

/* REG: nodegroup FuncCkLoop: NodeGroup{
FuncCkLoop(int mode, int numThreads);
void registerHelper(HelperNotifyMsg* impl_msg);
void exit();
FuncCkLoop(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_FuncCkLoop::__register("FuncCkLoop", sizeof(FuncCkLoop));

/* REG: chare FuncSingleHelper: Chare{
FuncSingleHelper();
void stealWork(CharmNotifyMsg* impl_msg);
void destroyMyself();
FuncSingleHelper(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_FuncSingleHelper::__register("FuncSingleHelper", sizeof(FuncSingleHelper));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_FuncCkLoop::virtual_pup(PUP::er &p) {
    recursive_pup<FuncCkLoop>(dynamic_cast<FuncCkLoop*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_FuncSingleHelper::virtual_pup(PUP::er &p) {
    recursive_pup<FuncSingleHelper>(dynamic_cast<FuncSingleHelper*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
