









/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::zero_2_closure : public SDAG::Closure {
      

      zero_2_closure() {
        init();
      }
      zero_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~zero_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(zero_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::collect_3_closure : public SDAG::Closure {
      

      collect_3_closure() {
        init();
      }
      collect_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~collect_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(collect_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::traceOn_4_closure : public SDAG::Closure {
      

      traceOn_4_closure() {
        init();
      }
      traceOn_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~traceOn_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(traceOn_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::startBalance_5_closure : public SDAG::Closure {
      

      startBalance_5_closure() {
        init();
      }
      startBalance_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startBalance_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(startBalance_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::doneBalance_6_closure : public SDAG::Closure {
      

      doneBalance_6_closure() {
        init();
      }
      doneBalance_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doneBalance_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneBalance_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_PerfManager::throttle_7_closure : public SDAG::Closure {
            int throttleOn;


      throttle_7_closure() {
        init();
      }
      throttle_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return throttleOn;}
      void pup(PUP::er& __p) {
        __p | throttleOn;
        packClosure(__p);
      }
      virtual ~throttle_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(throttle_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: message LV3D_ViewpointMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s){
  return LV3D_ViewpointMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s, int* sz){
  return LV3D_ViewpointMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s, int* sz,const int pb){
  return LV3D_ViewpointMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LV3D_ViewpointMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s, const int p) {
  return LV3D_ViewpointMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LV3D_ViewpointMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LV3D_ViewpointMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LV3D_ViewpointMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LV3D_ViewpointMsg::CMessage_LV3D_ViewpointMsg() {
LV3D_ViewpointMsg *newmsg = (LV3D_ViewpointMsg *)this;
}
void CMessage_LV3D_ViewpointMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LV3D_ViewpointMsg::pack(LV3D_ViewpointMsg *msg) {
  return (void *) msg;
}
LV3D_ViewpointMsg* CMessage_LV3D_ViewpointMsg::unpack(void* buf) {
  LV3D_ViewpointMsg *msg = (LV3D_ViewpointMsg *) buf;
  return msg;
}
int CMessage_LV3D_ViewpointMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_disable_ship_prio;
 */
extern int LV3D_disable_ship_prio;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_disable_ship_prio(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_disable_ship_prio;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_disable_ship_replace;
 */
extern int LV3D_disable_ship_replace;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_disable_ship_replace(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_disable_ship_replace;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_disable_ship_throttle;
 */
extern int LV3D_disable_ship_throttle;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_disable_ship_throttle(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_disable_ship_throttle;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_disable_ship;
 */
extern int LV3D_disable_ship;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_disable_ship(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_disable_ship;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_dosave_views;
 */
extern int LV3D_dosave_views;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_dosave_views(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_dosave_views;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D0_toMaster_bytesPer;
 */
extern int LV3D0_toMaster_bytesPer;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D0_toMaster_bytesPer(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D0_toMaster_bytesPer;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D0_toMaster_bytesMax;
 */
extern int LV3D0_toMaster_bytesMax;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D0_toMaster_bytesMax(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D0_toMaster_bytesMax;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D0_toClient_bytesPer;
 */
extern int LV3D0_toClient_bytesPer;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D0_toClient_bytesPer(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D0_toClient_bytesPer;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LV3D0_ViewMsg{
unsigned char view[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LV3D0_ViewMsg::operator new(size_t s){
  return LV3D0_ViewMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int* sz){
  return LV3D0_ViewMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int* sz,const int pb){
  return LV3D0_ViewMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LV3D0_ViewMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return LV3D0_ViewMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return LV3D0_ViewMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LV3D0_ViewMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return LV3D0_ViewMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LV3D0_ViewMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(unsigned char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_LV3D0_ViewMsg::CMessage_LV3D0_ViewMsg() {
LV3D0_ViewMsg *newmsg = (LV3D0_ViewMsg *)this;
  newmsg->view = (unsigned char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_LV3D0_ViewMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LV3D0_ViewMsg::pack(LV3D0_ViewMsg *msg) {
  msg->view = (unsigned char *) ((char *)msg->view - (char *)msg);
  return (void *) msg;
}
LV3D0_ViewMsg* CMessage_LV3D0_ViewMsg::unpack(void* buf) {
  LV3D0_ViewMsg *msg = (LV3D0_ViewMsg *) buf;
  msg->view = (unsigned char *) ((size_t)msg->view + (char *)msg);
  return msg;
}
int CMessage_LV3D0_ViewMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LV3D0_Manager: IrrGroup{
LV3D0_Manager();
void addView(LV3D0_ViewMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LV3D0_Manager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D0_Manager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addView(LV3D0_ViewMsg* impl_msg);
 */
void CProxyElement_LV3D0_Manager::addView(LV3D0_ViewMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D0_Manager();
 */
CkGroupID CProxy_LV3D0_Manager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LV3D0_Manager::__idx, CkIndex_LV3D0_Manager::idx_LV3D0_Manager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LV3D0_Manager::reg_LV3D0_Manager_void() {
  int epidx = CkRegisterEp("LV3D0_Manager()",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D0_Manager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D0_Manager::_call_LV3D0_Manager_void(void* impl_msg, void* impl_obj_void)
{
  LV3D0_Manager* impl_obj = static_cast<LV3D0_Manager*>(impl_obj_void);
  new (impl_obj_void) LV3D0_Manager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addView(LV3D0_ViewMsg* impl_msg);
 */
void CProxy_LV3D0_Manager::addView(LV3D0_ViewMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D0_Manager::addView(LV3D0_ViewMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D0_Manager::addView(LV3D0_ViewMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D0_Manager::reg_addView_LV3D0_ViewMsg() {
  int epidx = CkRegisterEp("addView(LV3D0_ViewMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addView_LV3D0_ViewMsg), CMessage_LV3D0_ViewMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LV3D0_ViewMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LV3D0_Manager::_call_addView_LV3D0_ViewMsg(void* impl_msg, void* impl_obj_void)
{
  LV3D0_Manager* impl_obj = static_cast<LV3D0_Manager*>(impl_obj_void);
  impl_obj->addView((LV3D0_ViewMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D0_Manager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addView(LV3D0_ViewMsg* impl_msg);
 */
void CProxySection_LV3D0_Manager::addView(LV3D0_ViewMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D0_Manager::idx_addView_LV3D0_ViewMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LV3D0_Manager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LV3D0_Manager::isIrreducible());
  // REG: LV3D0_Manager();
  idx_LV3D0_Manager_void();
  CkRegisterDefaultCtor(__idx, idx_LV3D0_Manager_void());

  // REG: void addView(LV3D0_ViewMsg* impl_msg);
  idx_addView_LV3D0_ViewMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LV3D_PerfManager: IrrGroup{
LV3D_PerfManager();
void zero();
void collect();
void traceOn();
void startBalance();
void doneBalance();
void throttle(int throttleOn);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LV3D_PerfManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_PerfManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void zero();
 */
void CProxyElement_LV3D_PerfManager::zero(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collect();
 */
void CProxyElement_LV3D_PerfManager::collect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceOn();
 */
void CProxyElement_LV3D_PerfManager::traceOn(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startBalance();
 */
void CProxyElement_LV3D_PerfManager::startBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneBalance();
 */
void CProxyElement_LV3D_PerfManager::doneBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void throttle(int throttleOn);
 */
void CProxyElement_LV3D_PerfManager::throttle(int throttleOn, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int throttleOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|throttleOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|throttleOn;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_PerfManager();
 */
CkGroupID CProxy_LV3D_PerfManager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LV3D_PerfManager::__idx, CkIndex_LV3D_PerfManager::idx_LV3D_PerfManager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_LV3D_PerfManager_void() {
  int epidx = CkRegisterEp("LV3D_PerfManager()",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_PerfManager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_LV3D_PerfManager_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  new (impl_obj_void) LV3D_PerfManager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void zero();
 */
void CProxy_LV3D_PerfManager::zero(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::zero(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::zero(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_zero_void() {
  int epidx = CkRegisterEp("zero()",
      reinterpret_cast<CkCallFnPtr>(_call_zero_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_zero_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  impl_obj->zero();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::zero_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collect();
 */
void CProxy_LV3D_PerfManager::collect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::collect(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::collect(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_collect_void() {
  int epidx = CkRegisterEp("collect()",
      reinterpret_cast<CkCallFnPtr>(_call_collect_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_collect_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  impl_obj->collect();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::collect_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceOn();
 */
void CProxy_LV3D_PerfManager::traceOn(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::traceOn(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::traceOn(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_traceOn_void() {
  int epidx = CkRegisterEp("traceOn()",
      reinterpret_cast<CkCallFnPtr>(_call_traceOn_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_traceOn_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  impl_obj->traceOn();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::traceOn_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startBalance();
 */
void CProxy_LV3D_PerfManager::startBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::startBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::startBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_startBalance_void() {
  int epidx = CkRegisterEp("startBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_startBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_startBalance_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  impl_obj->startBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::startBalance_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneBalance();
 */
void CProxy_LV3D_PerfManager::doneBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::doneBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::doneBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_doneBalance_void() {
  int epidx = CkRegisterEp("doneBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_doneBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_doneBalance_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  impl_obj->doneBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::doneBalance_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void throttle(int throttleOn);
 */
void CProxy_LV3D_PerfManager::throttle(int throttleOn, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int throttleOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|throttleOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|throttleOn;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LV3D_PerfManager::throttle(int throttleOn, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int throttleOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|throttleOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|throttleOn;
  }
  CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LV3D_PerfManager::throttle(int throttleOn, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int throttleOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|throttleOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|throttleOn;
  }
  CkSendMsgBranchGroup(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LV3D_PerfManager::reg_throttle_marshall7() {
  int epidx = CkRegisterEp("throttle(int throttleOn)",
      reinterpret_cast<CkCallFnPtr>(_call_throttle_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_throttle_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_throttle_marshall7);

  return epidx;
}

void CkIndex_LV3D_PerfManager::_call_throttle_marshall7(void* impl_msg, void* impl_obj_void)
{
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int throttleOn*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> throttleOn;
  implP|throttleOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->throttle(std::move(throttleOn.t));
}
int CkIndex_LV3D_PerfManager::_callmarshall_throttle_marshall7(char* impl_buf, void* impl_obj_void) {
  LV3D_PerfManager* impl_obj = static_cast<LV3D_PerfManager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int throttleOn*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> throttleOn;
  implP|throttleOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->throttle(std::move(throttleOn.t));
  return implP.size();
}
void CkIndex_LV3D_PerfManager::_marshallmessagepup_throttle_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int throttleOn*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> throttleOn;
  implP|throttleOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("throttleOn");
  implDestP|throttleOn;
}
PUPable_def(SINGLE_ARG(Closure_LV3D_PerfManager::throttle_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_PerfManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void zero();
 */
void CProxySection_LV3D_PerfManager::zero(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_zero_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collect();
 */
void CProxySection_LV3D_PerfManager::collect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_collect_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceOn();
 */
void CProxySection_LV3D_PerfManager::traceOn(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_traceOn_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startBalance();
 */
void CProxySection_LV3D_PerfManager::startBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_startBalance_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneBalance();
 */
void CProxySection_LV3D_PerfManager::doneBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_doneBalance_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void throttle(int throttleOn);
 */
void CProxySection_LV3D_PerfManager::throttle(int throttleOn, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int throttleOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|throttleOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|throttleOn;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LV3D_PerfManager::idx_throttle_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LV3D_PerfManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LV3D_PerfManager::isIrreducible());
  // REG: LV3D_PerfManager();
  idx_LV3D_PerfManager_void();
  CkRegisterDefaultCtor(__idx, idx_LV3D_PerfManager_void());

  // REG: void zero();
  idx_zero_void();

  // REG: void collect();
  idx_collect_void();

  // REG: void traceOn();
  idx_traceOn_void();

  // REG: void startBalance();
  idx_startBalance_void();

  // REG: void doneBalance();
  idx_doneBalance_void();

  // REG: void throttle(int throttleOn);
  idx_throttle_marshall7();

}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerlv3d0(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message LV3D_ViewpointMsg;
*/
CMessage_LV3D_ViewpointMsg::__register("LV3D_ViewpointMsg", sizeof(LV3D_ViewpointMsg),(CkPackFnPtr) LV3D_ViewpointMsg::pack,(CkUnpackFnPtr) LV3D_ViewpointMsg::unpack);

  CkRegisterReadonly("LV3D_disable_ship_prio","int",sizeof(LV3D_disable_ship_prio),(void *) &LV3D_disable_ship_prio,__xlater_roPup_LV3D_disable_ship_prio);

  CkRegisterReadonly("LV3D_disable_ship_replace","int",sizeof(LV3D_disable_ship_replace),(void *) &LV3D_disable_ship_replace,__xlater_roPup_LV3D_disable_ship_replace);

  CkRegisterReadonly("LV3D_disable_ship_throttle","int",sizeof(LV3D_disable_ship_throttle),(void *) &LV3D_disable_ship_throttle,__xlater_roPup_LV3D_disable_ship_throttle);

  CkRegisterReadonly("LV3D_disable_ship","int",sizeof(LV3D_disable_ship),(void *) &LV3D_disable_ship,__xlater_roPup_LV3D_disable_ship);

  CkRegisterReadonly("LV3D_dosave_views","int",sizeof(LV3D_dosave_views),(void *) &LV3D_dosave_views,__xlater_roPup_LV3D_dosave_views);

  CkRegisterReadonly("LV3D0_toMaster_bytesPer","int",sizeof(LV3D0_toMaster_bytesPer),(void *) &LV3D0_toMaster_bytesPer,__xlater_roPup_LV3D0_toMaster_bytesPer);

  CkRegisterReadonly("LV3D0_toMaster_bytesMax","int",sizeof(LV3D0_toMaster_bytesMax),(void *) &LV3D0_toMaster_bytesMax,__xlater_roPup_LV3D0_toMaster_bytesMax);

  CkRegisterReadonly("LV3D0_toClient_bytesPer","int",sizeof(LV3D0_toClient_bytesPer),(void *) &LV3D0_toClient_bytesPer,__xlater_roPup_LV3D0_toClient_bytesPer);

/* REG: message LV3D0_ViewMsg{
unsigned char view[];
}
;
*/
CMessage_LV3D0_ViewMsg::__register("LV3D0_ViewMsg", sizeof(LV3D0_ViewMsg),(CkPackFnPtr) LV3D0_ViewMsg::pack,(CkUnpackFnPtr) LV3D0_ViewMsg::unpack);

/* REG: group LV3D0_Manager: IrrGroup{
LV3D0_Manager();
void addView(LV3D0_ViewMsg* impl_msg);
};
*/
  CkIndex_LV3D0_Manager::__register("LV3D0_Manager", sizeof(LV3D0_Manager));

/* REG: group LV3D_PerfManager: IrrGroup{
LV3D_PerfManager();
void zero();
void collect();
void traceOn();
void startBalance();
void doneBalance();
void throttle(int throttleOn);
};
*/
  CkIndex_LV3D_PerfManager::__register("LV3D_PerfManager", sizeof(LV3D_PerfManager));

  _registerInitCall(LV3D0_ProcInit,0);

  _registerInitCall(LV3D0_NodeInit,1);

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LV3D0_Manager::virtual_pup(PUP::er &p) {
    recursive_pup<LV3D0_Manager>(dynamic_cast<LV3D0_Manager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LV3D_PerfManager::virtual_pup(PUP::er &p) {
    recursive_pup<LV3D_PerfManager>(dynamic_cast<LV3D_PerfManager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
