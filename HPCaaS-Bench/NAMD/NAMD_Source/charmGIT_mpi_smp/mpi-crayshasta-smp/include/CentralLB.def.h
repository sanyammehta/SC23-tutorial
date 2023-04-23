




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ProcessAtSync_2_closure : public SDAG::Closure {
      

      ProcessAtSync_2_closure() {
        init();
      }
      ProcessAtSync_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ProcessAtSync_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ProcessAtSync_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::SendStats_3_closure : public SDAG::Closure {
      

      SendStats_3_closure() {
        init();
      }
      SendStats_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~SendStats_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(SendStats_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ReceiveStats_4_closure : public SDAG::Closure {
            CkMarshalledCLBStatsMessage data;


      ReceiveStats_4_closure() {
        init();
      }
      ReceiveStats_4_closure(CkMigrateMessage*) {
        init();
      }
            CkMarshalledCLBStatsMessage & getP0() { return data;}
      void pup(PUP::er& __p) {
        __p | data;
        packClosure(__p);
      }
      virtual ~ReceiveStats_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveStats_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ReceiveStatsViaTree_5_closure : public SDAG::Closure {
            CkMarshalledCLBStatsMessage data;


      ReceiveStatsViaTree_5_closure() {
        init();
      }
      ReceiveStatsViaTree_5_closure(CkMigrateMessage*) {
        init();
      }
            CkMarshalledCLBStatsMessage & getP0() { return data;}
      void pup(PUP::er& __p) {
        __p | data;
        packClosure(__p);
      }
      virtual ~ReceiveStatsViaTree_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveStatsViaTree_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ReceiveStatsFromRoot_6_closure : public SDAG::Closure {
            CkMarshalledCLBStatsMessage data;


      ReceiveStatsFromRoot_6_closure() {
        init();
      }
      ReceiveStatsFromRoot_6_closure(CkMigrateMessage*) {
        init();
      }
            CkMarshalledCLBStatsMessage & getP0() { return data;}
      void pup(PUP::er& __p) {
        __p | data;
        packClosure(__p);
      }
      virtual ~ReceiveStatsFromRoot_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveStatsFromRoot_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ReceiveCounts_7_closure : public SDAG::Closure {
            int *counts;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      ReceiveCounts_7_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      ReceiveCounts_7_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int *& getP0() { return counts;}
            int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_counts, impl_cnt_counts;
  implP|impl_off_counts;
  implP|impl_cnt_counts;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          counts = (int *)(impl_buf+impl_off_counts);
        }
      }
      virtual ~ReceiveCounts_7_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(ReceiveCounts_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::LoadBalance_8_closure : public SDAG::Closure {
      

      LoadBalance_8_closure() {
        init();
      }
      LoadBalance_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~LoadBalance_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(LoadBalance_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::t_LoadBalance_9_closure : public SDAG::Closure {
      

      t_LoadBalance_9_closure() {
        init();
      }
      t_LoadBalance_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~t_LoadBalance_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(t_LoadBalance_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ApplyDecision_10_closure : public SDAG::Closure {
      

      ApplyDecision_10_closure() {
        init();
      }
      ApplyDecision_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ApplyDecision_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(ApplyDecision_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ResumeClients_11_closure : public SDAG::Closure {
            int impl_noname_1;


      ResumeClients_11_closure() {
        init();
      }
      ResumeClients_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~ResumeClients_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ResumeClients_12_closure : public SDAG::Closure {
      

      ResumeClients_12_closure() {
        init();
      }
      ResumeClients_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeClients_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::changeFreq_13_closure : public SDAG::Closure {
            int impl_noname_2;


      changeFreq_13_closure() {
        init();
      }
      changeFreq_13_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~changeFreq_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(changeFreq_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ProcessReceiveMigration_17_closure : public SDAG::Closure {
      

      ProcessReceiveMigration_17_closure() {
        init();
      }
      ProcessReceiveMigration_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ProcessReceiveMigration_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(ProcessReceiveMigration_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ProcessMigrationDecision_18_closure : public SDAG::Closure {
      

      ProcessMigrationDecision_18_closure() {
        init();
      }
      ProcessMigrationDecision_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ProcessMigrationDecision_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(ProcessMigrationDecision_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::MissMigrate_19_closure : public SDAG::Closure {
            int impl_noname_3;


      MissMigrate_19_closure() {
        init();
      }
      MissMigrate_19_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        packClosure(__p);
      }
      virtual ~MissMigrate_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(MissMigrate_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::CheckForRealloc_20_closure : public SDAG::Closure {
      

      CheckForRealloc_20_closure() {
        init();
      }
      CheckForRealloc_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~CheckForRealloc_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(CheckForRealloc_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::ResumeFromReallocCheckpoint_21_closure : public SDAG::Closure {
      

      ResumeFromReallocCheckpoint_21_closure() {
        init();
      }
      ResumeFromReallocCheckpoint_21_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeFromReallocCheckpoint_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeFromReallocCheckpoint_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::MigrationDoneImpl_22_closure : public SDAG::Closure {
            int impl_noname_4;


      MigrationDoneImpl_22_closure() {
        init();
      }
      MigrationDoneImpl_22_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~MigrationDoneImpl_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(MigrationDoneImpl_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::WillIbekilled_23_closure : public SDAG::Closure {
            std::vector<char> avail;
            int impl_noname_5;


      WillIbekilled_23_closure() {
        init();
      }
      WillIbekilled_23_closure(CkMigrateMessage*) {
        init();
      }
            std::vector<char> & getP0() { return avail;}
            int & getP1() { return impl_noname_5;}
      void pup(PUP::er& __p) {
        __p | avail;
        __p | impl_noname_5;
        packClosure(__p);
      }
      virtual ~WillIbekilled_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(WillIbekilled_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CentralLB::StartCleanup_24_closure : public SDAG::Closure {
      

      StartCleanup_24_closure() {
        init();
      }
      StartCleanup_24_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~StartCleanup_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(StartCleanup_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: readonly CkGroupID loadbalancer;
 */
extern CkGroupID loadbalancer;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_loadbalancer(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|loadbalancer;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group CentralLB: BaseLB{
void CentralLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void SendStats();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
void ReceiveCounts(const int *counts, int n);
void LoadBalance();
threaded void t_LoadBalance();
void ApplyDecision();
void ResumeClients(int impl_noname_1);
void ResumeClients();
void changeFreq(int impl_noname_2);
void ScatterMigrationResults(LBScatterMsg* impl_msg);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveMigration(LBScatterMsg* impl_msg);
void ProcessReceiveMigration();
void ProcessMigrationDecision();
void MissMigrate(int impl_noname_3);
void CheckForRealloc();
void ResumeFromReallocCheckpoint();
void MigrationDoneImpl(int impl_noname_4);
void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
void StartCleanup();
CentralLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CentralLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxyElement_CentralLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxyElement_CentralLB::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CentralLB::_call_redn_wrapper_SendStats_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->SendStats();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
void CProxyElement_CentralLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
void CProxyElement_CentralLB::ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
void CProxyElement_CentralLB::ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveCounts(const int *counts, int n);
 */
void CProxyElement_CentralLB::ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *counts, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_counts, impl_cnt_counts;
  impl_off_counts=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_counts=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_counts,counts,impl_cnt_counts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CentralLB::_call_redn_wrapper_ReceiveCounts_marshall7(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const int *counts, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(int);
  int* counts; counts = (int*)impl_buf;
  impl_obj->ReceiveCounts(counts, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalance();
 */
void CProxyElement_CentralLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void t_LoadBalance();
 */
void CProxyElement_CentralLB::t_LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ApplyDecision();
 */
void CProxyElement_CentralLB::ApplyDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int impl_noname_1);
 */
void CProxyElement_CentralLB::ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxyElement_CentralLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CentralLB::_call_redn_wrapper_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ResumeClients();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void changeFreq(int impl_noname_2);
 */
void CProxyElement_CentralLB::changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
void CProxyElement_CentralLB::ScatterMigrationResults(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxyElement_CentralLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
void CProxyElement_CentralLB::ReceiveMigration(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessReceiveMigration();
 */
void CProxyElement_CentralLB::ProcessReceiveMigration(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CentralLB::_call_redn_wrapper_ProcessReceiveMigration_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ProcessReceiveMigration();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessMigrationDecision();
 */
void CProxyElement_CentralLB::ProcessMigrationDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CentralLB::_call_redn_wrapper_ProcessMigrationDecision_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ProcessMigrationDecision();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MissMigrate(int impl_noname_3);
 */
void CProxyElement_CentralLB::MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckForRealloc();
 */
void CProxyElement_CentralLB::CheckForRealloc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromReallocCheckpoint();
 */
void CProxyElement_CentralLB::ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrationDoneImpl(int impl_noname_4);
 */
void CProxyElement_CentralLB::MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
void CProxyElement_CentralLB::WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<char> &avail, int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCleanup();
 */
void CProxyElement_CentralLB::StartCleanup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CentralLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_CentralLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  CkGroupID gId = CkCreateGroup(CkIndex_CentralLB::__idx, CkIndex_CentralLB::idx_CentralLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_CentralLB::CProxy_CentralLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_CentralLB::__idx, CkIndex_CentralLB::idx_CentralLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_CentralLB::reg_CentralLB_marshall1() {
  int epidx = CkRegisterEp("CentralLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_CentralLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CentralLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CentralLB_marshall1);

  return epidx;
}

void CkIndex_CentralLB::_call_CentralLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CentralLB(std::move(impl_noname_0.t));
}
int CkIndex_CentralLB::_callmarshall_CentralLB_marshall1(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CentralLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_CentralLB_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: void ProcessAtSync();
 */
void CProxy_CentralLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ProcessAtSync_void() {
  int epidx = CkRegisterEp("ProcessAtSync()",
      reinterpret_cast<CkCallFnPtr>(_call_ProcessAtSync_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_ProcessAtSync_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ProcessAtSync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ProcessAtSync_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxy_CentralLB::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::SendStats(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::SendStats(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_SendStats_void() {
  int epidx = CkRegisterEp("SendStats()",
      reinterpret_cast<CkCallFnPtr>(_call_SendStats_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CentralLB::reg_redn_wrapper_SendStats_void() {
  return CkRegisterEp("redn_wrapper_SendStats(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_SendStats_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CentralLB::_call_SendStats_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->SendStats();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::SendStats_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
void CProxy_CentralLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveStats_marshall4() {
  int epidx = CkRegisterEp("ReceiveStats(const CkMarshalledCLBStatsMessage &data)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveStats_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveStats_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveStats_marshall4);

  return epidx;
}

void CkIndex_CentralLB::_call_ReceiveStats_marshall4(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStats(std::move(data.t));
}
int CkIndex_CentralLB::_callmarshall_ReceiveStats_marshall4(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStats(std::move(data.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_ReceiveStats_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ReceiveStats_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
void CProxy_CentralLB::ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveStatsViaTree_marshall5() {
  int epidx = CkRegisterEp("ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveStatsViaTree_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveStatsViaTree_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveStatsViaTree_marshall5);

  return epidx;
}

void CkIndex_CentralLB::_call_ReceiveStatsViaTree_marshall5(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStatsViaTree(std::move(data.t));
}
int CkIndex_CentralLB::_callmarshall_ReceiveStatsViaTree_marshall5(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStatsViaTree(std::move(data.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_ReceiveStatsViaTree_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ReceiveStatsViaTree_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
void CProxy_CentralLB::ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveStatsFromRoot_marshall6() {
  int epidx = CkRegisterEp("ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveStatsFromRoot_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveStatsFromRoot_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveStatsFromRoot_marshall6);

  return epidx;
}

void CkIndex_CentralLB::_call_ReceiveStatsFromRoot_marshall6(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStatsFromRoot(std::move(data.t));
}
int CkIndex_CentralLB::_callmarshall_ReceiveStatsFromRoot_marshall6(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStatsFromRoot(std::move(data.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_ReceiveStatsFromRoot_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ReceiveStatsFromRoot_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveCounts(const int *counts, int n);
 */
void CProxy_CentralLB::ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *counts, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_counts, impl_cnt_counts;
  impl_off_counts=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_counts=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_counts,counts,impl_cnt_counts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveCounts(const int *counts, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const int *counts, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_counts, impl_cnt_counts;
  impl_off_counts=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_counts=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_counts,counts,impl_cnt_counts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveCounts(const int *counts, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const int *counts, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_counts, impl_cnt_counts;
  impl_off_counts=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_counts=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_counts,counts,impl_cnt_counts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveCounts_marshall7() {
  int epidx = CkRegisterEp("ReceiveCounts(const int *counts, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveCounts_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveCounts_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveCounts_marshall7);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_CentralLB::reg_redn_wrapper_ReceiveCounts_marshall7() {
  return CkRegisterEp("redn_wrapper_ReceiveCounts(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ReceiveCounts_marshall7), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_CentralLB::_call_ReceiveCounts_marshall7(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const int *counts, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_counts, impl_cnt_counts;
  implP|impl_off_counts;
  implP|impl_cnt_counts;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *counts=(int *)(impl_buf+impl_off_counts);
  impl_obj->ReceiveCounts(counts, std::move(n.t));
}
int CkIndex_CentralLB::_callmarshall_ReceiveCounts_marshall7(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const int *counts, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_counts, impl_cnt_counts;
  implP|impl_off_counts;
  implP|impl_cnt_counts;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *counts=(int *)(impl_buf+impl_off_counts);
  impl_obj->ReceiveCounts(counts, std::move(n.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_ReceiveCounts_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const int *counts, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_counts, impl_cnt_counts;
  implP|impl_off_counts;
  implP|impl_cnt_counts;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *counts=(int *)(impl_buf+impl_off_counts);
  if (implDestP.hasComments()) implDestP.comment("counts");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*counts))<impl_cnt_counts;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|counts[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ReceiveCounts_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalance();
 */
void CProxy_CentralLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_LoadBalance_void() {
  int epidx = CkRegisterEp("LoadBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_LoadBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_LoadBalance_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->LoadBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::LoadBalance_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void t_LoadBalance();
 */
void CProxy_CentralLB::t_LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::t_LoadBalance(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::t_LoadBalance(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_t_LoadBalance_void() {
  int epidx = CkRegisterEp("t_LoadBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_t_LoadBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_t_LoadBalance_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_t_LoadBalance_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_CentralLB::_callthr_t_LoadBalance_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  CentralLB *impl_obj = static_cast<CentralLB *>(impl_obj_void);
  delete impl_arg;
  impl_obj->t_LoadBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::t_LoadBalance_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ApplyDecision();
 */
void CProxy_CentralLB::ApplyDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ApplyDecision(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ApplyDecision(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ApplyDecision_void() {
  int epidx = CkRegisterEp("ApplyDecision()",
      reinterpret_cast<CkCallFnPtr>(_call_ApplyDecision_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_ApplyDecision_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ApplyDecision();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ApplyDecision_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int impl_noname_1);
 */
void CProxy_CentralLB::ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ResumeClients(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ResumeClients(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ResumeClients_marshall11() {
  int epidx = CkRegisterEp("ResumeClients(int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ResumeClients_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ResumeClients_marshall11);

  return epidx;
}

void CkIndex_CentralLB::_call_ResumeClients_marshall11(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(impl_noname_1.t));
}
int CkIndex_CentralLB::_callmarshall_ResumeClients_marshall11(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_ResumeClients_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ResumeClients_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxy_CentralLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ResumeClients_void() {
  int epidx = CkRegisterEp("ResumeClients()",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CentralLB::reg_redn_wrapper_ResumeClients_void() {
  return CkRegisterEp("redn_wrapper_ResumeClients(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ResumeClients_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CentralLB::_call_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ResumeClients();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ResumeClients_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void changeFreq(int impl_noname_2);
 */
void CProxy_CentralLB::changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::changeFreq(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::changeFreq(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_changeFreq_marshall13() {
  int epidx = CkRegisterEp("changeFreq(int impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_changeFreq_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_changeFreq_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_changeFreq_marshall13);

  return epidx;
}

void CkIndex_CentralLB::_call_changeFreq_marshall13(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->changeFreq(std::move(impl_noname_2.t));
}
int CkIndex_CentralLB::_callmarshall_changeFreq_marshall13(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->changeFreq(std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_changeFreq_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::changeFreq_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
void CProxy_CentralLB::ScatterMigrationResults(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ScatterMigrationResults(LBScatterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ScatterMigrationResults(LBScatterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ScatterMigrationResults_LBScatterMsg() {
  int epidx = CkRegisterEp("ScatterMigrationResults(LBScatterMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ScatterMigrationResults_LBScatterMsg), CMessage_LBScatterMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LBScatterMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CentralLB::_call_ScatterMigrationResults_LBScatterMsg(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ScatterMigrationResults((LBScatterMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxy_CentralLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveMigration(LBMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveMigration(LBMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveMigration_LBMigrateMsg() {
  int epidx = CkRegisterEp("ReceiveMigration(LBMigrateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveMigration_LBMigrateMsg), CMessage_LBMigrateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LBMigrateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CentralLB::_call_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ReceiveMigration((LBMigrateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
void CProxy_CentralLB::ReceiveMigration(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ReceiveMigration(LBScatterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ReceiveMigration(LBScatterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ReceiveMigration_LBScatterMsg() {
  int epidx = CkRegisterEp("ReceiveMigration(LBScatterMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveMigration_LBScatterMsg), CMessage_LBScatterMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LBScatterMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CentralLB::_call_ReceiveMigration_LBScatterMsg(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ReceiveMigration((LBScatterMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessReceiveMigration();
 */
void CProxy_CentralLB::ProcessReceiveMigration(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ProcessReceiveMigration(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ProcessReceiveMigration(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ProcessReceiveMigration_void() {
  int epidx = CkRegisterEp("ProcessReceiveMigration()",
      reinterpret_cast<CkCallFnPtr>(_call_ProcessReceiveMigration_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CentralLB::reg_redn_wrapper_ProcessReceiveMigration_void() {
  return CkRegisterEp("redn_wrapper_ProcessReceiveMigration(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ProcessReceiveMigration_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CentralLB::_call_ProcessReceiveMigration_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ProcessReceiveMigration();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ProcessReceiveMigration_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessMigrationDecision();
 */
void CProxy_CentralLB::ProcessMigrationDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ProcessMigrationDecision(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ProcessMigrationDecision(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ProcessMigrationDecision_void() {
  int epidx = CkRegisterEp("ProcessMigrationDecision()",
      reinterpret_cast<CkCallFnPtr>(_call_ProcessMigrationDecision_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CentralLB::reg_redn_wrapper_ProcessMigrationDecision_void() {
  return CkRegisterEp("redn_wrapper_ProcessMigrationDecision(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ProcessMigrationDecision_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CentralLB::_call_ProcessMigrationDecision_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ProcessMigrationDecision();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ProcessMigrationDecision_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MissMigrate(int impl_noname_3);
 */
void CProxy_CentralLB::MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::MissMigrate(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::MissMigrate(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_MissMigrate_marshall19() {
  int epidx = CkRegisterEp("MissMigrate(int impl_noname_3)",
      reinterpret_cast<CkCallFnPtr>(_call_MissMigrate_marshall19), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MissMigrate_marshall19);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MissMigrate_marshall19);

  return epidx;
}

void CkIndex_CentralLB::_call_MissMigrate_marshall19(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->MissMigrate(std::move(impl_noname_3.t));
}
int CkIndex_CentralLB::_callmarshall_MissMigrate_marshall19(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->MissMigrate(std::move(impl_noname_3.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_MissMigrate_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::MissMigrate_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckForRealloc();
 */
void CProxy_CentralLB::CheckForRealloc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::CheckForRealloc(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::CheckForRealloc(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_CheckForRealloc_void() {
  int epidx = CkRegisterEp("CheckForRealloc()",
      reinterpret_cast<CkCallFnPtr>(_call_CheckForRealloc_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_CheckForRealloc_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->CheckForRealloc();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::CheckForRealloc_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromReallocCheckpoint();
 */
void CProxy_CentralLB::ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::ResumeFromReallocCheckpoint(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::ResumeFromReallocCheckpoint(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_ResumeFromReallocCheckpoint_void() {
  int epidx = CkRegisterEp("ResumeFromReallocCheckpoint()",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeFromReallocCheckpoint_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_ResumeFromReallocCheckpoint_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->ResumeFromReallocCheckpoint();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::ResumeFromReallocCheckpoint_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrationDoneImpl(int impl_noname_4);
 */
void CProxy_CentralLB::MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::MigrationDoneImpl(int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::MigrationDoneImpl(int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_MigrationDoneImpl_marshall22() {
  int epidx = CkRegisterEp("MigrationDoneImpl(int impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_MigrationDoneImpl_marshall22), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MigrationDoneImpl_marshall22);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MigrationDoneImpl_marshall22);

  return epidx;
}

void CkIndex_CentralLB::_call_MigrationDoneImpl_marshall22(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->MigrationDoneImpl(std::move(impl_noname_4.t));
}
int CkIndex_CentralLB::_callmarshall_MigrationDoneImpl_marshall22(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->MigrationDoneImpl(std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_MigrationDoneImpl_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::MigrationDoneImpl_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
void CProxy_CentralLB::WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<char> &avail, int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::WillIbekilled(const std::vector<char> &avail, int impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const std::vector<char> &avail, int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
  }
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::WillIbekilled(const std::vector<char> &avail, int impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const std::vector<char> &avail, int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
  }
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_WillIbekilled_marshall23() {
  int epidx = CkRegisterEp("WillIbekilled(const std::vector<char> &avail, int impl_noname_5)",
      reinterpret_cast<CkCallFnPtr>(_call_WillIbekilled_marshall23), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_WillIbekilled_marshall23);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_WillIbekilled_marshall23);

  return epidx;
}

void CkIndex_CentralLB::_call_WillIbekilled_marshall23(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::vector<char> &avail, int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<char>> avail;
  implP|avail;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->WillIbekilled(std::move(avail.t), std::move(impl_noname_5.t));
}
int CkIndex_CentralLB::_callmarshall_WillIbekilled_marshall23(char* impl_buf, void* impl_obj_void) {
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const std::vector<char> &avail, int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<char>> avail;
  implP|avail;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->WillIbekilled(std::move(avail.t), std::move(impl_noname_5.t));
  return implP.size();
}
void CkIndex_CentralLB::_marshallmessagepup_WillIbekilled_marshall23(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::vector<char> &avail, int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<char>> avail;
  implP|avail;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("avail");
  implDestP|avail;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::WillIbekilled_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCleanup();
 */
void CProxy_CentralLB::StartCleanup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CentralLB::StartCleanup(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CentralLB::StartCleanup(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CentralLB::reg_StartCleanup_void() {
  int epidx = CkRegisterEp("StartCleanup()",
      reinterpret_cast<CkCallFnPtr>(_call_StartCleanup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_StartCleanup_void(void* impl_msg, void* impl_obj_void)
{
  CentralLB* impl_obj = static_cast<CentralLB*>(impl_obj_void);
  impl_obj->StartCleanup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CentralLB::StartCleanup_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CentralLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CentralLB::reg_CentralLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("CentralLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CentralLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CentralLB::_call_CentralLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CentralLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CentralLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxySection_CentralLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessAtSync_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxySection_CentralLB::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_SendStats_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_SendStats_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
 */
void CProxySection_CentralLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStats_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
 */
void CProxySection_CentralLB::ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStatsViaTree_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
 */
void CProxySection_CentralLB::ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveStatsFromRoot_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveCounts(const int *counts, int n);
 */
void CProxySection_CentralLB::ReceiveCounts(const int *counts, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *counts, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_counts, impl_cnt_counts;
  impl_off_counts=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_counts=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_counts;
    implP|impl_cnt_counts;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_counts,counts,impl_cnt_counts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveCounts_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalance();
 */
void CProxySection_CentralLB::LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_LoadBalance_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void t_LoadBalance();
 */
void CProxySection_CentralLB::t_LoadBalance(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_t_LoadBalance_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ApplyDecision();
 */
void CProxySection_CentralLB::ApplyDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ApplyDecision_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int impl_noname_1);
 */
void CProxySection_CentralLB::ResumeClients(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeClients_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxySection_CentralLB::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void changeFreq(int impl_noname_2);
 */
void CProxySection_CentralLB::changeFreq(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_changeFreq_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScatterMigrationResults(LBScatterMsg* impl_msg);
 */
void CProxySection_CentralLB::ScatterMigrationResults(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ScatterMigrationResults_LBScatterMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxySection_CentralLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBScatterMsg* impl_msg);
 */
void CProxySection_CentralLB::ReceiveMigration(LBScatterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ReceiveMigration_LBScatterMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessReceiveMigration();
 */
void CProxySection_CentralLB::ProcessReceiveMigration(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessReceiveMigration_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessMigrationDecision();
 */
void CProxySection_CentralLB::ProcessMigrationDecision(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ProcessMigrationDecision_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MissMigrate(int impl_noname_3);
 */
void CProxySection_CentralLB::MissMigrate(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_MissMigrate_marshall19(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CheckForRealloc();
 */
void CProxySection_CentralLB::CheckForRealloc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_CheckForRealloc_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromReallocCheckpoint();
 */
void CProxySection_CentralLB::ResumeFromReallocCheckpoint(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_ResumeFromReallocCheckpoint_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrationDoneImpl(int impl_noname_4);
 */
void CProxySection_CentralLB::MigrationDoneImpl(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_MigrationDoneImpl_marshall22(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
 */
void CProxySection_CentralLB::WillIbekilled(const std::vector<char> &avail, int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<char> &avail, int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<char>>::type>::type &)avail;
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_WillIbekilled_marshall23(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCleanup();
 */
void CProxySection_CentralLB::StartCleanup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CentralLB::idx_StartCleanup_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CentralLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CentralLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_BaseLB::__idx);
   CkRegisterGroupIrr(__idx,CentralLB::isIrreducible());
  // REG: void CentralLB(const CkLBOptions &impl_noname_0);
  idx_CentralLB_marshall1();

  // REG: void ProcessAtSync();
  idx_ProcessAtSync_void();

  // REG: void SendStats();
  idx_SendStats_void();
  idx_redn_wrapper_SendStats_void();

  // REG: void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
  idx_ReceiveStats_marshall4();

  // REG: void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
  idx_ReceiveStatsViaTree_marshall5();

  // REG: void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
  idx_ReceiveStatsFromRoot_marshall6();

  // REG: void ReceiveCounts(const int *counts, int n);
  idx_ReceiveCounts_marshall7();
  idx_redn_wrapper_ReceiveCounts_marshall7();

  // REG: void LoadBalance();
  idx_LoadBalance_void();

  // REG: threaded void t_LoadBalance();
  idx_t_LoadBalance_void();

  // REG: void ApplyDecision();
  idx_ApplyDecision_void();

  // REG: void ResumeClients(int impl_noname_1);
  idx_ResumeClients_marshall11();

  // REG: void ResumeClients();
  idx_ResumeClients_void();
  idx_redn_wrapper_ResumeClients_void();

  // REG: void changeFreq(int impl_noname_2);
  idx_changeFreq_marshall13();

  // REG: void ScatterMigrationResults(LBScatterMsg* impl_msg);
  idx_ScatterMigrationResults_LBScatterMsg();

  // REG: void ReceiveMigration(LBMigrateMsg* impl_msg);
  idx_ReceiveMigration_LBMigrateMsg();

  // REG: void ReceiveMigration(LBScatterMsg* impl_msg);
  idx_ReceiveMigration_LBScatterMsg();

  // REG: void ProcessReceiveMigration();
  idx_ProcessReceiveMigration_void();
  idx_redn_wrapper_ProcessReceiveMigration_void();

  // REG: void ProcessMigrationDecision();
  idx_ProcessMigrationDecision_void();
  idx_redn_wrapper_ProcessMigrationDecision_void();

  // REG: void MissMigrate(int impl_noname_3);
  idx_MissMigrate_marshall19();

  // REG: void CheckForRealloc();
  idx_CheckForRealloc_void();

  // REG: void ResumeFromReallocCheckpoint();
  idx_ResumeFromReallocCheckpoint_void();

  // REG: void MigrationDoneImpl(int impl_noname_4);
  idx_MigrationDoneImpl_marshall22();

  // REG: void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
  idx_WillIbekilled_marshall23();

  // REG: void StartCleanup();
  idx_StartCleanup_void();

  // REG: CentralLB(CkMigrateMessage* impl_msg);
  idx_CentralLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CentralLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCentralLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerBaseLB();

  _registerLBManager();


  CkRegisterReadonly("loadbalancer","CkGroupID",sizeof(loadbalancer),(void *) &loadbalancer,__xlater_roPup_loadbalancer);

  _registerInitCall(lbinit,1);

/* REG: group CentralLB: BaseLB{
void CentralLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void SendStats();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsViaTree(const CkMarshalledCLBStatsMessage &data);
void ReceiveStatsFromRoot(const CkMarshalledCLBStatsMessage &data);
void ReceiveCounts(const int *counts, int n);
void LoadBalance();
threaded void t_LoadBalance();
void ApplyDecision();
void ResumeClients(int impl_noname_1);
void ResumeClients();
void changeFreq(int impl_noname_2);
void ScatterMigrationResults(LBScatterMsg* impl_msg);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveMigration(LBScatterMsg* impl_msg);
void ProcessReceiveMigration();
void ProcessMigrationDecision();
void MissMigrate(int impl_noname_3);
void CheckForRealloc();
void ResumeFromReallocCheckpoint();
void MigrationDoneImpl(int impl_noname_4);
void WillIbekilled(const std::vector<char> &avail, int impl_noname_5);
void StartCleanup();
CentralLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CentralLB::__register("CentralLB", sizeof(CentralLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CentralLB::virtual_pup(PUP::er &p) {
    recursive_pup<CentralLB>(dynamic_cast<CentralLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
