












/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_controlPointManager::requestMemoryUsage_2_closure : public SDAG::Closure {
            CkCallback cb;


      requestMemoryUsage_2_closure() {
        init();
      }
      requestMemoryUsage_2_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~requestMemoryUsage_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestMemoryUsage_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_controlPointManager::requestIdleTime_4_closure : public SDAG::Closure {
            CkCallback cb;


      requestIdleTime_4_closure() {
        init();
      }
      requestIdleTime_4_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~requestIdleTime_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestIdleTime_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_controlPointManager::requestAll_6_closure : public SDAG::Closure {
            CkCallback cb;


      requestAll_6_closure() {
        init();
      }
      requestAll_6_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~requestAll_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestAll_6_closure));
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

    struct Closure_redistributor2D::startup_2_closure : public SDAG::Closure {
      

      startup_2_closure() {
        init();
      }
      startup_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startup_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(startup_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_redistributor2D::resizeGranules_3_closure : public SDAG::Closure {
            int impl_noname_0;
            int impl_noname_1;


      resizeGranules_3_closure() {
        init();
      }
      resizeGranules_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
            int & getP1() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~resizeGranules_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(resizeGranules_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_controlPointManager controlPointManagerProxy;
 */
extern CProxy_controlPointManager controlPointManagerProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_controlPointManagerProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|controlPointManagerProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int random_seed;
 */
extern int random_seed;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_random_seed(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|random_seed;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly long controlPointSamplePeriod;
 */
extern long controlPointSamplePeriod;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_controlPointSamplePeriod(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|controlPointSamplePeriod;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int whichTuningScheme;
 */
extern int whichTuningScheme;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_whichTuningScheme(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|whichTuningScheme;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool shouldGatherMemoryUsage;
 */
extern bool shouldGatherMemoryUsage;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_shouldGatherMemoryUsage(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|shouldGatherMemoryUsage;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool shouldGatherUtilization;
 */
extern bool shouldGatherUtilization;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_shouldGatherUtilization(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|shouldGatherUtilization;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool shouldGatherAll;
 */
extern bool shouldGatherAll;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_shouldGatherAll(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|shouldGatherAll;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly char CPDataFilename[512];
 */
extern char CPDataFilename[512];
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_CPDataFilename(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
#if !CMK_ONESIDED_RO_DISABLE && CMK_ONESIDED_IMPL
  if((512) * sizeof(char) >= CMK_ONESIDED_RO_THRESHOLD) {
    if(_impl_p.isSizing()) {
      CkNcpyBuffer myBuffer;
      _impl_p|myBuffer;
      readonlyUpdateNumops();
    }
    if(_impl_p.isPacking()) {
    int regMode = CK_BUFFER_REG;
    if(CkNumNodes() == 1)
      regMode = CK_BUFFER_UNREG;
    CkNcpyBuffer myBuffer(& CPDataFilename[0], ((512) * sizeof(char)), regMode);
      _impl_p|myBuffer;
      if(CkNumNodes() > 1)
        readonlyCreateOnSource(myBuffer);
      PUP::toMem &_impl_p_toMem = *(PUP::toMem *)_impl_pup_er;
      envelope *env = UsrToEnv(_impl_p_toMem.get_orig_pointer());
      CMI_ZC_MSGTYPE(env) = CMK_ZC_BCAST_SEND_MSG;
    }
    if(_impl_p.isUnpacking()) {
    int regMode = CK_BUFFER_REG;
    if(CkNumNodes() == 1)
      regMode = CK_BUFFER_UNREG;
    CkNcpyBuffer myBuffer(& CPDataFilename[0], ((512) * sizeof(char)), regMode);
      PUP::fromMem &_impl_p_fromMem = *(PUP::fromMem *)_impl_pup_er;
      char *ptr = _impl_p_fromMem.get_current_pointer();
      PUP::toMem _impl_p_toMem = (PUP::toMem)((void *)ptr);
      envelope *env = UsrToEnv(_impl_p_fromMem.get_orig_pointer());
      CkNcpyBuffer srcBuffer;
      _impl_p|srcBuffer;
      _impl_p_toMem|myBuffer;
      readonlyGet(srcBuffer, myBuffer, (void *)env);
    }
  } else
#endif
  {
  _impl_p(&CPDataFilename[0], ((512)) );
  }
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool shouldFilterOutputData;
 */
extern bool shouldFilterOutputData;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_shouldFilterOutputData(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|shouldFilterOutputData;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool writeDataFileAtShutdown;
 */
extern bool writeDataFileAtShutdown;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_writeDataFileAtShutdown(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|writeDataFileAtShutdown;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message controlPointMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_controlPointMsg::operator new(size_t s){
  return controlPointMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_controlPointMsg::operator new(size_t s, int* sz){
  return controlPointMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_controlPointMsg::operator new(size_t s, int* sz,const int pb){
  return controlPointMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_controlPointMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return controlPointMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_controlPointMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return controlPointMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_controlPointMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return controlPointMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_controlPointMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return controlPointMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_controlPointMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_controlPointMsg::CMessage_controlPointMsg() {
controlPointMsg *newmsg = (controlPointMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_controlPointMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_controlPointMsg::pack(controlPointMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
controlPointMsg* CMessage_controlPointMsg::unpack(void* buf) {
  controlPointMsg *msg = (controlPointMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_controlPointMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message redistributor2DMsg{
double data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_redistributor2DMsg::operator new(size_t s){
  return redistributor2DMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int* sz){
  return redistributor2DMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int* sz,const int pb){
  return redistributor2DMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return redistributor2DMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return redistributor2DMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return redistributor2DMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_redistributor2DMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return redistributor2DMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_redistributor2DMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_redistributor2DMsg::CMessage_redistributor2DMsg() {
redistributor2DMsg *newmsg = (redistributor2DMsg *)this;
  newmsg->data = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_redistributor2DMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_redistributor2DMsg::pack(redistributor2DMsg *msg) {
  msg->data = (double *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
redistributor2DMsg* CMessage_redistributor2DMsg::unpack(void* buf) {
  redistributor2DMsg *msg = (redistributor2DMsg *) buf;
  msg->data = (double *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_redistributor2DMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare controlPointMain: Chare{
controlPointMain(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_controlPointMain::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointMain(CkArgMsg* impl_msg);
 */
CkChareID CProxy_controlPointMain::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_controlPointMain::__idx, CkIndex_controlPointMain::idx_controlPointMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_controlPointMain::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_controlPointMain::__idx, CkIndex_controlPointMain::idx_controlPointMain_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_controlPointMain::reg_controlPointMain_CkArgMsg() {
  int epidx = CkRegisterEp("controlPointMain(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_controlPointMain_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_controlPointMain::_call_controlPointMain_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  controlPointMain* impl_obj = static_cast<controlPointMain*>(impl_obj_void);
  new (impl_obj_void) controlPointMain((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_controlPointMain::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: controlPointMain(CkArgMsg* impl_msg);
  idx_controlPointMain_CkArgMsg();
  CkRegisterMainChare(__idx, idx_controlPointMain_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: group controlPointManager: IrrGroup{
controlPointManager();
void requestMemoryUsage(const CkCallback &cb);
void gatherMemoryUsage(CkReductionMsg* impl_msg);
void requestIdleTime(const CkCallback &cb);
void gatherIdleTime(CkReductionMsg* impl_msg);
void requestAll(const CkCallback &cb);
void gatherAll(CkReductionMsg* impl_msg);
controlPointManager(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_controlPointManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestMemoryUsage(const CkCallback &cb);
 */
void CProxyElement_controlPointManager::requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
void CProxyElement_controlPointManager::gatherMemoryUsage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestIdleTime(const CkCallback &cb);
 */
void CProxyElement_controlPointManager::requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
void CProxyElement_controlPointManager::gatherIdleTime(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestAll(const CkCallback &cb);
 */
void CProxyElement_controlPointManager::requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherAll(CkReductionMsg* impl_msg);
 */
void CProxyElement_controlPointManager::gatherAll(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager();
 */
CkGroupID CProxy_controlPointManager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_controlPointManager::__idx, CkIndex_controlPointManager::idx_controlPointManager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_controlPointManager::reg_controlPointManager_void() {
  int epidx = CkRegisterEp("controlPointManager()",
      reinterpret_cast<CkCallFnPtr>(_call_controlPointManager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_controlPointManager::_call_controlPointManager_void(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  new (impl_obj_void) controlPointManager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestMemoryUsage(const CkCallback &cb);
 */
void CProxy_controlPointManager::requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestMemoryUsage(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestMemoryUsage(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_requestMemoryUsage_marshall2() {
  int epidx = CkRegisterEp("requestMemoryUsage(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_requestMemoryUsage_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestMemoryUsage_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestMemoryUsage_marshall2);

  return epidx;
}

void CkIndex_controlPointManager::_call_requestMemoryUsage_marshall2(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestMemoryUsage(std::move(cb.t));
}
int CkIndex_controlPointManager::_callmarshall_requestMemoryUsage_marshall2(char* impl_buf, void* impl_obj_void) {
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestMemoryUsage(std::move(cb.t));
  return implP.size();
}
void CkIndex_controlPointManager::_marshallmessagepup_requestMemoryUsage_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_controlPointManager::requestMemoryUsage_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
void CProxy_controlPointManager::gatherMemoryUsage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherMemoryUsage(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherMemoryUsage(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_gatherMemoryUsage_CkReductionMsg() {
  int epidx = CkRegisterEp("gatherMemoryUsage(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_gatherMemoryUsage_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_controlPointManager::_call_gatherMemoryUsage_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  impl_obj->gatherMemoryUsage((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestIdleTime(const CkCallback &cb);
 */
void CProxy_controlPointManager::requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestIdleTime(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestIdleTime(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_requestIdleTime_marshall4() {
  int epidx = CkRegisterEp("requestIdleTime(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_requestIdleTime_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestIdleTime_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestIdleTime_marshall4);

  return epidx;
}

void CkIndex_controlPointManager::_call_requestIdleTime_marshall4(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestIdleTime(std::move(cb.t));
}
int CkIndex_controlPointManager::_callmarshall_requestIdleTime_marshall4(char* impl_buf, void* impl_obj_void) {
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestIdleTime(std::move(cb.t));
  return implP.size();
}
void CkIndex_controlPointManager::_marshallmessagepup_requestIdleTime_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_controlPointManager::requestIdleTime_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
void CProxy_controlPointManager::gatherIdleTime(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherIdleTime(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherIdleTime(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_gatherIdleTime_CkReductionMsg() {
  int epidx = CkRegisterEp("gatherIdleTime(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_gatherIdleTime_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_controlPointManager::_call_gatherIdleTime_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  impl_obj->gatherIdleTime((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestAll(const CkCallback &cb);
 */
void CProxy_controlPointManager::requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestAll(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::requestAll(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_requestAll_marshall6() {
  int epidx = CkRegisterEp("requestAll(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_requestAll_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestAll_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestAll_marshall6);

  return epidx;
}

void CkIndex_controlPointManager::_call_requestAll_marshall6(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestAll(std::move(cb.t));
}
int CkIndex_controlPointManager::_callmarshall_requestAll_marshall6(char* impl_buf, void* impl_obj_void) {
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestAll(std::move(cb.t));
  return implP.size();
}
void CkIndex_controlPointManager::_marshallmessagepup_requestAll_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_controlPointManager::requestAll_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherAll(CkReductionMsg* impl_msg);
 */
void CProxy_controlPointManager::gatherAll(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherAll(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_controlPointManager::gatherAll(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_controlPointManager::reg_gatherAll_CkReductionMsg() {
  int epidx = CkRegisterEp("gatherAll(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_gatherAll_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_controlPointManager::_call_gatherAll_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  controlPointManager* impl_obj = static_cast<controlPointManager*>(impl_obj_void);
  impl_obj->gatherAll((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_controlPointManager::reg_controlPointManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("controlPointManager(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_controlPointManager_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_controlPointManager::_call_controlPointManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) controlPointManager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestMemoryUsage(const CkCallback &cb);
 */
void CProxySection_controlPointManager::requestMemoryUsage(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestMemoryUsage_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherMemoryUsage(CkReductionMsg* impl_msg);
 */
void CProxySection_controlPointManager::gatherMemoryUsage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherMemoryUsage_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestIdleTime(const CkCallback &cb);
 */
void CProxySection_controlPointManager::requestIdleTime(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestIdleTime_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherIdleTime(CkReductionMsg* impl_msg);
 */
void CProxySection_controlPointManager::gatherIdleTime(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherIdleTime_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestAll(const CkCallback &cb);
 */
void CProxySection_controlPointManager::requestAll(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_requestAll_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gatherAll(CkReductionMsg* impl_msg);
 */
void CProxySection_controlPointManager::gatherAll(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_controlPointManager::idx_gatherAll_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: controlPointManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_controlPointManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,controlPointManager::isIrreducible());
  // REG: controlPointManager();
  idx_controlPointManager_void();
  CkRegisterDefaultCtor(__idx, idx_controlPointManager_void());

  // REG: void requestMemoryUsage(const CkCallback &cb);
  idx_requestMemoryUsage_marshall2();

  // REG: void gatherMemoryUsage(CkReductionMsg* impl_msg);
  idx_gatherMemoryUsage_CkReductionMsg();

  // REG: void requestIdleTime(const CkCallback &cb);
  idx_requestIdleTime_marshall4();

  // REG: void gatherIdleTime(CkReductionMsg* impl_msg);
  idx_gatherIdleTime_CkReductionMsg();

  // REG: void requestAll(const CkCallback &cb);
  idx_requestAll_marshall6();

  // REG: void gatherAll(CkReductionMsg* impl_msg);
  idx_gatherAll_CkReductionMsg();

  // REG: controlPointManager(CkMigrateMessage* impl_msg);
  idx_controlPointManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_controlPointManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array redistributor2D: ArrayElement{
redistributor2D();
void startup();
void resizeGranules(int impl_noname_0, int impl_noname_1);
void receiveTransposeData(redistributor2DMsg* impl_msg);
redistributor2D(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_redistributor2D::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_redistributor2D::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_redistributor2D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_redistributor2D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_redistributor2D::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_redistributor2D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_redistributor2D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D();
 */
void CProxyElement_redistributor2D::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_redistributor2D::idx_redistributor2D_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxyElement_redistributor2D::startup(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_startup_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
void CProxyElement_redistributor2D::resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_resizeGranules_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
void CProxyElement_redistributor2D::receiveTransposeData(redistributor2DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_receiveTransposeData_redistributor2DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D();
 */
CkArrayID CProxy_redistributor2D::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_redistributor2D::idx_redistributor2D_void(), opts);
  return gId;
}
void CProxy_redistributor2D::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_redistributor2D::idx_redistributor2D_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_redistributor2D::ckNew(const int s1, const int s2, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_redistributor2D::idx_redistributor2D_void(), opts);
  return gId;
}
void CProxy_redistributor2D::ckNew(const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_redistributor2D::idx_redistributor2D_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_redistributor2D::reg_redistributor2D_void() {
  int epidx = CkRegisterEp("redistributor2D()",
      reinterpret_cast<CkCallFnPtr>(_call_redistributor2D_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_redistributor2D::_call_redistributor2D_void(void* impl_msg, void* impl_obj_void)
{
  redistributor2D* impl_obj = static_cast<redistributor2D*>(impl_obj_void);
  new (impl_obj_void) redistributor2D();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxy_redistributor2D::startup(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_redistributor2D::idx_startup_void(),0);
}

// Entry point registration function
int CkIndex_redistributor2D::reg_startup_void() {
  int epidx = CkRegisterEp("startup()",
      reinterpret_cast<CkCallFnPtr>(_call_startup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_redistributor2D::_call_startup_void(void* impl_msg, void* impl_obj_void)
{
  redistributor2D* impl_obj = static_cast<redistributor2D*>(impl_obj_void);
  impl_obj->startup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_redistributor2D::startup_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
void CProxy_redistributor2D::resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_redistributor2D::idx_resizeGranules_marshall3(),0);
}

// Entry point registration function
int CkIndex_redistributor2D::reg_resizeGranules_marshall3() {
  int epidx = CkRegisterEp("resizeGranules(int impl_noname_0, int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_resizeGranules_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_resizeGranules_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_resizeGranules_marshall3);

  return epidx;
}

void CkIndex_redistributor2D::_call_resizeGranules_marshall3(void* impl_msg, void* impl_obj_void)
{
  redistributor2D* impl_obj = static_cast<redistributor2D*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resizeGranules(std::move(impl_noname_0.t), std::move(impl_noname_1.t));
}
int CkIndex_redistributor2D::_callmarshall_resizeGranules_marshall3(char* impl_buf, void* impl_obj_void) {
  redistributor2D* impl_obj = static_cast<redistributor2D*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resizeGranules(std::move(impl_noname_0.t), std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_redistributor2D::_marshallmessagepup_resizeGranules_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_redistributor2D::resizeGranules_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
void CProxy_redistributor2D::receiveTransposeData(redistributor2DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_redistributor2D::idx_receiveTransposeData_redistributor2DMsg(),0);
}

// Entry point registration function
int CkIndex_redistributor2D::reg_receiveTransposeData_redistributor2DMsg() {
  int epidx = CkRegisterEp("receiveTransposeData(redistributor2DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveTransposeData_redistributor2DMsg), CMessage_redistributor2DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)redistributor2DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_redistributor2D::_call_receiveTransposeData_redistributor2DMsg(void* impl_msg, void* impl_obj_void)
{
  redistributor2D* impl_obj = static_cast<redistributor2D*>(impl_obj_void);
  impl_obj->receiveTransposeData((redistributor2DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_redistributor2D::reg_redistributor2D_CkMigrateMessage() {
  int epidx = CkRegisterEp("redistributor2D(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redistributor2D_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_redistributor2D::_call_redistributor2D_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<redistributor2D> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxySection_redistributor2D::startup(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_startup_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resizeGranules(int impl_noname_0, int impl_noname_1);
 */
void CProxySection_redistributor2D::resizeGranules(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_resizeGranules_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveTransposeData(redistributor2DMsg* impl_msg);
 */
void CProxySection_redistributor2D::receiveTransposeData(redistributor2DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_redistributor2D::idx_receiveTransposeData_redistributor2DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: redistributor2D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_redistributor2D::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 2);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: redistributor2D();
  idx_redistributor2D_void();
  CkRegisterDefaultCtor(__idx, idx_redistributor2D_void());

  // REG: void startup();
  idx_startup_void();

  // REG: void resizeGranules(int impl_noname_0, int impl_noname_1);
  idx_resizeGranules_marshall3();

  // REG: void receiveTransposeData(redistributor2DMsg* impl_msg);
  idx_receiveTransposeData_redistributor2DMsg();

  // REG: redistributor2D(CkMigrateMessage* impl_msg);
  idx_redistributor2D_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_redistributor2D_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerControlPoints(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("controlPointManagerProxy","CProxy_controlPointManager",sizeof(controlPointManagerProxy),(void *) &controlPointManagerProxy,__xlater_roPup_controlPointManagerProxy);

  CkRegisterReadonly("random_seed","int",sizeof(random_seed),(void *) &random_seed,__xlater_roPup_random_seed);

  CkRegisterReadonly("controlPointSamplePeriod","long",sizeof(controlPointSamplePeriod),(void *) &controlPointSamplePeriod,__xlater_roPup_controlPointSamplePeriod);

  CkRegisterReadonly("whichTuningScheme","int",sizeof(whichTuningScheme),(void *) &whichTuningScheme,__xlater_roPup_whichTuningScheme);

  CkRegisterReadonly("shouldGatherMemoryUsage","bool",sizeof(shouldGatherMemoryUsage),(void *) &shouldGatherMemoryUsage,__xlater_roPup_shouldGatherMemoryUsage);

  CkRegisterReadonly("shouldGatherUtilization","bool",sizeof(shouldGatherUtilization),(void *) &shouldGatherUtilization,__xlater_roPup_shouldGatherUtilization);

  CkRegisterReadonly("shouldGatherAll","bool",sizeof(shouldGatherAll),(void *) &shouldGatherAll,__xlater_roPup_shouldGatherAll);

  CkRegisterReadonly("CPDataFilename","char",sizeof(CPDataFilename),(void *) &CPDataFilename,__xlater_roPup_CPDataFilename);

  CkRegisterReadonly("shouldFilterOutputData","bool",sizeof(shouldFilterOutputData),(void *) &shouldFilterOutputData,__xlater_roPup_shouldFilterOutputData);

  CkRegisterReadonly("writeDataFileAtShutdown","bool",sizeof(writeDataFileAtShutdown),(void *) &writeDataFileAtShutdown,__xlater_roPup_writeDataFileAtShutdown);

  _registerInitCall(registerCPReductions,1);

/* REG: message controlPointMsg{
char data[];
}
;
*/
CMessage_controlPointMsg::__register("controlPointMsg", sizeof(controlPointMsg),(CkPackFnPtr) controlPointMsg::pack,(CkUnpackFnPtr) controlPointMsg::unpack);

/* REG: message redistributor2DMsg{
double data[];
}
;
*/
CMessage_redistributor2DMsg::__register("redistributor2DMsg", sizeof(redistributor2DMsg),(CkPackFnPtr) redistributor2DMsg::pack,(CkUnpackFnPtr) redistributor2DMsg::unpack);

/* REG: mainchare controlPointMain: Chare{
controlPointMain(CkArgMsg* impl_msg);
};
*/
  CkIndex_controlPointMain::__register("controlPointMain", sizeof(controlPointMain));

  _registerInitCall(controlPointInitNode,1);

  _registerInitCall(ControlPoint::initControlPointEffects,0);

/* REG: group controlPointManager: IrrGroup{
controlPointManager();
void requestMemoryUsage(const CkCallback &cb);
void gatherMemoryUsage(CkReductionMsg* impl_msg);
void requestIdleTime(const CkCallback &cb);
void gatherIdleTime(CkReductionMsg* impl_msg);
void requestAll(const CkCallback &cb);
void gatherAll(CkReductionMsg* impl_msg);
controlPointManager(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_controlPointManager::__register("controlPointManager", sizeof(controlPointManager));

/* REG: array redistributor2D: ArrayElement{
redistributor2D();
void startup();
void resizeGranules(int impl_noname_0, int impl_noname_1);
void receiveTransposeData(redistributor2DMsg* impl_msg);
redistributor2D(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_redistributor2D::__register("redistributor2D", sizeof(redistributor2D));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_controlPointMain::virtual_pup(PUP::er &p) {
    recursive_pup<controlPointMain>(dynamic_cast<controlPointMain*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_controlPointManager::virtual_pup(PUP::er &p) {
    recursive_pup<controlPointManager>(dynamic_cast<controlPointManager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_redistributor2D::virtual_pup(PUP::er &p) {
    recursive_pup<redistributor2D>(dynamic_cast<redistributor2D*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
