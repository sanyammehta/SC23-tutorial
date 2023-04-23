
/* ---------------- method closures -------------- */

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


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_collideMgr::voxelMessageRecvd_2_closure : public SDAG::Closure {
      

      voxelMessageRecvd_2_closure() {
        init();
      }
      voxelMessageRecvd_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~voxelMessageRecvd_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(voxelMessageRecvd_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_collideMgr::determineNumVoxels_3_closure : public SDAG::Closure {
      

      determineNumVoxels_3_closure() {
        init();
      }
      determineNumVoxels_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~determineNumVoxels_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(determineNumVoxels_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_collideMgr::reductionFinished_4_closure : public SDAG::Closure {
      

      reductionFinished_4_closure() {
        init();
      }
      reductionFinished_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~reductionFinished_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(reductionFinished_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_collideVoxel::initiateCollision_3_closure : public SDAG::Closure {
            CProxy_collideMgr mg;


      initiateCollision_3_closure() {
        init();
      }
      initiateCollision_3_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_collideMgr & getP0() { return mg;}
      void pup(PUP::er& __p) {
        __p | mg;
        packClosure(__p);
      }
      virtual ~initiateCollision_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(initiateCollision_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message objListMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_objListMsg::operator new(size_t s){
  return objListMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_objListMsg::operator new(size_t s, int* sz){
  return objListMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_objListMsg::operator new(size_t s, int* sz,const int pb){
  return objListMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_objListMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return objListMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_objListMsg::operator new(size_t s, const int p) {
  return objListMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_objListMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return objListMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_objListMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_objListMsg::CMessage_objListMsg() {
objListMsg *newmsg = (objListMsg *)this;
}
void CMessage_objListMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_objListMsg::pack(objListMsg *msg) {
  return (void *) msg;
}
objListMsg* CMessage_objListMsg::unpack(void* buf) {
  objListMsg *msg = (objListMsg *) buf;
  return msg;
}
int CMessage_objListMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group collideClient: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_collideClient::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_collideClient::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,collideClient::isIrreducible());
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group serialCollideClient: collideClient{
serialCollideClient();
serialCollideClient(const CkCallback &clientCb_);
void reductionDone(CkReductionMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_serialCollideClient::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient(const CkCallback &clientCb_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionDone(CkReductionMsg* impl_msg);
 */
void CProxyElement_serialCollideClient::reductionDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient();
 */
CkGroupID CProxy_serialCollideClient::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_serialCollideClient::__idx, CkIndex_serialCollideClient::idx_serialCollideClient_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_serialCollideClient::reg_serialCollideClient_void() {
  int epidx = CkRegisterEp("serialCollideClient()",
      reinterpret_cast<CkCallFnPtr>(_call_serialCollideClient_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_serialCollideClient::_call_serialCollideClient_void(void* impl_msg, void* impl_obj_void)
{
  serialCollideClient* impl_obj = static_cast<serialCollideClient*>(impl_obj_void);
  new (impl_obj_void) serialCollideClient();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient(const CkCallback &clientCb_);
 */
CkGroupID CProxy_serialCollideClient::ckNew(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkCallback &clientCb_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_serialCollideClient::__idx, CkIndex_serialCollideClient::idx_serialCollideClient_marshall2(), impl_msg);
  return gId;
}
  CProxy_serialCollideClient::CProxy_serialCollideClient(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkCallback &clientCb_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_serialCollideClient::__idx, CkIndex_serialCollideClient::idx_serialCollideClient_marshall2(), impl_msg));
}

// Entry point registration function
int CkIndex_serialCollideClient::reg_serialCollideClient_marshall2() {
  int epidx = CkRegisterEp("serialCollideClient(const CkCallback &clientCb_)",
      reinterpret_cast<CkCallFnPtr>(_call_serialCollideClient_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_serialCollideClient_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_serialCollideClient_marshall2);

  return epidx;
}

void CkIndex_serialCollideClient::_call_serialCollideClient_marshall2(void* impl_msg, void* impl_obj_void)
{
  serialCollideClient* impl_obj = static_cast<serialCollideClient*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) serialCollideClient(std::move(clientCb_.t));
}
int CkIndex_serialCollideClient::_callmarshall_serialCollideClient_marshall2(char* impl_buf, void* impl_obj_void) {
  serialCollideClient* impl_obj = static_cast<serialCollideClient*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) serialCollideClient(std::move(clientCb_.t));
  return implP.size();
}
void CkIndex_serialCollideClient::_marshallmessagepup_serialCollideClient_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("clientCb_");
  implDestP|clientCb_;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionDone(CkReductionMsg* impl_msg);
 */
void CProxy_serialCollideClient::reductionDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_serialCollideClient::reductionDone(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_serialCollideClient::reductionDone(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_serialCollideClient::reg_reductionDone_CkReductionMsg() {
  int epidx = CkRegisterEp("reductionDone(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_reductionDone_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_serialCollideClient::_call_reductionDone_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  serialCollideClient* impl_obj = static_cast<serialCollideClient*>(impl_obj_void);
  impl_obj->reductionDone((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: serialCollideClient(const CkCallback &clientCb_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionDone(CkReductionMsg* impl_msg);
 */
void CProxySection_serialCollideClient::reductionDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_serialCollideClient::idx_reductionDone_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_serialCollideClient::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_collideClient::__idx);
   CkRegisterGroupIrr(__idx,serialCollideClient::isIrreducible());
  // REG: serialCollideClient();
  idx_serialCollideClient_void();
  CkRegisterDefaultCtor(__idx, idx_serialCollideClient_void());

  // REG: serialCollideClient(const CkCallback &clientCb_);
  idx_serialCollideClient_marshall2();

  // REG: void reductionDone(CkReductionMsg* impl_msg);
  idx_reductionDone_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group distributedCollideClient: collideClient{
distributedCollideClient(const CkCallback &clientCb_);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_distributedCollideClient::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: distributedCollideClient(const CkCallback &clientCb_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: distributedCollideClient(const CkCallback &clientCb_);
 */
CkGroupID CProxy_distributedCollideClient::ckNew(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkCallback &clientCb_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_distributedCollideClient::__idx, CkIndex_distributedCollideClient::idx_distributedCollideClient_marshall1(), impl_msg);
  return gId;
}
  CProxy_distributedCollideClient::CProxy_distributedCollideClient(const CkCallback &clientCb_, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkCallback &clientCb_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)clientCb_;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_distributedCollideClient::__idx, CkIndex_distributedCollideClient::idx_distributedCollideClient_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_distributedCollideClient::reg_distributedCollideClient_marshall1() {
  int epidx = CkRegisterEp("distributedCollideClient(const CkCallback &clientCb_)",
      reinterpret_cast<CkCallFnPtr>(_call_distributedCollideClient_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_distributedCollideClient_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_distributedCollideClient_marshall1);

  return epidx;
}

void CkIndex_distributedCollideClient::_call_distributedCollideClient_marshall1(void* impl_msg, void* impl_obj_void)
{
  distributedCollideClient* impl_obj = static_cast<distributedCollideClient*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) distributedCollideClient(std::move(clientCb_.t));
}
int CkIndex_distributedCollideClient::_callmarshall_distributedCollideClient_marshall1(char* impl_buf, void* impl_obj_void) {
  distributedCollideClient* impl_obj = static_cast<distributedCollideClient*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) distributedCollideClient(std::move(clientCb_.t));
  return implP.size();
}
void CkIndex_distributedCollideClient::_marshallmessagepup_distributedCollideClient_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &clientCb_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> clientCb_;
  implP|clientCb_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("clientCb_");
  implDestP|clientCb_;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: distributedCollideClient(const CkCallback &clientCb_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_distributedCollideClient::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_collideClient::__idx);
   CkRegisterGroupIrr(__idx,distributedCollideClient::isIrreducible());
  // REG: distributedCollideClient(const CkCallback &clientCb_);
  idx_distributedCollideClient_marshall1();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group collideMgr: IrrGroup{
collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
void voxelMessageRecvd();
void determineNumVoxels();
void reductionFinished();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_collideMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void voxelMessageRecvd();
 */
void CProxyElement_collideMgr::voxelMessageRecvd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void determineNumVoxels();
 */
void CProxyElement_collideMgr::determineNumVoxels(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionFinished();
 */
void CProxyElement_collideMgr::reductionFinished(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_collideMgr::_call_redn_wrapper_reductionFinished_void(void* impl_msg, void* impl_obj_void)
{
  collideMgr* impl_obj = static_cast<collideMgr*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->reductionFinished();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
CkGroupID CProxy_collideMgr::ckNew(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideGrid3d>::type>::type &)gridMap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideClient>::type>::type &)client;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)cells;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideGrid3d>::type>::type &)gridMap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideClient>::type>::type &)client;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)cells;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_collideMgr::__idx, CkIndex_collideMgr::idx_collideMgr_marshall1(), impl_msg);
  return gId;
}
  CProxy_collideMgr::CProxy_collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideGrid3d>::type>::type &)gridMap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideClient>::type>::type &)client;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)cells;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CollideGrid3d>::type>::type &)gridMap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideClient>::type>::type &)client;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)cells;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_collideMgr::__idx, CkIndex_collideMgr::idx_collideMgr_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_collideMgr::reg_collideMgr_marshall1() {
  int epidx = CkRegisterEp("collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells)",
      reinterpret_cast<CkCallFnPtr>(_call_collideMgr_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collideMgr_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collideMgr_marshall1);

  return epidx;
}

void CkIndex_collideMgr::_call_collideMgr_marshall1(void* impl_msg, void* impl_obj_void)
{
  collideMgr* impl_obj = static_cast<collideMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CollideGrid3d> gridMap;
  implP|gridMap;
  PUP::detail::TemporaryObjectHolder<CProxy_collideClient> client;
  implP|client;
  PUP::detail::TemporaryObjectHolder<CkArrayID> cells;
  implP|cells;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) collideMgr(std::move(gridMap.t), std::move(client.t), std::move(cells.t));
}
int CkIndex_collideMgr::_callmarshall_collideMgr_marshall1(char* impl_buf, void* impl_obj_void) {
  collideMgr* impl_obj = static_cast<collideMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CollideGrid3d> gridMap;
  implP|gridMap;
  PUP::detail::TemporaryObjectHolder<CProxy_collideClient> client;
  implP|client;
  PUP::detail::TemporaryObjectHolder<CkArrayID> cells;
  implP|cells;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) collideMgr(std::move(gridMap.t), std::move(client.t), std::move(cells.t));
  return implP.size();
}
void CkIndex_collideMgr::_marshallmessagepup_collideMgr_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CollideGrid3d> gridMap;
  implP|gridMap;
  PUP::detail::TemporaryObjectHolder<CProxy_collideClient> client;
  implP|client;
  PUP::detail::TemporaryObjectHolder<CkArrayID> cells;
  implP|cells;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gridMap");
  implDestP|gridMap;
  if (implDestP.hasComments()) implDestP.comment("client");
  implDestP|client;
  if (implDestP.hasComments()) implDestP.comment("cells");
  implDestP|cells;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void voxelMessageRecvd();
 */
void CProxy_collideMgr::voxelMessageRecvd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_collideMgr::voxelMessageRecvd(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_collideMgr::voxelMessageRecvd(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_collideMgr::reg_voxelMessageRecvd_void() {
  int epidx = CkRegisterEp("voxelMessageRecvd()",
      reinterpret_cast<CkCallFnPtr>(_call_voxelMessageRecvd_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_collideMgr::_call_voxelMessageRecvd_void(void* impl_msg, void* impl_obj_void)
{
  collideMgr* impl_obj = static_cast<collideMgr*>(impl_obj_void);
  impl_obj->voxelMessageRecvd();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_collideMgr::voxelMessageRecvd_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void determineNumVoxels();
 */
void CProxy_collideMgr::determineNumVoxels(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_collideMgr::determineNumVoxels(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_collideMgr::determineNumVoxels(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_collideMgr::reg_determineNumVoxels_void() {
  int epidx = CkRegisterEp("determineNumVoxels()",
      reinterpret_cast<CkCallFnPtr>(_call_determineNumVoxels_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_collideMgr::_call_determineNumVoxels_void(void* impl_msg, void* impl_obj_void)
{
  collideMgr* impl_obj = static_cast<collideMgr*>(impl_obj_void);
  impl_obj->determineNumVoxels();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_collideMgr::determineNumVoxels_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionFinished();
 */
void CProxy_collideMgr::reductionFinished(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_collideMgr::reductionFinished(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_collideMgr::reductionFinished(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_collideMgr::reg_reductionFinished_void() {
  int epidx = CkRegisterEp("reductionFinished()",
      reinterpret_cast<CkCallFnPtr>(_call_reductionFinished_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_collideMgr::reg_redn_wrapper_reductionFinished_void() {
  return CkRegisterEp("redn_wrapper_reductionFinished(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_reductionFinished_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_collideMgr::_call_reductionFinished_void(void* impl_msg, void* impl_obj_void)
{
  collideMgr* impl_obj = static_cast<collideMgr*>(impl_obj_void);
  impl_obj->reductionFinished();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_collideMgr::reductionFinished_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void voxelMessageRecvd();
 */
void CProxySection_collideMgr::voxelMessageRecvd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_collideMgr::idx_voxelMessageRecvd_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void determineNumVoxels();
 */
void CProxySection_collideMgr::determineNumVoxels(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_collideMgr::idx_determineNumVoxels_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionFinished();
 */
void CProxySection_collideMgr::reductionFinished(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_collideMgr::idx_reductionFinished_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_collideMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,collideMgr::isIrreducible());
  // REG: collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
  idx_collideMgr_marshall1();

  // REG: void voxelMessageRecvd();
  idx_voxelMessageRecvd_void();

  // REG: void determineNumVoxels();
  idx_determineNumVoxels_void();

  // REG: void reductionFinished();
  idx_reductionFinished_void();
  idx_redn_wrapper_reductionFinished_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array collideVoxel: ArrayElement{
collideVoxel();
void add(objListMsg* impl_msg);
void initiateCollision(const CProxy_collideMgr &mg);
collideVoxel(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_collideVoxel::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_collideVoxel::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_collideVoxel::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_collideVoxel::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_collideVoxel::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_collideVoxel::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_collideVoxel::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel();
 */
void CProxyElement_collideVoxel::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_collideVoxel::idx_collideVoxel_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(objListMsg* impl_msg);
 */
void CProxyElement_collideVoxel::add(objListMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_createhere);
  ckSend(impl_amsg, CkIndex_collideVoxel::idx_add_objListMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiateCollision(const CProxy_collideMgr &mg);
 */
void CProxyElement_collideVoxel::initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_collideMgr &mg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_collideVoxel::idx_initiateCollision_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel();
 */
CkArrayID CProxy_collideVoxel::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_collideVoxel::idx_collideVoxel_void(), opts);
  return gId;
}
void CProxy_collideVoxel::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_collideVoxel::idx_collideVoxel_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_collideVoxel::ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_collideVoxel::idx_collideVoxel_void(), opts);
  return gId;
}
void CProxy_collideVoxel::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_collideVoxel::idx_collideVoxel_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_collideVoxel::reg_collideVoxel_void() {
  int epidx = CkRegisterEp("collideVoxel()",
      reinterpret_cast<CkCallFnPtr>(_call_collideVoxel_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_collideVoxel::_call_collideVoxel_void(void* impl_msg, void* impl_obj_void)
{
  collideVoxel* impl_obj = static_cast<collideVoxel*>(impl_obj_void);
  new (impl_obj_void) collideVoxel();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(objListMsg* impl_msg);
 */
void CProxy_collideVoxel::add(objListMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_createhere);
  ckBroadcast(impl_amsg, CkIndex_collideVoxel::idx_add_objListMsg(),0);
}

// Entry point registration function
int CkIndex_collideVoxel::reg_add_objListMsg() {
  int epidx = CkRegisterEp("add(objListMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_add_objListMsg), CMessage_objListMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)objListMsg::ckDebugPup);
  return epidx;
}

void CkIndex_collideVoxel::_call_add_objListMsg(void* impl_msg, void* impl_obj_void)
{
  collideVoxel* impl_obj = static_cast<collideVoxel*>(impl_obj_void);
  impl_obj->add((objListMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiateCollision(const CProxy_collideMgr &mg);
 */
void CProxy_collideVoxel::initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_collideMgr &mg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_collideVoxel::idx_initiateCollision_marshall3(),0);
}

// Entry point registration function
int CkIndex_collideVoxel::reg_initiateCollision_marshall3() {
  int epidx = CkRegisterEp("initiateCollision(const CProxy_collideMgr &mg)",
      reinterpret_cast<CkCallFnPtr>(_call_initiateCollision_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initiateCollision_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initiateCollision_marshall3);

  return epidx;
}

void CkIndex_collideVoxel::_call_initiateCollision_marshall3(void* impl_msg, void* impl_obj_void)
{
  collideVoxel* impl_obj = static_cast<collideVoxel*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_collideMgr &mg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_collideMgr> mg;
  implP|mg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initiateCollision(std::move(mg.t));
}
int CkIndex_collideVoxel::_callmarshall_initiateCollision_marshall3(char* impl_buf, void* impl_obj_void) {
  collideVoxel* impl_obj = static_cast<collideVoxel*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_collideMgr &mg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_collideMgr> mg;
  implP|mg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initiateCollision(std::move(mg.t));
  return implP.size();
}
void CkIndex_collideVoxel::_marshallmessagepup_initiateCollision_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_collideMgr &mg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_collideMgr> mg;
  implP|mg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("mg");
  implDestP|mg;
}
PUPable_def(SINGLE_ARG(Closure_collideVoxel::initiateCollision_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_collideVoxel::reg_collideVoxel_CkMigrateMessage() {
  int epidx = CkRegisterEp("collideVoxel(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_collideVoxel_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_collideVoxel::_call_collideVoxel_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<collideVoxel> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(objListMsg* impl_msg);
 */
void CProxySection_collideVoxel::add(objListMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_createhere);
  ckSend(impl_amsg, CkIndex_collideVoxel::idx_add_objListMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiateCollision(const CProxy_collideMgr &mg);
 */
void CProxySection_collideVoxel::initiateCollision(const CProxy_collideMgr &mg, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_collideMgr &mg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_collideMgr>::type>::type &)mg;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_collideVoxel::idx_initiateCollision_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: collideVoxel(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_collideVoxel::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: collideVoxel();
  idx_collideVoxel_void();
  CkRegisterDefaultCtor(__idx, idx_collideVoxel_void());

  // REG: void add(objListMsg* impl_msg);
  idx_add_objListMsg();
  CkRegisterIfNotThere(idx_add_objListMsg(), CkArray_IfNotThere_createhere);

  // REG: void initiateCollision(const CProxy_collideMgr &mg);
  idx_initiateCollision_marshall3();

  // REG: collideVoxel(CkMigrateMessage* impl_msg);
  idx_collideVoxel_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_collideVoxel_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registercollidecharm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message objListMsg;
*/
CMessage_objListMsg::__register("objListMsg", sizeof(objListMsg),(CkPackFnPtr) objListMsg::pack,(CkUnpackFnPtr) objListMsg::unpack);

/* REG: group collideClient: IrrGroup;
*/
  CkIndex_collideClient::__register("collideClient", sizeof(collideClient));

/* REG: group serialCollideClient: collideClient{
serialCollideClient();
serialCollideClient(const CkCallback &clientCb_);
void reductionDone(CkReductionMsg* impl_msg);
};
*/
  CkIndex_serialCollideClient::__register("serialCollideClient", sizeof(serialCollideClient));

/* REG: group distributedCollideClient: collideClient{
distributedCollideClient(const CkCallback &clientCb_);
};
*/
  CkIndex_distributedCollideClient::__register("distributedCollideClient", sizeof(distributedCollideClient));

/* REG: group collideMgr: IrrGroup{
collideMgr(const CollideGrid3d &gridMap, const CProxy_collideClient &client, const CkArrayID &cells);
void voxelMessageRecvd();
void determineNumVoxels();
void reductionFinished();
};
*/
  CkIndex_collideMgr::__register("collideMgr", sizeof(collideMgr));

/* REG: array collideVoxel: ArrayElement{
collideVoxel();
void add(objListMsg* impl_msg);
void initiateCollision(const CProxy_collideMgr &mg);
collideVoxel(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_collideVoxel::__register("collideVoxel", sizeof(collideVoxel));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_collideClient::virtual_pup(PUP::er &p) {
    recursive_pup<collideClient>(dynamic_cast<collideClient*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_serialCollideClient::virtual_pup(PUP::er &p) {
    recursive_pup<serialCollideClient>(dynamic_cast<serialCollideClient*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_distributedCollideClient::virtual_pup(PUP::er &p) {
    recursive_pup<distributedCollideClient>(dynamic_cast<distributedCollideClient*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_collideMgr::virtual_pup(PUP::er &p) {
    recursive_pup<collideMgr>(dynamic_cast<collideMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_collideVoxel::virtual_pup(PUP::er &p) {
    recursive_pup<collideVoxel>(dynamic_cast<collideVoxel*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
