



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_liveVizGroup::initComplete_2_closure : public SDAG::Closure {
      

      initComplete_2_closure() {
        init();
      }
      initComplete_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initComplete_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(initComplete_2_closure));
    };
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


/* DEFS: message liveVizRequestMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_liveVizRequestMsg::operator new(size_t s){
  return liveVizRequestMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int* sz){
  return liveVizRequestMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int* sz,const int pb){
  return liveVizRequestMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return liveVizRequestMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return liveVizRequestMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return liveVizRequestMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_liveVizRequestMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return liveVizRequestMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_liveVizRequestMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_liveVizRequestMsg::CMessage_liveVizRequestMsg() {
liveVizRequestMsg *newmsg = (liveVizRequestMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_liveVizRequestMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_liveVizRequestMsg::pack(liveVizRequestMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
liveVizRequestMsg* CMessage_liveVizRequestMsg::unpack(void* buf) {
  liveVizRequestMsg *msg = (liveVizRequestMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_liveVizRequestMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CProxy_liveVizGroup lvG;
 */
extern CProxy_liveVizGroup lvG;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lvG(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lvG;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group liveVizGroup: IrrGroup{
liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
void initComplete();
void combine(CkReductionMsg* impl_msg);
liveVizGroup(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_liveVizGroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initComplete();
 */
void CProxyElement_liveVizGroup::initComplete(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_liveVizGroup::_call_redn_wrapper_initComplete_void(void* impl_msg, void* impl_obj_void)
{
  liveVizGroup* impl_obj = static_cast<liveVizGroup*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->initComplete();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxyElement_liveVizGroup::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_liveVizGroup::_call_redn_wrapper_combine_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  liveVizGroup* impl_obj = static_cast<liveVizGroup*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->combine((CkReductionMsg*)impl_msg);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
CkGroupID CProxy_liveVizGroup::ckNew(const liveVizConfig &cfg, const CkCallback &c, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const liveVizConfig &cfg, const CkCallback &c
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<liveVizConfig>::type>::type &)cfg;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<liveVizConfig>::type>::type &)cfg;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_liveVizGroup::__idx, CkIndex_liveVizGroup::idx_liveVizGroup_marshall1(), impl_msg);
  return gId;
}
  CProxy_liveVizGroup::CProxy_liveVizGroup(const liveVizConfig &cfg, const CkCallback &c, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const liveVizConfig &cfg, const CkCallback &c
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<liveVizConfig>::type>::type &)cfg;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<liveVizConfig>::type>::type &)cfg;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_liveVizGroup::__idx, CkIndex_liveVizGroup::idx_liveVizGroup_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_liveVizGroup::reg_liveVizGroup_marshall1() {
  int epidx = CkRegisterEp("liveVizGroup(const liveVizConfig &cfg, const CkCallback &c)",
      reinterpret_cast<CkCallFnPtr>(_call_liveVizGroup_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_liveVizGroup_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_liveVizGroup_marshall1);

  return epidx;
}

void CkIndex_liveVizGroup::_call_liveVizGroup_marshall1(void* impl_msg, void* impl_obj_void)
{
  liveVizGroup* impl_obj = static_cast<liveVizGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const liveVizConfig &cfg, const CkCallback &c*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<liveVizConfig> cfg;
  implP|cfg;
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) liveVizGroup(std::move(cfg.t), std::move(c.t));
}
int CkIndex_liveVizGroup::_callmarshall_liveVizGroup_marshall1(char* impl_buf, void* impl_obj_void) {
  liveVizGroup* impl_obj = static_cast<liveVizGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const liveVizConfig &cfg, const CkCallback &c*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<liveVizConfig> cfg;
  implP|cfg;
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) liveVizGroup(std::move(cfg.t), std::move(c.t));
  return implP.size();
}
void CkIndex_liveVizGroup::_marshallmessagepup_liveVizGroup_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const liveVizConfig &cfg, const CkCallback &c*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<liveVizConfig> cfg;
  implP|cfg;
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cfg");
  implDestP|cfg;
  if (implDestP.hasComments()) implDestP.comment("c");
  implDestP|c;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initComplete();
 */
