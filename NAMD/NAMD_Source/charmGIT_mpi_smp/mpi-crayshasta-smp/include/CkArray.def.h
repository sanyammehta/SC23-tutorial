



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::insertElement_2_closure : public SDAG::Closure {
            CkMarshalledMessage impl_noname_0;
            CkArrayIndex impl_noname_1;
            int *listenerData;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      insertElement_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      insertElement_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            CkMarshalledMessage & getP0() { return impl_noname_0;}
            CkArrayIndex & getP1() { return impl_noname_1;}
            int *& getP2() { return listenerData;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        __p | impl_noname_1;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_1;
  implP|impl_noname_1;
  int impl_off_listenerData, impl_cnt_listenerData;
  implP|impl_off_listenerData;
  implP|impl_cnt_listenerData;
          impl_buf+=CK_ALIGN(implP.size(),16);
          listenerData = (int *)(impl_buf+impl_off_listenerData);
        }
      }
      virtual ~insertElement_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(insertElement_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::demandCreateElement_3_closure : public SDAG::Closure {
            CkArrayIndex idx;
            int ctor;


      demandCreateElement_3_closure() {
        init();
      }
      demandCreateElement_3_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return idx;}
            int & getP1() { return ctor;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | ctor;
        packClosure(__p);
      }
      virtual ~demandCreateElement_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(demandCreateElement_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::requestDemandCreation_4_closure : public SDAG::Closure {
            CkArrayIndex idx;
            int ctor;
            int pe;


      requestDemandCreation_4_closure() {
        init();
      }
      requestDemandCreation_4_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return idx;}
            int & getP1() { return ctor;}
            int & getP2() { return pe;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | ctor;
        __p | pe;
        packClosure(__p);
      }
      virtual ~requestDemandCreation_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestDemandCreation_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::remoteBeginInserting_5_closure : public SDAG::Closure {
      

      remoteBeginInserting_5_closure() {
        init();
      }
      remoteBeginInserting_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~remoteBeginInserting_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(remoteBeginInserting_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::sendZCBroadcast_6_closure : public SDAG::Closure {
            MsgPointerWrapper p;


      sendZCBroadcast_6_closure() {
        init();
      }
      sendZCBroadcast_6_closure(CkMigrateMessage*) {
        init();
      }
            MsgPointerWrapper & getP0() { return p;}
      void pup(PUP::er& __p) {
        __p | p;
        packClosure(__p);
      }
      virtual ~sendZCBroadcast_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendZCBroadcast_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::remoteDoneInserting_7_closure : public SDAG::Closure {
      

      remoteDoneInserting_7_closure() {
        init();
      }
      remoteDoneInserting_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~remoteDoneInserting_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(remoteDoneInserting_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::incrementBcastNoAndSendBack_13_closure : public SDAG::Closure {
            int srcPe;
            MsgPointerWrapper p;


      incrementBcastNoAndSendBack_13_closure() {
        init();
      }
      incrementBcastNoAndSendBack_13_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return srcPe;}
            MsgPointerWrapper & getP1() { return p;}
      void pup(PUP::er& __p) {
        __p | srcPe;
        __p | p;
        packClosure(__p);
      }
      virtual ~incrementBcastNoAndSendBack_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(incrementBcastNoAndSendBack_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArray::ckDestroy_18_closure : public SDAG::Closure {
      

      ckDestroy_18_closure() {
        init();
      }
      ckDestroy_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ckDestroy_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(ckDestroy_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */






/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ArrayElement::ckDestroy_2_closure : public SDAG::Closure {
      

      ckDestroy_2_closure() {
        init();
      }
      ckDestroy_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ckDestroy_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ckDestroy_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ArrayElement::ckEmigrate_6_closure : public SDAG::Closure {
            int toPe;


      ckEmigrate_6_closure() {
        init();
      }
      ckEmigrate_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return toPe;}
      void pup(PUP::er& __p) {
        __p | toPe;
        packClosure(__p);
      }
      virtual ~ckEmigrate_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(ckEmigrate_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */







/* DEFS: readonly bool _isAnytimeMigration;
 */
extern bool _isAnytimeMigration;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__isAnytimeMigration(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_isAnytimeMigration;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkArray: CkReductionMgr{
CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
void demandCreateElement(const CkArrayIndex &idx, int ctor);
void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
void remoteBeginInserting();
void sendZCBroadcast(const MsgPointerWrapper &p);
void remoteDoneInserting();
void sendBroadcast(CkMessage* impl_msg);
void recvBroadcast(CkMessage* impl_msg);
void recvBroadcastViaTree(CkMessage* impl_msg);
void sendExpeditedBroadcast(CkMessage* impl_msg);
void recvExpeditedBroadcast(CkMessage* impl_msg);
void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
void recvNoKeepBroadcast(CkMessage* impl_msg);
void sendNoKeepBroadcast(CkMessage* impl_msg);
void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
void ckDestroy();
CkArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
void CProxyElement_CkArray::insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_listenerData, impl_cnt_listenerData;
  impl_off_listenerData=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_listenerData=sizeof(int)*(CK_ARRAYLISTENER_MAXLEN));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_listenerData,listenerData,impl_cnt_listenerData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void demandCreateElement(const CkArrayIndex &idx, int ctor);
 */
void CProxyElement_CkArray::demandCreateElement(const CkArrayIndex &idx, int ctor, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
 */
void CProxyElement_CkArray::requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteBeginInserting();
 */
void CProxyElement_CkArray::remoteBeginInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendZCBroadcast(const MsgPointerWrapper &p);
 */
void CProxyElement_CkArray::sendZCBroadcast(const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteDoneInserting();
 */
void CProxyElement_CkArray::remoteDoneInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::sendBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::recvBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::recvBroadcastViaTree(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::sendExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::recvExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
 */
void CProxyElement_CkArray::incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int srcPe, const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::recvNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::sendNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::recvNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_CkArray::sendNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxyElement_CkArray::ckDestroy(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
 */
CkGroupID CProxy_CkArray::ckNew(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)ctorMsg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)ctorMsg;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkArray::__idx, CkIndex_CkArray::idx_CkArray_marshall1(), impl_msg);
  return gId;
}
  CProxy_CkArray::CProxy_CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)ctorMsg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayOptions>::type>::type &)opts;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)ctorMsg;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkArray::__idx, CkIndex_CkArray::idx_CkArray_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_CkArray::reg_CkArray_marshall1() {
  int epidx = CkRegisterEp("CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkArray_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkArray_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkArray_marshall1);

  return epidx;
}

void CkIndex_CkArray::_call_CkArray_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> ctorMsg;
  implP|ctorMsg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkArray(std::move(opts.t), std::move(ctorMsg.t));
}
int CkIndex_CkArray::_callmarshall_CkArray_marshall1(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> ctorMsg;
  implP|ctorMsg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkArray(std::move(opts.t), std::move(ctorMsg.t));
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_CkArray_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayOptions> opts;
  implP|opts;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> ctorMsg;
  implP|ctorMsg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("opts");
  implDestP|opts;
  if (implDestP.hasComments()) implDestP.comment("ctorMsg");
  implDestP|ctorMsg;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
void CProxy_CkArray::insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_listenerData, impl_cnt_listenerData;
  impl_off_listenerData=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_listenerData=sizeof(int)*(CK_ARRAYLISTENER_MAXLEN));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_listenerData,listenerData,impl_cnt_listenerData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE);
}
void CProxy_CkArray::insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_listenerData, impl_cnt_listenerData;
  impl_off_listenerData=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_listenerData=sizeof(int)*(CK_ARRAYLISTENER_MAXLEN));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_listenerData,listenerData,impl_cnt_listenerData);
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE);
}
void CProxy_CkArray::insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_listenerData, impl_cnt_listenerData;
  impl_off_listenerData=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_listenerData=sizeof(int)*(CK_ARRAYLISTENER_MAXLEN));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_listenerData,listenerData,impl_cnt_listenerData);
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE);
}

// Entry point registration function
int CkIndex_CkArray::reg_insertElement_marshall2() {
  int epidx = CkRegisterEp("insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData)",
      reinterpret_cast<CkCallFnPtr>(_call_insertElement_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_insertElement_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_insertElement_marshall2);

  return epidx;
}

void CkIndex_CkArray::_call_insertElement_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_1;
  implP|impl_noname_1;
  int impl_off_listenerData, impl_cnt_listenerData;
  implP|impl_off_listenerData;
  implP|impl_cnt_listenerData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *listenerData=(int *)(impl_buf+impl_off_listenerData);
  impl_obj->insertElement(std::move(impl_noname_0.t), std::move(impl_noname_1.t), listenerData);
}
int CkIndex_CkArray::_callmarshall_insertElement_marshall2(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_1;
  implP|impl_noname_1;
  int impl_off_listenerData, impl_cnt_listenerData;
  implP|impl_off_listenerData;
  implP|impl_cnt_listenerData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *listenerData=(int *)(impl_buf+impl_off_listenerData);
  impl_obj->insertElement(std::move(impl_noname_0.t), std::move(impl_noname_1.t), listenerData);
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_insertElement_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_1;
  implP|impl_noname_1;
  int impl_off_listenerData, impl_cnt_listenerData;
  implP|impl_off_listenerData;
  implP|impl_cnt_listenerData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *listenerData=(int *)(impl_buf+impl_off_listenerData);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("listenerData");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*listenerData))<impl_cnt_listenerData;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|listenerData[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_CkArray::insertElement_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void demandCreateElement(const CkArrayIndex &idx, int ctor);
 */
void CProxy_CkArray::demandCreateElement(const CkArrayIndex &idx, int ctor, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE);
}
void CProxy_CkArray::demandCreateElement(const CkArrayIndex &idx, int ctor, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int ctor
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
  }
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE);
}
void CProxy_CkArray::demandCreateElement(const CkArrayIndex &idx, int ctor, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int ctor
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
  }
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE);
}

