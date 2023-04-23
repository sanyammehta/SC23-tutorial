

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkLocCache::requestLocation_2_closure : public SDAG::Closure {
            CmiUInt8 id;
            int peToTell;


      requestLocation_2_closure() {
        init();
      }
      requestLocation_2_closure(CkMigrateMessage*) {
        init();
      }
            CmiUInt8 & getP0() { return id;}
            int & getP1() { return peToTell;}
      void pup(PUP::er& __p) {
        __p | id;
        __p | peToTell;
        packClosure(__p);
      }
      virtual ~requestLocation_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestLocation_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkLocCache::updateLocation_3_closure : public SDAG::Closure {
            CkLocEntry newEntry;


      updateLocation_3_closure() {
        init();
      }
      updateLocation_3_closure(CkMigrateMessage*) {
        init();
      }
            CkLocEntry & getP0() { return newEntry;}
      void pup(PUP::er& __p) {
        __p | newEntry;
        packClosure(__p);
      }
      virtual ~updateLocation_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateLocation_3_closure));
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

    struct Closure_CkLocMgr::requestLocation_3_closure : public SDAG::Closure {
            CkArrayIndex idx;
            int peToTell;


      requestLocation_3_closure() {
        init();
      }
      requestLocation_3_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return idx;}
            int & getP1() { return peToTell;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | peToTell;
        packClosure(__p);
      }
      virtual ~requestLocation_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestLocation_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkLocMgr::updateLocation_4_closure : public SDAG::Closure {
            CkArrayIndex idx;
            CkLocEntry e;


      updateLocation_4_closure() {
        init();
      }
      updateLocation_4_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return idx;}
            CkLocEntry & getP1() { return e;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | e;
        packClosure(__p);
      }
      virtual ~updateLocation_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateLocation_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkLocMgr::reclaimRemote_5_closure : public SDAG::Closure {
            CkArrayIndex idx;
            int deletedOnPe;


      reclaimRemote_5_closure() {
        init();
      }
      reclaimRemote_5_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return idx;}
            int & getP1() { return deletedOnPe;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | deletedOnPe;
        packClosure(__p);
      }
      virtual ~reclaimRemote_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(reclaimRemote_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message CkArrayElementMigrateMessage{
char packData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s){
  return CkArrayElementMigrateMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int* sz){
  return CkArrayElementMigrateMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int* sz,const int pb){
  return CkArrayElementMigrateMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkArrayElementMigrateMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayElementMigrateMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayElementMigrateMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkArrayElementMigrateMessage::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayElementMigrateMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkArrayElementMigrateMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkArrayElementMigrateMessage::CMessage_CkArrayElementMigrateMessage() {
CkArrayElementMigrateMessage *newmsg = (CkArrayElementMigrateMessage *)this;
  newmsg->packData = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkArrayElementMigrateMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkArrayElementMigrateMessage::pack(CkArrayElementMigrateMessage *msg) {
  msg->packData = (char *) ((char *)msg->packData - (char *)msg);
  return (void *) msg;
}
CkArrayElementMigrateMessage* CMessage_CkArrayElementMigrateMessage::unpack(void* buf) {
  CkArrayElementMigrateMessage *msg = (CkArrayElementMigrateMessage *) buf;
  msg->packData = (char *) ((size_t)msg->packData + (char *)msg);
  return msg;
}
int CMessage_CkArrayElementMigrateMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkLocCache: IrrGroup{
CkLocCache();
void requestLocation(const CmiUInt8 &id, int peToTell);
void updateLocation(const CkLocEntry &newEntry);
CkLocCache(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkLocCache::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CmiUInt8 &id, int peToTell);
 */
void CProxyElement_CkLocCache::requestLocation(const CmiUInt8 &id, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CmiUInt8 &id, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkLocEntry &newEntry);
 */
void CProxyElement_CkLocCache::updateLocation(const CkLocEntry &newEntry, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkLocEntry &newEntry
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache();
 */
CkGroupID CProxy_CkLocCache::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkLocCache::__idx, CkIndex_CkLocCache::idx_CkLocCache_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CkLocCache::reg_CkLocCache_void() {
  int epidx = CkRegisterEp("CkLocCache()",
      reinterpret_cast<CkCallFnPtr>(_call_CkLocCache_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkLocCache::_call_CkLocCache_void(void* impl_msg, void* impl_obj_void)
{
  CkLocCache* impl_obj = static_cast<CkLocCache*>(impl_obj_void);
  new (impl_obj_void) CkLocCache();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CmiUInt8 &id, int peToTell);
 */
void CProxy_CkLocCache::requestLocation(const CmiUInt8 &id, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CmiUInt8 &id, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocCache::requestLocation(const CmiUInt8 &id, int peToTell, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CmiUInt8 &id, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
  }
  CkSendMsgBranchMulti(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocCache::requestLocation(const CmiUInt8 &id, int peToTell, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CmiUInt8 &id, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
  }
  CkSendMsgBranchGroup(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkLocCache::reg_requestLocation_marshall2() {
  int epidx = CkRegisterEp("requestLocation(const CmiUInt8 &id, int peToTell)",
      reinterpret_cast<CkCallFnPtr>(_call_requestLocation_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestLocation_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestLocation_marshall2);

  return epidx;
}

void CkIndex_CkLocCache::_call_requestLocation_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkLocCache* impl_obj = static_cast<CkLocCache*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CmiUInt8 &id, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CmiUInt8> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestLocation(std::move(id.t), std::move(peToTell.t));
}
int CkIndex_CkLocCache::_callmarshall_requestLocation_marshall2(char* impl_buf, void* impl_obj_void) {
  CkLocCache* impl_obj = static_cast<CkLocCache*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CmiUInt8 &id, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CmiUInt8> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestLocation(std::move(id.t), std::move(peToTell.t));
  return implP.size();
}
void CkIndex_CkLocCache::_marshallmessagepup_requestLocation_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CmiUInt8 &id, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CmiUInt8> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("id");
  implDestP|id;
  if (implDestP.hasComments()) implDestP.comment("peToTell");
  implDestP|peToTell;
}
PUPable_def(SINGLE_ARG(Closure_CkLocCache::requestLocation_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkLocEntry &newEntry);
 */
void CProxy_CkLocCache::updateLocation(const CkLocEntry &newEntry, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkLocEntry &newEntry
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocCache::updateLocation(const CkLocEntry &newEntry, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkLocEntry &newEntry
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
  }
  CkSendMsgBranchMulti(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocCache::updateLocation(const CkLocEntry &newEntry, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkLocEntry &newEntry
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
  }
  CkSendMsgBranchGroup(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkLocCache::reg_updateLocation_marshall3() {
  int epidx = CkRegisterEp("updateLocation(const CkLocEntry &newEntry)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocation_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateLocation_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateLocation_marshall3);

  return epidx;
}

void CkIndex_CkLocCache::_call_updateLocation_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkLocCache* impl_obj = static_cast<CkLocCache*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLocEntry &newEntry*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLocEntry> newEntry;
  implP|newEntry;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocation(std::move(newEntry.t));
}
int CkIndex_CkLocCache::_callmarshall_updateLocation_marshall3(char* impl_buf, void* impl_obj_void) {
  CkLocCache* impl_obj = static_cast<CkLocCache*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLocEntry &newEntry*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLocEntry> newEntry;
  implP|newEntry;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocation(std::move(newEntry.t));
  return implP.size();
}
void CkIndex_CkLocCache::_marshallmessagepup_updateLocation_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLocEntry &newEntry*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLocEntry> newEntry;
  implP|newEntry;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("newEntry");
  implDestP|newEntry;
}
PUPable_def(SINGLE_ARG(Closure_CkLocCache::updateLocation_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkLocCache::reg_CkLocCache_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkLocCache(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkLocCache_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkLocCache::_call_CkLocCache_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkLocCache((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CmiUInt8 &id, int peToTell);
 */
void CProxySection_CkLocCache::requestLocation(const CmiUInt8 &id, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CmiUInt8 &id, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)id;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocCache::idx_requestLocation_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkLocEntry &newEntry);
 */
void CProxySection_CkLocCache::updateLocation(const CkLocEntry &newEntry, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkLocEntry &newEntry
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)newEntry;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocCache::idx_updateLocation_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocCache(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkLocCache::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkLocCache::isIrreducible());
  // REG: CkLocCache();
  idx_CkLocCache_void();
  CkRegisterDefaultCtor(__idx, idx_CkLocCache_void());

  // REG: void requestLocation(const CmiUInt8 &id, int peToTell);
  idx_requestLocation_marshall2();

  // REG: void updateLocation(const CkLocEntry &newEntry);
  idx_updateLocation_marshall3();

  // REG: CkLocCache(CkMigrateMessage* impl_msg);
  idx_CkLocCache_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkLocCache_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkLocMgr: IrrGroup{
CkLocMgr(const CkArrayOptions &opts);
void immigrate(CkArrayElementMigrateMessage* impl_msg);
void requestLocation(const CkArrayIndex &idx, int peToTell);
void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
CkLocMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkLocMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(const CkArrayOptions &opts);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
void CProxyElement_CkLocMgr::immigrate(CkArrayElementMigrateMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CkArrayIndex &idx, int peToTell);
 */
void CProxyElement_CkLocMgr::requestLocation(const CkArrayIndex &idx, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
 */
void CProxyElement_CkLocMgr::updateLocation(const CkArrayIndex &idx, const CkLocEntry &e, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, const CkLocEntry &e
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
void CProxyElement_CkLocMgr::reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int deletedOnPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(const CkArrayOptions &opts);
 */
CkGroupID CProxy_CkLocMgr::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayOptions &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkLocMgr::__idx, CkIndex_CkLocMgr::idx_CkLocMgr_marshall1(), impl_msg);
  return gId;
}
  CProxy_CkLocMgr::CProxy_CkLocMgr(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayOptions &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkLocMgr::__idx, CkIndex_CkLocMgr::idx_CkLocMgr_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_CkLocMgr::reg_CkLocMgr_marshall1() {
  int epidx = CkRegisterEp("CkLocMgr(const CkArrayOptions &opts)",
      reinterpret_cast<CkCallFnPtr>(_call_CkLocMgr_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkLocMgr_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkLocMgr_marshall1);

  return epidx;
}

void CkIndex_CkLocMgr::_call_CkLocMgr_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkLocMgr(std::move(opts.t));
}
int CkIndex_CkLocMgr::_callmarshall_CkLocMgr_marshall1(char* impl_buf, void* impl_obj_void) {
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkLocMgr(std::move(opts.t));
  return implP.size();
}
void CkIndex_CkLocMgr::_marshallmessagepup_CkLocMgr_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("opts");
  implDestP|opts;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
void CProxy_CkLocMgr::immigrate(CkArrayElementMigrateMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::immigrate(CkArrayElementMigrateMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::immigrate(CkArrayElementMigrateMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkLocMgr::reg_immigrate_CkArrayElementMigrateMessage() {
  int epidx = CkRegisterEp("immigrate(CkArrayElementMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_immigrate_CkArrayElementMigrateMessage), CMessage_CkArrayElementMigrateMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayElementMigrateMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkLocMgr::_call_immigrate_CkArrayElementMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  impl_obj->immigrate((CkArrayElementMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CkArrayIndex &idx, int peToTell);
 */
void CProxy_CkLocMgr::requestLocation(const CkArrayIndex &idx, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::requestLocation(const CkArrayIndex &idx, int peToTell, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
  }
  CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::requestLocation(const CkArrayIndex &idx, int peToTell, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
  }
  CkSendMsgBranchGroup(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkLocMgr::reg_requestLocation_marshall3() {
  int epidx = CkRegisterEp("requestLocation(const CkArrayIndex &idx, int peToTell)",
      reinterpret_cast<CkCallFnPtr>(_call_requestLocation_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestLocation_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestLocation_marshall3);

  return epidx;
}

void CkIndex_CkLocMgr::_call_requestLocation_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestLocation(std::move(idx.t), std::move(peToTell.t));
}
int CkIndex_CkLocMgr::_callmarshall_requestLocation_marshall3(char* impl_buf, void* impl_obj_void) {
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestLocation(std::move(idx.t), std::move(peToTell.t));
  return implP.size();
}
void CkIndex_CkLocMgr::_marshallmessagepup_requestLocation_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int peToTell*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> peToTell;
  implP|peToTell;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("peToTell");
  implDestP|peToTell;
}
PUPable_def(SINGLE_ARG(Closure_CkLocMgr::requestLocation_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
 */
void CProxy_CkLocMgr::updateLocation(const CkArrayIndex &idx, const CkLocEntry &e, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, const CkLocEntry &e
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::updateLocation(const CkArrayIndex &idx, const CkLocEntry &e, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, const CkLocEntry &e
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
  }
  CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkLocMgr::updateLocation(const CkArrayIndex &idx, const CkLocEntry &e, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, const CkLocEntry &e
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
  }
  CkSendMsgBranchGroup(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkLocMgr::reg_updateLocation_marshall4() {
  int epidx = CkRegisterEp("updateLocation(const CkArrayIndex &idx, const CkLocEntry &e)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocation_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateLocation_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateLocation_marshall4);

  return epidx;
}

void CkIndex_CkLocMgr::_call_updateLocation_marshall4(void* impl_msg, void* impl_obj_void)
{
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, const CkLocEntry &e*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<CkLocEntry> e;
  implP|e;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocation(std::move(idx.t), std::move(e.t));
}
int CkIndex_CkLocMgr::_callmarshall_updateLocation_marshall4(char* impl_buf, void* impl_obj_void) {
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, const CkLocEntry &e*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<CkLocEntry> e;
  implP|e;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocation(std::move(idx.t), std::move(e.t));
  return implP.size();
}
void CkIndex_CkLocMgr::_marshallmessagepup_updateLocation_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, const CkLocEntry &e*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<CkLocEntry> e;
  implP|e;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("e");
  implDestP|e;
}
PUPable_def(SINGLE_ARG(Closure_CkLocMgr::updateLocation_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
void CProxy_CkLocMgr::reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int deletedOnPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkLocMgr::reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int deletedOnPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
  }
  CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkLocMgr::reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int deletedOnPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
  }
  CkSendMsgBranchGroup(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkLocMgr::reg_reclaimRemote_marshall5() {
  int epidx = CkRegisterEp("reclaimRemote(const CkArrayIndex &idx, int deletedOnPe)",
      reinterpret_cast<CkCallFnPtr>(_call_reclaimRemote_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reclaimRemote_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reclaimRemote_marshall5);

  return epidx;
}

void CkIndex_CkLocMgr::_call_reclaimRemote_marshall5(void* impl_msg, void* impl_obj_void)
{
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int deletedOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> deletedOnPe;
  implP|deletedOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reclaimRemote(std::move(idx.t), std::move(deletedOnPe.t));
}
int CkIndex_CkLocMgr::_callmarshall_reclaimRemote_marshall5(char* impl_buf, void* impl_obj_void) {
  CkLocMgr* impl_obj = static_cast<CkLocMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int deletedOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> deletedOnPe;
  implP|deletedOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reclaimRemote(std::move(idx.t), std::move(deletedOnPe.t));
  return implP.size();
}
void CkIndex_CkLocMgr::_marshallmessagepup_reclaimRemote_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int deletedOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> deletedOnPe;
  implP|deletedOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("deletedOnPe");
  implDestP|deletedOnPe;
}
PUPable_def(SINGLE_ARG(Closure_CkLocMgr::reclaimRemote_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkLocMgr::reg_CkLocMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkLocMgr(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkLocMgr_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkLocMgr::_call_CkLocMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkLocMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(const CkArrayOptions &opts);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
void CProxySection_CkLocMgr::immigrate(CkArrayElementMigrateMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_immigrate_CkArrayElementMigrateMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestLocation(const CkArrayIndex &idx, int peToTell);
 */
void CProxySection_CkLocMgr::requestLocation(const CkArrayIndex &idx, int peToTell, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int peToTell
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|peToTell;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_requestLocation_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
 */
void CProxySection_CkLocMgr::updateLocation(const CkArrayIndex &idx, const CkLocEntry &e, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, const CkLocEntry &e
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLocEntry>::type>::type &)e;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_updateLocation_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
void CProxySection_CkLocMgr::reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int deletedOnPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|deletedOnPe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkLocMgr::idx_reclaimRemote_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkLocMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkLocMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkLocMgr::isIrreducible());
  // REG: CkLocMgr(const CkArrayOptions &opts);
  idx_CkLocMgr_marshall1();

  // REG: void immigrate(CkArrayElementMigrateMessage* impl_msg);
  idx_immigrate_CkArrayElementMigrateMessage();

  // REG: void requestLocation(const CkArrayIndex &idx, int peToTell);
  idx_requestLocation_marshall3();

  // REG: void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
  idx_updateLocation_marshall4();

  // REG: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
  idx_reclaimRemote_marshall5();

  // REG: CkLocMgr(CkMigrateMessage* impl_msg);
  idx_CkLocMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkLocMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkArrayMap: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkArrayMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkArrayMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkArrayMap::isIrreducible());
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group RRMap: CkArrayMap{
RRMap();
RRMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_RRMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap();
 */
CkGroupID CProxy_RRMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_RRMap::__idx, CkIndex_RRMap::idx_RRMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_RRMap::reg_RRMap_void() {
  int epidx = CkRegisterEp("RRMap()",
      reinterpret_cast<CkCallFnPtr>(_call_RRMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_RRMap::_call_RRMap_void(void* impl_msg, void* impl_obj_void)
{
  RRMap* impl_obj = static_cast<RRMap*>(impl_obj_void);
  new (impl_obj_void) RRMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_RRMap::reg_RRMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("RRMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_RRMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_RRMap::_call_RRMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) RRMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: RRMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_RRMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,RRMap::isIrreducible());
  // REG: RRMap();
  idx_RRMap_void();
  CkRegisterDefaultCtor(__idx, idx_RRMap_void());

  // REG: RRMap(CkMigrateMessage* impl_msg);
  idx_RRMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_RRMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID _defaultArrayMapID;
 */
extern CkGroupID _defaultArrayMapID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__defaultArrayMapID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_defaultArrayMapID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID _fastArrayMapID;
 */
extern CkGroupID _fastArrayMapID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__fastArrayMapID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_fastArrayMapID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group DefaultArrayMap: RRMap{
DefaultArrayMap();
DefaultArrayMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DefaultArrayMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap();
 */
CkGroupID CProxy_DefaultArrayMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_DefaultArrayMap::__idx, CkIndex_DefaultArrayMap::idx_DefaultArrayMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_DefaultArrayMap::reg_DefaultArrayMap_void() {
  int epidx = CkRegisterEp("DefaultArrayMap()",
      reinterpret_cast<CkCallFnPtr>(_call_DefaultArrayMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DefaultArrayMap::_call_DefaultArrayMap_void(void* impl_msg, void* impl_obj_void)
{
  DefaultArrayMap* impl_obj = static_cast<DefaultArrayMap*>(impl_obj_void);
  new (impl_obj_void) DefaultArrayMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_DefaultArrayMap::reg_DefaultArrayMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("DefaultArrayMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_DefaultArrayMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_DefaultArrayMap::_call_DefaultArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) DefaultArrayMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DefaultArrayMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_RRMap::__idx);
   CkRegisterGroupIrr(__idx,DefaultArrayMap::isIrreducible());
  // REG: DefaultArrayMap();
  idx_DefaultArrayMap_void();
  CkRegisterDefaultCtor(__idx, idx_DefaultArrayMap_void());

  // REG: DefaultArrayMap(CkMigrateMessage* impl_msg);
  idx_DefaultArrayMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_DefaultArrayMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group FastArrayMap: DefaultArrayMap{
FastArrayMap();
FastArrayMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_FastArrayMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap();
 */
CkGroupID CProxy_FastArrayMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_FastArrayMap::__idx, CkIndex_FastArrayMap::idx_FastArrayMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_FastArrayMap::reg_FastArrayMap_void() {
  int epidx = CkRegisterEp("FastArrayMap()",
      reinterpret_cast<CkCallFnPtr>(_call_FastArrayMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_FastArrayMap::_call_FastArrayMap_void(void* impl_msg, void* impl_obj_void)
{
  FastArrayMap* impl_obj = static_cast<FastArrayMap*>(impl_obj_void);
  new (impl_obj_void) FastArrayMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_FastArrayMap::reg_FastArrayMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("FastArrayMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_FastArrayMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_FastArrayMap::_call_FastArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) FastArrayMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FastArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_FastArrayMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DefaultArrayMap::__idx);
   CkRegisterGroupIrr(__idx,FastArrayMap::isIrreducible());
  // REG: FastArrayMap();
  idx_FastArrayMap_void();
  CkRegisterDefaultCtor(__idx, idx_FastArrayMap_void());

  // REG: FastArrayMap(CkMigrateMessage* impl_msg);
  idx_FastArrayMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_FastArrayMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group HilbertArrayMap: DefaultArrayMap{
HilbertArrayMap();
HilbertArrayMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HilbertArrayMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap();
 */
CkGroupID CProxy_HilbertArrayMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_HilbertArrayMap::__idx, CkIndex_HilbertArrayMap::idx_HilbertArrayMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_HilbertArrayMap::reg_HilbertArrayMap_void() {
  int epidx = CkRegisterEp("HilbertArrayMap()",
      reinterpret_cast<CkCallFnPtr>(_call_HilbertArrayMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HilbertArrayMap::_call_HilbertArrayMap_void(void* impl_msg, void* impl_obj_void)
{
  HilbertArrayMap* impl_obj = static_cast<HilbertArrayMap*>(impl_obj_void);
  new (impl_obj_void) HilbertArrayMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_HilbertArrayMap::reg_HilbertArrayMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("HilbertArrayMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_HilbertArrayMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_HilbertArrayMap::_call_HilbertArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) HilbertArrayMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HilbertArrayMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DefaultArrayMap::__idx);
   CkRegisterGroupIrr(__idx,HilbertArrayMap::isIrreducible());
  // REG: HilbertArrayMap();
  idx_HilbertArrayMap_void();
  CkRegisterDefaultCtor(__idx, idx_HilbertArrayMap_void());

  // REG: HilbertArrayMap(CkMigrateMessage* impl_msg);
  idx_HilbertArrayMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_HilbertArrayMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ReadFileMap: DefaultArrayMap{
ReadFileMap();
ReadFileMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ReadFileMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap();
 */
CkGroupID CProxy_ReadFileMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ReadFileMap::__idx, CkIndex_ReadFileMap::idx_ReadFileMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ReadFileMap::reg_ReadFileMap_void() {
  int epidx = CkRegisterEp("ReadFileMap()",
      reinterpret_cast<CkCallFnPtr>(_call_ReadFileMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ReadFileMap::_call_ReadFileMap_void(void* impl_msg, void* impl_obj_void)
{
  ReadFileMap* impl_obj = static_cast<ReadFileMap*>(impl_obj_void);
  new (impl_obj_void) ReadFileMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ReadFileMap::reg_ReadFileMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("ReadFileMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReadFileMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ReadFileMap::_call_ReadFileMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ReadFileMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReadFileMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ReadFileMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DefaultArrayMap::__idx);
   CkRegisterGroupIrr(__idx,ReadFileMap::isIrreducible());
  // REG: ReadFileMap();
  idx_ReadFileMap_void();
  CkRegisterDefaultCtor(__idx, idx_ReadFileMap_void());

  // REG: ReadFileMap(CkMigrateMessage* impl_msg);
  idx_ReadFileMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ReadFileMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Simple1DFileMap: DefaultArrayMap{
Simple1DFileMap();
Simple1DFileMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Simple1DFileMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap();
 */
CkGroupID CProxy_Simple1DFileMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Simple1DFileMap::__idx, CkIndex_Simple1DFileMap::idx_Simple1DFileMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_Simple1DFileMap::reg_Simple1DFileMap_void() {
  int epidx = CkRegisterEp("Simple1DFileMap()",
      reinterpret_cast<CkCallFnPtr>(_call_Simple1DFileMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Simple1DFileMap::_call_Simple1DFileMap_void(void* impl_msg, void* impl_obj_void)
{
  Simple1DFileMap* impl_obj = static_cast<Simple1DFileMap*>(impl_obj_void);
  new (impl_obj_void) Simple1DFileMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Simple1DFileMap::reg_Simple1DFileMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("Simple1DFileMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Simple1DFileMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Simple1DFileMap::_call_Simple1DFileMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) Simple1DFileMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Simple1DFileMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Simple1DFileMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DefaultArrayMap::__idx);
   CkRegisterGroupIrr(__idx,Simple1DFileMap::isIrreducible());
  // REG: Simple1DFileMap();
  idx_Simple1DFileMap_void();
  CkRegisterDefaultCtor(__idx, idx_Simple1DFileMap_void());

  // REG: Simple1DFileMap(CkMigrateMessage* impl_msg);
  idx_Simple1DFileMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Simple1DFileMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group BlockMap: DefaultArrayMap{
BlockMap();
BlockMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_BlockMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap();
 */
CkGroupID CProxy_BlockMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_BlockMap::__idx, CkIndex_BlockMap::idx_BlockMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_BlockMap::reg_BlockMap_void() {
  int epidx = CkRegisterEp("BlockMap()",
      reinterpret_cast<CkCallFnPtr>(_call_BlockMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_BlockMap::_call_BlockMap_void(void* impl_msg, void* impl_obj_void)
{
  BlockMap* impl_obj = static_cast<BlockMap*>(impl_obj_void);
  new (impl_obj_void) BlockMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_BlockMap::reg_BlockMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("BlockMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_BlockMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_BlockMap::_call_BlockMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) BlockMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BlockMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_BlockMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DefaultArrayMap::__idx);
   CkRegisterGroupIrr(__idx,BlockMap::isIrreducible());
  // REG: BlockMap();
  idx_BlockMap_void();
  CkRegisterDefaultCtor(__idx, idx_BlockMap_void());

  // REG: BlockMap(CkMigrateMessage* impl_msg);
  idx_BlockMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_BlockMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CldMap: CkArrayMap{
CldMap();
CldMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CldMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap();
 */
CkGroupID CProxy_CldMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CldMap::__idx, CkIndex_CldMap::idx_CldMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CldMap::reg_CldMap_void() {
  int epidx = CkRegisterEp("CldMap()",
      reinterpret_cast<CkCallFnPtr>(_call_CldMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CldMap::_call_CldMap_void(void* impl_msg, void* impl_obj_void)
{
  CldMap* impl_obj = static_cast<CldMap*>(impl_obj_void);
  new (impl_obj_void) CldMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CldMap::reg_CldMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("CldMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CldMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CldMap::_call_CldMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CldMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CldMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CldMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,CldMap::isIrreducible());
  // REG: CldMap();
  idx_CldMap_void();
  CkRegisterDefaultCtor(__idx, idx_CldMap_void());

  // REG: CldMap(CkMigrateMessage* impl_msg);
  idx_CldMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CldMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ConfigurableRRMap: RRMap{
ConfigurableRRMap();
ConfigurableRRMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ConfigurableRRMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap();
 */
CkGroupID CProxy_ConfigurableRRMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ConfigurableRRMap::__idx, CkIndex_ConfigurableRRMap::idx_ConfigurableRRMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ConfigurableRRMap::reg_ConfigurableRRMap_void() {
  int epidx = CkRegisterEp("ConfigurableRRMap()",
      reinterpret_cast<CkCallFnPtr>(_call_ConfigurableRRMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ConfigurableRRMap::_call_ConfigurableRRMap_void(void* impl_msg, void* impl_obj_void)
{
  ConfigurableRRMap* impl_obj = static_cast<ConfigurableRRMap*>(impl_obj_void);
  new (impl_obj_void) ConfigurableRRMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ConfigurableRRMap::reg_ConfigurableRRMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("ConfigurableRRMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ConfigurableRRMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ConfigurableRRMap::_call_ConfigurableRRMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ConfigurableRRMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ConfigurableRRMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_RRMap::__idx);
   CkRegisterGroupIrr(__idx,ConfigurableRRMap::isIrreducible());
  // REG: ConfigurableRRMap();
  idx_ConfigurableRRMap_void();
  CkRegisterDefaultCtor(__idx, idx_ConfigurableRRMap_void());

  // REG: ConfigurableRRMap(CkMigrateMessage* impl_msg);
  idx_ConfigurableRRMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ConfigurableRRMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group PropMap: CkArrayMap{
PropMap();
PropMap(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PropMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap();
 */
CkGroupID CProxy_PropMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_PropMap::__idx, CkIndex_PropMap::idx_PropMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_PropMap::reg_PropMap_void() {
  int epidx = CkRegisterEp("PropMap()",
      reinterpret_cast<CkCallFnPtr>(_call_PropMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PropMap::_call_PropMap_void(void* impl_msg, void* impl_obj_void)
{
  PropMap* impl_obj = static_cast<PropMap*>(impl_obj_void);
  new (impl_obj_void) PropMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_PropMap::reg_PropMap_CkMigrateMessage() {
  int epidx = CkRegisterEp("PropMap(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PropMap_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_PropMap::_call_PropMap_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) PropMap((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PropMap(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PropMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,PropMap::isIrreducible());
  // REG: PropMap();
  idx_PropMap_void();
  CkRegisterDefaultCtor(__idx, idx_PropMap_void());

  // REG: PropMap(CkMigrateMessage* impl_msg);
  idx_PropMap_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PropMap_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare CkMapsInit: Chare{
CkMapsInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkMapsInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMapsInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_CkMapsInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CkMapsInit::__idx, CkIndex_CkMapsInit::idx_CkMapsInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CkMapsInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_CkMapsInit::__idx, CkIndex_CkMapsInit::idx_CkMapsInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CkMapsInit::reg_CkMapsInit_CkArgMsg() {
  int epidx = CkRegisterEp("CkMapsInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkMapsInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkMapsInit::_call_CkMapsInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  CkMapsInit* impl_obj = static_cast<CkMapsInit*>(impl_obj_void);
  new (impl_obj_void) CkMapsInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkMapsInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CkMapsInit(CkArgMsg* impl_msg);
  idx_CkMapsInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_CkMapsInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkLocation(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkMarshall();

/* REG: message CkArrayElementMigrateMessage{
char packData[];
}
;
*/
CMessage_CkArrayElementMigrateMessage::__register("CkArrayElementMigrateMessage", sizeof(CkArrayElementMigrateMessage),(CkPackFnPtr) CkArrayElementMigrateMessage::pack,(CkUnpackFnPtr) CkArrayElementMigrateMessage::unpack);

/* REG: group CkLocCache: IrrGroup{
CkLocCache();
void requestLocation(const CmiUInt8 &id, int peToTell);
void updateLocation(const CkLocEntry &newEntry);
CkLocCache(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkLocCache::__register("CkLocCache", sizeof(CkLocCache));

/* REG: group CkLocMgr: IrrGroup{
CkLocMgr(const CkArrayOptions &opts);
void immigrate(CkArrayElementMigrateMessage* impl_msg);
void requestLocation(const CkArrayIndex &idx, int peToTell);
void updateLocation(const CkArrayIndex &idx, const CkLocEntry &e);
void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
CkLocMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkLocMgr::__register("CkLocMgr", sizeof(CkLocMgr));

/* REG: group CkArrayMap: IrrGroup;
*/
  CkIndex_CkArrayMap::__register("CkArrayMap", sizeof(CkArrayMap));

/* REG: group RRMap: CkArrayMap{
RRMap();
RRMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_RRMap::__register("RRMap", sizeof(RRMap));

  CkRegisterReadonly("_defaultArrayMapID","CkGroupID",sizeof(_defaultArrayMapID),(void *) &_defaultArrayMapID,__xlater_roPup__defaultArrayMapID);

  CkRegisterReadonly("_fastArrayMapID","CkGroupID",sizeof(_fastArrayMapID),(void *) &_fastArrayMapID,__xlater_roPup__fastArrayMapID);

/* REG: group DefaultArrayMap: RRMap{
DefaultArrayMap();
DefaultArrayMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_DefaultArrayMap::__register("DefaultArrayMap", sizeof(DefaultArrayMap));

/* REG: group FastArrayMap: DefaultArrayMap{
FastArrayMap();
FastArrayMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_FastArrayMap::__register("FastArrayMap", sizeof(FastArrayMap));

/* REG: group HilbertArrayMap: DefaultArrayMap{
HilbertArrayMap();
HilbertArrayMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_HilbertArrayMap::__register("HilbertArrayMap", sizeof(HilbertArrayMap));

/* REG: group ReadFileMap: DefaultArrayMap{
ReadFileMap();
ReadFileMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ReadFileMap::__register("ReadFileMap", sizeof(ReadFileMap));

/* REG: group Simple1DFileMap: DefaultArrayMap{
Simple1DFileMap();
Simple1DFileMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Simple1DFileMap::__register("Simple1DFileMap", sizeof(Simple1DFileMap));

/* REG: group BlockMap: DefaultArrayMap{
BlockMap();
BlockMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_BlockMap::__register("BlockMap", sizeof(BlockMap));

/* REG: group CldMap: CkArrayMap{
CldMap();
CldMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CldMap::__register("CldMap", sizeof(CldMap));

/* REG: group ConfigurableRRMap: RRMap{
ConfigurableRRMap();
ConfigurableRRMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ConfigurableRRMap::__register("ConfigurableRRMap", sizeof(ConfigurableRRMap));

  _registerInitCall(_initConfigurableRRMap,0);

  _registerInitCall(_propMapInit,1);

  _registerInitCall(_CkMigratable_initInfoInit,0);

/* REG: group PropMap: CkArrayMap{
PropMap();
PropMap(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PropMap::__register("PropMap", sizeof(PropMap));

/* REG: mainchare CkMapsInit: Chare{
CkMapsInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_CkMapsInit::__register("CkMapsInit", sizeof(CkMapsInit));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkLocCache::virtual_pup(PUP::er &p) {
    recursive_pup<CkLocCache>(dynamic_cast<CkLocCache*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkLocMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkLocMgr>(dynamic_cast<CkLocMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkArrayMap::virtual_pup(PUP::er &p) {
    recursive_pup<CkArrayMap>(dynamic_cast<CkArrayMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_RRMap::virtual_pup(PUP::er &p) {
    recursive_pup<RRMap>(dynamic_cast<RRMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DefaultArrayMap::virtual_pup(PUP::er &p) {
    recursive_pup<DefaultArrayMap>(dynamic_cast<DefaultArrayMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_FastArrayMap::virtual_pup(PUP::er &p) {
    recursive_pup<FastArrayMap>(dynamic_cast<FastArrayMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HilbertArrayMap::virtual_pup(PUP::er &p) {
    recursive_pup<HilbertArrayMap>(dynamic_cast<HilbertArrayMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ReadFileMap::virtual_pup(PUP::er &p) {
    recursive_pup<ReadFileMap>(dynamic_cast<ReadFileMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Simple1DFileMap::virtual_pup(PUP::er &p) {
    recursive_pup<Simple1DFileMap>(dynamic_cast<Simple1DFileMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_BlockMap::virtual_pup(PUP::er &p) {
    recursive_pup<BlockMap>(dynamic_cast<BlockMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CldMap::virtual_pup(PUP::er &p) {
    recursive_pup<CldMap>(dynamic_cast<CldMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ConfigurableRRMap::virtual_pup(PUP::er &p) {
    recursive_pup<ConfigurableRRMap>(dynamic_cast<ConfigurableRRMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PropMap::virtual_pup(PUP::er &p) {
    recursive_pup<PropMap>(dynamic_cast<PropMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkMapsInit::virtual_pup(PUP::er &p) {
    recursive_pup<CkMapsInit>(dynamic_cast<CkMapsInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
