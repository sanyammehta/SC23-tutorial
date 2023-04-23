









/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::Step_2_closure : public SDAG::Closure {
      

      Step_2_closure() {
        init();
      }
      Step_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~Step_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(Step_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::Status_5_closure : public SDAG::Closure {
      

      Status_5_closure() {
        init();
      }
      Status_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~Status_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(Status_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::Commit_6_closure : public SDAG::Closure {
      

      Commit_6_closure() {
        init();
      }
      Commit_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~Commit_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(Commit_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::CheckpointCommit_7_closure : public SDAG::Closure {
      

      CheckpointCommit_7_closure() {
        init();
      }
      CheckpointCommit_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~CheckpointCommit_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(CheckpointCommit_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::ReportLBdata_8_closure : public SDAG::Closure {
      

      ReportLBdata_8_closure() {
        init();
      }
      ReportLBdata_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ReportLBdata_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReportLBdata_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::Terminate_10_closure : public SDAG::Closure {
      

      Terminate_10_closure() {
        init();
      }
      Terminate_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~Terminate_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(Terminate_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::SeqBeginCheckpoint_12_closure : public SDAG::Closure {
      

      SeqBeginCheckpoint_12_closure() {
        init();
      }
      SeqBeginCheckpoint_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~SeqBeginCheckpoint_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(SeqBeginCheckpoint_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::SeqResumeAfterCheckpoint_13_closure : public SDAG::Closure {
      

      SeqResumeAfterCheckpoint_13_closure() {
        init();
      }
      SeqResumeAfterCheckpoint_13_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~SeqResumeAfterCheckpoint_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(SeqResumeAfterCheckpoint_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::invokeStopEvent_14_closure : public SDAG::Closure {
      

      invokeStopEvent_14_closure() {
        init();
      }
      invokeStopEvent_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~invokeStopEvent_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(invokeStopEvent_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_sim::setSimulationStartGVT_15_closure : public SDAG::Closure {
            POSE_TimeType impl_noname_0;


      setSimulationStartGVT_15_closure() {
        init();
      }
      setSimulationStartGVT_15_closure(CkMigrateMessage*) {
        init();
      }
            POSE_TimeType & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~setSimulationStartGVT_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(setSimulationStartGVT_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */








/* DEFS: readonly CProxy_sim POSE_Objects;
 */
extern CProxy_sim POSE_Objects;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_POSE_Objects(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|POSE_Objects;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_sim POSE_Objects_RO;
 */
extern CProxy_sim POSE_Objects_RO;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_POSE_Objects_RO(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|POSE_Objects_RO;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkChareID POSE_Coordinator_ID;
 */
extern CkChareID POSE_Coordinator_ID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_POSE_Coordinator_ID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|POSE_Coordinator_ID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message destMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_destMsg::operator new(size_t s){
  return destMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_destMsg::operator new(size_t s, int* sz){
  return destMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_destMsg::operator new(size_t s, int* sz,const int pb){
  return destMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_destMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return destMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_destMsg::operator new(size_t s, const int p) {
  return destMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_destMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return destMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_destMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_destMsg::CMessage_destMsg() {
destMsg *newmsg = (destMsg *)this;
}
void CMessage_destMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_destMsg::pack(destMsg *msg) {
  return (void *) msg;
}
destMsg* CMessage_destMsg::unpack(void* buf) {
  destMsg *msg = (destMsg *) buf;
  return msg;
}
int CMessage_destMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array sim: ArrayElement{
sim();
void Step();
void Step(prioMsg* impl_msg);
void CheckpointStep(eventMsg* impl_msg);
void Status();
void Commit();
void CheckpointCommit();
void ReportLBdata();
void Migrate(destMsg* impl_msg);
void Terminate();
void Cancel(cancelMsg* impl_msg);
void SeqBeginCheckpoint();
void SeqResumeAfterCheckpoint();
void invokeStopEvent();
void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
sim(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_sim::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_sim::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_sim::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_sim::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_sim::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_sim::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_sim::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim();
 */
void CProxyElement_sim::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_sim::idx_sim_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step();
 */
void CProxyElement_sim::Step(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Step_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step(prioMsg* impl_msg);
 */
void CProxyElement_sim::Step(prioMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Step_prioMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointStep(eventMsg* impl_msg);
 */
void CProxyElement_sim::CheckpointStep(eventMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_CheckpointStep_eventMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Status();
 */
void CProxyElement_sim::Status(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Status_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Commit();
 */
void CProxyElement_sim::Commit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Commit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointCommit();
 */
void CProxyElement_sim::CheckpointCommit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_CheckpointCommit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReportLBdata();
 */
void CProxyElement_sim::ReportLBdata(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_ReportLBdata_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Migrate(destMsg* impl_msg);
 */
void CProxyElement_sim::Migrate(destMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Migrate_destMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxyElement_sim::Terminate(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Terminate_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Cancel(cancelMsg* impl_msg);
 */
void CProxyElement_sim::Cancel(cancelMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Cancel_cancelMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqBeginCheckpoint();
 */
void CProxyElement_sim::SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_SeqBeginCheckpoint_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqResumeAfterCheckpoint();
 */
void CProxyElement_sim::SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_SeqResumeAfterCheckpoint_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void invokeStopEvent();
 */
void CProxyElement_sim::invokeStopEvent(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_invokeStopEvent_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
void CProxyElement_sim::setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const POSE_TimeType &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_setSimulationStartGVT_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim();
 */
CkArrayID CProxy_sim::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_sim::idx_sim_void(), opts);
  return gId;
}
void CProxy_sim::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_sim::idx_sim_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_sim::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_sim::idx_sim_void(), opts);
  return gId;
}
void CProxy_sim::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_sim::idx_sim_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_sim::reg_sim_void() {
  int epidx = CkRegisterEp("sim()",
      reinterpret_cast<CkCallFnPtr>(_call_sim_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_sim_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  new (impl_obj_void) sim();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step();
 */
void CProxy_sim::Step(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Step_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Step_void() {
  int epidx = CkRegisterEp("Step()",
      reinterpret_cast<CkCallFnPtr>(_call_Step_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_Step_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Step();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::Step_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step(prioMsg* impl_msg);
 */
void CProxy_sim::Step(prioMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Step_prioMsg(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Step_prioMsg() {
  int epidx = CkRegisterEp("Step(prioMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Step_prioMsg), CMessage_prioMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)prioMsg::ckDebugPup);
  return epidx;
}

void CkIndex_sim::_call_Step_prioMsg(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Step((prioMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointStep(eventMsg* impl_msg);
 */
void CProxy_sim::CheckpointStep(eventMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_CheckpointStep_eventMsg(),0);
}

// Entry point registration function
int CkIndex_sim::reg_CheckpointStep_eventMsg() {
  int epidx = CkRegisterEp("CheckpointStep(eventMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CheckpointStep_eventMsg), CMessage_eventMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)eventMsg::ckDebugPup);
  return epidx;
}

void CkIndex_sim::_call_CheckpointStep_eventMsg(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->CheckpointStep((eventMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Status();
 */
void CProxy_sim::Status(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Status_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Status_void() {
  int epidx = CkRegisterEp("Status()",
      reinterpret_cast<CkCallFnPtr>(_call_Status_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_Status_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Status();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::Status_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Commit();
 */
void CProxy_sim::Commit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Commit_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Commit_void() {
  int epidx = CkRegisterEp("Commit()",
      reinterpret_cast<CkCallFnPtr>(_call_Commit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_Commit_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Commit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::Commit_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointCommit();
 */
void CProxy_sim::CheckpointCommit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_CheckpointCommit_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_CheckpointCommit_void() {
  int epidx = CkRegisterEp("CheckpointCommit()",
      reinterpret_cast<CkCallFnPtr>(_call_CheckpointCommit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_CheckpointCommit_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->CheckpointCommit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::CheckpointCommit_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReportLBdata();
 */
void CProxy_sim::ReportLBdata(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_ReportLBdata_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_ReportLBdata_void() {
  int epidx = CkRegisterEp("ReportLBdata()",
      reinterpret_cast<CkCallFnPtr>(_call_ReportLBdata_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_ReportLBdata_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->ReportLBdata();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::ReportLBdata_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Migrate(destMsg* impl_msg);
 */
void CProxy_sim::Migrate(destMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Migrate_destMsg(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Migrate_destMsg() {
  int epidx = CkRegisterEp("Migrate(destMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Migrate_destMsg), CMessage_destMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)destMsg::ckDebugPup);
  return epidx;
}

void CkIndex_sim::_call_Migrate_destMsg(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Migrate((destMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxy_sim::Terminate(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Terminate_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Terminate_void() {
  int epidx = CkRegisterEp("Terminate()",
      reinterpret_cast<CkCallFnPtr>(_call_Terminate_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_Terminate_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Terminate();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::Terminate_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Cancel(cancelMsg* impl_msg);
 */
void CProxy_sim::Cancel(cancelMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_Cancel_cancelMsg(),0);
}

// Entry point registration function
int CkIndex_sim::reg_Cancel_cancelMsg() {
  int epidx = CkRegisterEp("Cancel(cancelMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cancel_cancelMsg), CMessage_cancelMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)cancelMsg::ckDebugPup);
  return epidx;
}

void CkIndex_sim::_call_Cancel_cancelMsg(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->Cancel((cancelMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqBeginCheckpoint();
 */
void CProxy_sim::SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_SeqBeginCheckpoint_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_SeqBeginCheckpoint_void() {
  int epidx = CkRegisterEp("SeqBeginCheckpoint()",
      reinterpret_cast<CkCallFnPtr>(_call_SeqBeginCheckpoint_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_SeqBeginCheckpoint_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->SeqBeginCheckpoint();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::SeqBeginCheckpoint_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqResumeAfterCheckpoint();
 */
void CProxy_sim::SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_SeqResumeAfterCheckpoint_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_SeqResumeAfterCheckpoint_void() {
  int epidx = CkRegisterEp("SeqResumeAfterCheckpoint()",
      reinterpret_cast<CkCallFnPtr>(_call_SeqResumeAfterCheckpoint_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_SeqResumeAfterCheckpoint_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->SeqResumeAfterCheckpoint();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::SeqResumeAfterCheckpoint_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void invokeStopEvent();
 */
void CProxy_sim::invokeStopEvent(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_invokeStopEvent_void(),0);
}

// Entry point registration function
int CkIndex_sim::reg_invokeStopEvent_void() {
  int epidx = CkRegisterEp("invokeStopEvent()",
      reinterpret_cast<CkCallFnPtr>(_call_invokeStopEvent_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_invokeStopEvent_void(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  impl_obj->invokeStopEvent();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_sim::invokeStopEvent_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
void CProxy_sim::setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const POSE_TimeType &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_sim::idx_setSimulationStartGVT_marshall15(),0);
}

// Entry point registration function
int CkIndex_sim::reg_setSimulationStartGVT_marshall15() {
  int epidx = CkRegisterEp("setSimulationStartGVT(const POSE_TimeType &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_setSimulationStartGVT_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setSimulationStartGVT_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setSimulationStartGVT_marshall15);

  return epidx;
}

void CkIndex_sim::_call_setSimulationStartGVT_marshall15(void* impl_msg, void* impl_obj_void)
{
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const POSE_TimeType &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<POSE_TimeType> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setSimulationStartGVT(std::move(impl_noname_0.t));
}
int CkIndex_sim::_callmarshall_setSimulationStartGVT_marshall15(char* impl_buf, void* impl_obj_void) {
  sim* impl_obj = static_cast<sim*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const POSE_TimeType &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<POSE_TimeType> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setSimulationStartGVT(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_sim::_marshallmessagepup_setSimulationStartGVT_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const POSE_TimeType &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<POSE_TimeType> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_sim::setSimulationStartGVT_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_sim::reg_sim_CkMigrateMessage() {
  int epidx = CkRegisterEp("sim(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sim_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_sim::_call_sim_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<sim> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step();
 */
void CProxySection_sim::Step(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Step_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Step(prioMsg* impl_msg);
 */
void CProxySection_sim::Step(prioMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Step_prioMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointStep(eventMsg* impl_msg);
 */
void CProxySection_sim::CheckpointStep(eventMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_CheckpointStep_eventMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Status();
 */
void CProxySection_sim::Status(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Status_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Commit();
 */
void CProxySection_sim::Commit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Commit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckpointCommit();
 */
void CProxySection_sim::CheckpointCommit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_CheckpointCommit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReportLBdata();
 */
void CProxySection_sim::ReportLBdata(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_ReportLBdata_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Migrate(destMsg* impl_msg);
 */
void CProxySection_sim::Migrate(destMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Migrate_destMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Terminate();
 */
void CProxySection_sim::Terminate(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Terminate_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Cancel(cancelMsg* impl_msg);
 */
void CProxySection_sim::Cancel(cancelMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_Cancel_cancelMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqBeginCheckpoint();
 */
void CProxySection_sim::SeqBeginCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_SeqBeginCheckpoint_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SeqResumeAfterCheckpoint();
 */
void CProxySection_sim::SeqResumeAfterCheckpoint(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_SeqResumeAfterCheckpoint_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void invokeStopEvent();
 */
void CProxySection_sim::invokeStopEvent(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_invokeStopEvent_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
 */
void CProxySection_sim::setSimulationStartGVT(const POSE_TimeType &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const POSE_TimeType &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<POSE_TimeType>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_sim::idx_setSimulationStartGVT_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sim(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_sim::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: sim();
  idx_sim_void();
  CkRegisterDefaultCtor(__idx, idx_sim_void());

  // REG: void Step();
  idx_Step_void();

  // REG: void Step(prioMsg* impl_msg);
  idx_Step_prioMsg();

  // REG: void CheckpointStep(eventMsg* impl_msg);
  idx_CheckpointStep_eventMsg();

  // REG: void Status();
  idx_Status_void();

  // REG: void Commit();
  idx_Commit_void();

  // REG: void CheckpointCommit();
  idx_CheckpointCommit_void();

  // REG: void ReportLBdata();
  idx_ReportLBdata_void();

  // REG: void Migrate(destMsg* impl_msg);
  idx_Migrate_destMsg();

  // REG: void Terminate();
  idx_Terminate_void();

  // REG: void Cancel(cancelMsg* impl_msg);
  idx_Cancel_cancelMsg();

  // REG: void SeqBeginCheckpoint();
  idx_SeqBeginCheckpoint_void();

  // REG: void SeqResumeAfterCheckpoint();
  idx_SeqResumeAfterCheckpoint_void();

  // REG: void invokeStopEvent();
  idx_invokeStopEvent_void();

  // REG: void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
  idx_setSimulationStartGVT_marshall15();

  // REG: sim(CkMigrateMessage* impl_msg);
  idx_sim_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_sim_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registersim(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerldbal();

  _registerposeMsgs();

  _registergvt();

  _registermempool();

  _registermemory_temporal();

  _registerstats();

  CkRegisterReadonly("POSE_Objects","CProxy_sim",sizeof(POSE_Objects),(void *) &POSE_Objects,__xlater_roPup_POSE_Objects);

  CkRegisterReadonly("POSE_Objects_RO","CProxy_sim",sizeof(POSE_Objects_RO),(void *) &POSE_Objects_RO,__xlater_roPup_POSE_Objects_RO);

  CkRegisterReadonly("POSE_Coordinator_ID","CkChareID",sizeof(POSE_Coordinator_ID),(void *) &POSE_Coordinator_ID,__xlater_roPup_POSE_Coordinator_ID);

/* REG: message destMsg;
*/
CMessage_destMsg::__register("destMsg", sizeof(destMsg),(CkPackFnPtr) destMsg::pack,(CkUnpackFnPtr) destMsg::unpack);

/* REG: array sim: ArrayElement{
sim();
void Step();
void Step(prioMsg* impl_msg);
void CheckpointStep(eventMsg* impl_msg);
void Status();
void Commit();
void CheckpointCommit();
void ReportLBdata();
void Migrate(destMsg* impl_msg);
void Terminate();
void Cancel(cancelMsg* impl_msg);
void SeqBeginCheckpoint();
void SeqResumeAfterCheckpoint();
void invokeStopEvent();
void setSimulationStartGVT(const POSE_TimeType &impl_noname_0);
sim(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_sim::__register("sim", sizeof(sim));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_sim::virtual_pup(PUP::er &p) {
    recursive_pup<sim>(dynamic_cast<sim*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