// Entry point registration function
int CkIndex_CkArray::reg_demandCreateElement_marshall3() {
  int epidx = CkRegisterEp("demandCreateElement(const CkArrayIndex &idx, int ctor)",
      reinterpret_cast<CkCallFnPtr>(_call_demandCreateElement_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INLINE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_demandCreateElement_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_demandCreateElement_marshall3);

  return epidx;
}

void CkIndex_CkArray::_call_demandCreateElement_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->demandCreateElement(std::move(idx.t), std::move(ctor.t));
}
int CkIndex_CkArray::_callmarshall_demandCreateElement_marshall3(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->demandCreateElement(std::move(idx.t), std::move(ctor.t));
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_demandCreateElement_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("ctor");
  implDestP|ctor;
}
PUPable_def(SINGLE_ARG(Closure_CkArray::demandCreateElement_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
 */
void CProxy_CkArray::requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int ctor, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
  }
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &idx, int ctor, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
  }
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_requestDemandCreation_marshall4() {
  int epidx = CkRegisterEp("requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_requestDemandCreation_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestDemandCreation_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestDemandCreation_marshall4);

  return epidx;
}

void CkIndex_CkArray::_call_requestDemandCreation_marshall4(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestDemandCreation(std::move(idx.t), std::move(ctor.t), std::move(pe.t));
}
int CkIndex_CkArray::_callmarshall_requestDemandCreation_marshall4(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestDemandCreation(std::move(idx.t), std::move(ctor.t), std::move(pe.t));
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_requestDemandCreation_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &idx, int ctor, int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> ctor;
  implP|ctor;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("ctor");
  implDestP|ctor;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}
PUPable_def(SINGLE_ARG(Closure_CkArray::requestDemandCreation_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteBeginInserting();
 */
void CProxy_CkArray::remoteBeginInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::remoteBeginInserting(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::remoteBeginInserting(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_remoteBeginInserting_void() {
  int epidx = CkRegisterEp("remoteBeginInserting()",
      reinterpret_cast<CkCallFnPtr>(_call_remoteBeginInserting_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkArray::_call_remoteBeginInserting_void(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->remoteBeginInserting();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkArray::remoteBeginInserting_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendZCBroadcast(const MsgPointerWrapper &p);
 */
void CProxy_CkArray::sendZCBroadcast(const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::sendZCBroadcast(const MsgPointerWrapper &p, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::sendZCBroadcast(const MsgPointerWrapper &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_sendZCBroadcast_marshall6() {
  int epidx = CkRegisterEp("sendZCBroadcast(const MsgPointerWrapper &p)",
      reinterpret_cast<CkCallFnPtr>(_call_sendZCBroadcast_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendZCBroadcast_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendZCBroadcast_marshall6);

  return epidx;
}

void CkIndex_CkArray::_call_sendZCBroadcast_marshall6(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendZCBroadcast(std::move(p.t));
}
int CkIndex_CkArray::_callmarshall_sendZCBroadcast_marshall6(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendZCBroadcast(std::move(p.t));
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_sendZCBroadcast_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("p");
  implDestP|p;
}
PUPable_def(SINGLE_ARG(Closure_CkArray::sendZCBroadcast_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteDoneInserting();
 */
void CProxy_CkArray::remoteDoneInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::remoteDoneInserting(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::remoteDoneInserting(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_remoteDoneInserting_void() {
  int epidx = CkRegisterEp("remoteDoneInserting()",
      reinterpret_cast<CkCallFnPtr>(_call_remoteDoneInserting_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkArray::_call_remoteDoneInserting_void(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->remoteDoneInserting();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkArray::remoteDoneInserting_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::sendBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE);
}
void CProxy_CkArray::sendBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE);
}
void CProxy_CkArray::sendBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE);
}

// Entry point registration function
int CkIndex_CkArray::reg_sendBroadcast_CkMessage() {
  int epidx = CkRegisterEp("sendBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_sendBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->sendBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::recvBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::recvBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::recvBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_recvBroadcast_CkMessage() {
  int epidx = CkRegisterEp("recvBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->recvBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
void CProxy_CkArray::recvBroadcastViaTree(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::recvBroadcastViaTree(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::recvBroadcastViaTree(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_recvBroadcastViaTree_CkMessage() {
  int epidx = CkRegisterEp("recvBroadcastViaTree(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvBroadcastViaTree_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_recvBroadcastViaTree_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->recvBroadcastViaTree((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::sendExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::sendExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::sendExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_sendExpeditedBroadcast_CkMessage() {
  int epidx = CkRegisterEp("sendExpeditedBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendExpeditedBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_sendExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->sendExpeditedBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::recvExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::recvExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::recvExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_recvExpeditedBroadcast_CkMessage() {
  int epidx = CkRegisterEp("recvExpeditedBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvExpeditedBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_recvExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->recvExpeditedBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
 */
void CProxy_CkArray::incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int srcPe, const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int srcPe, const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int srcPe, const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_incrementBcastNoAndSendBack_marshall13() {
  int epidx = CkRegisterEp("incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p)",
      reinterpret_cast<CkCallFnPtr>(_call_incrementBcastNoAndSendBack_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_incrementBcastNoAndSendBack_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_incrementBcastNoAndSendBack_marshall13);

  return epidx;
}

void CkIndex_CkArray::_call_incrementBcastNoAndSendBack_marshall13(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int srcPe, const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> srcPe;
  implP|srcPe;
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->incrementBcastNoAndSendBack(std::move(srcPe.t), std::move(p.t));
}
int CkIndex_CkArray::_callmarshall_incrementBcastNoAndSendBack_marshall13(char* impl_buf, void* impl_obj_void) {
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int srcPe, const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> srcPe;
  implP|srcPe;
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->incrementBcastNoAndSendBack(std::move(srcPe.t), std::move(p.t));
  return implP.size();
}
void CkIndex_CkArray::_marshallmessagepup_incrementBcastNoAndSendBack_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int srcPe, const MsgPointerWrapper &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> srcPe;
  implP|srcPe;
  PUP::detail::TemporaryObjectHolder<MsgPointerWrapper> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("srcPe");
  implDestP|srcPe;
  if (implDestP.hasComments()) implDestP.comment("p");
  implDestP|p;
}
PUPable_def(SINGLE_ARG(Closure_CkArray::incrementBcastNoAndSendBack_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::recvNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::recvNoKeepBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::recvNoKeepBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_recvNoKeepBroadcast_CkMessage() {
  int epidx = CkRegisterEp("recvNoKeepBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNoKeepBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_recvNoKeepBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->recvNoKeepBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::sendNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE);
}
void CProxy_CkArray::sendNoKeepBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE);
}
void CProxy_CkArray::sendNoKeepBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE);
}

// Entry point registration function
int CkIndex_CkArray::reg_sendNoKeepBroadcast_CkMessage() {
  int epidx = CkRegisterEp("sendNoKeepBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendNoKeepBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_sendNoKeepBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->sendNoKeepBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::recvNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::recvNoKeepExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::recvNoKeepExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_recvNoKeepExpeditedBroadcast_CkMessage() {
  int epidx = CkRegisterEp("recvNoKeepExpeditedBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNoKeepExpeditedBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_recvNoKeepExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->recvNoKeepExpeditedBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxy_CkArray::sendNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::sendNoKeepExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}
void CProxy_CkArray::sendNoKeepExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkArray::reg_sendNoKeepExpeditedBroadcast_CkMessage() {
  int epidx = CkRegisterEp("sendNoKeepExpeditedBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendNoKeepExpeditedBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0+CK_EP_INLINE);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkArray::_call_sendNoKeepExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->sendNoKeepExpeditedBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxy_CkArray::ckDestroy(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkArray::ckDestroy(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkArray::ckDestroy(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkArray::reg_ckDestroy_void() {
  int epidx = CkRegisterEp("ckDestroy()",
      reinterpret_cast<CkCallFnPtr>(_call_ckDestroy_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkArray::_call_ckDestroy_void(void* impl_msg, void* impl_obj_void)
{
  CkArray* impl_obj = static_cast<CkArray*>(impl_obj_void);
  impl_obj->ckDestroy();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkArray::ckDestroy_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkArray::reg_CkArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkArray::_call_CkArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkArray((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
void CProxySection_CkArray::insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_listenerData, impl_cnt_listenerData;
  impl_off_listenerData=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_listenerData=sizeof(int)*(CK_ARRAYLISTENER_MAXLEN));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_1;
    implP|impl_off_listenerData;
    implP|impl_cnt_listenerData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_listenerData,listenerData,impl_cnt_listenerData);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_insertElement_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void demandCreateElement(const CkArrayIndex &idx, int ctor);
 */
void CProxySection_CkArray::demandCreateElement(const CkArrayIndex &idx, int ctor, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_demandCreateElement_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
 */
void CProxySection_CkArray::requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &idx, int ctor, int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)idx;
    implP|ctor;
    implP|pe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_requestDemandCreation_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteBeginInserting();
 */
void CProxySection_CkArray::remoteBeginInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_remoteBeginInserting_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendZCBroadcast(const MsgPointerWrapper &p);
 */
void CProxySection_CkArray::sendZCBroadcast(const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendZCBroadcast_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteDoneInserting();
 */
void CProxySection_CkArray::remoteDoneInserting(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_remoteDoneInserting_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::sendBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::recvBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
void CProxySection_CkArray::recvBroadcastViaTree(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvBroadcastViaTree_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::sendExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendExpeditedBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::recvExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvExpeditedBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
 */
void CProxySection_CkArray::incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int srcPe, const MsgPointerWrapper &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|srcPe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MsgPointerWrapper>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_incrementBcastNoAndSendBack_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::recvNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvNoKeepBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::sendNoKeepBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendNoKeepBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::recvNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_recvNoKeepExpeditedBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
 */
void CProxySection_CkArray::sendNoKeepExpeditedBroadcast(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_sendNoKeepExpeditedBroadcast_CkMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_INLINE+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxySection_CkArray::ckDestroy(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkArray::idx_ckDestroy_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkArray::idx_ckDestroy_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkReductionMgr::__idx);
   CkRegisterGroupIrr(__idx,CkArray::isIrreducible());
  // REG: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
  idx_CkArray_marshall1();

  // REG: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
  idx_insertElement_marshall2();

  // REG: void demandCreateElement(const CkArrayIndex &idx, int ctor);
  idx_demandCreateElement_marshall3();

  // REG: void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
  idx_requestDemandCreation_marshall4();

  // REG: void remoteBeginInserting();
  idx_remoteBeginInserting_void();

  // REG: void sendZCBroadcast(const MsgPointerWrapper &p);
  idx_sendZCBroadcast_marshall6();

  // REG: void remoteDoneInserting();
  idx_remoteDoneInserting_void();

  // REG: void sendBroadcast(CkMessage* impl_msg);
  idx_sendBroadcast_CkMessage();

  // REG: void recvBroadcast(CkMessage* impl_msg);
  idx_recvBroadcast_CkMessage();

  // REG: void recvBroadcastViaTree(CkMessage* impl_msg);
  idx_recvBroadcastViaTree_CkMessage();

  // REG: void sendExpeditedBroadcast(CkMessage* impl_msg);
  idx_sendExpeditedBroadcast_CkMessage();

  // REG: void recvExpeditedBroadcast(CkMessage* impl_msg);
  idx_recvExpeditedBroadcast_CkMessage();

  // REG: void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
  idx_incrementBcastNoAndSendBack_marshall13();

  // REG: void recvNoKeepBroadcast(CkMessage* impl_msg);
  idx_recvNoKeepBroadcast_CkMessage();

  // REG: void sendNoKeepBroadcast(CkMessage* impl_msg);
  idx_sendNoKeepBroadcast_CkMessage();

  // REG: void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
  idx_recvNoKeepExpeditedBroadcast_CkMessage();

  // REG: void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
  idx_sendNoKeepExpeditedBroadcast_CkMessage();

  // REG: void ckDestroy();
  idx_ckDestroy_void();

  // REG: CkArray(CkMigrateMessage* impl_msg);
  idx_CkArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(CkVerboseListener)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(CkArrayBroadcaster)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(CkArrayReducer)
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: array ArrayElement: ArrayBase{
ArrayElement();
void ckDestroy();
void recvBroadcast(CkMessage* impl_msg);
void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
void defrag(CkReductionMsg* impl_msg);
void ckEmigrate(int toPe);
ArrayElement(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ArrayElement::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ArrayElement::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_ArrayElement::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_ArrayElement::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_ArrayElement::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_ArrayElement::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_ArrayElement::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement();
 */
void CProxyElement_ArrayElement::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ArrayElement::idx_ArrayElement_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxyElement_ArrayElement::ckDestroy(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_ckDestroy_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxyElement_ArrayElement::recvBroadcast(CkMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_recvBroadcast_CkMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
void CProxyElement_ArrayElement::inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_inmem_checkpoint_CkArrayCheckPTReqMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void defrag(CkReductionMsg* impl_msg);
 */
void CProxyElement_ArrayElement::defrag(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_defrag_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckEmigrate(int toPe);
 */
void CProxyElement_ArrayElement::ckEmigrate(int toPe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int toPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|toPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|toPe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_ckEmigrate_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement();
 */
CkArrayID CProxy_ArrayElement::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ArrayElement::idx_ArrayElement_void(), opts);
  return gId;
}
void CProxy_ArrayElement::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ArrayElement::idx_ArrayElement_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_ArrayElement_void() {
  int epidx = CkRegisterEp("ArrayElement()",
      reinterpret_cast<CkCallFnPtr>(_call_ArrayElement_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ArrayElement::_call_ArrayElement_void(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  new (impl_obj_void) ArrayElement();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxy_ArrayElement::ckDestroy(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ArrayElement::idx_ckDestroy_void(),0);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_ckDestroy_void() {
  int epidx = CkRegisterEp("ckDestroy()",
      reinterpret_cast<CkCallFnPtr>(_call_ckDestroy_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ArrayElement::_call_ckDestroy_void(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  impl_obj->ckDestroy();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ArrayElement::ckDestroy_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxy_ArrayElement::recvBroadcast(CkMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ArrayElement::idx_recvBroadcast_CkMessage(),0);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_recvBroadcast_CkMessage() {
  int epidx = CkRegisterEp("recvBroadcast(CkMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvBroadcast_CkMessage), CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}

void CkIndex_ArrayElement::_call_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  impl_obj->recvBroadcast((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
void CProxy_ArrayElement::inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ArrayElement::idx_inmem_checkpoint_CkArrayCheckPTReqMessage(),0);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_inmem_checkpoint_CkArrayCheckPTReqMessage() {
  int epidx = CkRegisterEp("inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_inmem_checkpoint_CkArrayCheckPTReqMessage), CMessage_CkArrayCheckPTReqMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayCheckPTReqMessage::ckDebugPup);
  return epidx;
}

void CkIndex_ArrayElement::_call_inmem_checkpoint_CkArrayCheckPTReqMessage(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  impl_obj->inmem_checkpoint((CkArrayCheckPTReqMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void defrag(CkReductionMsg* impl_msg);
 */
void CProxy_ArrayElement::defrag(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ArrayElement::idx_defrag_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_defrag_CkReductionMsg() {
  int epidx = CkRegisterEp("defrag(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_defrag_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ArrayElement::_call_defrag_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  impl_obj->defrag((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckEmigrate(int toPe);
 */
void CProxy_ArrayElement::ckEmigrate(int toPe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int toPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|toPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|toPe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ArrayElement::idx_ckEmigrate_marshall6(),0);
}

// Entry point registration function
int CkIndex_ArrayElement::reg_ckEmigrate_marshall6() {
  int epidx = CkRegisterEp("ckEmigrate(int toPe)",
      reinterpret_cast<CkCallFnPtr>(_call_ckEmigrate_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ckEmigrate_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ckEmigrate_marshall6);

  return epidx;
}

void CkIndex_ArrayElement::_call_ckEmigrate_marshall6(void* impl_msg, void* impl_obj_void)
{
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int toPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> toPe;
  implP|toPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ckEmigrate(std::move(toPe.t));
}
int CkIndex_ArrayElement::_callmarshall_ckEmigrate_marshall6(char* impl_buf, void* impl_obj_void) {
  ArrayElement* impl_obj = static_cast<ArrayElement*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int toPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> toPe;
  implP|toPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ckEmigrate(std::move(toPe.t));
  return implP.size();
}
void CkIndex_ArrayElement::_marshallmessagepup_ckEmigrate_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int toPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> toPe;
  implP|toPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("toPe");
  implDestP|toPe;
}
PUPable_def(SINGLE_ARG(Closure_ArrayElement::ckEmigrate_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ArrayElement::reg_ArrayElement_CkMigrateMessage() {
  int epidx = CkRegisterEp("ArrayElement(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ArrayElement_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ArrayElement::_call_ArrayElement_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<ArrayElement> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckDestroy();
 */
void CProxySection_ArrayElement::ckDestroy(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_ckDestroy_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(CkMessage* impl_msg);
 */
void CProxySection_ArrayElement::recvBroadcast(CkMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_recvBroadcast_CkMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
void CProxySection_ArrayElement::inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_inmem_checkpoint_CkArrayCheckPTReqMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void defrag(CkReductionMsg* impl_msg);
 */
void CProxySection_ArrayElement::defrag(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_defrag_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ckEmigrate(int toPe);
 */
void CProxySection_ArrayElement::ckEmigrate(int toPe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int toPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|toPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|toPe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ArrayElement::idx_ckEmigrate_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ArrayElement(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ArrayElement::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_ArrayBase::__idx);
  // REG: ArrayElement();
  idx_ArrayElement_void();
  CkRegisterDefaultCtor(__idx, idx_ArrayElement_void());

  // REG: void ckDestroy();
  idx_ckDestroy_void();

  // REG: void recvBroadcast(CkMessage* impl_msg);
  idx_recvBroadcast_CkMessage();

  // REG: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
  idx_inmem_checkpoint_CkArrayCheckPTReqMessage();

  // REG: void defrag(CkReductionMsg* impl_msg);
  idx_defrag_CkReductionMsg();

  // REG: void ckEmigrate(int toPe);
  idx_ckEmigrate_marshall6();

  // REG: ArrayElement(CkMigrateMessage* impl_msg);
  idx_ArrayElement_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ArrayElement_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCreateArrayAsyncMsg{
char ctorPayload[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s){
  return CkCreateArrayAsyncMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int* sz){
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int* sz,const int pb){
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkCreateArrayAsyncMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCreateArrayAsyncMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkCreateArrayAsyncMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkCreateArrayAsyncMsg::CMessage_CkCreateArrayAsyncMsg() {
CkCreateArrayAsyncMsg *newmsg = (CkCreateArrayAsyncMsg *)this;
  newmsg->ctorPayload = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkCreateArrayAsyncMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkCreateArrayAsyncMsg::pack(CkCreateArrayAsyncMsg *msg) {
  msg->ctorPayload = (char *) ((char *)msg->ctorPayload - (char *)msg);
  return (void *) msg;
}
CkCreateArrayAsyncMsg* CMessage_CkCreateArrayAsyncMsg::unpack(void* buf) {
  CkCreateArrayAsyncMsg *msg = (CkCreateArrayAsyncMsg *) buf;
  msg->ctorPayload = (char *) ((size_t)msg->ctorPayload + (char *)msg);
  return msg;
}
int CMessage_CkCreateArrayAsyncMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkArrayCreatedMsg{
CkArrayID aid;
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkArrayCreatedMsg::operator new(size_t s){
  return CkArrayCreatedMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkArrayCreatedMsg::operator new(size_t s, int* sz){
  return CkArrayCreatedMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkArrayCreatedMsg::operator new(size_t s, int* sz,const int pb){
  return CkArrayCreatedMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkArrayCreatedMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkArrayCreatedMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkArrayCreatedMsg::operator new(size_t s, const int p) {
  return CkArrayCreatedMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkArrayCreatedMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkArrayCreatedMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkArrayCreatedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkArrayCreatedMsg::CMessage_CkArrayCreatedMsg() {
CkArrayCreatedMsg *newmsg = (CkArrayCreatedMsg *)this;
}
void CMessage_CkArrayCreatedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkArrayCreatedMsg::pack(CkArrayCreatedMsg *msg) {
  return (void *) msg;
}
CkArrayCreatedMsg* CMessage_CkArrayCreatedMsg::unpack(void* buf) {
  CkArrayCreatedMsg *msg = (CkArrayCreatedMsg *) buf;
  return msg;
}
int CMessage_CkArrayCreatedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkArray(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkReduction();

  _registerCkLocation();


  CkRegisterReadonly("_isAnytimeMigration","bool",sizeof(_isAnytimeMigration),(void *) &_isAnytimeMigration,__xlater_roPup__isAnytimeMigration);

/* REG: group CkArray: CkReductionMgr{
CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg);
void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
void demandCreateElement(const CkArrayIndex &idx, int ctor);
void requestDemandCreation(const CkArrayIndex &idx, int ctor, int pe);
void remoteBeginInserting();
void sendZCBroadcast(const MsgPointerWrapper &p);
void remoteDoneInserting();
void sendBroadcast(CkMessage* impl_msg);
void recvBroadcast(CkMessage* impl_msg);
void recvBroadcastViaTree(CkMessage* impl_msg);
void sendExpeditedBroadcast(CkMessage* impl_msg);
void recvExpeditedBroadcast(CkMessage* impl_msg);
void incrementBcastNoAndSendBack(int srcPe, const MsgPointerWrapper &p);
void recvNoKeepBroadcast(CkMessage* impl_msg);
void sendNoKeepBroadcast(CkMessage* impl_msg);
void recvNoKeepExpeditedBroadcast(CkMessage* impl_msg);
void sendNoKeepExpeditedBroadcast(CkMessage* impl_msg);
void ckDestroy();
CkArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkArray::__register("CkArray", sizeof(CkArray));

      PUPable_reg(CkVerboseListener);

      PUPable_reg(CkArrayBroadcaster);

      PUPable_reg(CkArrayReducer);

  _registerInitCall(_ckArrayInit,0);

/* REG: array ArrayElement: ArrayBase{
ArrayElement();
void ckDestroy();
void recvBroadcast(CkMessage* impl_msg);
void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
void defrag(CkReductionMsg* impl_msg);
void ckEmigrate(int toPe);
ArrayElement(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ArrayElement::__register("ArrayElement", sizeof(ArrayElement));

/* REG: message CkCreateArrayAsyncMsg{
char ctorPayload[];
}
;
*/
CMessage_CkCreateArrayAsyncMsg::__register("CkCreateArrayAsyncMsg", sizeof(CkCreateArrayAsyncMsg),(CkPackFnPtr) CkCreateArrayAsyncMsg::pack,(CkUnpackFnPtr) CkCreateArrayAsyncMsg::unpack);

/* REG: message CkArrayCreatedMsg{
CkArrayID aid;
}
;
*/
CMessage_CkArrayCreatedMsg::__register("CkArrayCreatedMsg", sizeof(CkArrayCreatedMsg),(CkPackFnPtr) CkArrayCreatedMsg::pack,(CkUnpackFnPtr) CkArrayCreatedMsg::unpack);

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkArray::virtual_pup(PUP::er &p) {
    recursive_pup<CkArray>(dynamic_cast<CkArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