void CProxy_liveVizGroup::initComplete(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_liveVizGroup::initComplete(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_liveVizGroup::initComplete(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_liveVizGroup::reg_initComplete_void() {
  int epidx = CkRegisterEp("initComplete()",
      reinterpret_cast<CkCallFnPtr>(_call_initComplete_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_liveVizGroup::reg_redn_wrapper_initComplete_void() {
  return CkRegisterEp("redn_wrapper_initComplete(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_initComplete_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_liveVizGroup::_call_initComplete_void(void* impl_msg, void* impl_obj_void)
{
  liveVizGroup* impl_obj = static_cast<liveVizGroup*>(impl_obj_void);
  impl_obj->initComplete();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_liveVizGroup::initComplete_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxy_liveVizGroup::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_liveVizGroup::combine(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_liveVizGroup::combine(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_liveVizGroup::reg_combine_CkReductionMsg() {
  int epidx = CkRegisterEp("combine(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_combine_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_liveVizGroup::reg_redn_wrapper_combine_CkReductionMsg() {
  return CkRegisterEp("redn_wrapper_combine(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_combine_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_liveVizGroup::_call_combine_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  liveVizGroup* impl_obj = static_cast<liveVizGroup*>(impl_obj_void);
  impl_obj->combine((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_liveVizGroup::reg_liveVizGroup_CkMigrateMessage() {
  int epidx = CkRegisterEp("liveVizGroup(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_liveVizGroup_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_liveVizGroup::_call_liveVizGroup_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) liveVizGroup((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initComplete();
 */
void CProxySection_liveVizGroup::initComplete(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_liveVizGroup::idx_initComplete_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxySection_liveVizGroup::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_liveVizGroup::idx_combine_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizGroup(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_liveVizGroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,liveVizGroup::isIrreducible());
  // REG: liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
  idx_liveVizGroup_marshall1();

  // REG: void initComplete();
  idx_initComplete_void();
  idx_redn_wrapper_initComplete_void();

  // REG: void combine(CkReductionMsg* impl_msg);
  idx_combine_CkReductionMsg();
  idx_redn_wrapper_combine_CkReductionMsg();

  // REG: liveVizGroup(CkMigrateMessage* impl_msg);
  idx_liveVizGroup_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_liveVizGroup_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_LiveVizBoundElement lvBoundArray;
 */
extern CProxy_LiveVizBoundElement lvBoundArray;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lvBoundArray(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lvBoundArray;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool usingBoundArray;
 */
extern bool usingBoundArray;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_usingBoundArray(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|usingBoundArray;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array LiveVizBoundElement: ArrayElement{
LiveVizBoundElement();
void deposit(CkReductionMsg* impl_msg);
LiveVizBoundElement(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LiveVizBoundElement::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_LiveVizBoundElement::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_LiveVizBoundElement::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_LiveVizBoundElement::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_LiveVizBoundElement::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_LiveVizBoundElement::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_LiveVizBoundElement::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement();
 */
void CProxyElement_LiveVizBoundElement::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_LiveVizBoundElement::idx_LiveVizBoundElement_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deposit(CkReductionMsg* impl_msg);
 */
void CProxyElement_LiveVizBoundElement::deposit(CkReductionMsg* impl_msg) 
{
  ckCheck();
  LiveVizBoundElement *obj = ckLocal();
#if CMK_ERROR_CHECKING
  if (obj==NULL) CkAbort("Trying to call a LOCAL entry method on a non-local element");
#endif
  envelope& env = *(UsrToEnv(impl_msg));
  env.setMsgtype(ForArrayEltMsg);
  _TRACE_CREATION_DETAILED(&env, CkIndex_LiveVizBoundElement::idx_deposit_CkReductionMsg());
  _TRACE_CREATION_DONE(1);
  CmiObjId projID = ((CkArrayIndex&)ckGetIndex()).getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(CpvAccess(curPeEvent),ForArrayEltMsg,(CkIndex_LiveVizBoundElement::idx_deposit_CkReductionMsg()),CkMyPe(), 0, &projID, obj);
#if CMK_LBDB_ON
#endif
#if CMK_CHARMDEBUG
    CpdBeforeEp(CkIndex_LiveVizBoundElement::idx_deposit_CkReductionMsg(), obj, NULL);
#endif
    CkCallstackPush(obj);
    obj->deposit((CkReductionMsg*)impl_msg);
    CkCallstackPop(obj);
#if CMK_CHARMDEBUG
    CpdAfterEp(CkIndex_LiveVizBoundElement::idx_deposit_CkReductionMsg());
#endif
    _TRACE_END_EXECUTE();
    return;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement();
 */
CkArrayID CProxy_LiveVizBoundElement::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_LiveVizBoundElement::idx_LiveVizBoundElement_void(), opts);
  return gId;
}
void CProxy_LiveVizBoundElement::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_LiveVizBoundElement::idx_LiveVizBoundElement_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_LiveVizBoundElement::reg_LiveVizBoundElement_void() {
  int epidx = CkRegisterEp("LiveVizBoundElement()",
      reinterpret_cast<CkCallFnPtr>(_call_LiveVizBoundElement_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LiveVizBoundElement::_call_LiveVizBoundElement_void(void* impl_msg, void* impl_obj_void)
{
  LiveVizBoundElement* impl_obj = static_cast<LiveVizBoundElement*>(impl_obj_void);
  new (impl_obj_void) LiveVizBoundElement();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deposit(CkReductionMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_LiveVizBoundElement::reg_deposit_CkReductionMsg() {
  int epidx = CkRegisterEp("deposit(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_deposit_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LiveVizBoundElement::_call_deposit_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  LiveVizBoundElement* impl_obj = static_cast<LiveVizBoundElement*>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_LiveVizBoundElement::reg_LiveVizBoundElement_CkMigrateMessage() {
  int epidx = CkRegisterEp("LiveVizBoundElement(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LiveVizBoundElement_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_LiveVizBoundElement::_call_LiveVizBoundElement_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<LiveVizBoundElement> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deposit(CkReductionMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LiveVizBoundElement(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LiveVizBoundElement::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: LiveVizBoundElement();
  idx_LiveVizBoundElement_void();
  CkRegisterDefaultCtor(__idx, idx_LiveVizBoundElement_void());

  // REG: void deposit(CkReductionMsg* impl_msg);
  idx_deposit_CkReductionMsg();

  // REG: LiveVizBoundElement(CkMigrateMessage* impl_msg);
  idx_LiveVizBoundElement_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_LiveVizBoundElement_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerliveViz(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message liveVizRequestMsg{
char data[];
}
;
*/
CMessage_liveVizRequestMsg::__register("liveVizRequestMsg", sizeof(liveVizRequestMsg),(CkPackFnPtr) liveVizRequestMsg::pack,(CkUnpackFnPtr) liveVizRequestMsg::unpack);

  _registerliveVizPoll();

  _registerInitCall(liveVizNodeInit,1);

  CkRegisterReadonly("lvG","CProxy_liveVizGroup",sizeof(lvG),(void *) &lvG,__xlater_roPup_lvG);

/* REG: group liveVizGroup: IrrGroup{
liveVizGroup(const liveVizConfig &cfg, const CkCallback &c);
void initComplete();
void combine(CkReductionMsg* impl_msg);
liveVizGroup(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_liveVizGroup::__register("liveVizGroup", sizeof(liveVizGroup));

  CkRegisterReadonly("lvBoundArray","CProxy_LiveVizBoundElement",sizeof(lvBoundArray),(void *) &lvBoundArray,__xlater_roPup_lvBoundArray);

  CkRegisterReadonly("usingBoundArray","bool",sizeof(usingBoundArray),(void *) &usingBoundArray,__xlater_roPup_usingBoundArray);

/* REG: array LiveVizBoundElement: ArrayElement{
LiveVizBoundElement();
void deposit(CkReductionMsg* impl_msg);
LiveVizBoundElement(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_LiveVizBoundElement::__register("LiveVizBoundElement", sizeof(LiveVizBoundElement));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_liveVizGroup::virtual_pup(PUP::er &p) {
    recursive_pup<liveVizGroup>(dynamic_cast<liveVizGroup*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LiveVizBoundElement::virtual_pup(PUP::er &p) {
    recursive_pup<LiveVizBoundElement>(dynamic_cast<LiveVizBoundElement*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
