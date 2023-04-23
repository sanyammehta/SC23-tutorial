



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::createEntry_2_closure : public SDAG::Closure {
            CkArrayID impl_noname_0;
            CkGroupID impl_noname_1;
            CkArrayIndex impl_noname_2;
            int impl_noname_3;


      createEntry_2_closure() {
        init();
      }
      createEntry_2_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayID & getP0() { return impl_noname_0;}
            CkGroupID & getP1() { return impl_noname_1;}
            CkArrayIndex & getP2() { return impl_noname_2;}
            int & getP3() { return impl_noname_3;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        __p | impl_noname_1;
        __p | impl_noname_2;
        __p | impl_noname_3;
        packClosure(__p);
      }
      virtual ~createEntry_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(createEntry_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::doItNow_3_closure : public SDAG::Closure {
            int spe;
            CkCallback impl_noname_4;


      doItNow_3_closure() {
        init();
      }
      doItNow_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return spe;}
            CkCallback & getP1() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | spe;
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~doItNow_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(doItNow_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::gotData_6_closure : public SDAG::Closure {
      

      gotData_6_closure() {
        init();
      }
      gotData_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gotData_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(gotData_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::syncFiles_8_closure : public SDAG::Closure {
      

      syncFiles_8_closure() {
        init();
      }
      syncFiles_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~syncFiles_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(syncFiles_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::cpFinish_9_closure : public SDAG::Closure {
      

      cpFinish_9_closure() {
        init();
      }
      cpFinish_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~cpFinish_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(cpFinish_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::report_10_closure : public SDAG::Closure {
      

      report_10_closure() {
        init();
      }
      report_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~report_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(report_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::restart_11_closure : public SDAG::Closure {
            int impl_noname_5;


      restart_11_closure() {
        init();
      }
      restart_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_5;}
      void pup(PUP::er& __p) {
        __p | impl_noname_5;
        packClosure(__p);
      }
      virtual ~restart_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(restart_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::resetReductionMgr_12_closure : public SDAG::Closure {
      

      resetReductionMgr_12_closure() {
        init();
      }
      resetReductionMgr_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resetReductionMgr_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(resetReductionMgr_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::removeArrayElements_13_closure : public SDAG::Closure {
      

      removeArrayElements_13_closure() {
        init();
      }
      removeArrayElements_13_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~removeArrayElements_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(removeArrayElements_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::recoverBuddies_14_closure : public SDAG::Closure {
      

      recoverBuddies_14_closure() {
        init();
      }
      recoverBuddies_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recoverBuddies_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(recoverBuddies_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::recoverArrayElements_16_closure : public SDAG::Closure {
      

      recoverArrayElements_16_closure() {
        init();
      }
      recoverArrayElements_16_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recoverArrayElements_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(recoverArrayElements_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::finishUp_17_closure : public SDAG::Closure {
      

      finishUp_17_closure() {
        init();
      }
      finishUp_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishUp_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishUp_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::gotReply_18_closure : public SDAG::Closure {
      

      gotReply_18_closure() {
        init();
      }
      gotReply_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gotReply_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(gotReply_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::quiescence_19_closure : public SDAG::Closure {
            CkCallback impl_noname_6;


      quiescence_19_closure() {
        init();
      }
      quiescence_19_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return impl_noname_6;}
      void pup(PUP::er& __p) {
        __p | impl_noname_6;
        packClosure(__p);
      }
      virtual ~quiescence_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(quiescence_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMemCheckPT::updateLocations_21_closure : public SDAG::Closure {
            int n;
            CkGroupID *g;
            CkArrayIndex *idx;
            CmiUInt8 *id;
            int nowOnPe;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      updateLocations_21_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      updateLocations_21_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return n;}
            CkGroupID *& getP1() { return g;}
            CkArrayIndex *& getP2() { return idx;}
            CmiUInt8 *& getP3() { return id;}
            int & getP4() { return nowOnPe;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | nowOnPe;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_g, impl_cnt_g;
  implP|impl_off_g;
  implP|impl_cnt_g;
  int impl_off_idx, impl_cnt_idx;
  implP|impl_off_idx;
  implP|impl_cnt_idx;
  int impl_off_id, impl_cnt_id;
  implP|impl_off_id;
  implP|impl_cnt_id;
  PUP::detail::TemporaryObjectHolder<int> nowOnPe;
  implP|nowOnPe;
          impl_buf+=CK_ALIGN(implP.size(),16);
          g = (CkGroupID *)(impl_buf+impl_off_g);
          idx = (CkArrayIndex *)(impl_buf+impl_off_idx);
          id = (CmiUInt8 *)(impl_buf+impl_off_id);
        }
      }
      virtual ~updateLocations_21_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(updateLocations_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID ckCheckPTGroupID;
 */
extern CkGroupID ckCheckPTGroupID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ckCheckPTGroupID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ckCheckPTGroupID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkArrayCheckPTMessage{
double packData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s){
  return CkArrayCheckPTMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int* sz){
  return CkArrayCheckPTMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int* sz,const int pb){
  return CkArrayCheckPTMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkArrayCheckPTMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayCheckPTMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayCheckPTMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTMessage::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkArrayCheckPTMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkArrayCheckPTMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkArrayCheckPTMessage::CMessage_CkArrayCheckPTMessage() {
CkArrayCheckPTMessage *newmsg = (CkArrayCheckPTMessage *)this;
  newmsg->packData = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkArrayCheckPTMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkArrayCheckPTMessage::pack(CkArrayCheckPTMessage *msg) {
  msg->packData = (double *) ((char *)msg->packData - (char *)msg);
  return (void *) msg;
}
CkArrayCheckPTMessage* CMessage_CkArrayCheckPTMessage::unpack(void* buf) {
  CkArrayCheckPTMessage *msg = (CkArrayCheckPTMessage *) buf;
  msg->packData = (double *) ((size_t)msg->packData + (char *)msg);
  return msg;
}
int CMessage_CkArrayCheckPTMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkProcCheckPTMessage{
char packData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkProcCheckPTMessage::operator new(size_t s){
  return CkProcCheckPTMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int* sz){
  return CkProcCheckPTMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int* sz,const int pb){
  return CkProcCheckPTMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkProcCheckPTMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkProcCheckPTMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkProcCheckPTMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkProcCheckPTMessage::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkProcCheckPTMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkProcCheckPTMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkProcCheckPTMessage::CMessage_CkProcCheckPTMessage() {
CkProcCheckPTMessage *newmsg = (CkProcCheckPTMessage *)this;
  newmsg->packData = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkProcCheckPTMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkProcCheckPTMessage::pack(CkProcCheckPTMessage *msg) {
  msg->packData = (char *) ((char *)msg->packData - (char *)msg);
  return (void *) msg;
}
CkProcCheckPTMessage* CMessage_CkProcCheckPTMessage::unpack(void* buf) {
  CkProcCheckPTMessage *msg = (CkProcCheckPTMessage *) buf;
  msg->packData = (char *) ((size_t)msg->packData + (char *)msg);
  return msg;
}
int CMessage_CkProcCheckPTMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkArrayCheckPTReqMessage;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s){
  return CkArrayCheckPTReqMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s, int* sz){
  return CkArrayCheckPTReqMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s, int* sz,const int pb){
  return CkArrayCheckPTReqMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkArrayCheckPTReqMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s, const int p) {
  return CkArrayCheckPTReqMessage::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkArrayCheckPTReqMessage::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkArrayCheckPTReqMessage::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkArrayCheckPTReqMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkArrayCheckPTReqMessage::CMessage_CkArrayCheckPTReqMessage() {
CkArrayCheckPTReqMessage *newmsg = (CkArrayCheckPTReqMessage *)this;
}
void CMessage_CkArrayCheckPTReqMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkArrayCheckPTReqMessage::pack(CkArrayCheckPTReqMessage *msg) {
  return (void *) msg;
}
CkArrayCheckPTReqMessage* CMessage_CkArrayCheckPTReqMessage::unpack(void* buf) {
  CkArrayCheckPTReqMessage *msg = (CkArrayCheckPTReqMessage *) buf;
  return msg;
}
int CMessage_CkArrayCheckPTReqMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkMemCheckPT: IrrGroup{
CkMemCheckPT(int w);
void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
void doItNow(int spe, const CkCallback &impl_noname_4);
void recvData(CkArrayCheckPTMessage* impl_msg);
void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
void gotData();
void recvProcData(CkProcCheckPTMessage* impl_msg);
void syncFiles();
void cpFinish();
void report();
void restart(int impl_noname_5);
void resetReductionMgr();
void removeArrayElements();
void recoverBuddies();
void recoverEntry(CkArrayCheckPTMessage* impl_msg);
void recoverArrayElements();
void finishUp();
void gotReply();
void quiescence(const CkCallback &impl_noname_6);
void inmem_restore(CkArrayCheckPTMessage* impl_msg);
void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
CkMemCheckPT(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkMemCheckPT::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(int w);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
void CProxyElement_CkMemCheckPT::createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
void CProxyElement_CkMemCheckPT::doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int spe, const CkCallback &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
void CProxyElement_CkMemCheckPT::recvData(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
void CProxyElement_CkMemCheckPT::recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotData();
 */
void CProxyElement_CkMemCheckPT::gotData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
void CProxyElement_CkMemCheckPT::recvProcData(CkProcCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncFiles();
 */
void CProxyElement_CkMemCheckPT::syncFiles(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_syncFiles_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->syncFiles();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void cpFinish();
 */
void CProxyElement_CkMemCheckPT::cpFinish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_cpFinish_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->cpFinish();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void report();
 */
void CProxyElement_CkMemCheckPT::report(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restart(int impl_noname_5);
 */
void CProxyElement_CkMemCheckPT::restart(int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReductionMgr();
 */
void CProxyElement_CkMemCheckPT::resetReductionMgr(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_resetReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->resetReductionMgr();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void removeArrayElements();
 */
void CProxyElement_CkMemCheckPT::removeArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_removeArrayElements_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->removeArrayElements();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverBuddies();
 */
void CProxyElement_CkMemCheckPT::recoverBuddies(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_recoverBuddies_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->recoverBuddies();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
void CProxyElement_CkMemCheckPT::recoverEntry(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverArrayElements();
 */
void CProxyElement_CkMemCheckPT::recoverArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_recoverArrayElements_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->recoverArrayElements();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishUp();
 */
void CProxyElement_CkMemCheckPT::finishUp(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_CkMemCheckPT::_call_redn_wrapper_finishUp_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishUp();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotReply();
 */
void CProxyElement_CkMemCheckPT::gotReply(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(const CkCallback &impl_noname_6);
 */
void CProxyElement_CkMemCheckPT::quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
void CProxyElement_CkMemCheckPT::inmem_restore(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
void CProxyElement_CkMemCheckPT::updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_g, impl_cnt_g;
  impl_off_g=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_g=sizeof(CkGroupID)*(n));
  int impl_off_idx, impl_cnt_idx;
  impl_off_idx=impl_off=CK_ALIGN(impl_off,sizeof(CkArrayIndex));
  impl_off+=(impl_cnt_idx=sizeof(CkArrayIndex)*(n));
  int impl_off_id, impl_cnt_id;
  impl_off_id=impl_off=CK_ALIGN(impl_off,sizeof(CmiUInt8));
  impl_off+=(impl_cnt_id=sizeof(CmiUInt8)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_g,g,impl_cnt_g);
  memcpy(impl_buf+impl_off_idx,idx,impl_cnt_idx);
  memcpy(impl_buf+impl_off_id,id,impl_cnt_id);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(int w);
 */
CkGroupID CProxy_CkMemCheckPT::ckNew(int w, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int w
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|w;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|w;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkMemCheckPT::__idx, CkIndex_CkMemCheckPT::idx_CkMemCheckPT_marshall1(), impl_msg);
  return gId;
}
  CProxy_CkMemCheckPT::CProxy_CkMemCheckPT(int w, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int w
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|w;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|w;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkMemCheckPT::__idx, CkIndex_CkMemCheckPT::idx_CkMemCheckPT_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_CkMemCheckPT_marshall1() {
  int epidx = CkRegisterEp("CkMemCheckPT(int w)",
      reinterpret_cast<CkCallFnPtr>(_call_CkMemCheckPT_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkMemCheckPT_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkMemCheckPT_marshall1);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_CkMemCheckPT_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int w*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> w;
  implP|w;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkMemCheckPT(std::move(w.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_CkMemCheckPT_marshall1(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int w*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> w;
  implP|w;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkMemCheckPT(std::move(w.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_CkMemCheckPT_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int w*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> w;
  implP|w;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("w");
  implDestP|w;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
void CProxy_CkMemCheckPT::createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
  }
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
  }
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_createEntry_marshall2() {
  int epidx = CkRegisterEp("createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3)",
      reinterpret_cast<CkCallFnPtr>(_call_createEntry_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_createEntry_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_createEntry_marshall2);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_createEntry_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->createEntry(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_createEntry_marshall2(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->createEntry(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_createEntry_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::createEntry_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
void CProxy_CkMemCheckPT::doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int spe, const CkCallback &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkMemCheckPT::doItNow(int spe, const CkCallback &impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int spe, const CkCallback &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
  }
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkMemCheckPT::doItNow(int spe, const CkCallback &impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int spe, const CkCallback &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
  }
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_doItNow_marshall3() {
  int epidx = CkRegisterEp("doItNow(int spe, const CkCallback &impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_doItNow_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_doItNow_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_doItNow_marshall3);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_doItNow_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int spe, const CkCallback &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> spe;
  implP|spe;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->doItNow(std::move(spe.t), std::move(impl_noname_4.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_doItNow_marshall3(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int spe, const CkCallback &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> spe;
  implP|spe;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->doItNow(std::move(spe.t), std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_doItNow_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int spe, const CkCallback &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> spe;
  implP|spe;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("spe");
  implDestP|spe;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::doItNow_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
void CProxy_CkMemCheckPT::recvData(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recvData(CkArrayCheckPTMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recvData(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recvData_CkArrayCheckPTMessage() {
  int epidx = CkRegisterEp("recvData(CkArrayCheckPTMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_CkArrayCheckPTMessage), CMessage_CkArrayCheckPTMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayCheckPTMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_recvData_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recvData((CkArrayCheckPTMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
void CProxy_CkMemCheckPT::recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recvArrayCheckpoint_CkArrayCheckPTMessage() {
  int epidx = CkRegisterEp("recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvArrayCheckpoint_CkArrayCheckPTMessage), CMessage_CkArrayCheckPTMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayCheckPTMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_recvArrayCheckpoint_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recvArrayCheckpoint((CkArrayCheckPTMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotData();
 */
void CProxy_CkMemCheckPT::gotData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::gotData(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::gotData(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_gotData_void() {
  int epidx = CkRegisterEp("gotData()",
      reinterpret_cast<CkCallFnPtr>(_call_gotData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_gotData_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->gotData();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::gotData_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
void CProxy_CkMemCheckPT::recvProcData(CkProcCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recvProcData(CkProcCheckPTMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recvProcData(CkProcCheckPTMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recvProcData_CkProcCheckPTMessage() {
  int epidx = CkRegisterEp("recvProcData(CkProcCheckPTMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvProcData_CkProcCheckPTMessage), CMessage_CkProcCheckPTMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkProcCheckPTMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_recvProcData_CkProcCheckPTMessage(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recvProcData((CkProcCheckPTMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncFiles();
 */
void CProxy_CkMemCheckPT::syncFiles(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::syncFiles(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::syncFiles(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_syncFiles_void() {
  int epidx = CkRegisterEp("syncFiles()",
      reinterpret_cast<CkCallFnPtr>(_call_syncFiles_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_syncFiles_void() {
  return CkRegisterEp("redn_wrapper_syncFiles(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_syncFiles_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_syncFiles_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->syncFiles();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::syncFiles_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void cpFinish();
 */
void CProxy_CkMemCheckPT::cpFinish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::cpFinish(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::cpFinish(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_cpFinish_void() {
  int epidx = CkRegisterEp("cpFinish()",
      reinterpret_cast<CkCallFnPtr>(_call_cpFinish_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_cpFinish_void() {
  return CkRegisterEp("redn_wrapper_cpFinish(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_cpFinish_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_cpFinish_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->cpFinish();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::cpFinish_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void report();
 */
void CProxy_CkMemCheckPT::report(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::report(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::report(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_report_void() {
  int epidx = CkRegisterEp("report()",
      reinterpret_cast<CkCallFnPtr>(_call_report_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_report_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->report();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::report_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restart(int impl_noname_5);
 */
void CProxy_CkMemCheckPT::restart(int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_CkMemCheckPT::restart(int impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_CkMemCheckPT::restart(int impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_restart_marshall11() {
  int epidx = CkRegisterEp("restart(int impl_noname_5)",
      reinterpret_cast<CkCallFnPtr>(_call_restart_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_restart_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_restart_marshall11);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_restart_marshall11(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->restart(std::move(impl_noname_5.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_restart_marshall11(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->restart(std::move(impl_noname_5.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_restart_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::restart_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReductionMgr();
 */
void CProxy_CkMemCheckPT::resetReductionMgr(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::resetReductionMgr(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::resetReductionMgr(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_resetReductionMgr_void() {
  int epidx = CkRegisterEp("resetReductionMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_resetReductionMgr_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_resetReductionMgr_void() {
  return CkRegisterEp("redn_wrapper_resetReductionMgr(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_resetReductionMgr_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_resetReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->resetReductionMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::resetReductionMgr_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void removeArrayElements();
 */
void CProxy_CkMemCheckPT::removeArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::removeArrayElements(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::removeArrayElements(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_removeArrayElements_void() {
  int epidx = CkRegisterEp("removeArrayElements()",
      reinterpret_cast<CkCallFnPtr>(_call_removeArrayElements_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_removeArrayElements_void() {
  return CkRegisterEp("redn_wrapper_removeArrayElements(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_removeArrayElements_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_removeArrayElements_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->removeArrayElements();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::removeArrayElements_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverBuddies();
 */
void CProxy_CkMemCheckPT::recoverBuddies(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recoverBuddies(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recoverBuddies(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recoverBuddies_void() {
  int epidx = CkRegisterEp("recoverBuddies()",
      reinterpret_cast<CkCallFnPtr>(_call_recoverBuddies_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_recoverBuddies_void() {
  return CkRegisterEp("redn_wrapper_recoverBuddies(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_recoverBuddies_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_recoverBuddies_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recoverBuddies();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::recoverBuddies_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
void CProxy_CkMemCheckPT::recoverEntry(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recoverEntry(CkArrayCheckPTMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recoverEntry(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recoverEntry_CkArrayCheckPTMessage() {
  int epidx = CkRegisterEp("recoverEntry(CkArrayCheckPTMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recoverEntry_CkArrayCheckPTMessage), CMessage_CkArrayCheckPTMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayCheckPTMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_recoverEntry_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recoverEntry((CkArrayCheckPTMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverArrayElements();
 */
void CProxy_CkMemCheckPT::recoverArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::recoverArrayElements(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::recoverArrayElements(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_recoverArrayElements_void() {
  int epidx = CkRegisterEp("recoverArrayElements()",
      reinterpret_cast<CkCallFnPtr>(_call_recoverArrayElements_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_recoverArrayElements_void() {
  return CkRegisterEp("redn_wrapper_recoverArrayElements(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_recoverArrayElements_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_recoverArrayElements_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->recoverArrayElements();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::recoverArrayElements_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishUp();
 */
void CProxy_CkMemCheckPT::finishUp(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::finishUp(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::finishUp(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_finishUp_void() {
  int epidx = CkRegisterEp("finishUp()",
      reinterpret_cast<CkCallFnPtr>(_call_finishUp_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_CkMemCheckPT::reg_redn_wrapper_finishUp_void() {
  return CkRegisterEp("redn_wrapper_finishUp(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishUp_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_CkMemCheckPT::_call_finishUp_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->finishUp();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::finishUp_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotReply();
 */
void CProxy_CkMemCheckPT::gotReply(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::gotReply(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::gotReply(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_gotReply_void() {
  int epidx = CkRegisterEp("gotReply()",
      reinterpret_cast<CkCallFnPtr>(_call_gotReply_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_gotReply_void(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->gotReply();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::gotReply_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(const CkCallback &impl_noname_6);
 */
void CProxy_CkMemCheckPT::quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::quiescence(const CkCallback &impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
  }
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::quiescence(const CkCallback &impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
  }
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_quiescence_marshall19() {
  int epidx = CkRegisterEp("quiescence(const CkCallback &impl_noname_6)",
      reinterpret_cast<CkCallFnPtr>(_call_quiescence_marshall19), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_quiescence_marshall19);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_quiescence_marshall19);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_quiescence_marshall19(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->quiescence(std::move(impl_noname_6.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_quiescence_marshall19(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->quiescence(std::move(impl_noname_6.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_quiescence_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::quiescence_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
void CProxy_CkMemCheckPT::inmem_restore(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::inmem_restore(CkArrayCheckPTMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::inmem_restore(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_inmem_restore_CkArrayCheckPTMessage() {
  int epidx = CkRegisterEp("inmem_restore(CkArrayCheckPTMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_inmem_restore_CkArrayCheckPTMessage), CMessage_CkArrayCheckPTMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArrayCheckPTMessage::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_inmem_restore_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  impl_obj->inmem_restore((CkArrayCheckPTMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
void CProxy_CkMemCheckPT::updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_g, impl_cnt_g;
  impl_off_g=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_g=sizeof(CkGroupID)*(n));
  int impl_off_idx, impl_cnt_idx;
  impl_off_idx=impl_off=CK_ALIGN(impl_off,sizeof(CkArrayIndex));
  impl_off+=(impl_cnt_idx=sizeof(CkArrayIndex)*(n));
  int impl_off_id, impl_cnt_id;
  impl_off_id=impl_off=CK_ALIGN(impl_off,sizeof(CmiUInt8));
  impl_off+=(impl_cnt_id=sizeof(CmiUInt8)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_g,g,impl_cnt_g);
  memcpy(impl_buf+impl_off_idx,idx,impl_cnt_idx);
  memcpy(impl_buf+impl_off_id,id,impl_cnt_id);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CkMemCheckPT::updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_g, impl_cnt_g;
  impl_off_g=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_g=sizeof(CkGroupID)*(n));
  int impl_off_idx, impl_cnt_idx;
  impl_off_idx=impl_off=CK_ALIGN(impl_off,sizeof(CkArrayIndex));
  impl_off+=(impl_cnt_idx=sizeof(CkArrayIndex)*(n));
  int impl_off_id, impl_cnt_id;
  impl_off_id=impl_off=CK_ALIGN(impl_off,sizeof(CmiUInt8));
  impl_off+=(impl_cnt_id=sizeof(CmiUInt8)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_g,g,impl_cnt_g);
  memcpy(impl_buf+impl_off_idx,idx,impl_cnt_idx);
  memcpy(impl_buf+impl_off_id,id,impl_cnt_id);
  CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CkMemCheckPT::updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_g, impl_cnt_g;
  impl_off_g=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_g=sizeof(CkGroupID)*(n));
  int impl_off_idx, impl_cnt_idx;
  impl_off_idx=impl_off=CK_ALIGN(impl_off,sizeof(CkArrayIndex));
  impl_off+=(impl_cnt_idx=sizeof(CkArrayIndex)*(n));
  int impl_off_id, impl_cnt_id;
  impl_off_id=impl_off=CK_ALIGN(impl_off,sizeof(CmiUInt8));
  impl_off+=(impl_cnt_id=sizeof(CmiUInt8)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_g,g,impl_cnt_g);
  memcpy(impl_buf+impl_off_idx,idx,impl_cnt_idx);
  memcpy(impl_buf+impl_off_id,id,impl_cnt_id);
  CkSendMsgBranchGroup(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_updateLocations_marshall21() {
  int epidx = CkRegisterEp("updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocations_marshall21), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateLocations_marshall21);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateLocations_marshall21);

  return epidx;
}

void CkIndex_CkMemCheckPT::_call_updateLocations_marshall21(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_g, impl_cnt_g;
  implP|impl_off_g;
  implP|impl_cnt_g;
  int impl_off_idx, impl_cnt_idx;
  implP|impl_off_idx;
  implP|impl_cnt_idx;
  int impl_off_id, impl_cnt_id;
  implP|impl_off_id;
  implP|impl_cnt_id;
  PUP::detail::TemporaryObjectHolder<int> nowOnPe;
  implP|nowOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *g=(CkGroupID *)(impl_buf+impl_off_g);
  CkArrayIndex *idx=(CkArrayIndex *)(impl_buf+impl_off_idx);
  CmiUInt8 *id=(CmiUInt8 *)(impl_buf+impl_off_id);
  impl_obj->updateLocations(std::move(n.t), g, idx, id, std::move(nowOnPe.t));
}
int CkIndex_CkMemCheckPT::_callmarshall_updateLocations_marshall21(char* impl_buf, void* impl_obj_void) {
  CkMemCheckPT* impl_obj = static_cast<CkMemCheckPT*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_g, impl_cnt_g;
  implP|impl_off_g;
  implP|impl_cnt_g;
  int impl_off_idx, impl_cnt_idx;
  implP|impl_off_idx;
  implP|impl_cnt_idx;
  int impl_off_id, impl_cnt_id;
  implP|impl_off_id;
  implP|impl_cnt_id;
  PUP::detail::TemporaryObjectHolder<int> nowOnPe;
  implP|nowOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *g=(CkGroupID *)(impl_buf+impl_off_g);
  CkArrayIndex *idx=(CkArrayIndex *)(impl_buf+impl_off_idx);
  CmiUInt8 *id=(CmiUInt8 *)(impl_buf+impl_off_id);
  impl_obj->updateLocations(std::move(n.t), g, idx, id, std::move(nowOnPe.t));
  return implP.size();
}
void CkIndex_CkMemCheckPT::_marshallmessagepup_updateLocations_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_g, impl_cnt_g;
  implP|impl_off_g;
  implP|impl_cnt_g;
  int impl_off_idx, impl_cnt_idx;
  implP|impl_off_idx;
  implP|impl_cnt_idx;
  int impl_off_id, impl_cnt_id;
  implP|impl_off_id;
  implP|impl_cnt_id;
  PUP::detail::TemporaryObjectHolder<int> nowOnPe;
  implP|nowOnPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *g=(CkGroupID *)(impl_buf+impl_off_g);
  CkArrayIndex *idx=(CkArrayIndex *)(impl_buf+impl_off_idx);
  CmiUInt8 *id=(CmiUInt8 *)(impl_buf+impl_off_id);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("g");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*g))<impl_cnt_g;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|g[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*idx))<impl_cnt_idx;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|idx[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("id");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*id))<impl_cnt_id;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|id[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nowOnPe");
  implDestP|nowOnPe;
}
PUPable_def(SINGLE_ARG(Closure_CkMemCheckPT::updateLocations_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_CkMemCheckPT::reg_CkMemCheckPT_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkMemCheckPT(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkMemCheckPT_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_CkMemCheckPT::_call_CkMemCheckPT_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkMemCheckPT((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(int w);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
void CProxySection_CkMemCheckPT::createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)impl_noname_2;
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_createEntry_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
void CProxySection_CkMemCheckPT::doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int spe, const CkCallback &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|spe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_4;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_doItNow_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
void CProxySection_CkMemCheckPT::recvData(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvData_CkArrayCheckPTMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
void CProxySection_CkMemCheckPT::recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvArrayCheckpoint_CkArrayCheckPTMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotData();
 */
void CProxySection_CkMemCheckPT::gotData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_gotData_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
void CProxySection_CkMemCheckPT::recvProcData(CkProcCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recvProcData_CkProcCheckPTMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncFiles();
 */
void CProxySection_CkMemCheckPT::syncFiles(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_syncFiles_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void cpFinish();
 */
void CProxySection_CkMemCheckPT::cpFinish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_cpFinish_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void report();
 */
void CProxySection_CkMemCheckPT::report(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_report_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_report_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restart(int impl_noname_5);
 */
void CProxySection_CkMemCheckPT::restart(int impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_restart_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReductionMgr();
 */
void CProxySection_CkMemCheckPT::resetReductionMgr(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_resetReductionMgr_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void removeArrayElements();
 */
void CProxySection_CkMemCheckPT::removeArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_removeArrayElements_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverBuddies();
 */
void CProxySection_CkMemCheckPT::recoverBuddies(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverBuddies_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
void CProxySection_CkMemCheckPT::recoverEntry(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverEntry_CkArrayCheckPTMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recoverArrayElements();
 */
void CProxySection_CkMemCheckPT::recoverArrayElements(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_recoverArrayElements_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishUp();
 */
void CProxySection_CkMemCheckPT::finishUp(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_finishUp_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gotReply();
 */
void CProxySection_CkMemCheckPT::gotReply(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_gotReply_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(const CkCallback &impl_noname_6);
 */
void CProxySection_CkMemCheckPT::quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_quiescence_marshall19(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
void CProxySection_CkMemCheckPT::inmem_restore(CkArrayCheckPTMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_inmem_restore_CkArrayCheckPTMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
void CProxySection_CkMemCheckPT::updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_g, impl_cnt_g;
  impl_off_g=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_g=sizeof(CkGroupID)*(n));
  int impl_off_idx, impl_cnt_idx;
  impl_off_idx=impl_off=CK_ALIGN(impl_off,sizeof(CkArrayIndex));
  impl_off+=(impl_cnt_idx=sizeof(CkArrayIndex)*(n));
  int impl_off_id, impl_cnt_id;
  impl_off_id=impl_off=CK_ALIGN(impl_off,sizeof(CmiUInt8));
  impl_off+=(impl_cnt_id=sizeof(CmiUInt8)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
    implP|impl_off_g;
    implP|impl_cnt_g;
    implP|impl_off_idx;
    implP|impl_cnt_idx;
    implP|impl_off_id;
    implP|impl_cnt_id;
    implP|nowOnPe;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_g,g,impl_cnt_g);
  memcpy(impl_buf+impl_off_idx,idx,impl_cnt_idx);
  memcpy(impl_buf+impl_off_id,id,impl_cnt_id);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMemCheckPT::idx_updateLocations_marshall21(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkMemCheckPT::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkMemCheckPT::isIrreducible());
  // REG: CkMemCheckPT(int w);
  idx_CkMemCheckPT_marshall1();

  // REG: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
  idx_createEntry_marshall2();

  // REG: void doItNow(int spe, const CkCallback &impl_noname_4);
  idx_doItNow_marshall3();

  // REG: void recvData(CkArrayCheckPTMessage* impl_msg);
  idx_recvData_CkArrayCheckPTMessage();

  // REG: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
  idx_recvArrayCheckpoint_CkArrayCheckPTMessage();

  // REG: void gotData();
  idx_gotData_void();

  // REG: void recvProcData(CkProcCheckPTMessage* impl_msg);
  idx_recvProcData_CkProcCheckPTMessage();

  // REG: void syncFiles();
  idx_syncFiles_void();
  idx_redn_wrapper_syncFiles_void();

  // REG: void cpFinish();
  idx_cpFinish_void();
  idx_redn_wrapper_cpFinish_void();

  // REG: void report();
  idx_report_void();

  // REG: void restart(int impl_noname_5);
  idx_restart_marshall11();

  // REG: void resetReductionMgr();
  idx_resetReductionMgr_void();
  idx_redn_wrapper_resetReductionMgr_void();

  // REG: void removeArrayElements();
  idx_removeArrayElements_void();
  idx_redn_wrapper_removeArrayElements_void();

  // REG: void recoverBuddies();
  idx_recoverBuddies_void();
  idx_redn_wrapper_recoverBuddies_void();

  // REG: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
  idx_recoverEntry_CkArrayCheckPTMessage();

  // REG: void recoverArrayElements();
  idx_recoverArrayElements_void();
  idx_redn_wrapper_recoverArrayElements_void();

  // REG: void finishUp();
  idx_finishUp_void();
  idx_redn_wrapper_finishUp_void();

  // REG: void gotReply();
  idx_gotReply_void();

  // REG: void quiescence(const CkCallback &impl_noname_6);
  idx_quiescence_marshall19();

  // REG: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
  idx_inmem_restore_CkArrayCheckPTMessage();

  // REG: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
  idx_updateLocations_marshall21();

  // REG: CkMemCheckPT(CkMigrateMessage* impl_msg);
  idx_CkMemCheckPT_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkMemCheckPT_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare CkMemCheckPTInit: Chare{
CkMemCheckPTInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkMemCheckPTInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMemCheckPTInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_CkMemCheckPTInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CkMemCheckPTInit::__idx, CkIndex_CkMemCheckPTInit::idx_CkMemCheckPTInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CkMemCheckPTInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_CkMemCheckPTInit::__idx, CkIndex_CkMemCheckPTInit::idx_CkMemCheckPTInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CkMemCheckPTInit::reg_CkMemCheckPTInit_CkArgMsg() {
  int epidx = CkRegisterEp("CkMemCheckPTInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkMemCheckPTInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CkMemCheckPTInit::_call_CkMemCheckPTInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  CkMemCheckPTInit* impl_obj = static_cast<CkMemCheckPTInit*>(impl_obj_void);
  new (impl_obj_void) CkMemCheckPTInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkMemCheckPTInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CkMemCheckPTInit(CkArgMsg* impl_msg);
  idx_CkMemCheckPTInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_CkMemCheckPTInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkMemCheckpoint(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("ckCheckPTGroupID","CkGroupID",sizeof(ckCheckPTGroupID),(void *) &ckCheckPTGroupID,__xlater_roPup_ckCheckPTGroupID);

/* REG: message CkArrayCheckPTMessage{
double packData[];
}
;
*/
CMessage_CkArrayCheckPTMessage::__register("CkArrayCheckPTMessage", sizeof(CkArrayCheckPTMessage),(CkPackFnPtr) CkArrayCheckPTMessage::pack,(CkUnpackFnPtr) CkArrayCheckPTMessage::unpack);

/* REG: message CkProcCheckPTMessage{
char packData[];
}
;
*/
CMessage_CkProcCheckPTMessage::__register("CkProcCheckPTMessage", sizeof(CkProcCheckPTMessage),(CkPackFnPtr) CkProcCheckPTMessage::pack,(CkUnpackFnPtr) CkProcCheckPTMessage::unpack);

/* REG: message CkArrayCheckPTReqMessage;
*/
CMessage_CkArrayCheckPTReqMessage::__register("CkArrayCheckPTReqMessage", sizeof(CkArrayCheckPTReqMessage),(CkPackFnPtr) CkArrayCheckPTReqMessage::pack,(CkUnpackFnPtr) CkArrayCheckPTReqMessage::unpack);

/* REG: group CkMemCheckPT: IrrGroup{
CkMemCheckPT(int w);
void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
void doItNow(int spe, const CkCallback &impl_noname_4);
void recvData(CkArrayCheckPTMessage* impl_msg);
void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
void gotData();
void recvProcData(CkProcCheckPTMessage* impl_msg);
void syncFiles();
void cpFinish();
void report();
void restart(int impl_noname_5);
void resetReductionMgr();
void removeArrayElements();
void recoverBuddies();
void recoverEntry(CkArrayCheckPTMessage* impl_msg);
void recoverArrayElements();
void finishUp();
void gotReply();
void quiescence(const CkCallback &impl_noname_6);
void inmem_restore(CkArrayCheckPTMessage* impl_msg);
void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
CkMemCheckPT(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkMemCheckPT::__register("CkMemCheckPT", sizeof(CkMemCheckPT));

  _registerInitCall(CkRegisterRestartHandler,0);

/* REG: mainchare CkMemCheckPTInit: Chare{
CkMemCheckPTInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_CkMemCheckPTInit::__register("CkMemCheckPTInit", sizeof(CkMemCheckPTInit));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkMemCheckPT::virtual_pup(PUP::er &p) {
    recursive_pup<CkMemCheckPT>(dynamic_cast<CkMemCheckPT*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkMemCheckPTInit::virtual_pup(PUP::er &p) {
    recursive_pup<CkMemCheckPTInit>(dynamic_cast<CkMemCheckPTInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
