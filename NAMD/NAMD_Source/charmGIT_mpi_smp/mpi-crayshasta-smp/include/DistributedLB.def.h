

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistributedLB::GossipLoadInfo_2_closure : public SDAG::Closure {
            int pe;
            int n;
            int *pe_no;
            double *load;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      GossipLoadInfo_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      GossipLoadInfo_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return pe;}
            int & getP1() { return n;}
            int *& getP2() { return pe_no;}
            double *& getP3() { return load;}
      void pup(PUP::er& __p) {
        __p | pe;
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_pe_no, impl_cnt_pe_no;
  implP|impl_off_pe_no;
  implP|impl_cnt_pe_no;
  int impl_off_load, impl_cnt_load;
  implP|impl_off_load;
  implP|impl_cnt_load;
          impl_buf+=CK_ALIGN(implP.size(),16);
          pe_no = (int *)(impl_buf+impl_off_pe_no);
          load = (double *)(impl_buf+impl_off_load);
        }
      }
      virtual ~GossipLoadInfo_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(GossipLoadInfo_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistributedLB::DoneGossip_5_closure : public SDAG::Closure {
      

      DoneGossip_5_closure() {
        init();
      }
      DoneGossip_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~DoneGossip_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(DoneGossip_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistributedLB::InformMigration_6_closure : public SDAG::Closure {
            int obj_id;
            int from_pe;
            double obj_load;
            bool force;


      InformMigration_6_closure() {
        init();
      }
      InformMigration_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return obj_id;}
            int & getP1() { return from_pe;}
            double & getP2() { return obj_load;}
            bool & getP3() { return force;}
      void pup(PUP::er& __p) {
        __p | obj_id;
        __p | from_pe;
        __p | obj_load;
        __p | force;
        packClosure(__p);
      }
      virtual ~InformMigration_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(InformMigration_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DistributedLB::RecvAck_7_closure : public SDAG::Closure {
            int obj_id;
            int assigned_pe;
            bool can_accept;


      RecvAck_7_closure() {
        init();
      }
      RecvAck_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return obj_id;}
            int & getP1() { return assigned_pe;}
            bool & getP2() { return can_accept;}
      void pup(PUP::er& __p) {
        __p | obj_id;
        __p | assigned_pe;
        __p | can_accept;
        packClosure(__p);
      }
      virtual ~RecvAck_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(RecvAck_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group DistributedLB: DistBaseLB{
void DistributedLB(const CkLBOptions &impl_noname_0);
  initcall void initnodeFn(void);
void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
void LoadReduction(CkReductionMsg* impl_msg);
void AfterLBReduction(CkReductionMsg* impl_msg);
void DoneGossip();
void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
DistributedLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DistributedLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
void CProxyElement_DistributedLB::GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe, int n, const int *pe_no, const double *load
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pe_no, impl_cnt_pe_no;
  impl_off_pe_no=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_pe_no=sizeof(int)*(n));
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pe_no,pe_no,impl_cnt_pe_no);
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadReduction(CkReductionMsg* impl_msg);
 */
void CProxyElement_DistributedLB::LoadReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
void CProxyElement_DistributedLB::AfterLBReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DoneGossip();
 */
void CProxyElement_DistributedLB::DoneGossip(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
void CProxyElement_DistributedLB::InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int from_pe, double obj_load, const bool &force
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
void CProxyElement_DistributedLB::RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int assigned_pe, const bool &can_accept
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistributedLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_DistributedLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_DistributedLB::__idx, CkIndex_DistributedLB::idx_DistributedLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_DistributedLB::CProxy_DistributedLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_DistributedLB::__idx, CkIndex_DistributedLB::idx_DistributedLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_DistributedLB::reg_DistributedLB_marshall1() {
  int epidx = CkRegisterEp("DistributedLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_DistributedLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DistributedLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DistributedLB_marshall1);

  return epidx;
}

void CkIndex_DistributedLB::_call_DistributedLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) DistributedLB(std::move(impl_noname_0.t));
}
int CkIndex_DistributedLB::_callmarshall_DistributedLB_marshall1(char* impl_buf, void* impl_obj_void) {
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) DistributedLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_DistributedLB::_marshallmessagepup_DistributedLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
void CProxy_DistributedLB::GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe, int n, const int *pe_no, const double *load
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pe_no, impl_cnt_pe_no;
  impl_off_pe_no=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_pe_no=sizeof(int)*(n));
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pe_no,pe_no,impl_cnt_pe_no);
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistributedLB::GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe, int n, const int *pe_no, const double *load
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pe_no, impl_cnt_pe_no;
  impl_off_pe_no=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_pe_no=sizeof(int)*(n));
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pe_no,pe_no,impl_cnt_pe_no);
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistributedLB::GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe, int n, const int *pe_no, const double *load
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pe_no, impl_cnt_pe_no;
  impl_off_pe_no=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_pe_no=sizeof(int)*(n));
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pe_no,pe_no,impl_cnt_pe_no);
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_GossipLoadInfo_marshall2() {
  int epidx = CkRegisterEp("GossipLoadInfo(int pe, int n, const int *pe_no, const double *load)",
      reinterpret_cast<CkCallFnPtr>(_call_GossipLoadInfo_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_GossipLoadInfo_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_GossipLoadInfo_marshall2);

  return epidx;
}

void CkIndex_DistributedLB::_call_GossipLoadInfo_marshall2(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe, int n, const int *pe_no, const double *load*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_pe_no, impl_cnt_pe_no;
  implP|impl_off_pe_no;
  implP|impl_cnt_pe_no;
  int impl_off_load, impl_cnt_load;
  implP|impl_off_load;
  implP|impl_cnt_load;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *pe_no=(int *)(impl_buf+impl_off_pe_no);
  double *load=(double *)(impl_buf+impl_off_load);
  impl_obj->GossipLoadInfo(std::move(pe.t), std::move(n.t), pe_no, load);
}
int CkIndex_DistributedLB::_callmarshall_GossipLoadInfo_marshall2(char* impl_buf, void* impl_obj_void) {
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pe, int n, const int *pe_no, const double *load*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_pe_no, impl_cnt_pe_no;
  implP|impl_off_pe_no;
  implP|impl_cnt_pe_no;
  int impl_off_load, impl_cnt_load;
  implP|impl_off_load;
  implP|impl_cnt_load;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *pe_no=(int *)(impl_buf+impl_off_pe_no);
  double *load=(double *)(impl_buf+impl_off_load);
  impl_obj->GossipLoadInfo(std::move(pe.t), std::move(n.t), pe_no, load);
  return implP.size();
}
void CkIndex_DistributedLB::_marshallmessagepup_GossipLoadInfo_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe, int n, const int *pe_no, const double *load*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_pe_no, impl_cnt_pe_no;
  implP|impl_off_pe_no;
  implP|impl_cnt_pe_no;
  int impl_off_load, impl_cnt_load;
  implP|impl_off_load;
  implP|impl_cnt_load;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *pe_no=(int *)(impl_buf+impl_off_pe_no);
  double *load=(double *)(impl_buf+impl_off_load);
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("pe_no");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*pe_no))<impl_cnt_pe_no;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|pe_no[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("load");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*load))<impl_cnt_load;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|load[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_DistributedLB::GossipLoadInfo_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadReduction(CkReductionMsg* impl_msg);
 */
void CProxy_DistributedLB::LoadReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistributedLB::LoadReduction(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistributedLB::LoadReduction(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_LoadReduction_CkReductionMsg() {
  int epidx = CkRegisterEp("LoadReduction(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LoadReduction_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_DistributedLB::_call_LoadReduction_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  impl_obj->LoadReduction((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
void CProxy_DistributedLB::AfterLBReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistributedLB::AfterLBReduction(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistributedLB::AfterLBReduction(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_AfterLBReduction_CkReductionMsg() {
  int epidx = CkRegisterEp("AfterLBReduction(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_AfterLBReduction_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_DistributedLB::_call_AfterLBReduction_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  impl_obj->AfterLBReduction((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DoneGossip();
 */
void CProxy_DistributedLB::DoneGossip(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DistributedLB::DoneGossip(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DistributedLB::DoneGossip(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_DoneGossip_void() {
  int epidx = CkRegisterEp("DoneGossip()",
      reinterpret_cast<CkCallFnPtr>(_call_DoneGossip_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DistributedLB::_call_DoneGossip_void(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  impl_obj->DoneGossip();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DistributedLB::DoneGossip_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
void CProxy_DistributedLB::InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int from_pe, double obj_load, const bool &force
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_DistributedLB::InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int obj_id, int from_pe, double obj_load, const bool &force
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
  }
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_DistributedLB::InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int obj_id, int from_pe, double obj_load, const bool &force
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
  }
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_InformMigration_marshall6() {
  int epidx = CkRegisterEp("InformMigration(int obj_id, int from_pe, double obj_load, const bool &force)",
      reinterpret_cast<CkCallFnPtr>(_call_InformMigration_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_InformMigration_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_InformMigration_marshall6);

  return epidx;
}

void CkIndex_DistributedLB::_call_InformMigration_marshall6(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int obj_id, int from_pe, double obj_load, const bool &force*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> from_pe;
  implP|from_pe;
  PUP::detail::TemporaryObjectHolder<double> obj_load;
  implP|obj_load;
  PUP::detail::TemporaryObjectHolder<bool> force;
  implP|force;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->InformMigration(std::move(obj_id.t), std::move(from_pe.t), std::move(obj_load.t), std::move(force.t));
}
int CkIndex_DistributedLB::_callmarshall_InformMigration_marshall6(char* impl_buf, void* impl_obj_void) {
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int obj_id, int from_pe, double obj_load, const bool &force*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> from_pe;
  implP|from_pe;
  PUP::detail::TemporaryObjectHolder<double> obj_load;
  implP|obj_load;
  PUP::detail::TemporaryObjectHolder<bool> force;
  implP|force;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->InformMigration(std::move(obj_id.t), std::move(from_pe.t), std::move(obj_load.t), std::move(force.t));
  return implP.size();
}
void CkIndex_DistributedLB::_marshallmessagepup_InformMigration_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int obj_id, int from_pe, double obj_load, const bool &force*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> from_pe;
  implP|from_pe;
  PUP::detail::TemporaryObjectHolder<double> obj_load;
  implP|obj_load;
  PUP::detail::TemporaryObjectHolder<bool> force;
  implP|force;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("obj_id");
  implDestP|obj_id;
  if (implDestP.hasComments()) implDestP.comment("from_pe");
  implDestP|from_pe;
  if (implDestP.hasComments()) implDestP.comment("obj_load");
  implDestP|obj_load;
  if (implDestP.hasComments()) implDestP.comment("force");
  implDestP|force;
}
PUPable_def(SINGLE_ARG(Closure_DistributedLB::InformMigration_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
void CProxy_DistributedLB::RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int assigned_pe, const bool &can_accept
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_DistributedLB::RecvAck(int obj_id, int assigned_pe, const bool &can_accept, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int obj_id, int assigned_pe, const bool &can_accept
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
  }
  CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_DistributedLB::RecvAck(int obj_id, int assigned_pe, const bool &can_accept, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int obj_id, int assigned_pe, const bool &can_accept
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
  }
  CkSendMsgBranchGroup(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_DistributedLB::reg_RecvAck_marshall7() {
  int epidx = CkRegisterEp("RecvAck(int obj_id, int assigned_pe, const bool &can_accept)",
      reinterpret_cast<CkCallFnPtr>(_call_RecvAck_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_RecvAck_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_RecvAck_marshall7);

  return epidx;
}

void CkIndex_DistributedLB::_call_RecvAck_marshall7(void* impl_msg, void* impl_obj_void)
{
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int obj_id, int assigned_pe, const bool &can_accept*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> assigned_pe;
  implP|assigned_pe;
  PUP::detail::TemporaryObjectHolder<bool> can_accept;
  implP|can_accept;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RecvAck(std::move(obj_id.t), std::move(assigned_pe.t), std::move(can_accept.t));
}
int CkIndex_DistributedLB::_callmarshall_RecvAck_marshall7(char* impl_buf, void* impl_obj_void) {
  DistributedLB* impl_obj = static_cast<DistributedLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int obj_id, int assigned_pe, const bool &can_accept*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> assigned_pe;
  implP|assigned_pe;
  PUP::detail::TemporaryObjectHolder<bool> can_accept;
  implP|can_accept;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RecvAck(std::move(obj_id.t), std::move(assigned_pe.t), std::move(can_accept.t));
  return implP.size();
}
void CkIndex_DistributedLB::_marshallmessagepup_RecvAck_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int obj_id, int assigned_pe, const bool &can_accept*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> obj_id;
  implP|obj_id;
  PUP::detail::TemporaryObjectHolder<int> assigned_pe;
  implP|assigned_pe;
  PUP::detail::TemporaryObjectHolder<bool> can_accept;
  implP|can_accept;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("obj_id");
  implDestP|obj_id;
  if (implDestP.hasComments()) implDestP.comment("assigned_pe");
  implDestP|assigned_pe;
  if (implDestP.hasComments()) implDestP.comment("can_accept");
  implDestP|can_accept;
}
PUPable_def(SINGLE_ARG(Closure_DistributedLB::RecvAck_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistributedLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_DistributedLB::reg_DistributedLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("DistributedLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_DistributedLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_DistributedLB::_call_DistributedLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) DistributedLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DistributedLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
 */
void CProxySection_DistributedLB::GossipLoadInfo(int pe, int n, const int *pe_no, const double *load, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe, int n, const int *pe_no, const double *load
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pe_no, impl_cnt_pe_no;
  impl_off_pe_no=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_pe_no=sizeof(int)*(n));
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|n;
    implP|impl_off_pe_no;
    implP|impl_cnt_pe_no;
    implP|impl_off_load;
    implP|impl_cnt_load;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pe_no,pe_no,impl_cnt_pe_no);
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_GossipLoadInfo_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadReduction(CkReductionMsg* impl_msg);
 */
void CProxySection_DistributedLB::LoadReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_LoadReduction_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AfterLBReduction(CkReductionMsg* impl_msg);
 */
void CProxySection_DistributedLB::AfterLBReduction(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_AfterLBReduction_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DoneGossip();
 */
void CProxySection_DistributedLB::DoneGossip(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_DoneGossip_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
 */
void CProxySection_DistributedLB::InformMigration(int obj_id, int from_pe, double obj_load, const bool &force, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int from_pe, double obj_load, const bool &force
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|from_pe;
    implP|obj_load;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)force;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_InformMigration_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
 */
void CProxySection_DistributedLB::RecvAck(int obj_id, int assigned_pe, const bool &can_accept, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int obj_id, int assigned_pe, const bool &can_accept
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|obj_id;
    implP|assigned_pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)can_accept;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DistributedLB::idx_RecvAck_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DistributedLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DistributedLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_DistBaseLB::__idx);
   CkRegisterGroupIrr(__idx,DistributedLB::isIrreducible());
  // REG: void DistributedLB(const CkLBOptions &impl_noname_0);
  idx_DistributedLB_marshall1();

  _registerInitCall(DistributedLB::initnodeFn,1);

  // REG: void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
  idx_GossipLoadInfo_marshall2();

  // REG: void LoadReduction(CkReductionMsg* impl_msg);
  idx_LoadReduction_CkReductionMsg();

  // REG: void AfterLBReduction(CkReductionMsg* impl_msg);
  idx_AfterLBReduction_CkReductionMsg();

  // REG: void DoneGossip();
  idx_DoneGossip_void();

  // REG: void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
  idx_InformMigration_marshall6();

  // REG: void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
  idx_RecvAck_marshall7();

  // REG: DistributedLB(CkMigrateMessage* impl_msg);
  idx_DistributedLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_DistributedLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerDistributedLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerDistBaseLB();

  _registerInitCall(lbinit,1);

/* REG: group DistributedLB: DistBaseLB{
void DistributedLB(const CkLBOptions &impl_noname_0);
  initcall void initnodeFn(void);
void GossipLoadInfo(int pe, int n, const int *pe_no, const double *load);
void LoadReduction(CkReductionMsg* impl_msg);
void AfterLBReduction(CkReductionMsg* impl_msg);
void DoneGossip();
void InformMigration(int obj_id, int from_pe, double obj_load, const bool &force);
void RecvAck(int obj_id, int assigned_pe, const bool &can_accept);
DistributedLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_DistributedLB::__register("DistributedLB", sizeof(DistributedLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DistributedLB::virtual_pup(PUP::er &p) {
    recursive_pup<DistributedLB>(dynamic_cast<DistributedLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
