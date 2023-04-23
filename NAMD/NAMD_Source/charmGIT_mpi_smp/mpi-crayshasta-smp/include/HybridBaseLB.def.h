





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::ProcessAtSync_2_closure : public SDAG::Closure {
      

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

    struct Closure_HybridBaseLB::ReceiveStats_3_closure : public SDAG::Closure {
            CkMarshalledCLBStatsMessage data;
            int level;


      ReceiveStats_3_closure() {
        init();
      }
      ReceiveStats_3_closure(CkMigrateMessage*) {
        init();
      }
            CkMarshalledCLBStatsMessage & getP0() { return data;}
            int & getP1() { return level;}
      void pup(PUP::er& __p) {
        __p | data;
        __p | level;
        packClosure(__p);
      }
      virtual ~ReceiveStats_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveStats_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::ResumeClients_4_closure : public SDAG::Closure {
            double result;


      ResumeClients_4_closure() {
        init();
      }
      ResumeClients_4_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return result;}
      void pup(PUP::er& __p) {
        __p | result;
        packClosure(__p);
      }
      virtual ~ResumeClients_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::ResumeClients_5_closure : public SDAG::Closure {
            int balancing;


      ResumeClients_5_closure() {
        init();
      }
      ResumeClients_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return balancing;}
      void pup(PUP::er& __p) {
        __p | balancing;
        packClosure(__p);
      }
      virtual ~ResumeClients_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::TotalObjMigrated_8_closure : public SDAG::Closure {
            int count;
            int level;


      TotalObjMigrated_8_closure() {
        init();
      }
      TotalObjMigrated_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return count;}
            int & getP1() { return level;}
      void pup(PUP::er& __p) {
        __p | count;
        __p | level;
        packClosure(__p);
      }
      virtual ~TotalObjMigrated_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(TotalObjMigrated_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::ObjMigrated_9_closure : public SDAG::Closure {
            LDObjData data;
            LDCommData *cdata;
            int n;
            int level;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      ObjMigrated_9_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      ObjMigrated_9_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            LDObjData & getP0() { return data;}
            LDCommData *& getP1() { return cdata;}
            int & getP2() { return n;}
            int & getP3() { return level;}
      void pup(PUP::er& __p) {
        __p | data;
        __p | n;
        __p | level;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LDObjData> data;
  implP|data;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
          impl_buf+=CK_ALIGN(implP.size(),16);
          cdata = (LDCommData *)(impl_buf+impl_off_cdata);
        }
      }
      virtual ~ObjMigrated_9_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(ObjMigrated_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::ObjsMigrated_10_closure : public SDAG::Closure {
            std::vector<LDObjData> data;
            int m;
            LDCommData *cdata;
            int n;
            int level;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      ObjsMigrated_10_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      ObjsMigrated_10_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            std::vector<LDObjData> & getP0() { return data;}
            int & getP1() { return m;}
            LDCommData *& getP2() { return cdata;}
            int & getP3() { return n;}
            int & getP4() { return level;}
      void pup(PUP::er& __p) {
        __p | data;
        __p | m;
        __p | n;
        __p | level;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<LDObjData>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> m;
  implP|m;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
          impl_buf+=CK_ALIGN(implP.size(),16);
          cdata = (LDCommData *)(impl_buf+impl_off_cdata);
        }
      }
      virtual ~ObjsMigrated_10_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(ObjsMigrated_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::Loadbalancing_11_closure : public SDAG::Closure {
            int level;


      Loadbalancing_11_closure() {
        init();
      }
      Loadbalancing_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return level;}
      void pup(PUP::er& __p) {
        __p | level;
        packClosure(__p);
      }
      virtual ~Loadbalancing_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(Loadbalancing_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::NotifyObjectMigrationDone_12_closure : public SDAG::Closure {
            int impl_noname_1;


      NotifyObjectMigrationDone_12_closure() {
        init();
      }
      NotifyObjectMigrationDone_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~NotifyObjectMigrationDone_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(NotifyObjectMigrationDone_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::CollectInfo_14_closure : public SDAG::Closure {
            Location *loc;
            int n;
            int fromlevel;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      CollectInfo_14_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      CollectInfo_14_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            Location *& getP0() { return loc;}
            int & getP1() { return n;}
            int & getP2() { return fromlevel;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | fromlevel;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
          impl_buf+=CK_ALIGN(implP.size(),16);
          loc = (Location *)(impl_buf+impl_off_loc);
        }
      }
      virtual ~CollectInfo_14_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(CollectInfo_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::PropagateInfo_15_closure : public SDAG::Closure {
            Location *loc;
            int n;
            int fromlevel;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      PropagateInfo_15_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      PropagateInfo_15_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            Location *& getP0() { return loc;}
            int & getP1() { return n;}
            int & getP2() { return fromlevel;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | fromlevel;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
          impl_buf+=CK_ALIGN(implP.size(),16);
          loc = (Location *)(impl_buf+impl_off_loc);
        }
      }
      virtual ~PropagateInfo_15_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(PropagateInfo_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::reportLBQulity_16_closure : public SDAG::Closure {
            double impl_noname_2;
            double impl_noname_3;
            double impl_noname_4;
            int impl_noname_5;
            double impl_noname_6;


      reportLBQulity_16_closure() {
        init();
      }
      reportLBQulity_16_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return impl_noname_2;}
            double & getP1() { return impl_noname_3;}
            double & getP2() { return impl_noname_4;}
            int & getP3() { return impl_noname_5;}
            double & getP4() { return impl_noname_6;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        __p | impl_noname_3;
        __p | impl_noname_4;
        __p | impl_noname_5;
        __p | impl_noname_6;
        packClosure(__p);
      }
      virtual ~reportLBQulity_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(reportLBQulity_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HybridBaseLB::reportLBMem_17_closure : public SDAG::Closure {
            double impl_noname_7;


      reportLBMem_17_closure() {
        init();
      }
      reportLBMem_17_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return impl_noname_7;}
      void pup(PUP::er& __p) {
        __p | impl_noname_7;
        packClosure(__p);
      }
      virtual ~reportLBMem_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(reportLBMem_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */






/* DEFS: message DummyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_DummyMsg::operator new(size_t s){
  return DummyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_DummyMsg::operator new(size_t s, int* sz){
  return DummyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_DummyMsg::operator new(size_t s, int* sz,const int pb){
  return DummyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_DummyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return DummyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_DummyMsg::operator new(size_t s, const int p) {
  return DummyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_DummyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return DummyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_DummyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_DummyMsg::CMessage_DummyMsg() {
DummyMsg *newmsg = (DummyMsg *)this;
}
void CMessage_DummyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_DummyMsg::pack(DummyMsg *msg) {
  return (void *) msg;
}
DummyMsg* CMessage_DummyMsg::unpack(void* buf) {
  DummyMsg *msg = (DummyMsg *) buf;
  return msg;
}
int CMessage_DummyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group HybridBaseLB: BaseLB{
void HybridBaseLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
void ResumeClients(double result);
void ResumeClients(int balancing);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
void TotalObjMigrated(int count, int level);
void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
void Loadbalancing(int level);
void NotifyObjectMigrationDone(int impl_noname_1);
void StartCollectInfo(DummyMsg* impl_msg);
void CollectInfo(const Location *loc, int n, int fromlevel);
void PropagateInfo(const Location *loc, int n, int fromlevel);
void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
void reportLBMem(double impl_noname_7);
HybridBaseLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HybridBaseLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxyElement_HybridBaseLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
void CProxyElement_HybridBaseLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(double result);
 */
void CProxyElement_HybridBaseLB::ResumeClients(double result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_HybridBaseLB::_call_redn_wrapper_ResumeClients_marshall4(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<double> result;
  implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(result.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxyElement_HybridBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxyElement_HybridBaseLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
void CProxyElement_HybridBaseLB::ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TotalObjMigrated(int count, int level);
 */
void CProxyElement_HybridBaseLB::TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int count, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|count;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|count;
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
void CProxyElement_HybridBaseLB::ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const LDObjData &data, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
void CProxyElement_HybridBaseLB::ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Loadbalancing(int level);
 */
void CProxyElement_HybridBaseLB::Loadbalancing(int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
void CProxyElement_HybridBaseLB::NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCollectInfo(DummyMsg* impl_msg);
 */
void CProxyElement_HybridBaseLB::StartCollectInfo(DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
void CProxyElement_HybridBaseLB::CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
void CProxyElement_HybridBaseLB::PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
void CProxyElement_HybridBaseLB::reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBMem(double impl_noname_7);
 */
void CProxyElement_HybridBaseLB::reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_7;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_HybridBaseLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  CkGroupID gId = CkCreateGroup(CkIndex_HybridBaseLB::__idx, CkIndex_HybridBaseLB::idx_HybridBaseLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_HybridBaseLB::CProxy_HybridBaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_HybridBaseLB::__idx, CkIndex_HybridBaseLB::idx_HybridBaseLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_HybridBaseLB_marshall1() {
  int epidx = CkRegisterEp("HybridBaseLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_HybridBaseLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_HybridBaseLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_HybridBaseLB_marshall1);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_HybridBaseLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HybridBaseLB(std::move(impl_noname_0.t));
}
int CkIndex_HybridBaseLB::_callmarshall_HybridBaseLB_marshall1(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HybridBaseLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_HybridBaseLB_marshall1(PUP::er &implDestP,void *impl_msg) {
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
void CProxy_HybridBaseLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ProcessAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ProcessAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ProcessAtSync_void() {
  int epidx = CkRegisterEp("ProcessAtSync()",
      reinterpret_cast<CkCallFnPtr>(_call_ProcessAtSync_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HybridBaseLB::_call_ProcessAtSync_void(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  impl_obj->ProcessAtSync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ProcessAtSync_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
void CProxy_HybridBaseLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledCLBStatsMessage &data, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ReceiveStats_marshall3() {
  int epidx = CkRegisterEp("ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveStats_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveStats_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveStats_marshall3);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_ReceiveStats_marshall3(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStats(std::move(data.t), std::move(level.t));
}
int CkIndex_HybridBaseLB::_callmarshall_ReceiveStats_marshall3(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveStats(std::move(data.t), std::move(level.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_ReceiveStats_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledCLBStatsMessage &data, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledCLBStatsMessage> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ReceiveStats_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(double result);
 */
void CProxy_HybridBaseLB::ResumeClients(double result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ResumeClients(double result, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ResumeClients(double result, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ResumeClients_marshall4() {
  int epidx = CkRegisterEp("ResumeClients(double result)",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ResumeClients_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ResumeClients_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_HybridBaseLB::reg_redn_wrapper_ResumeClients_marshall4() {
  return CkRegisterEp("redn_wrapper_ResumeClients(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ResumeClients_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_HybridBaseLB::_call_ResumeClients_marshall4(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> result;
  implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(result.t));
}
int CkIndex_HybridBaseLB::_callmarshall_ResumeClients_marshall4(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> result;
  implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(result.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_ResumeClients_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> result;
  implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP|result;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ResumeClients_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxy_HybridBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ResumeClients(int balancing, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ResumeClients(int balancing, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ResumeClients_marshall5() {
  int epidx = CkRegisterEp("ResumeClients(int balancing)",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ResumeClients_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ResumeClients_marshall5);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_ResumeClients_marshall5(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(balancing.t));
}
int CkIndex_HybridBaseLB::_callmarshall_ResumeClients_marshall5(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ResumeClients(std::move(balancing.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_ResumeClients_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int balancing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> balancing;
  implP|balancing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("balancing");
  implDestP|balancing;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ResumeClients_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxy_HybridBaseLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ReceiveMigration(LBMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ReceiveMigration(LBMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ReceiveMigration_LBMigrateMsg() {
  int epidx = CkRegisterEp("ReceiveMigration(LBMigrateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveMigration_LBMigrateMsg), CMessage_LBMigrateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LBMigrateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_HybridBaseLB::_call_ReceiveMigration_LBMigrateMsg(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  impl_obj->ReceiveMigration((LBMigrateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
void CProxy_HybridBaseLB::ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ReceiveVectorMigration_LBVectorMigrateMsg() {
  int epidx = CkRegisterEp("ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceiveVectorMigration_LBVectorMigrateMsg), CMessage_LBVectorMigrateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LBVectorMigrateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_HybridBaseLB::_call_ReceiveVectorMigration_LBVectorMigrateMsg(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  impl_obj->ReceiveVectorMigration((LBVectorMigrateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TotalObjMigrated(int count, int level);
 */
void CProxy_HybridBaseLB::TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int count, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|count;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|count;
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::TotalObjMigrated(int count, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int count, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|count;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|count;
    implP|level;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::TotalObjMigrated(int count, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int count, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|count;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|count;
    implP|level;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_TotalObjMigrated_marshall8() {
  int epidx = CkRegisterEp("TotalObjMigrated(int count, int level)",
      reinterpret_cast<CkCallFnPtr>(_call_TotalObjMigrated_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_TotalObjMigrated_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_TotalObjMigrated_marshall8);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_TotalObjMigrated_marshall8(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int count, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> count;
  implP|count;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->TotalObjMigrated(std::move(count.t), std::move(level.t));
}
int CkIndex_HybridBaseLB::_callmarshall_TotalObjMigrated_marshall8(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int count, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> count;
  implP|count;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->TotalObjMigrated(std::move(count.t), std::move(level.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_TotalObjMigrated_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int count, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> count;
  implP|count;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("count");
  implDestP|count;
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::TotalObjMigrated_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
void CProxy_HybridBaseLB::ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const LDObjData &data, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const LDObjData &data, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const LDObjData &data, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ObjMigrated_marshall9() {
  int epidx = CkRegisterEp("ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level)",
      reinterpret_cast<CkCallFnPtr>(_call_ObjMigrated_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ObjMigrated_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ObjMigrated_marshall9);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_ObjMigrated_marshall9(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LDObjData &data, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LDObjData> data;
  implP|data;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  impl_obj->ObjMigrated(std::move(data.t), cdata, std::move(n.t), std::move(level.t));
}
int CkIndex_HybridBaseLB::_callmarshall_ObjMigrated_marshall9(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const LDObjData &data, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LDObjData> data;
  implP|data;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  impl_obj->ObjMigrated(std::move(data.t), cdata, std::move(n.t), std::move(level.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_ObjMigrated_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LDObjData &data, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LDObjData> data;
  implP|data;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
  if (implDestP.hasComments()) implDestP.comment("cdata");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*cdata))<impl_cnt_cdata;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|cdata[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ObjMigrated_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
void CProxy_HybridBaseLB::ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_ObjsMigrated_marshall10() {
  int epidx = CkRegisterEp("ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level)",
      reinterpret_cast<CkCallFnPtr>(_call_ObjsMigrated_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ObjsMigrated_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ObjsMigrated_marshall10);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_ObjsMigrated_marshall10(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<LDObjData>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> m;
  implP|m;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  impl_obj->ObjsMigrated(std::move(data.t), std::move(m.t), cdata, std::move(n.t), std::move(level.t));
}
int CkIndex_HybridBaseLB::_callmarshall_ObjsMigrated_marshall10(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<LDObjData>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> m;
  implP|m;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  impl_obj->ObjsMigrated(std::move(data.t), std::move(m.t), cdata, std::move(n.t), std::move(level.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_ObjsMigrated_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::vector<LDObjData>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<int> m;
  implP|m;
  int impl_off_cdata, impl_cnt_cdata;
  implP|impl_off_cdata;
  implP|impl_cnt_cdata;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LDCommData *cdata=(LDCommData *)(impl_buf+impl_off_cdata);
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
  if (implDestP.hasComments()) implDestP.comment("m");
  implDestP|m;
  if (implDestP.hasComments()) implDestP.comment("cdata");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*cdata))<impl_cnt_cdata;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|cdata[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::ObjsMigrated_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Loadbalancing(int level);
 */
void CProxy_HybridBaseLB::Loadbalancing(int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::Loadbalancing(int level, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::Loadbalancing(int level, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_Loadbalancing_marshall11() {
  int epidx = CkRegisterEp("Loadbalancing(int level)",
      reinterpret_cast<CkCallFnPtr>(_call_Loadbalancing_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Loadbalancing_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Loadbalancing_marshall11);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_Loadbalancing_marshall11(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Loadbalancing(std::move(level.t));
}
int CkIndex_HybridBaseLB::_callmarshall_Loadbalancing_marshall11(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Loadbalancing(std::move(level.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_Loadbalancing_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::Loadbalancing_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
void CProxy_HybridBaseLB::NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::NotifyObjectMigrationDone(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::NotifyObjectMigrationDone(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_NotifyObjectMigrationDone_marshall12() {
  int epidx = CkRegisterEp("NotifyObjectMigrationDone(int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_NotifyObjectMigrationDone_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_NotifyObjectMigrationDone_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_NotifyObjectMigrationDone_marshall12);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_NotifyObjectMigrationDone_marshall12(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->NotifyObjectMigrationDone(std::move(impl_noname_1.t));
}
int CkIndex_HybridBaseLB::_callmarshall_NotifyObjectMigrationDone_marshall12(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->NotifyObjectMigrationDone(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_NotifyObjectMigrationDone_marshall12(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::NotifyObjectMigrationDone_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCollectInfo(DummyMsg* impl_msg);
 */
void CProxy_HybridBaseLB::StartCollectInfo(DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::StartCollectInfo(DummyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::StartCollectInfo(DummyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_StartCollectInfo_DummyMsg() {
  int epidx = CkRegisterEp("StartCollectInfo(DummyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_StartCollectInfo_DummyMsg), CMessage_DummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)DummyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_HybridBaseLB::_call_StartCollectInfo_DummyMsg(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  impl_obj->StartCollectInfo((DummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
void CProxy_HybridBaseLB::CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::CollectInfo(const Location *loc, int n, int fromlevel, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::CollectInfo(const Location *loc, int n, int fromlevel, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_CollectInfo_marshall14() {
  int epidx = CkRegisterEp("CollectInfo(const Location *loc, int n, int fromlevel)",
      reinterpret_cast<CkCallFnPtr>(_call_CollectInfo_marshall14), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CollectInfo_marshall14);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CollectInfo_marshall14);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_CollectInfo_marshall14(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  impl_obj->CollectInfo(loc, std::move(n.t), std::move(fromlevel.t));
}
int CkIndex_HybridBaseLB::_callmarshall_CollectInfo_marshall14(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  impl_obj->CollectInfo(loc, std::move(n.t), std::move(fromlevel.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_CollectInfo_marshall14(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  if (implDestP.hasComments()) implDestP.comment("loc");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*loc))<impl_cnt_loc;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|loc[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("fromlevel");
  implDestP|fromlevel;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::CollectInfo_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
void CProxy_HybridBaseLB::PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::PropagateInfo(const Location *loc, int n, int fromlevel, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::PropagateInfo(const Location *loc, int n, int fromlevel, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_PropagateInfo_marshall15() {
  int epidx = CkRegisterEp("PropagateInfo(const Location *loc, int n, int fromlevel)",
      reinterpret_cast<CkCallFnPtr>(_call_PropagateInfo_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PropagateInfo_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PropagateInfo_marshall15);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_PropagateInfo_marshall15(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  impl_obj->PropagateInfo(loc, std::move(n.t), std::move(fromlevel.t));
}
int CkIndex_HybridBaseLB::_callmarshall_PropagateInfo_marshall15(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  impl_obj->PropagateInfo(loc, std::move(n.t), std::move(fromlevel.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_PropagateInfo_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Location *loc, int n, int fromlevel*/
  PUP::fromMem implP(impl_buf);
  int impl_off_loc, impl_cnt_loc;
  implP|impl_off_loc;
  implP|impl_cnt_loc;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  PUP::detail::TemporaryObjectHolder<int> fromlevel;
  implP|fromlevel;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Location *loc=(Location *)(impl_buf+impl_off_loc);
  if (implDestP.hasComments()) implDestP.comment("loc");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*loc))<impl_cnt_loc;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|loc[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("fromlevel");
  implDestP|fromlevel;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::PropagateInfo_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
void CProxy_HybridBaseLB::reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_reportLBQulity_marshall16() {
  int epidx = CkRegisterEp("reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6)",
      reinterpret_cast<CkCallFnPtr>(_call_reportLBQulity_marshall16), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reportLBQulity_marshall16);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reportLBQulity_marshall16);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_reportLBQulity_marshall16(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reportLBQulity(std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t));
}
int CkIndex_HybridBaseLB::_callmarshall_reportLBQulity_marshall16(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reportLBQulity(std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_reportLBQulity_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::reportLBQulity_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBMem(double impl_noname_7);
 */
void CProxy_HybridBaseLB::reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_7;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HybridBaseLB::reportLBMem(double impl_noname_7, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_7;
  }
  CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HybridBaseLB::reportLBMem(double impl_noname_7, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_7;
  }
  CkSendMsgBranchGroup(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HybridBaseLB::reg_reportLBMem_marshall17() {
  int epidx = CkRegisterEp("reportLBMem(double impl_noname_7)",
      reinterpret_cast<CkCallFnPtr>(_call_reportLBMem_marshall17), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reportLBMem_marshall17);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reportLBMem_marshall17);

  return epidx;
}

void CkIndex_HybridBaseLB::_call_reportLBMem_marshall17(void* impl_msg, void* impl_obj_void)
{
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reportLBMem(std::move(impl_noname_7.t));
}
int CkIndex_HybridBaseLB::_callmarshall_reportLBMem_marshall17(char* impl_buf, void* impl_obj_void) {
  HybridBaseLB* impl_obj = static_cast<HybridBaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reportLBMem(std::move(impl_noname_7.t));
  return implP.size();
}
void CkIndex_HybridBaseLB::_marshallmessagepup_reportLBMem_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
}
PUPable_def(SINGLE_ARG(Closure_HybridBaseLB::reportLBMem_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_HybridBaseLB::reg_HybridBaseLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("HybridBaseLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_HybridBaseLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_HybridBaseLB::_call_HybridBaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) HybridBaseLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HybridBaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ProcessAtSync();
 */
void CProxySection_HybridBaseLB::ProcessAtSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ProcessAtSync_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
 */
void CProxySection_HybridBaseLB::ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledCLBStatsMessage &data, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledCLBStatsMessage>::type>::type &)data;
    implP|level;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveStats_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(double result);
 */
void CProxySection_HybridBaseLB::ResumeClients(double result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ResumeClients_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients(int balancing);
 */
void CProxySection_HybridBaseLB::ResumeClients(int balancing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int balancing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|balancing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|balancing;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ResumeClients_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMigration(LBMigrateMsg* impl_msg);
 */
void CProxySection_HybridBaseLB::ReceiveMigration(LBMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveMigration_LBMigrateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
 */
void CProxySection_HybridBaseLB::ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ReceiveVectorMigration_LBVectorMigrateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TotalObjMigrated(int count, int level);
 */
void CProxySection_HybridBaseLB::TotalObjMigrated(int count, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int count, int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|count;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|count;
    implP|level;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_TotalObjMigrated_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
 */
void CProxySection_HybridBaseLB::ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const LDObjData &data, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LDObjData>::type>::type &)data;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ObjMigrated_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
 */
void CProxySection_HybridBaseLB::ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_cdata, impl_cnt_cdata;
  impl_off_cdata=impl_off=CK_ALIGN(impl_off,sizeof(LDCommData));
  impl_off+=(impl_cnt_cdata=sizeof(LDCommData)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::vector<LDObjData>>::type>::type &)data;
    implP|m;
    implP|impl_off_cdata;
    implP|impl_cnt_cdata;
    implP|n;
    implP|level;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_cdata,cdata,impl_cnt_cdata);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_ObjsMigrated_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Loadbalancing(int level);
 */
void CProxySection_HybridBaseLB::Loadbalancing(int level, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_Loadbalancing_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NotifyObjectMigrationDone(int impl_noname_1);
 */
void CProxySection_HybridBaseLB::NotifyObjectMigrationDone(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_NotifyObjectMigrationDone_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void StartCollectInfo(DummyMsg* impl_msg);
 */
void CProxySection_HybridBaseLB::StartCollectInfo(DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_StartCollectInfo_DummyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CollectInfo(const Location *loc, int n, int fromlevel);
 */
void CProxySection_HybridBaseLB::CollectInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_CollectInfo_marshall14(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void PropagateInfo(const Location *loc, int n, int fromlevel);
 */
void CProxySection_HybridBaseLB::PropagateInfo(const Location *loc, int n, int fromlevel, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Location *loc, int n, int fromlevel
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_loc, impl_cnt_loc;
  impl_off_loc=impl_off=CK_ALIGN(impl_off,sizeof(Location));
  impl_off+=(impl_cnt_loc=sizeof(Location)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_loc;
    implP|impl_cnt_loc;
    implP|n;
    implP|fromlevel;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_loc,loc,impl_cnt_loc);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_PropagateInfo_marshall15(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
 */
void CProxySection_HybridBaseLB::reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    implP|impl_noname_6;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_reportLBQulity_marshall16(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportLBMem(double impl_noname_7);
 */
void CProxySection_HybridBaseLB::reportLBMem(double impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_7;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HybridBaseLB::idx_reportLBMem_marshall17(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HybridBaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HybridBaseLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_BaseLB::__idx);
   CkRegisterGroupIrr(__idx,HybridBaseLB::isIrreducible());
  // REG: void HybridBaseLB(const CkLBOptions &impl_noname_0);
  idx_HybridBaseLB_marshall1();

  // REG: void ProcessAtSync();
  idx_ProcessAtSync_void();

  // REG: void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
  idx_ReceiveStats_marshall3();

  // REG: void ResumeClients(double result);
  idx_ResumeClients_marshall4();
  idx_redn_wrapper_ResumeClients_marshall4();

  // REG: void ResumeClients(int balancing);
  idx_ResumeClients_marshall5();

  // REG: void ReceiveMigration(LBMigrateMsg* impl_msg);
  idx_ReceiveMigration_LBMigrateMsg();

  // REG: void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
  idx_ReceiveVectorMigration_LBVectorMigrateMsg();

  // REG: void TotalObjMigrated(int count, int level);
  idx_TotalObjMigrated_marshall8();

  // REG: void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
  idx_ObjMigrated_marshall9();

  // REG: void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
  idx_ObjsMigrated_marshall10();

  // REG: void Loadbalancing(int level);
  idx_Loadbalancing_marshall11();

  // REG: void NotifyObjectMigrationDone(int impl_noname_1);
  idx_NotifyObjectMigrationDone_marshall12();

  // REG: void StartCollectInfo(DummyMsg* impl_msg);
  idx_StartCollectInfo_DummyMsg();

  // REG: void CollectInfo(const Location *loc, int n, int fromlevel);
  idx_CollectInfo_marshall14();

  // REG: void PropagateInfo(const Location *loc, int n, int fromlevel);
  idx_PropagateInfo_marshall15();

  // REG: void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
  idx_reportLBQulity_marshall16();

  // REG: void reportLBMem(double impl_noname_7);
  idx_reportLBMem_marshall17();

  // REG: HybridBaseLB(CkMigrateMessage* impl_msg);
  idx_HybridBaseLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_HybridBaseLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerHybridBaseLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerLBManager();

  _registerBaseLB();



/* REG: message DummyMsg;
*/
CMessage_DummyMsg::__register("DummyMsg", sizeof(DummyMsg),(CkPackFnPtr) DummyMsg::pack,(CkUnpackFnPtr) DummyMsg::unpack);

  _registerInitCall(lbinit,1);

/* REG: group HybridBaseLB: BaseLB{
void HybridBaseLB(const CkLBOptions &impl_noname_0);
void ProcessAtSync();
void ReceiveStats(const CkMarshalledCLBStatsMessage &data, int level);
void ResumeClients(double result);
void ResumeClients(int balancing);
void ReceiveMigration(LBMigrateMsg* impl_msg);
void ReceiveVectorMigration(LBVectorMigrateMsg* impl_msg);
void TotalObjMigrated(int count, int level);
void ObjMigrated(const LDObjData &data, const LDCommData *cdata, int n, int level);
void ObjsMigrated(const std::vector<LDObjData> &data, int m, const LDCommData *cdata, int n, int level);
void Loadbalancing(int level);
void NotifyObjectMigrationDone(int impl_noname_1);
void StartCollectInfo(DummyMsg* impl_msg);
void CollectInfo(const Location *loc, int n, int fromlevel);
void PropagateInfo(const Location *loc, int n, int fromlevel);
void reportLBQulity(double impl_noname_2, double impl_noname_3, double impl_noname_4, int impl_noname_5, double impl_noname_6);
void reportLBMem(double impl_noname_7);
HybridBaseLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_HybridBaseLB::__register("HybridBaseLB", sizeof(HybridBaseLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HybridBaseLB::virtual_pup(PUP::er &p) {
    recursive_pup<HybridBaseLB>(dynamic_cast<HybridBaseLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
