



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::ResumeThread_2_closure : public SDAG::Closure {
      

      ResumeThread_2_closure() {
        init();
      }
      ResumeThread_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeThread_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeThread_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::Checkpoint_3_closure : public SDAG::Closure {
            int len;
            char *dname;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      Checkpoint_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      Checkpoint_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return len;}
            char *& getP1() { return dname;}
      void pup(PUP::er& __p) {
        __p | len;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_dname, impl_cnt_dname;
  implP|impl_off_dname;
  implP|impl_cnt_dname;
          impl_buf+=CK_ALIGN(implP.size(),16);
          dname = (char *)(impl_buf+impl_off_dname);
        }
      }
      virtual ~Checkpoint_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(Checkpoint_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::ExchangeProxy_4_closure : public SDAG::Closure {
            CProxy_ampi impl_noname_0;


      ExchangeProxy_4_closure() {
        init();
      }
      ExchangeProxy_4_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_ampi & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~ExchangeProxy_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ExchangeProxy_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::resumeAfterMigration_5_closure : public SDAG::Closure {
      

      resumeAfterMigration_5_closure() {
        init();
      }
      resumeAfterMigration_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resumeAfterMigration_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(resumeAfterMigration_5_closure));
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

    struct Closure_ampi::allInitDone_3_closure : public SDAG::Closure {
      

      allInitDone_3_closure() {
        init();
      }
      allInitDone_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~allInitDone_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(allInitDone_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::setInitDoneFlag_4_closure : public SDAG::Closure {
      

      setInitDoneFlag_4_closure() {
        init();
      }
      setInitDoneFlag_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setInitDoneFlag_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInitDoneFlag_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::unblock_5_closure : public SDAG::Closure {
      

      unblock_5_closure() {
        init();
      }
      unblock_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~unblock_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(unblock_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::injectMsg_6_closure : public SDAG::Closure {
            int size;
            char *buf;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      injectMsg_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      injectMsg_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return size;}
            char *& getP1() { return buf;}
      void pup(PUP::er& __p) {
        __p | size;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_buf, impl_cnt_buf;
  implP|impl_off_buf;
  implP|impl_cnt_buf;
          impl_buf+=CK_ALIGN(implP.size(),16);
          buf = (char *)(impl_buf+impl_off_buf);
        }
      }
      virtual ~injectMsg_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(injectMsg_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::genericRdma_9_closure : public SDAG::Closure {
            int num_rdma_fields;
      int num_root_node;
      CkNcpyBuffer ncpyBuffer_buf;
            int size;
            CMK_REFNUM_TYPE seq;
            int tag;
            int srcRank;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      genericRdma_9_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      genericRdma_9_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return  num_rdma_fields;}
      int & getP1() { return  num_root_node;}
      CkNcpyBuffer & getP2() { return ncpyBuffer_buf;}
            int & getP3() { return size;}
            CMK_REFNUM_TYPE & getP4() { return seq;}
            int & getP5() { return tag;}
            int & getP6() { return srcRank;}
      void pup(PUP::er& __p) {
        char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_rdma_fields;
        __p | num_root_node;
        if (__p.isPacking()) {
          ncpyBuffer_buf.ptr = (void *)((char *)(ncpyBuffer_buf.ptr) - impl_buf);
        }
        __p | ncpyBuffer_buf;
        __p | size;
        __p | seq;
        __p | tag;
        __p | srcRank;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  ncpyBuffer_buf.ptr = (void *)(impl_buf + (size_t)(ncpyBuffer_buf.ptr));
  implP|num_rdma_fields;
  implP|num_root_node;
  CkNcpyBuffer ncpyBuffer_buf;
  implP|ncpyBuffer_buf;
  char *ncpyBuffer_buf_ptr = (char *) ncpyBuffer_buf.ptr;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CMK_REFNUM_TYPE> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> srcRank;
  implP|srcRank;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~genericRdma_9_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(genericRdma_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::completedSend_10_closure : public SDAG::Closure {
            int sreqIdx;


      completedSend_10_closure() {
        init();
      }
      completedSend_10_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return sreqIdx;}
      void pup(PUP::er& __p) {
        __p | sreqIdx;
        packClosure(__p);
      }
      virtual ~completedSend_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(completedSend_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::requestPut_13_closure : public SDAG::Closure {
            MPI_Request req;
            CkNcpyBuffer targetInfo;


      requestPut_13_closure() {
        init();
      }
      requestPut_13_closure(CkMigrateMessage*) {
        init();
      }
            MPI_Request & getP0() { return req;}
            CkNcpyBuffer & getP1() { return targetInfo;}
      void pup(PUP::er& __p) {
        __p | req;
        __p | targetInfo;
        packClosure(__p);
      }
      virtual ~requestPut_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestPut_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::barrierResult_14_closure : public SDAG::Closure {
      

      barrierResult_14_closure() {
        init();
      }
      barrierResult_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrierResult_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrierResult_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::ibarrierResult_15_closure : public SDAG::Closure {
      

      ibarrierResult_15_closure() {
        init();
      }
      ibarrierResult_15_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ibarrierResult_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(ibarrierResult_15_closure));
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

    struct Closure_ampi::commCreatePhase1_21_closure : public SDAG::Closure {
            int nextComm;
            int commType;


      commCreatePhase1_21_closure() {
        init();
      }
      commCreatePhase1_21_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return nextComm;}
            int & getP1() { return commType;}
      void pup(PUP::er& __p) {
        __p | nextComm;
        __p | commType;
        packClosure(__p);
      }
      virtual ~commCreatePhase1_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(commCreatePhase1_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::registrationFinish_22_closure : public SDAG::Closure {
      

      registrationFinish_22_closure() {
        init();
      }
      registrationFinish_22_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~registrationFinish_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(registrationFinish_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::intercommCreatePhase1_23_closure : public SDAG::Closure {
            MPI_Comm nextInterComm;


      intercommCreatePhase1_23_closure() {
        init();
      }
      intercommCreatePhase1_23_closure(CkMigrateMessage*) {
        init();
      }
            MPI_Comm & getP0() { return nextInterComm;}
      void pup(PUP::er& __p) {
        __p | nextInterComm;
        packClosure(__p);
      }
      virtual ~intercommCreatePhase1_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(intercommCreatePhase1_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::intercommMergePhase1_24_closure : public SDAG::Closure {
            MPI_Comm nextIntraComm;


      intercommMergePhase1_24_closure() {
        init();
      }
      intercommMergePhase1_24_closure(CkMigrateMessage*) {
        init();
      }
            MPI_Comm & getP0() { return nextIntraComm;}
      void pup(PUP::er& __p) {
        __p | nextIntraComm;
        packClosure(__p);
      }
      virtual ~intercommMergePhase1_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(intercommMergePhase1_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::exchangeProxyForSplitLocal_25_closure : public SDAG::Closure {
            int impl_noname_1;
            CProxy_ampi impl_noname_2;


      exchangeProxyForSplitLocal_25_closure() {
        init();
      }
      exchangeProxyForSplitLocal_25_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
            CProxy_ampi & getP1() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~exchangeProxyForSplitLocal_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchangeProxyForSplitLocal_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::exchangeProxyForSplitRemote_26_closure : public SDAG::Closure {
            int impl_noname_3;
            CProxy_ampi impl_noname_4;


      exchangeProxyForSplitRemote_26_closure() {
        init();
      }
      exchangeProxyForSplitRemote_26_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
            CProxy_ampi & getP1() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~exchangeProxyForSplitRemote_26_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchangeProxyForSplitRemote_26_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::setRemoteProxy_27_closure : public SDAG::Closure {
            CProxy_ampi rproxy;


      setRemoteProxy_27_closure() {
        init();
      }
      setRemoteProxy_27_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_ampi & getP0() { return rproxy;}
      void pup(PUP::er& __p) {
        __p | rproxy;
        packClosure(__p);
      }
      virtual ~setRemoteProxy_27_closure() {
      }
      PUPable_decl(SINGLE_ARG(setRemoteProxy_27_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemotePut_28_closure : public SDAG::Closure {
            int orgtotalsize;
            char *orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemotePut_28_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemotePut_28_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            char *& getP1() { return orgaddr;}
            int & getP2() { return orgcnt;}
            MPI_Datatype & getP3() { return orgtype;}
            MPI_Aint & getP4() { return targdisp;}
            int & getP5() { return targcnt;}
            MPI_Datatype & getP6() { return targtype;}
            int & getP7() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          orgaddr = (char *)(impl_buf+impl_off_orgaddr);
        }
      }
      virtual ~winRemotePut_28_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemotePut_28_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemotePut_29_closure : public SDAG::Closure {
            int orgtotalsize;
            int num_rdma_fields;
      int num_root_node;
      CkNcpyBuffer ncpyBuffer_orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemotePut_29_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemotePut_29_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            int & getP1() { return  num_rdma_fields;}
      int & getP2() { return  num_root_node;}
      CkNcpyBuffer & getP3() { return ncpyBuffer_orgaddr;}
            int & getP4() { return orgcnt;}
            MPI_Datatype & getP5() { return orgtype;}
            MPI_Aint & getP6() { return targdisp;}
            int & getP7() { return targcnt;}
            MPI_Datatype & getP8() { return targtype;}
            int & getP9() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_rdma_fields;
        __p | num_root_node;
        if (__p.isPacking()) {
          ncpyBuffer_orgaddr.ptr = (void *)((char *)(ncpyBuffer_orgaddr.ptr) - impl_buf);
        }
        __p | ncpyBuffer_orgaddr;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  ncpyBuffer_orgaddr.ptr = (void *)(impl_buf + (size_t)(ncpyBuffer_orgaddr.ptr));
  implP|num_rdma_fields;
  implP|num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~winRemotePut_29_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemotePut_29_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteGet_30_closure : public SDAG::Closure {
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            int winIndex;


      winRemoteGet_30_closure() {
        init();
      }
      winRemoteGet_30_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return orgcnt;}
            MPI_Datatype & getP1() { return orgtype;}
            MPI_Aint & getP2() { return targdisp;}
            int & getP3() { return targcnt;}
            MPI_Datatype & getP4() { return targtype;}
            int & getP5() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
      }
      virtual ~winRemoteGet_30_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteGet_30_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteAccumulate_31_closure : public SDAG::Closure {
            int orgtotalsize;
            char *orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            MPI_Op op;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteAccumulate_31_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteAccumulate_31_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            char *& getP1() { return orgaddr;}
            int & getP2() { return orgcnt;}
            MPI_Datatype & getP3() { return orgtype;}
            MPI_Aint & getP4() { return targdisp;}
            int & getP5() { return targcnt;}
            MPI_Datatype & getP6() { return targtype;}
            MPI_Op & getP7() { return op;}
            int & getP8() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | op;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          orgaddr = (char *)(impl_buf+impl_off_orgaddr);
        }
      }
      virtual ~winRemoteAccumulate_31_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteAccumulate_31_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteAccumulate_32_closure : public SDAG::Closure {
            int orgtotalsize;
            int num_rdma_fields;
      int num_root_node;
      CkNcpyBuffer ncpyBuffer_orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            MPI_Op op;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteAccumulate_32_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteAccumulate_32_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            int & getP1() { return  num_rdma_fields;}
      int & getP2() { return  num_root_node;}
      CkNcpyBuffer & getP3() { return ncpyBuffer_orgaddr;}
            int & getP4() { return orgcnt;}
            MPI_Datatype & getP5() { return orgtype;}
            MPI_Aint & getP6() { return targdisp;}
            int & getP7() { return targcnt;}
            MPI_Datatype & getP8() { return targtype;}
            MPI_Op & getP9() { return op;}
            int & getP10() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_rdma_fields;
        __p | num_root_node;
        if (__p.isPacking()) {
          ncpyBuffer_orgaddr.ptr = (void *)((char *)(ncpyBuffer_orgaddr.ptr) - impl_buf);
        }
        __p | ncpyBuffer_orgaddr;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | op;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  ncpyBuffer_orgaddr.ptr = (void *)(impl_buf + (size_t)(ncpyBuffer_orgaddr.ptr));
  implP|num_rdma_fields;
  implP|num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~winRemoteAccumulate_32_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteAccumulate_32_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteGetAccumulate_33_closure : public SDAG::Closure {
            int orgtotalsize;
            char *orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            MPI_Op op;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteGetAccumulate_33_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteGetAccumulate_33_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            char *& getP1() { return orgaddr;}
            int & getP2() { return orgcnt;}
            MPI_Datatype & getP3() { return orgtype;}
            MPI_Aint & getP4() { return targdisp;}
            int & getP5() { return targcnt;}
            MPI_Datatype & getP6() { return targtype;}
            MPI_Op & getP7() { return op;}
            int & getP8() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | op;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          orgaddr = (char *)(impl_buf+impl_off_orgaddr);
        }
      }
      virtual ~winRemoteGetAccumulate_33_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteGetAccumulate_33_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteGetAccumulate_34_closure : public SDAG::Closure {
            int orgtotalsize;
            int num_rdma_fields;
      int num_root_node;
      CkNcpyBuffer ncpyBuffer_orgaddr;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            MPI_Op impl_noname_5;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteGetAccumulate_34_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteGetAccumulate_34_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return orgtotalsize;}
            int & getP1() { return  num_rdma_fields;}
      int & getP2() { return  num_root_node;}
      CkNcpyBuffer & getP3() { return ncpyBuffer_orgaddr;}
            int & getP4() { return orgcnt;}
            MPI_Datatype & getP5() { return orgtype;}
            MPI_Aint & getP6() { return targdisp;}
            int & getP7() { return targcnt;}
            MPI_Datatype & getP8() { return targtype;}
            MPI_Op & getP9() { return impl_noname_5;}
            int & getP10() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_rdma_fields;
        __p | num_root_node;
        if (__p.isPacking()) {
          ncpyBuffer_orgaddr.ptr = (void *)((char *)(ncpyBuffer_orgaddr.ptr) - impl_buf);
        }
        __p | ncpyBuffer_orgaddr;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | impl_noname_5;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  ncpyBuffer_orgaddr.ptr = (void *)(impl_buf + (size_t)(ncpyBuffer_orgaddr.ptr));
  implP|num_rdma_fields;
  implP|num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~winRemoteGetAccumulate_34_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteGetAccumulate_34_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteCompareAndSwap_35_closure : public SDAG::Closure {
            int size;
            char *sorgaddr;
            char *compaddr;
            MPI_Datatype type;
            MPI_Aint targdisp;
            int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteCompareAndSwap_35_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteCompareAndSwap_35_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return size;}
            char *& getP1() { return sorgaddr;}
            char *& getP2() { return compaddr;}
            MPI_Datatype & getP3() { return type;}
            MPI_Aint & getP4() { return targdisp;}
            int & getP5() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | size;
        __p | type;
        __p | targdisp;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr;
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr;
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> type;
  implP|type;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          sorgaddr = (char *)(impl_buf+impl_off_sorgaddr);
          compaddr = (char *)(impl_buf+impl_off_compaddr);
        }
      }
      virtual ~winRemoteCompareAndSwap_35_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteCompareAndSwap_35_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteLock_36_closure : public SDAG::Closure {
            int lock_type;
            int winIndex;
            int requestRank;


      winRemoteLock_36_closure() {
        init();
      }
      winRemoteLock_36_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return lock_type;}
            int & getP1() { return winIndex;}
            int & getP2() { return requestRank;}
      void pup(PUP::er& __p) {
        __p | lock_type;
        __p | winIndex;
        __p | requestRank;
        packClosure(__p);
      }
      virtual ~winRemoteLock_36_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteLock_36_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteUnlock_37_closure : public SDAG::Closure {
            int winIndex;
            int requestRank;


      winRemoteUnlock_37_closure() {
        init();
      }
      winRemoteUnlock_37_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return winIndex;}
            int & getP1() { return requestRank;}
      void pup(PUP::er& __p) {
        __p | winIndex;
        __p | requestRank;
        packClosure(__p);
      }
      virtual ~winRemoteUnlock_37_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteUnlock_37_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteIget_38_closure : public SDAG::Closure {
            MPI_Aint orgdisp;
            int orgcnt;
            MPI_Datatype orgtype;
            MPI_Aint targdisp;
            int targcnt;
            MPI_Datatype targtype;
            int winIndex;


      winRemoteIget_38_closure() {
        init();
      }
      winRemoteIget_38_closure(CkMigrateMessage*) {
        init();
      }
            MPI_Aint & getP0() { return orgdisp;}
            int & getP1() { return orgcnt;}
            MPI_Datatype & getP2() { return orgtype;}
            MPI_Aint & getP3() { return targdisp;}
            int & getP4() { return targcnt;}
            MPI_Datatype & getP5() { return targtype;}
            int & getP6() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgdisp;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
      }
      virtual ~winRemoteIget_38_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteIget_38_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message AmpiMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_AmpiMsg::operator new(size_t s){
  return AmpiMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_AmpiMsg::operator new(size_t s, int* sz){
  return AmpiMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_AmpiMsg::operator new(size_t s, int* sz,const int pb){
  return AmpiMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_AmpiMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return AmpiMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_AmpiMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return AmpiMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_AmpiMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return AmpiMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_AmpiMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return AmpiMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_AmpiMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_AmpiMsg::CMessage_AmpiMsg() {
AmpiMsg *newmsg = (AmpiMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_AmpiMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_AmpiMsg::pack(AmpiMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
AmpiMsg* CMessage_AmpiMsg::unpack(void* buf) {
  AmpiMsg *msg = (AmpiMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_AmpiMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CProxy_ampiPeMgr ampiPeMgrProxy;
 */
extern CProxy_ampiPeMgr ampiPeMgrProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ampiPeMgrProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ampiPeMgrProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ampiPeMgr: IrrGroup{
ampiPeMgr();
ampiPeMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampiPeMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr();
 */
CkGroupID CProxy_ampiPeMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ampiPeMgr::__idx, CkIndex_ampiPeMgr::idx_ampiPeMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ampiPeMgr::reg_ampiPeMgr_void() {
  int epidx = CkRegisterEp("ampiPeMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ampiPeMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampiPeMgr::_call_ampiPeMgr_void(void* impl_msg, void* impl_obj_void)
{
  ampiPeMgr* impl_obj = static_cast<ampiPeMgr*>(impl_obj_void);
  new (impl_obj_void) ampiPeMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ampiPeMgr::reg_ampiPeMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampiPeMgr(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ampiPeMgr_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampiPeMgr::_call_ampiPeMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ampiPeMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiPeMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampiPeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ampiPeMgr::isIrreducible());
  // REG: ampiPeMgr();
  idx_ampiPeMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ampiPeMgr_void());

  // REG: ampiPeMgr(CkMigrateMessage* impl_msg);
  idx_ampiPeMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampiPeMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array ampiParent: ArrayElement{
ampiParent(const CProxy_TCharm &threads_, int nRanks_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
void resumeAfterMigration();
ampiParent(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampiParent::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ampiParent::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_ampiParent::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_ampiParent::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_ampiParent::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_ampiParent::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_ampiParent::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
void CProxyElement_ampiParent::insert(const CProxy_TCharm &threads_, int nRanks_, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CProxy_TCharm &threads_, int nRanks_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampiParent::idx_ampiParent_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */
void CProxyElement_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */
void CProxyElement_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
void CProxyElement_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterMigration();
 */
void CProxyElement_ampiParent::resumeAfterMigration(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_resumeAfterMigration_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
CkArrayID CProxy_ampiParent::ckNew(const CProxy_TCharm &threads_, int nRanks_, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads_, int nRanks_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampiParent::idx_ampiParent_marshall1(), opts);
  return gId;
}
void CProxy_ampiParent::ckNew(const CProxy_TCharm &threads_, int nRanks_, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads_, int nRanks_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampiParent::idx_ampiParent_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_ampiParent::ckNew(const CProxy_TCharm &threads_, int nRanks_, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads_, int nRanks_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampiParent::idx_ampiParent_marshall1(), opts);
  return gId;
}
void CProxy_ampiParent::ckNew(const CProxy_TCharm &threads_, int nRanks_, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_TCharm &threads_, int nRanks_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_TCharm>::type>::type &)threads_;
    implP|nRanks_;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampiParent::idx_ampiParent_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_ampiParent::reg_ampiParent_marshall1() {
  int epidx = CkRegisterEp("ampiParent(const CProxy_TCharm &threads_, int nRanks_)",
      reinterpret_cast<CkCallFnPtr>(_call_ampiParent_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ampiParent_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ampiParent_marshall1);

  return epidx;
}

void CkIndex_ampiParent::_call_ampiParent_marshall1(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads_, int nRanks_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads_;
  implP|threads_;
  PUP::detail::TemporaryObjectHolder<int> nRanks_;
  implP|nRanks_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ampiParent(std::move(threads_.t), std::move(nRanks_.t));
}
int CkIndex_ampiParent::_callmarshall_ampiParent_marshall1(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads_, int nRanks_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads_;
  implP|threads_;
  PUP::detail::TemporaryObjectHolder<int> nRanks_;
  implP|nRanks_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ampiParent(std::move(threads_.t), std::move(nRanks_.t));
  return implP.size();
}
void CkIndex_ampiParent::_marshallmessagepup_ampiParent_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_TCharm &threads_, int nRanks_*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_TCharm> threads_;
  implP|threads_;
  PUP::detail::TemporaryObjectHolder<int> nRanks_;
  implP|nRanks_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("threads_");
  implDestP|threads_;
  if (implDestP.hasComments()) implDestP.comment("nRanks_");
  implDestP|nRanks_;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */
void CProxy_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampiParent::reg_ResumeThread_void() {
  int epidx = CkRegisterEp("ResumeThread()",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeThread_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampiParent::_call_ResumeThread_void(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  impl_obj->ResumeThread();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::ResumeThread_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */
void CProxy_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampiParent::reg_Checkpoint_marshall3() {
  int epidx = CkRegisterEp("Checkpoint(int len, const char *dname)",
      reinterpret_cast<CkCallFnPtr>(_call_Checkpoint_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Checkpoint_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Checkpoint_marshall3);

  return epidx;
}

void CkIndex_ampiParent::_call_Checkpoint_marshall3(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_dname, impl_cnt_dname;
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  impl_obj->Checkpoint(std::move(len.t), dname);
}
int CkIndex_ampiParent::_callmarshall_Checkpoint_marshall3(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_dname, impl_cnt_dname;
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  impl_obj->Checkpoint(std::move(len.t), dname);
  return implP.size();
}
void CkIndex_ampiParent::_marshallmessagepup_Checkpoint_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_dname, impl_cnt_dname;
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  if (implDestP.hasComments()) implDestP.comment("len");
  implDestP|len;
  if (implDestP.hasComments()) implDestP.comment("dname");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dname))<impl_cnt_dname;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dname[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::Checkpoint_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
void CProxy_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampiParent::reg_ExchangeProxy_marshall4() {
  int epidx = CkRegisterEp("ExchangeProxy(const CProxy_ampi &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_ExchangeProxy_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ExchangeProxy_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ExchangeProxy_marshall4);

  return epidx;
}

void CkIndex_ampiParent::_call_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ExchangeProxy(std::move(impl_noname_0.t));
}
int CkIndex_ampiParent::_callmarshall_ExchangeProxy_marshall4(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ExchangeProxy(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_ampiParent::_marshallmessagepup_ExchangeProxy_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::ExchangeProxy_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterMigration();
 */
void CProxy_ampiParent::resumeAfterMigration(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_resumeAfterMigration_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampiParent::reg_resumeAfterMigration_void() {
  int epidx = CkRegisterEp("resumeAfterMigration()",
      reinterpret_cast<CkCallFnPtr>(_call_resumeAfterMigration_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampiParent::_call_resumeAfterMigration_void(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent*>(impl_obj_void);
  impl_obj->resumeAfterMigration();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::resumeAfterMigration_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ampiParent::reg_ampiParent_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampiParent(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ampiParent_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampiParent::_call_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<ampiParent> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */
void CProxySection_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */
void CProxySection_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
void CProxySection_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterMigration();
 */
void CProxySection_ampiParent::resumeAfterMigration(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_resumeAfterMigration_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampiParent::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: ampiParent(const CProxy_TCharm &threads_, int nRanks_);
  idx_ampiParent_marshall1();

  // REG: void ResumeThread();
  idx_ResumeThread_void();

  // REG: void Checkpoint(int len, const char *dname);
  idx_Checkpoint_marshall3();

  // REG: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
  idx_ExchangeProxy_marshall4();

  // REG: void resumeAfterMigration();
  idx_resumeAfterMigration_void();

  // REG: ampiParent(CkMigrateMessage* impl_msg);
  idx_ampiParent_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampiParent_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array ampi: ArrayElement{
ampi();
ampi(const CkArrayID &parent_, const ampiCommStruct &s);
void allInitDone();
void setInitDoneFlag();
void unblock();
void injectMsg(int size, const char *buf);
void genericSync(AmpiMsg* impl_msg);
void generic(AmpiMsg* impl_msg);
void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
void completedSend(int sreqIdx);
void completedRdmaSend(CkDataMsg* impl_msg);
void completedRdmaRecv(CkDataMsg* impl_msg);
void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
void barrierResult();
void ibarrierResult();
void bcastResult(AmpiMsg* impl_msg);
void rednResult(CkReductionMsg* impl_msg);
void irednResult(CkReductionMsg* impl_msg);
threaded void splitPhase1(CkReductionMsg* impl_msg);
threaded void splitPhaseInter(CkReductionMsg* impl_msg);
threaded void commCreatePhase1(int nextComm, int commType);
void registrationFinish();
threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
void setRemoteProxy(const CProxy_ampi &rproxy);
sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
sync void winRemoteUnlock(int winIndex, int requestRank);
AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
ampi(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampi::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ampi::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_ampi::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_ampi::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_ampi::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_ampi::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_ampi::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */
void CProxyElement_ampi::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampi::idx_ampi_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
void CProxyElement_ampi::insert(const CkArrayID &parent_, const ampiCommStruct &s, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampi::idx_ampi_marshall2(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */
void CProxyElement_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_allInitDone_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->allInitDone();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */
void CProxyElement_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */
void CProxyElement_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void injectMsg(int size, const char *buf);
 */
void CProxyElement_ampi::injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int size, const char *buf
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_buf, impl_cnt_buf;
  impl_off_buf=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_buf=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_buf,buf,impl_cnt_buf);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_injectMsg_marshall6(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericSync(AmpiMsg* impl_msg);
 */
void CProxyElement_ampi::genericSync(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_genericSync_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */
void CProxyElement_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
void CProxyElement_ampi::genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_buf.cnt=sizeof(char)*(size);
  ncpyBuffer_buf.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_P2P_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_genericRdma_marshall9(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedSend(int sreqIdx);
 */
void CProxyElement_ampi::completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int sreqIdx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sreqIdx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sreqIdx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedSend_marshall10(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
void CProxyElement_ampi::completedRdmaSend(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedRdmaSend_CkDataMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
void CProxyElement_ampi::completedRdmaRecv(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedRdmaRecv_CkDataMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
void CProxyElement_ampi::requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Request &req, const CkNcpyBuffer &targetInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_requestPut_marshall13(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */
void CProxyElement_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_barrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->barrierResult();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */
void CProxyElement_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_ibarrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ibarrierResult();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastResult(AmpiMsg* impl_msg);
 */
void CProxyElement_ampi::bcastResult(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_bcastResult_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */
void CProxyElement_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */
void CProxyElement_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
void CProxyElement_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
void CProxyElement_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(int nextComm, int commType);
 */
void CProxyElement_ampi::commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nextComm, int commType
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nextComm;
    implP|commType;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nextComm;
    implP|commType;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall21(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_commCreatePhase1_marshall21(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int nextComm, int commType*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nextComm;
  implP|nextComm;
  PUP::detail::TemporaryObjectHolder<int> commType;
  implP|commType;
  impl_obj->commCreatePhase1(std::move(nextComm.t), std::move(commType.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registrationFinish();
 */
void CProxyElement_ampi::registrationFinish(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_registrationFinish_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
void CProxyElement_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall23(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_intercommCreatePhase1_marshall23(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextInterComm;
  implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhase1(std::move(nextInterComm.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
void CProxyElement_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall24(),0+CK_MSG_EXPEDITED);
}
void CkIndex_ampi::_call_redn_wrapper_intercommMergePhase1_marshall24(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextIntraComm;
  implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommMergePhase1(std::move(nextIntraComm.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
void CProxyElement_ampi::exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1, const CProxy_ampi &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitLocal_marshall25(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
void CProxyElement_ampi::exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_3, const CProxy_ampi &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitRemote_marshall26(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
void CProxyElement_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall27(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
void CProxyElement_ampi::winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  impl_off_orgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_orgaddr=sizeof(char)*(orgtotalsize));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_orgaddr,orgaddr,impl_cnt_orgaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemotePut_marshall28());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
void CProxyElement_ampi::winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_orgaddr.cnt=sizeof(char)*(orgtotalsize);
  ncpyBuffer_orgaddr.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_P2P_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemotePut_marshall29());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
AmpiMsg* CProxyElement_ampi::winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteGet_marshall30());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
void CProxyElement_ampi::winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  impl_off_orgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_orgaddr=sizeof(char)*(orgtotalsize));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_orgaddr,orgaddr,impl_cnt_orgaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteAccumulate_marshall31());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
void CProxyElement_ampi::winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_orgaddr.cnt=sizeof(char)*(orgtotalsize);
  ncpyBuffer_orgaddr.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_P2P_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteAccumulate_marshall32());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
AmpiMsg* CProxyElement_ampi::winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  impl_off_orgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_orgaddr=sizeof(char)*(orgtotalsize));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)op;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_orgaddr,orgaddr,impl_cnt_orgaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteGetAccumulate_marshall33());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */
AmpiMsg* CProxyElement_ampi::winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_orgaddr.cnt=sizeof(char)*(orgtotalsize);
  ncpyBuffer_orgaddr.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)impl_noname_5;
    implP|winIndex;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_orgaddr;
    implP|orgtotalsize;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Op>::type>::type &)impl_noname_5;
    implP|winIndex;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_P2P_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteGetAccumulate_marshall34());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */
AmpiMsg* CProxyElement_ampi::winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sorgaddr, impl_cnt_sorgaddr;
  impl_off_sorgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_sorgaddr=sizeof(char)*(size));
  int impl_off_compaddr, impl_cnt_compaddr;
  impl_off_compaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_compaddr=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|impl_off_sorgaddr;
    implP|impl_cnt_sorgaddr;
    implP|impl_off_compaddr;
    implP|impl_cnt_compaddr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)type;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|impl_off_sorgaddr;
    implP|impl_cnt_sorgaddr;
    implP|impl_off_compaddr;
    implP|impl_cnt_compaddr;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)type;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sorgaddr,sorgaddr,impl_cnt_sorgaddr);
  memcpy(impl_buf+impl_off_compaddr,compaddr,impl_cnt_compaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteCompareAndSwap_marshall35());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */
void CProxyElement_ampi::winRemoteLock(int lock_type, int winIndex, int requestRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int lock_type, int winIndex, int requestRank
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|lock_type;
    implP|winIndex;
    implP|requestRank;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|lock_type;
    implP|winIndex;
    implP|requestRank;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteLock_marshall36());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */
void CProxyElement_ampi::winRemoteUnlock(int winIndex, int requestRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int winIndex, int requestRank
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|winIndex;
    implP|requestRank;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|winIndex;
    implP|requestRank;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteUnlock_marshall37());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
CkFutureID  CProxyElement_ampi::winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)orgdisp;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)orgdisp;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Aint>::type>::type &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Datatype>::type>::type &)targtype;
    implP|winIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  CkFutureID f=CkCreateAttachedFutureSend(impl_amsg,CkIndex_ampi::idx_winRemoteIget_marshall38(),ckGetArrayID(),ckGetIndex(),&CProxyElement_ArrayBase::ckSendWrapper);
  return f;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */
CkArrayID CProxy_ampi::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_void(), opts);
  return gId;
}
void CProxy_ampi::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_ampi::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_void(), opts);
  return gId;
}
void CProxy_ampi::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_ampi::reg_ampi_void() {
  int epidx = CkRegisterEp("ampi()",
      reinterpret_cast<CkCallFnPtr>(_call_ampi_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampi::_call_ampi_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  new (impl_obj_void) ampi();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
CkArrayID CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_marshall2(), opts);
  return gId;
}
void CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_marshall2(), opts);
  return gId;
}
void CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ampiCommStruct>::type>::type &)s;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_ampi::reg_ampi_marshall2() {
  int epidx = CkRegisterEp("ampi(const CkArrayID &parent_, const ampiCommStruct &s)",
      reinterpret_cast<CkCallFnPtr>(_call_ampi_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ampi_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ampi_marshall2);

  return epidx;
}

void CkIndex_ampi::_call_ampi_marshall2(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> parent_;
  implP|parent_;
  PUP::detail::TemporaryObjectHolder<ampiCommStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ampi(std::move(parent_.t), std::move(s.t));
}
int CkIndex_ampi::_callmarshall_ampi_marshall2(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> parent_;
  implP|parent_;
  PUP::detail::TemporaryObjectHolder<ampiCommStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ampi(std::move(parent_.t), std::move(s.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_ampi_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> parent_;
  implP|parent_;
  PUP::detail::TemporaryObjectHolder<ampiCommStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("parent_");
  implDestP|parent_;
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */
void CProxy_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_allInitDone_void() {
  int epidx = CkRegisterEp("allInitDone()",
      reinterpret_cast<CkCallFnPtr>(_call_allInitDone_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_allInitDone_void() {
  return CkRegisterEp("redn_wrapper_allInitDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_allInitDone_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_allInitDone_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->allInitDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::allInitDone_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */
void CProxy_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_setInitDoneFlag_void() {
  int epidx = CkRegisterEp("setInitDoneFlag()",
      reinterpret_cast<CkCallFnPtr>(_call_setInitDoneFlag_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampi::_call_setInitDoneFlag_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->setInitDoneFlag();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::setInitDoneFlag_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */
void CProxy_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_unblock_void() {
  int epidx = CkRegisterEp("unblock()",
      reinterpret_cast<CkCallFnPtr>(_call_unblock_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampi::_call_unblock_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->unblock();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::unblock_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void injectMsg(int size, const char *buf);
 */
void CProxy_ampi::injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int size, const char *buf
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_buf, impl_cnt_buf;
  impl_off_buf=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_buf=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_buf,buf,impl_cnt_buf);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_injectMsg_marshall6(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_injectMsg_marshall6() {
  int epidx = CkRegisterEp("injectMsg(int size, const char *buf)",
      reinterpret_cast<CkCallFnPtr>(_call_injectMsg_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_injectMsg_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_injectMsg_marshall6);

  return epidx;
}

void CkIndex_ampi::_call_injectMsg_marshall6(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const char *buf*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_buf, impl_cnt_buf;
  implP|impl_off_buf;
  implP|impl_cnt_buf;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *buf=(char *)(impl_buf+impl_off_buf);
  impl_obj->injectMsg(std::move(size.t), buf);
}
int CkIndex_ampi::_callmarshall_injectMsg_marshall6(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int size, const char *buf*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_buf, impl_cnt_buf;
  implP|impl_off_buf;
  implP|impl_cnt_buf;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *buf=(char *)(impl_buf+impl_off_buf);
  impl_obj->injectMsg(std::move(size.t), buf);
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_injectMsg_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const char *buf*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_buf, impl_cnt_buf;
  implP|impl_off_buf;
  implP|impl_cnt_buf;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *buf=(char *)(impl_buf+impl_off_buf);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("buf");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*buf))<impl_cnt_buf;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|buf[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ampi::injectMsg_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericSync(AmpiMsg* impl_msg);
 */
void CProxy_ampi::genericSync(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_genericSync_AmpiMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_genericSync_AmpiMsg() {
  int epidx = CkRegisterEp("genericSync(AmpiMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_genericSync_AmpiMsg), CMessage_AmpiMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)AmpiMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_genericSync_AmpiMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->genericSync((AmpiMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */
void CProxy_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_generic_AmpiMsg() {
  int epidx = CkRegisterEp("generic(AmpiMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_generic_AmpiMsg), CMessage_AmpiMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)AmpiMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_generic_AmpiMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->generic((AmpiMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
void CProxy_ampi::genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_buf.cnt=sizeof(char)*(size);
  ncpyBuffer_buf.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_BCAST_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_genericRdma_marshall9(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_genericRdma_marshall9() {
  int epidx = CkRegisterEp("genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank)",
      reinterpret_cast<CkCallFnPtr>(_call_genericRdma_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_genericRdma_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_genericRdma_marshall9);

  return epidx;
}

void CkIndex_ampi::_call_genericRdma_marshall9(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_buf;
  implP|ncpyBuffer_buf;
  char *ncpyBuffer_buf_ptr = (char *) ncpyBuffer_buf.ptr;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CMK_REFNUM_TYPE> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> srcRank;
  implP|srcRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->genericRdma(ncpyBuffer_buf_ptr, std::move(size.t), std::move(seq.t), std::move(tag.t), std::move(srcRank.t));
}
int CkIndex_ampi::_callmarshall_genericRdma_marshall9(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_buf;
  implP|ncpyBuffer_buf;
  char *ncpyBuffer_buf_ptr = (char *) ncpyBuffer_buf.ptr;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CMK_REFNUM_TYPE> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> srcRank;
  implP|srcRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->genericRdma(ncpyBuffer_buf_ptr, std::move(size.t), std::move(seq.t), std::move(tag.t), std::move(srcRank.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_genericRdma_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_buf;
  implP|ncpyBuffer_buf;
  char *ncpyBuffer_buf_ptr = (char *) ncpyBuffer_buf.ptr;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CMK_REFNUM_TYPE> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> srcRank;
  implP|srcRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("buf");
  implDestP|ncpyBuffer_buf;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
  if (implDestP.hasComments()) implDestP.comment("srcRank");
  implDestP|srcRank;
}
PUPable_def(SINGLE_ARG(Closure_ampi::genericRdma_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedSend(int sreqIdx);
 */
void CProxy_ampi::completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int sreqIdx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sreqIdx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sreqIdx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_completedSend_marshall10(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_completedSend_marshall10() {
  int epidx = CkRegisterEp("completedSend(int sreqIdx)",
      reinterpret_cast<CkCallFnPtr>(_call_completedSend_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_completedSend_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_completedSend_marshall10);

  return epidx;
}

void CkIndex_ampi::_call_completedSend_marshall10(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int sreqIdx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sreqIdx;
  implP|sreqIdx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->completedSend(std::move(sreqIdx.t));
}
int CkIndex_ampi::_callmarshall_completedSend_marshall10(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int sreqIdx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sreqIdx;
  implP|sreqIdx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->completedSend(std::move(sreqIdx.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_completedSend_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int sreqIdx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sreqIdx;
  implP|sreqIdx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("sreqIdx");
  implDestP|sreqIdx;
}
PUPable_def(SINGLE_ARG(Closure_ampi::completedSend_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
void CProxy_ampi::completedRdmaSend(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_completedRdmaSend_CkDataMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_completedRdmaSend_CkDataMsg() {
  int epidx = CkRegisterEp("completedRdmaSend(CkDataMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_completedRdmaSend_CkDataMsg), CMessage_CkDataMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkDataMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_completedRdmaSend_CkDataMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->completedRdmaSend((CkDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
void CProxy_ampi::completedRdmaRecv(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_completedRdmaRecv_CkDataMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_completedRdmaRecv_CkDataMsg() {
  int epidx = CkRegisterEp("completedRdmaRecv(CkDataMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_completedRdmaRecv_CkDataMsg), CMessage_CkDataMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkDataMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_completedRdmaRecv_CkDataMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->completedRdmaRecv((CkDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
void CProxy_ampi::requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Request &req, const CkNcpyBuffer &targetInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_requestPut_marshall13(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_requestPut_marshall13() {
  int epidx = CkRegisterEp("requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo)",
      reinterpret_cast<CkCallFnPtr>(_call_requestPut_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestPut_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestPut_marshall13);

  return epidx;
}

void CkIndex_ampi::_call_requestPut_marshall13(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Request &req, const CkNcpyBuffer &targetInfo*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Request> req;
  implP|req;
  PUP::detail::TemporaryObjectHolder<CkNcpyBuffer> targetInfo;
  implP|targetInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestPut(std::move(req.t), std::move(targetInfo.t));
}
int CkIndex_ampi::_callmarshall_requestPut_marshall13(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MPI_Request &req, const CkNcpyBuffer &targetInfo*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Request> req;
  implP|req;
  PUP::detail::TemporaryObjectHolder<CkNcpyBuffer> targetInfo;
  implP|targetInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestPut(std::move(req.t), std::move(targetInfo.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_requestPut_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Request &req, const CkNcpyBuffer &targetInfo*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Request> req;
  implP|req;
  PUP::detail::TemporaryObjectHolder<CkNcpyBuffer> targetInfo;
  implP|targetInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("req");
  implDestP|req;
  if (implDestP.hasComments()) implDestP.comment("targetInfo");
  implDestP|targetInfo;
}
PUPable_def(SINGLE_ARG(Closure_ampi::requestPut_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */
void CProxy_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_barrierResult_void() {
  int epidx = CkRegisterEp("barrierResult()",
      reinterpret_cast<CkCallFnPtr>(_call_barrierResult_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_barrierResult_void() {
  return CkRegisterEp("redn_wrapper_barrierResult(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_barrierResult_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_barrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->barrierResult();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::barrierResult_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */
void CProxy_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_ibarrierResult_void() {
  int epidx = CkRegisterEp("ibarrierResult()",
      reinterpret_cast<CkCallFnPtr>(_call_ibarrierResult_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_ibarrierResult_void() {
  return CkRegisterEp("redn_wrapper_ibarrierResult(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_ibarrierResult_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_ibarrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->ibarrierResult();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::ibarrierResult_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastResult(AmpiMsg* impl_msg);
 */
void CProxy_ampi::bcastResult(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_bcastResult_AmpiMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_bcastResult_AmpiMsg() {
  int epidx = CkRegisterEp("bcastResult(AmpiMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_bcastResult_AmpiMsg), CMessage_AmpiMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)AmpiMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_bcastResult_AmpiMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->bcastResult((AmpiMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */
void CProxy_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_rednResult_CkReductionMsg() {
  int epidx = CkRegisterEp("rednResult(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_rednResult_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->rednResult((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */
void CProxy_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_irednResult_CkReductionMsg() {
  int epidx = CkRegisterEp("irednResult(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_irednResult_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->irednResult((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
void CProxy_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_splitPhase1_CkReductionMsg() {
  int epidx = CkRegisterEp("splitPhase1(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_splitPhase1_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_splitPhase1_CkReductionMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ampi::_callthr_splitPhase1_CkReductionMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ampi *impl_obj = static_cast<ampi *>(impl_obj_void);
  delete impl_arg;
  impl_obj->splitPhase1((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
void CProxy_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_splitPhaseInter_CkReductionMsg() {
  int epidx = CkRegisterEp("splitPhaseInter(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_splitPhaseInter_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ampi::_call_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_splitPhaseInter_CkReductionMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ampi::_callthr_splitPhaseInter_CkReductionMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ampi *impl_obj = static_cast<ampi *>(impl_obj_void);
  delete impl_arg;
  impl_obj->splitPhaseInter((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(int nextComm, int commType);
 */
void CProxy_ampi::commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nextComm, int commType
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nextComm;
    implP|commType;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nextComm;
    implP|commType;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall21(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_commCreatePhase1_marshall21() {
  int epidx = CkRegisterEp("commCreatePhase1(int nextComm, int commType)",
      reinterpret_cast<CkCallFnPtr>(_call_commCreatePhase1_marshall21), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_commCreatePhase1_marshall21);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_commCreatePhase1_marshall21() {
  return CkRegisterEp("redn_wrapper_commCreatePhase1(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_commCreatePhase1_marshall21), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_commCreatePhase1_marshall21(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_commCreatePhase1_marshall21, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ampi::_callthr_commCreatePhase1_marshall21(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ampi *impl_obj = static_cast<ampi *>(impl_obj_void);
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nextComm, int commType*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nextComm;
  implP|nextComm;
  PUP::detail::TemporaryObjectHolder<int> commType;
  implP|commType;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->commCreatePhase1(std::move(nextComm.t), std::move(commType.t));
  delete impl_msg_typed;
}
void CkIndex_ampi::_marshallmessagepup_commCreatePhase1_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nextComm, int commType*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nextComm;
  implP|nextComm;
  PUP::detail::TemporaryObjectHolder<int> commType;
  implP|commType;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextComm");
  implDestP|nextComm;
  if (implDestP.hasComments()) implDestP.comment("commType");
  implDestP|commType;
}
PUPable_def(SINGLE_ARG(Closure_ampi::commCreatePhase1_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registrationFinish();
 */
void CProxy_ampi::registrationFinish(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_registrationFinish_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_registrationFinish_void() {
  int epidx = CkRegisterEp("registrationFinish()",
      reinterpret_cast<CkCallFnPtr>(_call_registrationFinish_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampi::_call_registrationFinish_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  impl_obj->registrationFinish();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ampi::registrationFinish_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
void CProxy_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall23(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_intercommCreatePhase1_marshall23() {
  int epidx = CkRegisterEp("intercommCreatePhase1(const MPI_Comm &nextInterComm)",
      reinterpret_cast<CkCallFnPtr>(_call_intercommCreatePhase1_marshall23), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_intercommCreatePhase1_marshall23);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_intercommCreatePhase1_marshall23() {
  return CkRegisterEp("redn_wrapper_intercommCreatePhase1(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_intercommCreatePhase1_marshall23), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_intercommCreatePhase1_marshall23(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_intercommCreatePhase1_marshall23, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ampi::_callthr_intercommCreatePhase1_marshall23(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ampi *impl_obj = static_cast<ampi *>(impl_obj_void);
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextInterComm;
  implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhase1(std::move(nextInterComm.t));
  delete impl_msg_typed;
}
void CkIndex_ampi::_marshallmessagepup_intercommCreatePhase1_marshall23(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextInterComm;
  implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextInterComm");
  implDestP|nextInterComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::intercommCreatePhase1_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
void CProxy_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall24(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_intercommMergePhase1_marshall24() {
  int epidx = CkRegisterEp("intercommMergePhase1(const MPI_Comm &nextIntraComm)",
      reinterpret_cast<CkCallFnPtr>(_call_intercommMergePhase1_marshall24), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_intercommMergePhase1_marshall24);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_ampi::reg_redn_wrapper_intercommMergePhase1_marshall24() {
  return CkRegisterEp("redn_wrapper_intercommMergePhase1(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_intercommMergePhase1_marshall24), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_ampi::_call_intercommMergePhase1_marshall24(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_intercommMergePhase1_marshall24, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ampi::_callthr_intercommMergePhase1_marshall24(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ampi *impl_obj = static_cast<ampi *>(impl_obj_void);
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextIntraComm;
  implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommMergePhase1(std::move(nextIntraComm.t));
  delete impl_msg_typed;
}
void CkIndex_ampi::_marshallmessagepup_intercommMergePhase1_marshall24(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Comm> nextIntraComm;
  implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextIntraComm");
  implDestP|nextIntraComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::intercommMergePhase1_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
void CProxy_ampi::exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1, const CProxy_ampi &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitLocal_marshall25(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_exchangeProxyForSplitLocal_marshall25() {
  int epidx = CkRegisterEp("exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_exchangeProxyForSplitLocal_marshall25), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchangeProxyForSplitLocal_marshall25);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchangeProxyForSplitLocal_marshall25);

  return epidx;
}

void CkIndex_ampi::_call_exchangeProxyForSplitLocal_marshall25(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1, const CProxy_ampi &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangeProxyForSplitLocal(std::move(impl_noname_1.t), std::move(impl_noname_2.t));
}
int CkIndex_ampi::_callmarshall_exchangeProxyForSplitLocal_marshall25(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1, const CProxy_ampi &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangeProxyForSplitLocal(std::move(impl_noname_1.t), std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_exchangeProxyForSplitLocal_marshall25(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1, const CProxy_ampi &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_ampi::exchangeProxyForSplitLocal_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
void CProxy_ampi::exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_3, const CProxy_ampi &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitRemote_marshall26(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_exchangeProxyForSplitRemote_marshall26() {
  int epidx = CkRegisterEp("exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_exchangeProxyForSplitRemote_marshall26), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchangeProxyForSplitRemote_marshall26);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchangeProxyForSplitRemote_marshall26);

  return epidx;
}

void CkIndex_ampi::_call_exchangeProxyForSplitRemote_marshall26(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3, const CProxy_ampi &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangeProxyForSplitRemote(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
}
int CkIndex_ampi::_callmarshall_exchangeProxyForSplitRemote_marshall26(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3, const CProxy_ampi &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangeProxyForSplitRemote(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_exchangeProxyForSplitRemote_marshall26(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3, const CProxy_ampi &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_ampi::exchangeProxyForSplitRemote_26_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
void CProxy_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall27(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_ampi::reg_setRemoteProxy_marshall27() {
  int epidx = CkRegisterEp("setRemoteProxy(const CProxy_ampi &rproxy)",
      reinterpret_cast<CkCallFnPtr>(_call_setRemoteProxy_marshall27), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setRemoteProxy_marshall27);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setRemoteProxy_marshall27);

  return epidx;
}

void CkIndex_ampi::_call_setRemoteProxy_marshall27(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> rproxy;
  implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setRemoteProxy(std::move(rproxy.t));
}
int CkIndex_ampi::_callmarshall_setRemoteProxy_marshall27(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> rproxy;
  implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setRemoteProxy(std::move(rproxy.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_setRemoteProxy_marshall27(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_ampi> rproxy;
  implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("rproxy");
  implDestP|rproxy;
}
PUPable_def(SINGLE_ARG(Closure_ampi::setRemoteProxy_27_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemotePut_marshall28() {
  int epidx = CkRegisterEp("winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemotePut_marshall28), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemotePut_marshall28);

  return epidx;
}

void CkIndex_ampi::_call_winRemotePut_marshall28(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemotePut(std::move(orgtotalsize.t), orgaddr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemotePut_marshall28(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*orgaddr))<impl_cnt_orgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|orgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemotePut_28_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemotePut_marshall29() {
  int epidx = CkRegisterEp("winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemotePut_marshall29), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemotePut_marshall29);

  return epidx;
}

void CkIndex_ampi::_call_winRemotePut_marshall29(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemotePut(std::move(orgtotalsize.t), ncpyBuffer_orgaddr_ptr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemotePut_marshall29(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP|ncpyBuffer_orgaddr;
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemotePut_29_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteGet_marshall30() {
  int epidx = CkRegisterEp("winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteGet_marshall30), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteGet_marshall30);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteGet_marshall30(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteGet(std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteGet_marshall30(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteGet_30_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteAccumulate_marshall31() {
  int epidx = CkRegisterEp("winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteAccumulate_marshall31), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteAccumulate_marshall31);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteAccumulate_marshall31(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteAccumulate(std::move(orgtotalsize.t), orgaddr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(op.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteAccumulate_marshall31(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*orgaddr))<impl_cnt_orgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|orgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("op");
  implDestP|op;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteAccumulate_31_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteAccumulate_marshall32() {
  int epidx = CkRegisterEp("winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteAccumulate_marshall32), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteAccumulate_marshall32);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteAccumulate_marshall32(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteAccumulate(std::move(orgtotalsize.t), ncpyBuffer_orgaddr_ptr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(op.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteAccumulate_marshall32(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP|ncpyBuffer_orgaddr;
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("op");
  implDestP|op;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteAccumulate_32_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteGetAccumulate_marshall33() {
  int epidx = CkRegisterEp("winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteGetAccumulate_marshall33), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteGetAccumulate_marshall33);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteGetAccumulate_marshall33(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  void *impl_retMsg=(void *)   impl_obj->winRemoteGetAccumulate(std::move(orgtotalsize.t), orgaddr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(op.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteGetAccumulate_marshall33(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> op;
  implP|op;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*orgaddr))<impl_cnt_orgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|orgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("op");
  implDestP|op;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteGetAccumulate_33_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteGetAccumulate_marshall34() {
  int epidx = CkRegisterEp("winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteGetAccumulate_marshall34), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteGetAccumulate_marshall34);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteGetAccumulate_marshall34(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteGetAccumulate(std::move(orgtotalsize.t), ncpyBuffer_orgaddr_ptr, std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(impl_noname_5.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteGetAccumulate_marshall34(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex*/
  PUP::fromMem implP(impl_buf);
  char *impl_buf_begin = impl_buf;
  int impl_num_rdma_fields; implP|impl_num_rdma_fields;
  int impl_num_root_node; implP|impl_num_root_node;
  CkNcpyBuffer ncpyBuffer_orgaddr;
  implP|ncpyBuffer_orgaddr;
  char *ncpyBuffer_orgaddr_ptr = (char *) ncpyBuffer_orgaddr.ptr;
  PUP::detail::TemporaryObjectHolder<int> orgtotalsize;
  implP|orgtotalsize;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<MPI_Op> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP|ncpyBuffer_orgaddr;
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteGetAccumulate_34_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteCompareAndSwap_marshall35() {
  int epidx = CkRegisterEp("winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteCompareAndSwap_marshall35), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteCompareAndSwap_marshall35);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteCompareAndSwap_marshall35(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr;
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr;
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> type;
  implP|type;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *sorgaddr=(char *)(impl_buf+impl_off_sorgaddr);
  char *compaddr=(char *)(impl_buf+impl_off_compaddr);
  void *impl_retMsg=(void *)   impl_obj->winRemoteCompareAndSwap(std::move(size.t), sorgaddr, compaddr, std::move(type.t), std::move(targdisp.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteCompareAndSwap_marshall35(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr;
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr;
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> type;
  implP|type;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *sorgaddr=(char *)(impl_buf+impl_off_sorgaddr);
  char *compaddr=(char *)(impl_buf+impl_off_compaddr);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("sorgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*sorgaddr))<impl_cnt_sorgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|sorgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("compaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*compaddr))<impl_cnt_compaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|compaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("type");
  implDestP|type;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteCompareAndSwap_35_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteLock_marshall36() {
  int epidx = CkRegisterEp("winRemoteLock(int lock_type, int winIndex, int requestRank)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteLock_marshall36), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteLock_marshall36);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteLock_marshall36(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lock_type, int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lock_type;
  implP|lock_type;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  PUP::detail::TemporaryObjectHolder<int> requestRank;
  implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteLock(std::move(lock_type.t), std::move(winIndex.t), std::move(requestRank.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteLock_marshall36(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lock_type, int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lock_type;
  implP|lock_type;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  PUP::detail::TemporaryObjectHolder<int> requestRank;
  implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("lock_type");
  implDestP|lock_type;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
  if (implDestP.hasComments()) implDestP.comment("requestRank");
  implDestP|requestRank;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteLock_36_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteUnlock_marshall37() {
  int epidx = CkRegisterEp("winRemoteUnlock(int winIndex, int requestRank)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteUnlock_marshall37), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteUnlock_marshall37);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteUnlock_marshall37(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  PUP::detail::TemporaryObjectHolder<int> requestRank;
  implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteUnlock(std::move(winIndex.t), std::move(requestRank.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ampi::_marshallmessagepup_winRemoteUnlock_marshall37(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  PUP::detail::TemporaryObjectHolder<int> requestRank;
  implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
  if (implDestP.hasComments()) implDestP.comment("requestRank");
  implDestP|requestRank;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteUnlock_37_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function
int CkIndex_ampi::reg_winRemoteIget_marshall38() {
  int epidx = CkRegisterEp("winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      reinterpret_cast<CkCallFnPtr>(_call_winRemoteIget_marshall38), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_winRemoteIget_marshall38);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteIget_marshall38);

  return epidx;
}

void CkIndex_ampi::_call_winRemoteIget_marshall38(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Aint> orgdisp;
  implP|orgdisp;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteIget(std::move(orgdisp.t), std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(winIndex.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
int CkIndex_ampi::_callmarshall_winRemoteIget_marshall38(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast<ampi*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Aint> orgdisp;
  implP|orgdisp;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteIget(std::move(orgdisp.t), std::move(orgcnt.t), std::move(orgtype.t), std::move(targdisp.t), std::move(targcnt.t), std::move(targtype.t), std::move(winIndex.t));
  return implP.size();
}
void CkIndex_ampi::_marshallmessagepup_winRemoteIget_marshall38(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MPI_Aint> orgdisp;
  implP|orgdisp;
  PUP::detail::TemporaryObjectHolder<int> orgcnt;
  implP|orgcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> orgtype;
  implP|orgtype;
  PUP::detail::TemporaryObjectHolder<MPI_Aint> targdisp;
  implP|targdisp;
  PUP::detail::TemporaryObjectHolder<int> targcnt;
  implP|targcnt;
  PUP::detail::TemporaryObjectHolder<MPI_Datatype> targtype;
  implP|targtype;
  PUP::detail::TemporaryObjectHolder<int> winIndex;
  implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgdisp");
  implDestP|orgdisp;
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteIget_38_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ampi::reg_ampi_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampi(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ampi_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ampi::_call_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<ampi> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */
void CProxySection_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */
void CProxySection_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */
void CProxySection_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void injectMsg(int size, const char *buf);
 */
void CProxySection_ampi::injectMsg(int size, const char *buf, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int size, const char *buf
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_buf, impl_cnt_buf;
  impl_off_buf=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_buf=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|impl_off_buf;
    implP|impl_cnt_buf;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_buf,buf,impl_cnt_buf);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_injectMsg_marshall6(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericSync(AmpiMsg* impl_msg);
 */
void CProxySection_ampi::genericSync(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_genericSync_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */
void CProxySection_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
 */
void CProxySection_ampi::genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank
  int impl_off=0;
  int impl_num_rdma_fields = 1;
  int impl_num_root_node = CkMyNode();
  ncpyBuffer_buf.cnt=sizeof(char)*(size);
  ncpyBuffer_buf.registerMem();
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_rdma_fields;
    implP|impl_num_root_node;
    implP|ncpyBuffer_buf;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CMK_REFNUM_TYPE>::type>::type &)seq;
    implP|tag;
    implP|srcRank;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_BCAST_SEND_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_genericRdma_marshall9(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedSend(int sreqIdx);
 */
void CProxySection_ampi::completedSend(int sreqIdx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int sreqIdx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sreqIdx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sreqIdx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedSend_marshall10(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaSend(CkDataMsg* impl_msg);
 */
void CProxySection_ampi::completedRdmaSend(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedRdmaSend_CkDataMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completedRdmaRecv(CkDataMsg* impl_msg);
 */
void CProxySection_ampi::completedRdmaRecv(CkDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_completedRdmaRecv_CkDataMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
 */
void CProxySection_ampi::requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Request &req, const CkNcpyBuffer &targetInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Request>::type>::type &)req;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkNcpyBuffer>::type>::type &)targetInfo;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_requestPut_marshall13(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */
void CProxySection_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */
void CProxySection_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastResult(AmpiMsg* impl_msg);
 */
void CProxySection_ampi::bcastResult(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_bcastResult_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */
void CProxySection_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */
void CProxySection_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
void CProxySection_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
void CProxySection_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(int nextComm, int commType);
 */
void CProxySection_ampi::commCreatePhase1(int nextComm, int commType, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nextComm, int commType
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nextComm;
    implP|commType;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nextComm;
    implP|commType;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall21(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registrationFinish();
 */
void CProxySection_ampi::registrationFinish(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_registrationFinish_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
void CProxySection_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall23(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
void CProxySection_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MPI_Comm>::type>::type &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall24(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
 */
void CProxySection_ampi::exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1, const CProxy_ampi &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_2;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitLocal_marshall25(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
 */
void CProxySection_ampi::exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_3, const CProxy_ampi &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)impl_noname_4;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_exchangeProxyForSplitRemote_marshall26(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
void CProxySection_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_ampi>::type>::type &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall27(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampi::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: ampi();
  idx_ampi_void();
  CkRegisterDefaultCtor(__idx, idx_ampi_void());

  // REG: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
  idx_ampi_marshall2();

  // REG: void allInitDone();
  idx_allInitDone_void();
  idx_redn_wrapper_allInitDone_void();

  // REG: void setInitDoneFlag();
  idx_setInitDoneFlag_void();

  // REG: void unblock();
  idx_unblock_void();

  // REG: void injectMsg(int size, const char *buf);
  idx_injectMsg_marshall6();

  // REG: void genericSync(AmpiMsg* impl_msg);
  idx_genericSync_AmpiMsg();

  // REG: void generic(AmpiMsg* impl_msg);
  idx_generic_AmpiMsg();

  // REG: void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
  idx_genericRdma_marshall9();

  // REG: void completedSend(int sreqIdx);
  idx_completedSend_marshall10();

  // REG: void completedRdmaSend(CkDataMsg* impl_msg);
  idx_completedRdmaSend_CkDataMsg();

  // REG: void completedRdmaRecv(CkDataMsg* impl_msg);
  idx_completedRdmaRecv_CkDataMsg();

  // REG: void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
  idx_requestPut_marshall13();

  // REG: void barrierResult();
  idx_barrierResult_void();
  idx_redn_wrapper_barrierResult_void();

  // REG: void ibarrierResult();
  idx_ibarrierResult_void();
  idx_redn_wrapper_ibarrierResult_void();

  // REG: void bcastResult(AmpiMsg* impl_msg);
  idx_bcastResult_AmpiMsg();

  // REG: void rednResult(CkReductionMsg* impl_msg);
  idx_rednResult_CkReductionMsg();

  // REG: void irednResult(CkReductionMsg* impl_msg);
  idx_irednResult_CkReductionMsg();

  // REG: threaded void splitPhase1(CkReductionMsg* impl_msg);
  idx_splitPhase1_CkReductionMsg();

  // REG: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
  idx_splitPhaseInter_CkReductionMsg();

  // REG: threaded void commCreatePhase1(int nextComm, int commType);
  idx_commCreatePhase1_marshall21();
  idx_redn_wrapper_commCreatePhase1_marshall21();

  // REG: void registrationFinish();
  idx_registrationFinish_void();

  // REG: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
  idx_intercommCreatePhase1_marshall23();
  idx_redn_wrapper_intercommCreatePhase1_marshall23();

  // REG: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
  idx_intercommMergePhase1_marshall24();
  idx_redn_wrapper_intercommMergePhase1_marshall24();

  // REG: void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
  idx_exchangeProxyForSplitLocal_marshall25();

  // REG: void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
  idx_exchangeProxyForSplitRemote_marshall26();

  // REG: void setRemoteProxy(const CProxy_ampi &rproxy);
  idx_setRemoteProxy_marshall27();

  // REG: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemotePut_marshall28();

  // REG: sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemotePut_marshall29();

  // REG: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemoteGet_marshall30();

  // REG: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
  idx_winRemoteAccumulate_marshall31();

  // REG: sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
  idx_winRemoteAccumulate_marshall32();

  // REG: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
  idx_winRemoteGetAccumulate_marshall33();

  // REG: sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
  idx_winRemoteGetAccumulate_marshall34();

  // REG: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
  idx_winRemoteCompareAndSwap_marshall35();

  // REG: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
  idx_winRemoteLock_marshall36();

  // REG: sync void winRemoteUnlock(int winIndex, int requestRank);
  idx_winRemoteUnlock_marshall37();

  // REG: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemoteIget_marshall38();

  // REG: ampi(CkMigrateMessage* impl_msg);
  idx_ampi_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampi_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerampi(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message AmpiMsg{
char data[];
}
;
*/
CMessage_AmpiMsg::__register("AmpiMsg", sizeof(AmpiMsg),(CkPackFnPtr) AmpiMsg::pack,(CkUnpackFnPtr) AmpiMsg::unpack);

  _registerInitCall(ampiNodeInit,1);

  _registerInitCall(ampiProcInit,0);

  CkRegisterReadonly("ampiPeMgrProxy","CProxy_ampiPeMgr",sizeof(ampiPeMgrProxy),(void *) &ampiPeMgrProxy,__xlater_roPup_ampiPeMgrProxy);

/* REG: group ampiPeMgr: IrrGroup{
ampiPeMgr();
ampiPeMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ampiPeMgr::__register("ampiPeMgr", sizeof(ampiPeMgr));

/* REG: array ampiParent: ArrayElement{
ampiParent(const CProxy_TCharm &threads_, int nRanks_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
void resumeAfterMigration();
ampiParent(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ampiParent::__register("ampiParent", sizeof(ampiParent));

/* REG: array ampi: ArrayElement{
ampi();
ampi(const CkArrayID &parent_, const ampiCommStruct &s);
void allInitDone();
void setInitDoneFlag();
void unblock();
void injectMsg(int size, const char *buf);
void genericSync(AmpiMsg* impl_msg);
void generic(AmpiMsg* impl_msg);
void genericRdma(CkNcpyBuffer ncpyBuffer_buf, int size, const CMK_REFNUM_TYPE &seq, int tag, int srcRank);
void completedSend(int sreqIdx);
void completedRdmaSend(CkDataMsg* impl_msg);
void completedRdmaRecv(CkDataMsg* impl_msg);
void requestPut(const MPI_Request &req, const CkNcpyBuffer &targetInfo);
void barrierResult();
void ibarrierResult();
void bcastResult(AmpiMsg* impl_msg);
void rednResult(CkReductionMsg* impl_msg);
void irednResult(CkReductionMsg* impl_msg);
threaded void splitPhase1(CkReductionMsg* impl_msg);
threaded void splitPhaseInter(CkReductionMsg* impl_msg);
threaded void commCreatePhase1(int nextComm, int commType);
void registrationFinish();
threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
void exchangeProxyForSplitLocal(int impl_noname_1, const CProxy_ampi &impl_noname_2);
void exchangeProxyForSplitRemote(int impl_noname_3, const CProxy_ampi &impl_noname_4);
void setRemoteProxy(const CProxy_ampi &rproxy);
sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemotePut(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteGetAccumulate(int orgtotalsize, CkNcpyBuffer ncpyBuffer_orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &impl_noname_5, int winIndex);
sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
sync void winRemoteUnlock(int winIndex, int requestRank);
AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
ampi(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ampi::__register("ampi", sizeof(ampi));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampiPeMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ampiPeMgr>(dynamic_cast<ampiPeMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampiParent::virtual_pup(PUP::er &p) {
    recursive_pup<ampiParent>(dynamic_cast<ampiParent*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampi::virtual_pup(PUP::er &p) {
    recursive_pup<ampi>(dynamic_cast<ampi*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
