


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_threadCollideMgr::sendRemote_2_closure : public SDAG::Closure {
      

      sendRemote_2_closure() {
        init();
      }
      sendRemote_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendRemote_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendRemote_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_threadCollide::resultsDone_2_closure : public SDAG::Closure {
      

      resultsDone_2_closure() {
        init();
      }
      resultsDone_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resultsDone_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(resultsDone_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message threadCollisions{
Collision colls[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_threadCollisions::operator new(size_t s){
  return threadCollisions::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_threadCollisions::operator new(size_t s, int* sz){
  return threadCollisions::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_threadCollisions::operator new(size_t s, int* sz,const int pb){
  return threadCollisions::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_threadCollisions::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return threadCollisions::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_threadCollisions::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return threadCollisions::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_threadCollisions::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return threadCollisions::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_threadCollisions::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return threadCollisions::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_threadCollisions::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(Collision)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_threadCollisions::CMessage_threadCollisions() {
threadCollisions *newmsg = (threadCollisions *)this;
  newmsg->colls = (Collision *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_threadCollisions::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_threadCollisions::pack(threadCollisions *msg) {
  msg->colls = (Collision *) ((char *)msg->colls - (char *)msg);
  return (void *) msg;
}
threadCollisions* CMessage_threadCollisions::unpack(void* buf) {
  threadCollisions *msg = (threadCollisions *) buf;
  msg->colls = (Collision *) ((size_t)msg->colls + (char *)msg);
  return msg;
}
int CMessage_threadCollisions::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group threadCollideMgr: collideClient{
threadCollideMgr();
void sendRemote();
void remoteCollisions(threadCollisions* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_threadCollideMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollideMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRemote();
 */
void CProxyElement_threadCollideMgr::sendRemote(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_threadCollideMgr::_call_redn_wrapper_sendRemote_void(void* impl_msg, void* impl_obj_void)
{
  threadCollideMgr* impl_obj = static_cast<threadCollideMgr*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->sendRemote();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteCollisions(threadCollisions* impl_msg);
 */
void CProxyElement_threadCollideMgr::remoteCollisions(threadCollisions* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollideMgr();
 */
CkGroupID CProxy_threadCollideMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_threadCollideMgr::__idx, CkIndex_threadCollideMgr::idx_threadCollideMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_threadCollideMgr::reg_threadCollideMgr_void() {
  int epidx = CkRegisterEp("threadCollideMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_threadCollideMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_threadCollideMgr::_call_threadCollideMgr_void(void* impl_msg, void* impl_obj_void)
{
  threadCollideMgr* impl_obj = static_cast<threadCollideMgr*>(impl_obj_void);
  new (impl_obj_void) threadCollideMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRemote();
 */
void CProxy_threadCollideMgr::sendRemote(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_threadCollideMgr::sendRemote(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_threadCollideMgr::sendRemote(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_threadCollideMgr::reg_sendRemote_void() {
  int epidx = CkRegisterEp("sendRemote()",
      reinterpret_cast<CkCallFnPtr>(_call_sendRemote_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_threadCollideMgr::reg_redn_wrapper_sendRemote_void() {
  return CkRegisterEp("redn_wrapper_sendRemote(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_sendRemote_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_threadCollideMgr::_call_sendRemote_void(void* impl_msg, void* impl_obj_void)
{
  threadCollideMgr* impl_obj = static_cast<threadCollideMgr*>(impl_obj_void);
  impl_obj->sendRemote();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_threadCollideMgr::sendRemote_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteCollisions(threadCollisions* impl_msg);
 */
void CProxy_threadCollideMgr::remoteCollisions(threadCollisions* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID(),0);
}
void CProxy_threadCollideMgr::remoteCollisions(threadCollisions* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_threadCollideMgr::remoteCollisions(threadCollisions* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_threadCollideMgr::reg_remoteCollisions_threadCollisions() {
  int epidx = CkRegisterEp("remoteCollisions(threadCollisions* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_remoteCollisions_threadCollisions), CMessage_threadCollisions::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)threadCollisions::ckDebugPup);
  return epidx;
}

void CkIndex_threadCollideMgr::_call_remoteCollisions_threadCollisions(void* impl_msg, void* impl_obj_void)
{
  threadCollideMgr* impl_obj = static_cast<threadCollideMgr*>(impl_obj_void);
  impl_obj->remoteCollisions((threadCollisions*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollideMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRemote();
 */
void CProxySection_threadCollideMgr::sendRemote(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_threadCollideMgr::idx_sendRemote_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteCollisions(threadCollisions* impl_msg);
 */
void CProxySection_threadCollideMgr::remoteCollisions(threadCollisions* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_threadCollideMgr::idx_remoteCollisions_threadCollisions(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_threadCollideMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_collideClient::__idx);
   CkRegisterGroupIrr(__idx,threadCollideMgr::isIrreducible());
  // REG: threadCollideMgr();
  idx_threadCollideMgr_void();
  CkRegisterDefaultCtor(__idx, idx_threadCollideMgr_void());

  // REG: void sendRemote();
  idx_sendRemote_void();
  idx_redn_wrapper_sendRemote_void();

  // REG: void remoteCollisions(threadCollisions* impl_msg);
  idx_remoteCollisions_threadCollisions();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array threadCollide: ArrayElement{
threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
void resultsDone();
threadCollide(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_threadCollide::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_threadCollide::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_threadCollide::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_threadCollide::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_threadCollide::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_threadCollide::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_threadCollide::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
void CProxyElement_threadCollide::insert(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_threadCollide::idx_threadCollide_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resultsDone();
 */
void CProxyElement_threadCollide::resultsDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_threadCollide::idx_resultsDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
CkArrayID CProxy_threadCollide::ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_threadCollide::idx_threadCollide_marshall1(), opts);
  return gId;
}
void CProxy_threadCollide::ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_threadCollide::idx_threadCollide_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_threadCollide::ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_threadCollide::idx_threadCollide_marshall1(), opts);
  return gId;
}
void CProxy_threadCollide::ckNew(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_threadCollideMgr>::type>::type &)tmgr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideHandle>::type>::type &)cmgr;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_threadCollide::idx_threadCollide_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_threadCollide::reg_threadCollide_marshall1() {
  int epidx = CkRegisterEp("threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr)",
      reinterpret_cast<CkCallFnPtr>(_call_threadCollide_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_threadCollide_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_threadCollide_marshall1);

  return epidx;
}

void CkIndex_threadCollide::_call_threadCollide_marshall1(void* impl_msg, void* impl_obj_void)
{
  threadCollide* impl_obj = static_cast<threadCollide*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads;
  implP|threads;
  PUP::detail::TemporaryObjectHolder<CProxy_threadCollideMgr> tmgr;
  implP|tmgr;
  PUP::detail::TemporaryObjectHolder<CollideHandle> cmgr;
  implP|cmgr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) threadCollide(std::move(threads.t), std::move(tmgr.t), std::move(cmgr.t));
}
int CkIndex_threadCollide::_callmarshall_threadCollide_marshall1(char* impl_buf, void* impl_obj_void) {
  threadCollide* impl_obj = static_cast<threadCollide*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads;
  implP|threads;
  PUP::detail::TemporaryObjectHolder<CProxy_threadCollideMgr> tmgr;
  implP|tmgr;
  PUP::detail::TemporaryObjectHolder<CollideHandle> cmgr;
  implP|cmgr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) threadCollide(std::move(threads.t), std::move(tmgr.t), std::move(cmgr.t));
  return implP.size();
}
void CkIndex_threadCollide::_marshallmessagepup_threadCollide_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads;
  implP|threads;
  PUP::detail::TemporaryObjectHolder<CProxy_threadCollideMgr> tmgr;
  implP|tmgr;
  PUP::detail::TemporaryObjectHolder<CollideHandle> cmgr;
  implP|cmgr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("threads");
  implDestP|threads;
  if (implDestP.hasComments()) implDestP.comment("tmgr");
  implDestP|tmgr;
  if (implDestP.hasComments()) implDestP.comment("cmgr");
  implDestP|cmgr;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resultsDone();
 */
void CProxy_threadCollide::resultsDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_threadCollide::idx_resultsDone_void(),0);
}

// Entry point registration function
int CkIndex_threadCollide::reg_resultsDone_void() {
  int epidx = CkRegisterEp("resultsDone()",
      reinterpret_cast<CkCallFnPtr>(_call_resultsDone_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_threadCollide::_call_resultsDone_void(void* impl_msg, void* impl_obj_void)
{
  threadCollide* impl_obj = static_cast<threadCollide*>(impl_obj_void);
  impl_obj->resultsDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_threadCollide::resultsDone_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_threadCollide::reg_threadCollide_CkMigrateMessage() {
  int epidx = CkRegisterEp("threadCollide(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_threadCollide_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_threadCollide::_call_threadCollide_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<threadCollide> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resultsDone();
 */
void CProxySection_threadCollide::resultsDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_threadCollide::idx_resultsDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threadCollide(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_threadCollide::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
  idx_threadCollide_marshall1();

  // REG: void resultsDone();
  idx_resultsDone_void();

  // REG: threadCollide(CkMigrateMessage* impl_msg);
  idx_threadCollide_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_threadCollide_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registercollide(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registercollidecharm();

/* REG: message threadCollisions{
Collision colls[];
}
;
*/
CMessage_threadCollisions::__register("threadCollisions", sizeof(threadCollisions),(CkPackFnPtr) threadCollisions::pack,(CkUnpackFnPtr) threadCollisions::unpack);

  _registerInitCall(collideNodeInit,1);

/* REG: group threadCollideMgr: collideClient{
threadCollideMgr();
void sendRemote();
void remoteCollisions(threadCollisions* impl_msg);
};
*/
  CkIndex_threadCollideMgr::__register("threadCollideMgr", sizeof(threadCollideMgr));

/* REG: array threadCollide: ArrayElement{
threadCollide(const CProxy_TCharm &threads, const CProxy_threadCollideMgr &tmgr, const CollideHandle &cmgr);
void resultsDone();
threadCollide(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_threadCollide::__register("threadCollide", sizeof(threadCollide));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_threadCollideMgr::virtual_pup(PUP::er &p) {
    recursive_pup<threadCollideMgr>(dynamic_cast<threadCollideMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_threadCollide::virtual_pup(PUP::er &p) {
    recursive_pup<threadCollide>(dynamic_cast<threadCollide*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
